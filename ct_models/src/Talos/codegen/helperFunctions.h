/**********************************************************************************************************************
This file is part of the Control Toolbox (https://github.com/ethz-adrl/control-toolbox), copyright by ETH Zurich.
Licensed under the BSD-2 license (see LICENSE file in main directory)
**********************************************************************************************************************/


#ifndef SRC_TALOS_CODEGEN_HELPERFUNCTIONS_H_
#define SRC_TALOS_CODEGEN_HELPERFUNCTIONS_H_

#include <ct/core/core.h>
#include <ct/rbd/rbd.h>
#include <ct/models/Talos/Talos.h>

namespace ct {
namespace models {
namespace Talos {

// a floating base forward-dynamic system templated on scalar type
typedef ct::rbd::FloatingBaseFDSystem<ct::rbd::Talos::tpl::Dynamics<double>, false> TalosSystem;

template <typename SCALAR>
using ContactModel = ct::rbd::EEContactModel<ct::rbd::Talos::tpl::Kinematics<SCALAR>>;

// extract dimensions
const size_t state_dim = TalosSystem::STATE_DIM;
const size_t control_dim = TalosSystem::CONTROL_DIM;

// shortcut for number of joints
const size_t njoints = TalosSystem::Kinematics::NJOINTS;
const size_t nEE = TalosSystem::Kinematics::NUM_EE;

template <typename SCALAR>
Eigen::Matrix<SCALAR, control_dim + 6, 1> talosInverseDynamics(const Eigen::Matrix<SCALAR, state_dim + 18, 1>& x)
{
    ct::rbd::Talos::tpl::Dynamics<SCALAR> talosDynamics;
    ct::rbd::RBDState<njoints, SCALAR> talosState;

    // we assume x contains: q, q_dot, q_ddot
    talosState.fromStateVectorEulerXyz(x.template topRows<state_dim>());

    ct::rbd::tpl::RigidBodyAcceleration<SCALAR> base_a(x.template segment<6>(state_dim));
    ct::rbd::JointAcceleration<njoints, SCALAR> qdd(x.template bottomRows<njoints>());

    typename ct::rbd::Talos::tpl::Dynamics<SCALAR>::ExtLinkForces_t fext(Eigen::Matrix<SCALAR, 6, 1>::Zero());  //zero

    // output
    ct::core::ControlVector<control_dim, SCALAR> u;
    typename ct::rbd::Talos::tpl::Dynamics<SCALAR>::ForceVector_t base_w;

    talosDynamics.FloatingBaseFullyActuatedID(talosState, base_a, qdd, fext, base_w, u);

    Eigen::Matrix<SCALAR, control_dim + 6, 1> y;
    y << base_w, u;
    return y;
}

template <typename SCALAR>
Eigen::Matrix<SCALAR, nEE * 6, 1> talosForwardKinematics(const Eigen::Matrix<SCALAR, state_dim, 1>& x)
{
    ct::rbd::Talos::tpl::Kinematics<SCALAR> talosKinematics;
    ct::rbd::RBDState<njoints, SCALAR> talosState;
    talosState.fromStateVectorEulerXyz(x.template topRows<state_dim>());

    // output vector: positions and velocities for all endeffectors
    Eigen::Matrix<SCALAR, nEE * 6, 1> y;

    for (size_t i = 0; i < nEE; i++)
    {
        y.template segment<3>(i * 6) =
            talosKinematics.getEEPositionInWorld(i, talosState.basePose(), talosState.jointPositions()).toImplementation();
        y.template segment<3>(i * 6 + 3) = talosKinematics.getEEVelocityInWorld(i, talosState).toImplementation();
    }

    return y;
}

template <typename SCALAR>
Eigen::Matrix<SCALAR, state_dim, 1> talosContactModelForwardDynamics(
    const Eigen::Matrix<SCALAR, state_dim + control_dim + 1, 1>& x)  // state, input, time
{
    ct::rbd::FloatingBaseFDSystem<ct::rbd::Talos::tpl::Dynamics<SCALAR>, false> system;
    std::shared_ptr<ContactModel<SCALAR>> contactModel =
        std::shared_ptr<ContactModel<SCALAR>>(new ContactModel<SCALAR>());
    contactModel->k() = SCALAR(5000);
    contactModel->d() = SCALAR(1000);
    contactModel->alpha() = SCALAR(100);
    contactModel->alpha_n() = SCALAR(100);
    contactModel->zOffset() = SCALAR(-0.02);
    contactModel->smoothing() = static_cast<typename ContactModel<SCALAR>::VELOCITY_SMOOTHING>(
        ContactModel<SCALAR>::VELOCITY_SMOOTHING::SIGMOID);

    system.setContactModel(contactModel);
    ct::core::StateVector<state_dim, SCALAR> y;

    system.computeControlledDynamics(x.segment(0, state_dim), SCALAR(0.0), x.segment(state_dim, control_dim), y);

    return y;
}
}
}
}


#endif /* SRC_TALOS_CODEGEN_HELPERFUNCTIONS_H_ */
