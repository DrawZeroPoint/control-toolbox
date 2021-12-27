#ifndef IIT_ROBOT_WALKER_FORWARD_DYNAMICS_H_
#define IIT_ROBOT_WALKER_FORWARD_DYNAMICS_H_

#include <iit/rbd/rbd.h>
#include <iit/rbd/utils.h>
#include <iit/rbd/robcogen_commons.h>

#include "declarations.h"
#include "transforms.h"
#include "inertia_properties.h"
#include "link_data_map.h"

namespace iit {
namespace Walker {
namespace dyn {

/**
 * The Forward Dynamics routine for the robot Walker.
 *
 * The parameters common to most of the methods are the joint status \c q, the
 * joint velocities \c qd and the joint forces \c tau. The accelerations \c qdd
 * will be filled with the computed values. Overloaded methods without the \c q
 * parameter use the current configuration of the robot; they are provided for
 * the sake of efficiency, in case the kinematics transforms of the robot have
 * already been updated elsewhere with the most recent configuration (eg by a
 * call to setJointStatus()), so that it would be useless to compute them again.
 */

namespace tpl {

template <typename TRAIT>
class ForwardDynamics {
public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
    // Convenient type aliases:

    typedef typename TRAIT::Scalar Scalar;

    typedef iit::rbd::Core<Scalar> CoreS;

    typedef typename CoreS::ForceVector Force;
    typedef typename CoreS::VelocityVector Velocity;
    typedef typename CoreS::VelocityVector Acceleration;
    typedef typename CoreS::Column6D Column6DS;
    typedef typename CoreS::Matrix66 Matrix66S;
    typedef LinkDataMap<Force> ExtForces;
    typedef typename iit::Walker::tpl::JointState<Scalar> JointState;
    typedef iit::Walker::tpl::MotionTransforms<TRAIT> MTransforms;

public:
    /**
     * Default constructor
     * \param in the inertia properties of the links
     * \param tr the container of all the spatial motion transforms of
     *     the robot Walker, which will be used by this instance
     *     to compute the dynamics.
     */
    ForwardDynamics(InertiaProperties<TRAIT>& in, MTransforms& tr);
    /** \name Forward dynamics
     * The Articulated-Body-Algorithm to compute the joint accelerations
     */ ///@{
    /**
     * \param qdd the joint accelerations vector (output parameter).
     * \param torso_a
     * \param torso_v
     * \param g the gravity acceleration vector, expressed in the
     *          base coordinates
     * \param q the joint status vector
     * \param qd the joint velocities vector
     * \param tau the joint forces (torque or force)
     * \param fext the external forces, optional. Each force must be
     *              expressed in the reference frame of the link it is
     *              exerted on.
     */
    void fd(
       JointState& qdd, Acceleration& torso_a, // output parameters,
       const Velocity& torso_v, const Acceleration& g,
       const JointState& q, const JointState& qd, const JointState& tau, const ExtForces& fext = zeroExtForces);
    void fd(
        JointState& qdd, Acceleration& torso_a, // output parameters,
        const Velocity& torso_v, const Acceleration& g,
        const JointState& qd, const JointState& tau, const ExtForces& fext = zeroExtForces);
    ///@}

    /** Updates all the kinematics transforms used by this instance. */
    void setJointStatus(const JointState& q) const;

private:
    InertiaProperties<TRAIT>* inertiaProps;
    MTransforms* motionTransforms;

    Matrix66S vcross; // support variable
    Matrix66S Ia_r;   // support variable, articulated inertia in the case of a revolute joint
    // Link 'torso'
    Matrix66S torso_AI;
    Force torso_p;

    // Link 'right_leg_l1' :
    Matrix66S right_leg_l1_AI;
    Velocity right_leg_l1_a;
    Velocity right_leg_l1_v;
    Velocity right_leg_l1_c;
    Force    right_leg_l1_p;

    Column6DS right_leg_l1_U;
    Scalar right_leg_l1_D;
    Scalar right_leg_l1_u;
    // Link 'right_leg_l2' :
    Matrix66S right_leg_l2_AI;
    Velocity right_leg_l2_a;
    Velocity right_leg_l2_v;
    Velocity right_leg_l2_c;
    Force    right_leg_l2_p;

    Column6DS right_leg_l2_U;
    Scalar right_leg_l2_D;
    Scalar right_leg_l2_u;
    // Link 'right_leg_l3' :
    Matrix66S right_leg_l3_AI;
    Velocity right_leg_l3_a;
    Velocity right_leg_l3_v;
    Velocity right_leg_l3_c;
    Force    right_leg_l3_p;

    Column6DS right_leg_l3_U;
    Scalar right_leg_l3_D;
    Scalar right_leg_l3_u;
    // Link 'right_leg_l4' :
    Matrix66S right_leg_l4_AI;
    Velocity right_leg_l4_a;
    Velocity right_leg_l4_v;
    Velocity right_leg_l4_c;
    Force    right_leg_l4_p;

