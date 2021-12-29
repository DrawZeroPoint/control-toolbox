#ifndef IIT_ROBOT_TALOS_FORWARD_DYNAMICS_H_
#define IIT_ROBOT_TALOS_FORWARD_DYNAMICS_H_

#include <iit/rbd/rbd.h>
#include <iit/rbd/utils.h>
#include <iit/rbd/robcogen_commons.h>

#include "declarations.h"
#include "transforms.h"
#include "inertia_properties.h"
#include "link_data_map.h"

namespace iit {
namespace Talos {
namespace dyn {

/**
 * The Forward Dynamics routine for the robot Talos.
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
    typedef typename iit::Talos::tpl::JointState<Scalar> JointState;
    typedef iit::Talos::tpl::MotionTransforms<TRAIT> MTransforms;

public:
    /**
     * Default constructor
     * \param in the inertia properties of the links
     * \param tr the container of all the spatial motion transforms of
     *     the robot Talos, which will be used by this instance
     *     to compute the dynamics.
     */
    ForwardDynamics(InertiaProperties<TRAIT>& in, MTransforms& tr);
    /** \name Forward dynamics
     * The Articulated-Body-Algorithm to compute the joint accelerations
     */ ///@{
    /**
     * \param qdd the joint accelerations vector (output parameter).
     * \param base_link_a
     * \param base_link_v
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
       JointState& qdd, Acceleration& base_link_a, // output parameters,
       const Velocity& base_link_v, const Acceleration& g,
       const JointState& q, const JointState& qd, const JointState& tau, const ExtForces& fext = zeroExtForces);
    void fd(
        JointState& qdd, Acceleration& base_link_a, // output parameters,
        const Velocity& base_link_v, const Acceleration& g,
        const JointState& qd, const JointState& tau, const ExtForces& fext = zeroExtForces);
    ///@}

    /** Updates all the kinematics transforms used by this instance. */
    void setJointStatus(const JointState& q) const;

private:
    InertiaProperties<TRAIT>* inertiaProps;
    MTransforms* motionTransforms;

    Matrix66S vcross; // support variable
    Matrix66S Ia_r;   // support variable, articulated inertia in the case of a revolute joint
    // Link 'base_link'
    Matrix66S base_link_AI;
    Force base_link_p;

    // Link 'leg_left_1_link' :
    Matrix66S leg_left_1_link_AI;
    Velocity leg_left_1_link_a;
    Velocity leg_left_1_link_v;
    Velocity leg_left_1_link_c;
    Force    leg_left_1_link_p;

    Column6DS leg_left_1_link_U;
    Scalar leg_left_1_link_D;
    Scalar leg_left_1_link_u;
    // Link 'leg_left_2_link' :
    Matrix66S leg_left_2_link_AI;
    Velocity leg_left_2_link_a;
    Velocity leg_left_2_link_v;
    Velocity leg_left_2_link_c;
    Force    leg_left_2_link_p;

    Column6DS leg_left_2_link_U;
    Scalar leg_left_2_link_D;
    Scalar leg_left_2_link_u;
    // Link 'leg_left_3_link' :
    Matrix66S leg_left_3_link_AI;
    Velocity leg_left_3_link_a;
    Velocity leg_left_3_link_v;
    Velocity leg_left_3_link_c;
    Force    leg_left_3_link_p;

    Column6DS leg_left_3_link_U;
    Scalar leg_left_3_link_D;
    Scalar leg_left_3_link_u;
    // Link 'leg_left_4_link' :
    Matrix66S leg_left_4_link_AI;
    Velocity leg_left_4_link_a;
    Velocity leg_left_4_link_v;
    Velocity leg_left_4_link_c;
    Force    leg_left_4_link_p;

    Column6DS leg_left_4_link_U;
    Scalar leg_left_4_link_D;
    Scalar leg_left_4_link_u;
    // Link 'leg_left_5_link' :
    Matrix66S leg_left_5_link_AI;
    Velocity leg_left_5_link_a;
    Velocity leg_left_5_link_v;
    Velocity leg_left_5_link_c;
    Force    leg_left_5_link_p;

    Column6DS leg_left_5_link_U;
    Scalar leg_left_5_link_D;
    Scalar leg_left_5_link_u;
    // Link 'leg_left_6_link' :
    Matrix66S leg_left_6_link_AI;
    Velocity leg_left_6_link_a;
    Velocity leg_left_6_link_v;
    Velocity leg_left_6_link_c;
    Force    leg_left_6_link_p;

