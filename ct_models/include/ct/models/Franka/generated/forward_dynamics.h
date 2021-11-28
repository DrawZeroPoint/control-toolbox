#ifndef IIT_ROBOT_FRANKA_FORWARD_DYNAMICS_H_
#define IIT_ROBOT_FRANKA_FORWARD_DYNAMICS_H_

#include <iit/rbd/rbd.h>
#include <iit/rbd/utils.h>
#include <iit/rbd/robcogen_commons.h>

#include "declarations.h"
#include "transforms.h"
#include "inertia_properties.h"
#include "link_data_map.h"

namespace iit {
namespace Franka {
namespace dyn {

/**
 * The Forward Dynamics routine for the robot Franka.
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
    typedef typename iit::Franka::tpl::JointState<Scalar> JointState;
    typedef iit::Franka::tpl::MotionTransforms<TRAIT> MTransforms;

public:
    /**
     * Default constructor
     * \param in the inertia properties of the links
     * \param tr the container of all the spatial motion transforms of
     *     the robot Franka, which will be used by this instance
     *     to compute the dynamics.
     */
    ForwardDynamics(InertiaProperties<TRAIT>& in, MTransforms& tr);
    /** \name Forward dynamics
     * The Articulated-Body-Algorithm to compute the joint accelerations
     */ ///@{
    /**
     * \param qdd the joint accelerations vector (output parameter).
     * \param q the joint status vector
     * \param qd the joint velocities vector
     * \param tau the joint forces (torque or force)
     * \param fext the external forces, optional. Each force must be
     *              expressed in the reference frame of the link it is
     *              exerted on.
     */
    void fd(
        JointState& qdd, // output parameter
        const JointState& q, const JointState& qd, const JointState& tau, const ExtForces& fext = zeroExtForces);
    void fd(
        JointState& qdd, // output parameter
        const JointState& qd, const JointState& tau, const ExtForces& fext = zeroExtForces);
    ///@}

    /** Updates all the kinematics transforms used by this instance. */
    void setJointStatus(const JointState& q) const;

private:
    InertiaProperties<TRAIT>* inertiaProps;
    MTransforms* motionTransforms;

    Matrix66S vcross; // support variable
    Matrix66S Ia_r;   // support variable, articulated inertia in the case of a revolute joint

    // Link 'panda_link1' :
    Matrix66S panda_link1_AI;
    Velocity panda_link1_a;
    Velocity panda_link1_v;
    Velocity panda_link1_c;
    Force    panda_link1_p;

    Column6DS panda_link1_U;
    Scalar panda_link1_D;
    Scalar panda_link1_u;
    // Link 'panda_link2' :
    Matrix66S panda_link2_AI;
    Velocity panda_link2_a;
    Velocity panda_link2_v;
    Velocity panda_link2_c;
    Force    panda_link2_p;

    Column6DS panda_link2_U;
    Scalar panda_link2_D;
    Scalar panda_link2_u;
    // Link 'panda_link3' :
    Matrix66S panda_link3_AI;
    Velocity panda_link3_a;
    Velocity panda_link3_v;
    Velocity panda_link3_c;
    Force    panda_link3_p;

    Column6DS panda_link3_U;
    Scalar panda_link3_D;
    Scalar panda_link3_u;
    // Link 'panda_link4' :
    Matrix66S panda_link4_AI;
    Velocity panda_link4_a;
    Velocity panda_link4_v;
    Velocity panda_link4_c;
    Force    panda_link4_p;

    Column6DS panda_link4_U;
    Scalar panda_link4_D;
    Scalar panda_link4_u;
    // Link 'panda_link5' :
    Matrix66S panda_link5_AI;
    Velocity panda_link5_a;
    Velocity panda_link5_v;
    Velocity panda_link5_c;
    Force    panda_link5_p;

    Column6DS panda_link5_U;
    Scalar panda_link5_D;
    Scalar panda_link5_u;
    // Link 'panda_link6' :
    Matrix66S panda_link6_AI;
    Velocity panda_link6_a;
    Velocity panda_link6_v;
    Velocity panda_link6_c;
    Force    panda_link6_p;

    Column6DS panda_link6_U;
    Scalar panda_link6_D;
    Scalar panda_link6_u;
    // Link 'panda_link7' :
    Matrix66S panda_link7_AI;
    Velocity panda_link7_a;
    Velocity panda_link7_v;
    Velocity panda_link7_c;
    Force    panda_link7_p;

    Column6DS panda_link7_U;
    Scalar panda_link7_D;
    Scalar panda_link7_u;
private:
    static const ExtForces zeroExtForces;
};

template <typename TRAIT>
inline void ForwardDynamics<TRAIT>::setJointStatus(const JointState& q) const {
    (motionTransforms-> fr_panda_link1_X_fr_table)(q);
    (motionTransforms-> fr_panda_link2_X_fr_panda_link1)(q);
    (motionTransforms-> fr_panda_link3_X_fr_panda_link2)(q);
    (motionTransforms-> fr_panda_link4_X_fr_panda_link3)(q);
    (motionTransforms-> fr_panda_link5_X_fr_panda_link4)(q);
    (motionTransforms-> fr_panda_link6_X_fr_panda_link5)(q);
    (motionTransforms-> fr_panda_link7_X_fr_panda_link6)(q);
}

template <typename TRAIT>
inline void ForwardDynamics<TRAIT>::fd(
    JointState& qdd,
    const JointState& q,
    const JointState& qd,
    const JointState& tau,
    const ExtForces& fext/* = zeroExtForces */)
{
    setJointStatus(q);
    fd(qdd, qd, tau, fext);
}

}

typedef tpl::ForwardDynamics<iit::rbd::DoubleTrait> ForwardDynamics;

}
}
}

#include "forward_dynamics.impl.h"

#endif