    Column6DS right_leg_l4_U;
    Scalar right_leg_l4_D;
    Scalar right_leg_l4_u;
    // Link 'right_leg_l5' :
    Matrix66S right_leg_l5_AI;
    Velocity right_leg_l5_a;
    Velocity right_leg_l5_v;
    Velocity right_leg_l5_c;
    Force    right_leg_l5_p;

    Column6DS right_leg_l5_U;
    Scalar right_leg_l5_D;
    Scalar right_leg_l5_u;
    // Link 'right_leg_l6' :
    Matrix66S right_leg_l6_AI;
    Velocity right_leg_l6_a;
    Velocity right_leg_l6_v;
    Velocity right_leg_l6_c;
    Force    right_leg_l6_p;

    Column6DS right_leg_l6_U;
    Scalar right_leg_l6_D;
    Scalar right_leg_l6_u;
    // Link 'left_leg_l1' :
    Matrix66S left_leg_l1_AI;
    Velocity left_leg_l1_a;
    Velocity left_leg_l1_v;
    Velocity left_leg_l1_c;
    Force    left_leg_l1_p;

    Column6DS left_leg_l1_U;
    Scalar left_leg_l1_D;
    Scalar left_leg_l1_u;
    // Link 'left_leg_l2' :
    Matrix66S left_leg_l2_AI;
    Velocity left_leg_l2_a;
    Velocity left_leg_l2_v;
    Velocity left_leg_l2_c;
    Force    left_leg_l2_p;

    Column6DS left_leg_l2_U;
    Scalar left_leg_l2_D;
    Scalar left_leg_l2_u;
    // Link 'left_leg_l3' :
    Matrix66S left_leg_l3_AI;
    Velocity left_leg_l3_a;
    Velocity left_leg_l3_v;
    Velocity left_leg_l3_c;
    Force    left_leg_l3_p;

    Column6DS left_leg_l3_U;
    Scalar left_leg_l3_D;
    Scalar left_leg_l3_u;
    // Link 'left_leg_l4' :
    Matrix66S left_leg_l4_AI;
    Velocity left_leg_l4_a;
    Velocity left_leg_l4_v;
    Velocity left_leg_l4_c;
    Force    left_leg_l4_p;

    Column6DS left_leg_l4_U;
    Scalar left_leg_l4_D;
    Scalar left_leg_l4_u;
    // Link 'left_leg_l5' :
    Matrix66S left_leg_l5_AI;
    Velocity left_leg_l5_a;
    Velocity left_leg_l5_v;
    Velocity left_leg_l5_c;
    Force    left_leg_l5_p;

    Column6DS left_leg_l5_U;
    Scalar left_leg_l5_D;
    Scalar left_leg_l5_u;
    // Link 'left_leg_l6' :
    Matrix66S left_leg_l6_AI;
    Velocity left_leg_l6_a;
    Velocity left_leg_l6_v;
    Velocity left_leg_l6_c;
    Force    left_leg_l6_p;

    Column6DS left_leg_l6_U;
    Scalar left_leg_l6_D;
    Scalar left_leg_l6_u;
private:
    static const ExtForces zeroExtForces;
};

template <typename TRAIT>
inline void ForwardDynamics<TRAIT>::setJointStatus(const JointState& q) const {
    (motionTransforms-> fr_right_leg_l1_X_fr_torso)(q);
    (motionTransforms-> fr_right_leg_l2_X_fr_right_leg_l1)(q);
    (motionTransforms-> fr_right_leg_l3_X_fr_right_leg_l2)(q);
    (motionTransforms-> fr_right_leg_l4_X_fr_right_leg_l3)(q);
    (motionTransforms-> fr_right_leg_l5_X_fr_right_leg_l4)(q);
    (motionTransforms-> fr_right_leg_l6_X_fr_right_leg_l5)(q);
    (motionTransforms-> fr_left_leg_l1_X_fr_torso)(q);
    (motionTransforms-> fr_left_leg_l2_X_fr_left_leg_l1)(q);
    (motionTransforms-> fr_left_leg_l3_X_fr_left_leg_l2)(q);
    (motionTransforms-> fr_left_leg_l4_X_fr_left_leg_l3)(q);
    (motionTransforms-> fr_left_leg_l5_X_fr_left_leg_l4)(q);
    (motionTransforms-> fr_left_leg_l6_X_fr_left_leg_l5)(q);
}

template <typename TRAIT>
inline void ForwardDynamics<TRAIT>::fd(
    JointState& qdd, Acceleration& torso_a, // output parameters,
    const Velocity& torso_v, const Acceleration& g,
    const JointState& q,
    const JointState& qd,
    const JointState& tau,
    const ExtForces& fext/* = zeroExtForces */)
{
    setJointStatus(q);
    fd(qdd, torso_a, torso_v, g, qd, tau, fext);
}

}

typedef tpl::ForwardDynamics<iit::rbd::DoubleTrait> ForwardDynamics;

}
}
}

#include "forward_dynamics.impl.h"

#endif
