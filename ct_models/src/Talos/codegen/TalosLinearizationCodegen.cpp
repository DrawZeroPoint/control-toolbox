/**********************************************************************************************************************
This file is part of the Control Toolbox (https://github.com/ethz-adrl/control-toolbox), copyright by ETH Zurich.
Licensed under the BSD-2 license (see LICENSE file in main directory)
**********************************************************************************************************************/

#include <ct/optcon/optcon.h>
#include <ct/rbd/rbd.h>
#include <ct/models/Talos/Talos.h>
#include <ct/models/CodegenOutputDirs.h>

#include "helperFunctions.h"

// shortcut for the auto-diff codegen scalar
typedef CppAD::AD<CppAD::cg::CG<double>> SCALAR;
typedef typename SCALAR::value_type AD_ValueType;

// a floating base forward-dynamic system templated on scalar type
typedef ct::rbd::FloatingBaseFDSystem<ct::rbd::Talos::tpl::Dynamics<SCALAR>, false> TalosSystemAD;

// extract dimensions
const size_t state_dim = TalosSystemAD::STATE_DIM;
const size_t control_dim = TalosSystemAD::CONTROL_DIM;


void generateInverseDynamics()
{
    typedef ct::core::DerivativesCppadCG<state_dim + 18, control_dim + 6> JacCG;
    typename JacCG::FUN_TYPE_CG f = ct::models::Talos::talosInverseDynamics<SCALAR>;
    JacCG jacCG(f);

    try
    {
        std::cout << "Generating Jacobian of Inverse Dynamics wrt state using forward mode... " << std::endl;
        jacCG.generateJacobianSource("TalosInverseDynJacForward", ct::models::TALOS_CODEGEN_OUTPUT_DIR,
            ct::core::CODEGEN_TEMPLATE_DIR, "models", "Talos", JacCG::Sparsity::Ones(), false);

        std::cout << "Generating Jacobian of Inverse Dynamics wrt state using reverse mode... " << std::endl;
        jacCG.generateJacobianSource("TalosInverseDynJacReverse", ct::models::TALOS_CODEGEN_OUTPUT_DIR,
            ct::core::CODEGEN_TEMPLATE_DIR, "models", "Talos", JacCG::Sparsity::Ones(), true);
    } catch (const std::runtime_error& e)
    {
        std::cout << "inverse dynamics code generation failed: " << e.what() << std::endl;
    }
}

void generateForwardKinematics()
{
    // Here 2 is end-effector number
    typedef ct::core::DerivativesCppadCG<state_dim, 2 * 6> JacCG;
    typename JacCG::FUN_TYPE_CG f = ct::models::Talos::talosForwardKinematics<SCALAR>;
    JacCG jacCG(f);

    try
    {
        std::cout << "Generating Jacobian of Forward Kinematics wrt state using forward mode... " << std::endl;
        jacCG.generateJacobianSource("TalosForwardKinJacForward", ct::models::TALOS_CODEGEN_OUTPUT_DIR,
            ct::core::CODEGEN_TEMPLATE_DIR, "models", "Talos", JacCG::Sparsity::Ones(), false);

        std::cout << "Generating Jacobian of Forward Kinematics wrt state using reverse mode... " << std::endl;
        jacCG.generateJacobianSource("TalosForwardKinJacReverse", ct::models::TALOS_CODEGEN_OUTPUT_DIR,
            ct::core::CODEGEN_TEMPLATE_DIR, "models", "Talos", JacCG::Sparsity::Ones(), true);
    } catch (const std::runtime_error& e)
    {
        std::cout << "forward kinematics code generation failed: " << e.what() << std::endl;
    }
}

void generateForwardZeroForwardDynamics()
{
    typedef ct::core::DerivativesCppadCG<state_dim + control_dim + 1, state_dim> JacCG;
    // Eigen::Matrix<SCALAR, state_dim + control_dim + 1, 1> testInput = Eigen::Matrix<SCALAR, state_dim + control_dim + 1, 1>::Random();
    // auto asd = ct::models::Talos::talosContactModelForwardDynamics<SCALAR>(testInput);
    typename JacCG::FUN_TYPE_CG f = ct::models::Talos::talosContactModelForwardDynamics<SCALAR>;
    JacCG jacCG(f);

    try
    {
        std::cout << "Generating Forward Zero Code... " << std::endl;
        jacCG.generateForwardZeroSource("TalosForwardZero", ct::models::TALOS_CODEGEN_OUTPUT_DIR,
            ct::core::CODEGEN_TEMPLATE_DIR, "models", "Talos", false);
    } catch (const std::runtime_error& e)
    {
        std::cout << "forward zero code generation failed: " << e.what() << std::endl;
    }
}


void generateFDLinearization(int argc, char* argv[])
{
    std::cout << "Generating Jacobian of Forward Dynamics... " << std::endl;

    // a contact model (auto-diff'able)
    typedef ct::rbd::EEContactModel<typename TalosSystemAD::Kinematics> ContactModel;

    std::shared_ptr<TalosSystemAD> adSystem = std::shared_ptr<TalosSystemAD>(new TalosSystemAD);

    // explicitly pass kinematics from the system such that both, contact model and system use
    // the same instance to give the AD codegen the opportunity to fully optimize the code
    std::shared_ptr<ContactModel> contactModel =
        std::shared_ptr<ContactModel>(new ContactModel(SCALAR(5000.0), SCALAR(1000.0), SCALAR(100.0), SCALAR(100.0),
            SCALAR(-0.02), ContactModel::VELOCITY_SMOOTHING::SIGMOID, adSystem->dynamics().kinematicsPtr()));

    bool useContactModel = (argc <= 2 || !(std::string(argv[2]).compare("nocontact") == 0));
    std::cout << std::boolalpha << "using contact model: " << useContactModel << std::endl;

    // asign the contact model
    if (useContactModel)
        adSystem->setContactModel(contactModel);

    // create the codegen linearizer
    ct::core::ADCodegenLinearizer<state_dim, control_dim> adLinearizer(adSystem);

    std::string baseName;
    if (useContactModel)
        baseName = "TalosWithContactModelLinearized";
    else
        baseName = "TalosBareModelLinearized";

    try
    {
        std::cout << "generating code..." << std::endl;
        if (argc > 1 && std::string(argv[1]).compare("reverse") == 0)
        {
            std::cout << "generating using reverse mode" << std::endl;

            adLinearizer.generateCode(baseName + "Reverse", ct::models::TALOS_CODEGEN_OUTPUT_DIR,
                ct::core::CODEGEN_TEMPLATE_DIR, "models", "Talos", true);
        }
        else
        {
            std::cout << "generating using forward mode" << std::endl;

            adLinearizer.generateCode(baseName + "Forward", ct::models::TALOS_CODEGEN_OUTPUT_DIR,
                ct::core::CODEGEN_TEMPLATE_DIR, "models", "Talos", false);
        }

        std::cout << "... done!" << std::endl;
    } catch (const std::runtime_error& e)
    {
        std::cout << "forward dynamics code generation failed: " << e.what() << std::endl;
    }
}


int main(int argc, char* argv[])
{
    generateFDLinearization(argc, argv);
    generateInverseDynamics();
    generateForwardKinematics();
    generateForwardZeroForwardDynamics();
}
