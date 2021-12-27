/**********************************************************************************************************************
This file is part of the Control Toolbox (https://github.com/ethz-adrl/control-toolbox), copyright by ETH Zurich.
Licensed under the BSD-2 license (see LICENSE file in main directory)
**********************************************************************************************************************/


#ifndef SRC_WALKER_CODEGEN_HELPERFUNCTIONS_H_
#define SRC_WALKER_CODEGEN_HELPERFUNCTIONS_H_

#include <ct/core/core.h>
#include <ct/rbd/rbd.h>
#include <ct/models/Walker/Walker.h>

namespace ct {
namespace models {
namespace Walker {

// a floating base forward-dynamic system templated on scalar type
typedef ct::rbd::FloatingBaseFDSystem<ct::rbd::Walker::tpl::Dynamics<double>, false> WalkerSystem;

template <typename SCALAR>
using ContactModel = ct::rbd::EEContactModel<ct::rbd::Walker::tpl::Kinematics<SCALAR>>;

// extract dimensions
const size_t state_dim = WalkerSystem::STATE_DIM;
const size_t control_dim = WalkerSystem::CONTROL_DIM;

// shortcut for number of joints
const size_t njoints = WalkerSystem::Kinematics::NJOINTS;
const size_t nEE = WalkerSystem::Kinematics::NUM_EE;

template <typename SCALAR>
Eigen::Matrix<SCALAR, control_dim + 6, 1> walkerInverseDynamics(const Eigen::Matrix<SCALAR, state_dim + 18, 1>& x)
{
    ct::rbd::Walker::tpl::Dynamics<SCALAR> walkerDynamics;
    ct::rbd::RBDState<njoints, SCALAR> walkerState;

    // we assume x contains: q, q_dot, q_ddot
    walkerState.fromStateVectorEulerXyz(x.template topRows<state_dim>());

    ct::rbd::tpl::RigidBodyAcceleration<SCALAR> base_a(x.template segment<6>(state_dim));
    ct::rbd::JointAcceleration<njoints, SCALAR> qdd(x.template bottomRows<njoints>());

    typename ct::rbd::Walker::tpl::Dynamics<SCALAR>::ExtLinkForces_t fext(Eigen::Matrix<SCALAR, 6, 1>::Zero());  //zero

    // output
    ct::core::ControlVector<control_dim, SCALAR> u;
    typename ct::rbd::Walker::tpl::Dynamics<SCALAR>::ForceVector_t base_w;

    walkerDynamics.FloatingBaseFullyActuatedID(walkerState, base_a, qdd, fext, base_w, u);

    Eigen::Matrix<SCALAR, control_dim + 6, 1> y;
    y << base_w, u;
    return y;
}

template <typename SCALAR>
Eigen::Matrix<SCALAR, nEE * 6, 1> walkerForwardKinematics(const Eigen::Matrix<SCALAR, state_dim, 1>& x)
{
    ct::rbd::Walker::tpl::Kinematics<SCALAR> walkerKinematics;
    ct::rbd::RBDState<njoints, SCALAR> walkerState;
    walkerState.fromStateVectorEulerXyz(x.template topRows<state_dim>());

    // output vector: positions and velocities for all endeffectors
    Eigen::Matrix<SCALAR, nEE * 6, 1> y;

    for (size_t i = 0; i < nEE; i++)
    {
        y.template segment<3>(i * 6) =
            walkerKinematics.getEEPositionInWorld(i, walkerState.basePose(), walkerState.jointPositions()).toImplementation();
        y.template segment<3>(i * 6 + 3) = walkerKinematics.getEEVelocityInWorld(i, walkerState).toImplementation();
    }

    return y;
}

template <typename SCALAR>
Eigen::Matrix<SCALAR, state_dim, 1> walkerContactModelForwardDynamics(
    const Eigen::Matrix<SCALAR, state_dim + control_dim + 1, 1>& x)  // state, input, time
{
    ct::rbd::FloatingBaseFDSystem<ct::rbd::Walker::tpl::Dynamics<SCALAR>, false> system;
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


#endif /* SRC_WALKER_CODEGEN_HELPERFUNCTIONS_H_ */
