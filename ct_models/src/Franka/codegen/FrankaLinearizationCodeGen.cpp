/**********************************************************************************************************************
This file is part of the Control Toolbox (https://github.com/ethz-adrl/control-toolbox), copyright by ETH Zurich.
Licensed under the BSD-2 license (see LICENSE file in main directory)
**********************************************************************************************************************/


#include <ct/core/core.h>
#include <ct/optcon/optcon.h>
#include <ct/rbd/rbd.h>

#include <cmath>
#include <memory>

#include <ct/models/Franka/Franka.h>
#include <ct/rbd/systems/FixBaseFDSystem.h>

#include <ct/models/CodegenOutputDirs.h>

const size_t state_dim = ct::rbd::FixBaseFDSystem<ct::rbd::Franka::Dynamics>::STATE_DIM;
const size_t control_dim = ct::rbd::FixBaseFDSystem<ct::rbd::Franka::Dynamics>::CONTROL_DIM;
const size_t njoints = ct::rbd::Franka::Dynamics::NJOINTS;

typedef ct::core::ADCodegenLinearizer<state_dim, control_dim>::ADCGScalar Scalar;
typedef ct::rbd::FixBaseFDSystem<ct::rbd::Franka::tpl::Dynamics<Scalar>> FrankaNonLinearSystem;
typedef ct::core::DerivativesCppadCG<state_dim, control_dim> JacCG;

template <typename SCALAR>
using control_vector_t = typename ct::rbd::Franka::tpl::Dynamics<SCALAR>::control_vector_t;

template <typename SCALAR>
using ExtLinkForces_t = typename ct::rbd::Franka::tpl::Dynamics<SCALAR>::ExtLinkForces_t;

// Computes the torque needed to compensate gravity
template <typename SCALAR>
Eigen::Matrix<SCALAR, control_dim, 1> FrankaInverseDynamics(const Eigen::Matrix<SCALAR, state_dim, 1>& x)
{
    ct::rbd::Franka::tpl::Dynamics<SCALAR> frankaDynamics;
    ct::rbd::JointState<njoints, SCALAR> frankaState(x);
    Eigen::Matrix<SCALAR, njoints, 1> qddTmp = Eigen::Matrix<SCALAR, njoints, 1>::Zero();
    ct::rbd::JointAcceleration<njoints, SCALAR> qdd(qddTmp);             //zero
    ExtLinkForces_t<SCALAR> fext(Eigen::Matrix<SCALAR, 6, 1>::Zero());  //zero
    control_vector_t<SCALAR> y;
    frankaDynamics.FixBaseID(frankaState, qdd, fext, y);
    return y;
}

int main(int argc, char** argv)
{
    std::shared_ptr<FrankaNonLinearSystem > franka(new FrankaNonLinearSystem());
    ct::core::ADCodegenLinearizer<state_dim, control_dim> adLinearizer(franka);
    typename JacCG::FUN_TYPE_CG f = FrankaInverseDynamics<CppAD::AD<CppAD::cg::CG<double>>>;
    JacCG jacCG(f);

    try
    {
        std::cout << "Generating Jacobian of Inverse Dynamics wrt state using reverse mode... " << std::endl;
        jacCG.generateJacobianSource("FrankaInverseDynJacReverse", ct::models::FRANKA_CODEGEN_OUTPUT_DIR,
            ct::core::CODEGEN_TEMPLATE_DIR, "models", "Franka", JacCG::Sparsity::Ones(), true);

        std::cout << "Generating Hessian of Inverse Dynamics wrt state using reverse mode... " << std::endl;
        jacCG.generateHessianSource("FrankaInverseDynHessian", ct::models::FRANKA_CODEGEN_OUTPUT_DIR,
            ct::core::CODEGEN_TEMPLATE_DIR, "models", "Franka", JacCG::HessianSparsity::Ones(), true);

        std::cout << "generating using forward mode" << std::endl;
        adLinearizer.generateCode("FrankaLinearizedForward", ct::models::FRANKA_CODEGEN_OUTPUT_DIR,
            ct::core::CODEGEN_TEMPLATE_DIR, "models", "Franka", false);

        std::cout << "generating using reverse mode" << std::endl;
        adLinearizer.generateCode("FrankaLinearizedReverse", ct::models::FRANKA_CODEGEN_OUTPUT_DIR,
            ct::core::CODEGEN_TEMPLATE_DIR, "models", "Franka", true);

        std::cout << "Generating Jacobian of Inverse Dynamics wrt state using forward mode... " << std::endl;
        jacCG.generateJacobianSource("FrankaInverseDynJacForward", ct::models::FRANKA_CODEGEN_OUTPUT_DIR,
            ct::core::CODEGEN_TEMPLATE_DIR, "models", "Franka", JacCG::Sparsity::Ones(), false);

        std::cout << "... done!" << std::endl;


    } catch (const std::runtime_error& e)
    {
        std::cout << "code generation failed: " << e.what() << std::endl;
    }

    return 0;
}