    Column6DS leg_left_6_link_U;
    Scalar leg_left_6_link_D;
    Scalar leg_left_6_link_u;
    // Link 'leg_right_1_link' :
    Matrix66S leg_right_1_link_AI;
    Velocity leg_right_1_link_a;
    Velocity leg_right_1_link_v;
    Velocity leg_right_1_link_c;
    Force    leg_right_1_link_p;

    Column6DS leg_right_1_link_U;
    Scalar leg_right_1_link_D;
    Scalar leg_right_1_link_u;
    // Link 'leg_right_2_link' :
    Matrix66S leg_right_2_link_AI;
    Velocity leg_right_2_link_a;
    Velocity leg_right_2_link_v;
    Velocity leg_right_2_link_c;
    Force    leg_right_2_link_p;

    Column6DS leg_right_2_link_U;
    Scalar leg_right_2_link_D;
    Scalar leg_right_2_link_u;
    // Link 'leg_right_3_link' :
    Matrix66S leg_right_3_link_AI;
    Velocity leg_right_3_link_a;
    Velocity leg_right_3_link_v;
    Velocity leg_right_3_link_c;
    Force    leg_right_3_link_p;

    Column6DS leg_right_3_link_U;
    Scalar leg_right_3_link_D;
    Scalar leg_right_3_link_u;
    // Link 'leg_right_4_link' :
    Matrix66S leg_right_4_link_AI;
    Velocity leg_right_4_link_a;
    Velocity leg_right_4_link_v;
    Velocity leg_right_4_link_c;
    Force    leg_right_4_link_p;

    Column6DS leg_right_4_link_U;
    Scalar leg_right_4_link_D;
    Scalar leg_right_4_link_u;
    // Link 'leg_right_5_link' :
    Matrix66S leg_right_5_link_AI;
    Velocity leg_right_5_link_a;
    Velocity leg_right_5_link_v;
    Velocity leg_right_5_link_c;
    Force    leg_right_5_link_p;

    Column6DS leg_right_5_link_U;
    Scalar leg_right_5_link_D;
    Scalar leg_right_5_link_u;
    // Link 'leg_right_6_link' :
    Matrix66S leg_right_6_link_AI;
    Velocity leg_right_6_link_a;
    Velocity leg_right_6_link_v;
    Velocity leg_right_6_link_c;
    Force    leg_right_6_link_p;

    Column6DS leg_right_6_link_U;
    Scalar leg_right_6_link_D;
    Scalar leg_right_6_link_u;
private:
    static const ExtForces zeroExtForces;
};

template <typename TRAIT>
inline void ForwardDynamics<TRAIT>::setJointStatus(const JointState& q) const {
    (motionTransforms-> fr_leg_left_1_link_X_fr_base_link)(q);
    (motionTransforms-> fr_leg_left_2_link_X_fr_leg_left_1_link)(q);
    (motionTransforms-> fr_leg_left_3_link_X_fr_leg_left_2_link)(q);
    (motionTransforms-> fr_leg_left_4_link_X_fr_leg_left_3_link)(q);
    (motionTransforms-> fr_leg_left_5_link_X_fr_leg_left_4_link)(q);
    (motionTransforms-> fr_leg_left_6_link_X_fr_leg_left_5_link)(q);
    (motionTransforms-> fr_leg_right_1_link_X_fr_base_link)(q);
    (motionTransforms-> fr_leg_right_2_link_X_fr_leg_right_1_link)(q);
    (motionTransforms-> fr_leg_right_3_link_X_fr_leg_right_2_link)(q);
    (motionTransforms-> fr_leg_right_4_link_X_fr_leg_right_3_link)(q);
    (motionTransforms-> fr_leg_right_5_link_X_fr_leg_right_4_link)(q);
    (motionTransforms-> fr_leg_right_6_link_X_fr_leg_right_5_link)(q);
}

template <typename TRAIT>
inline void ForwardDynamics<TRAIT>::fd(
    JointState& qdd, Acceleration& base_link_a, // output parameters,
    const Velocity& base_link_v, const Acceleration& g,
    const JointState& q,
    const JointState& qd,
    const JointState& tau,
    const ExtForces& fext/* = zeroExtForces */)
{
    setJointStatus(q);
    fd(qdd, base_link_a, base_link_v, g, qd, tau, fext);
}

}

typedef tpl::ForwardDynamics<iit::rbd::DoubleTrait> ForwardDynamics;

}
}
}

#include "forward_dynamics.impl.h"

#endif
