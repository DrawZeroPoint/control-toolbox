#ifndef IIT_WALKER_INVERSE_DYNAMICS_H_
#define IIT_WALKER_INVERSE_DYNAMICS_H_

#include <iit/rbd/rbd.h>
#include <iit/rbd/InertiaMatrix.h>
#include <iit/rbd/utils.h>
#include <iit/rbd/robcogen_commons.h>
#include <iit/rbd/traits/DoubleTrait.h>

#include "declarations.h"
#include "inertia_properties.h"
#include "transforms.h"
#include "link_data_map.h"

namespace iit {
namespace Walker {
namespace dyn {

/**
 * The Inverse Dynamics routine for the robot Walker.
 *
 * In addition to the full Newton-Euler algorithm, specialized versions to compute
 * only certain terms are provided.
 * The parameters common to most of the methods are the joint status vector \c q, the
 * joint velocity vector \c qd and the acceleration vector \c qdd.
 *
 * Additional overloaded methods are provided without the \c q parameter. These
 * methods use the current configuration of the robot; they are provided for the
 * sake of efficiency, in case the motion transforms of the robot have already
 * been updated elsewhere with the most recent configuration (eg by a call to
 * setJointStatus()), so that it is useless to compute them again.
 *
 * Whenever present, the external forces parameter is a set of external
 * wrenches acting on the robot links. Each wrench must be expressed in
 * the reference frame of the link it is excerted on.
 */

namespace tpl {

template <typename TRAIT>
class InverseDynamics {
public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW

    typedef typename TRAIT::Scalar Scalar;

    typedef iit::rbd::Core<Scalar> CoreS;

    typedef typename CoreS::ForceVector Force;
    typedef typename CoreS::VelocityVector Velocity;
    typedef typename CoreS::VelocityVector Acceleration;
    typedef typename CoreS::Matrix66 Matrix66s;
    typedef iit::rbd::tpl::InertiaMatrixDense<Scalar> InertiaMatrix;
    typedef iit::Walker::tpl::JointState<Scalar> JointState;
    typedef LinkDataMap<Force> ExtForces;
    typedef iit::Walker::tpl::MotionTransforms<TRAIT> MTransforms;
    typedef InertiaProperties<TRAIT> IProperties;

public:
    /**
     * Default constructor
     * \param in the inertia properties of the links
     * \param tr the container of all the spatial motion transforms of
     *     the robot Walker, which will be used by this instance
     *     to compute inverse-dynamics.
     */
    InverseDynamics(IProperties& in, MTransforms& tr);

    /** \name Inverse dynamics
     * The full algorithm for the inverse dynamics of this robot.
     *
     * All the spatial vectors in the parameters are expressed in base coordinates,
     * besides the external forces: each force must be expressed in the reference
     * frame of the link it is acting on.
     * \param[out] jForces the joint force vector required to achieve the desired accelerations
     * \param[out] baseAccel the spatial acceleration of the robot base
     * \param[in] g the gravity acceleration, as a spatial vector;
     *              gravity implicitly specifies the orientation of the base in space
     * \param[in] torso_v the spatial velocity of the base
     * \param[in] q the joint position vector
     * \param[in] qd the joint velocity vector
     * \param[in] qdd the desired joint acceleration vector
     * \param[in] fext the external forces acting on the links; this parameters
     *            defaults to zero
     */ ///@{
    void id(
        JointState& jForces, Acceleration& torso_a,
        const Acceleration& g, const Velocity& torso_v,
        const JointState& q, const JointState& qd, const JointState& qdd,
        const ExtForces& fext = zeroExtForces);
    void id(
        JointState& jForces, Acceleration& torso_a,
        const Acceleration& g, const Velocity& torso_v,
        const JointState& qd, const JointState& qdd,
        const ExtForces& fext = zeroExtForces);
    ///@}
    /** \name Inverse dynamics, fully actuated base
     * The inverse dynamics algorithm for the floating base robot,
     * in the assumption of a fully actuated base.
     *
     * All the spatial vectors in the parameters are expressed in base coordinates,
     * besides the external forces: each force must be expressed in the reference
     * frame of the link it is acting on.
     * \param[out] baseWrench the spatial force to be applied to the robot base to achieve
     *             the desired accelerations
     * \param[out] jForces the joint force vector required to achieve the desired accelerations
     * \param[in] g the gravity acceleration, as a spatial vector;
     *              gravity implicitly specifies the orientation of the base in space
     * \param[in] torso_v the spatial velocity of the base
     * \param[in] baseAccel the desired spatial acceleration of the robot base
     * \param[in] q the joint position vector
     * \param[in] qd the joint velocity vector
     * \param[in] qdd the desired joint acceleration vector
     * \param[in] fext the external forces acting on the links; this parameters
     *            defaults to zero
     */ ///@{
    void id_fully_actuated(
        Force& baseWrench, JointState& jForces,
        const Acceleration& g, const Velocity& torso_v, const Acceleration& baseAccel,
        const JointState& q, const JointState& qd, const JointState& qdd, const ExtForces& fext = zeroExtForces);
    void id_fully_actuated(
        Force& baseWrench, JointState& jForces,
        const Acceleration& g, const Velocity& torso_v, const Acceleration& baseAccel,
        const JointState& qd, const JointState& qdd, const ExtForces& fext = zeroExtForces);
    ///@}
    /** \name Gravity terms, fully actuated base
     */
    ///@{
    void G_terms_fully_actuated(
        Force& baseWrench, JointState& jForces,
        const Acceleration& g, const JointState& q);
    void G_terms_fully_actuated(
        Force& baseWrench, JointState& jForces,
        const Acceleration& g);
    ///@}
    /** \name Centrifugal and Coriolis terms, fully actuated base
     *
     * These functions take only velocity inputs, that is, they assume
     * a zero spatial acceleration of the base (in addition to zero acceleration
     * at the actuated joints).
     * Note that this is NOT the same as imposing zero acceleration
     * at the virtual 6-dof-floting-base joint, which would result, in general,
     * in a non-zero spatial acceleration of the base, due to velocity
     * product terms.
     */
    ///@{
    void C_terms_fully_actuated(
        Force& baseWrench, JointState& jForces,
        const Velocity& torso_v, const JointState& q, const JointState& qd);
    void C_terms_fully_actuated(
        Force& baseWrench, JointState& jForces,
        const Velocity& torso_v, const JointState& qd);
    ///@}
    /** Updates all the kinematics transforms used by the inverse dynamics routine. */
    void setJointStatus(const JointState& q) const;

public:
    /** \name Getters
     * These functions return various spatial quantities used internally
     * by the inverse dynamics routines, like the spatial acceleration
     * of the links.
     *
     * The getters can be useful to retrieve the additional data that is not
     * returned explicitly by the inverse dynamics routines even though it
     * is computed. For example, after a call to the inverse dynamics,
     * the spatial velocity of all the links has been determined and
     * can be accessed.
     *
     * However, beware that certain routines might not use some of the
     * spatial quantities, which therefore would retain their last value
     * without being updated nor reset (for example, the spatial velocity
     * of the links is unaffected by the computation of the gravity terms).
     */
    ///@{
    const Force& getForce_torso() const { return torso_f; }
    const Velocity& getVelocity_right_leg_l1() const { return right_leg_l1_v; }
    const Acceleration& getAcceleration_right_leg_l1() const { return right_leg_l1_a; }
    const Force& getForce_right_leg_l1() const { return right_leg_l1_f; }
    const Velocity& getVelocity_right_leg_l2() const { return right_leg_l2_v; }
    const Acceleration& getAcceleration_right_leg_l2() const { return right_leg_l2_a; }
    const Force& getForce_right_leg_l2() const { return right_leg_l2_f; }
    const Velocity& getVelocity_right_leg_l3() const { return right_leg_l3_v; }
    const Acceleration& getAcceleration_right_leg_l3() const { return right_leg_l3_a; }
    const Force& getForce_right_leg_l3() const { return right_leg_l3_f; }
    const Velocity& getVelocity_right_leg_l4() const { return right_leg_l4_v; }
    const Acceleration& getAcceleration_right_leg_l4() const { return right_leg_l4_a; }
    const Force& getForce_right_leg_l4() const { return right_leg_l4_f; }
    const Velocity& getVelocity_right_leg_l5() const { return right_leg_l5_v; }
    const Acceleration& getAcceleration_right_leg_l5() const { return right_leg_l5_a; }
    const Force& getForce_right_leg_l5() const { return right_leg_l5_f; }
    const Velocity& getVelocity_right_leg_l6() const { return right_leg_l6_v; }
    const Acceleration& getAcceleration_right_leg_l6() const { return right_leg_l6_a; }
    const Force& getForce_right_leg_l6() const { return right_leg_l6_f; }
    const Velocity& getVelocity_left_leg_l1() const { return left_leg_l1_v; }
    const Acceleration& getAcceleration_left_leg_l1() const { return left_leg_l1_a; }
    const Force& getForce_left_leg_l1() const { return left_leg_l1_f; }
    const Velocity& getVelocity_left_leg_l2() const { return left_leg_l2_v; }
    const Acceleration& getAcceleration_left_leg_l2() const { return left_leg_l2_a; }
    const Force& getForce_left_leg_l2() const { return left_leg_l2_f; }
    const Velocity& getVelocity_left_leg_l3() const { return left_leg_l3_v; }
    const Acceleration& getAcceleration_left_leg_l3() const { return left_leg_l3_a; }
    const Force& getForce_left_leg_l3() const { return left_leg_l3_f; }
    const Velocity& getVelocity_left_leg_l4() const { return left_leg_l4_v; }
    const Acceleration& getAcceleration_left_leg_l4() const { return left_leg_l4_a; }
    const Force& getForce_left_leg_l4() const { return left_leg_l4_f; }
    const Velocity& getVelocity_left_leg_l5() const { return left_leg_l5_v; }
    const Acceleration& getAcceleration_left_leg_l5() const { return left_leg_l5_a; }
    const Force& getForce_left_leg_l5() const { return left_leg_l5_f; }
    const Velocity& getVelocity_left_leg_l6() const { return left_leg_l6_v; }
    const Acceleration& getAcceleration_left_leg_l6() const { return left_leg_l6_a; }
    const Force& getForce_left_leg_l6() const { return left_leg_l6_f; }
    ///@}
protected:
    void secondPass_fullyActuated(JointState& jForces);

private:
    IProperties* inertiaProps;
    MTransforms* xm;
private:
    Matrix66s vcross; // support variable
    // Link 'right_leg_l1' :
    const InertiaMatrix& right_leg_l1_I;
    Velocity      right_leg_l1_v;
    Acceleration  right_leg_l1_a;
    Force         right_leg_l1_f;
    // Link 'right_leg_l2' :
    const InertiaMatrix& right_leg_l2_I;
    Velocity      right_leg_l2_v;
    Acceleration  right_leg_l2_a;
    Force         right_leg_l2_f;
    // Link 'right_leg_l3' :
    const InertiaMatrix& right_leg_l3_I;
    Velocity      right_leg_l3_v;
    Acceleration  right_leg_l3_a;
    Force         right_leg_l3_f;
    // Link 'right_leg_l4' :
    const InertiaMatrix& right_leg_l4_I;
    Velocity      right_leg_l4_v;
    Acceleration  right_leg_l4_a;
    Force         right_leg_l4_f;
    // Link 'right_leg_l5' :
    const InertiaMatrix& right_leg_l5_I;
    Velocity      right_leg_l5_v;
    Acceleration  right_leg_l5_a;
    Force         right_leg_l5_f;
    // Link 'right_leg_l6' :
    const InertiaMatrix& right_leg_l6_I;
    Velocity      right_leg_l6_v;
    Acceleration  right_leg_l6_a;
    Force         right_leg_l6_f;
    // Link 'left_leg_l1' :
    const InertiaMatrix& left_leg_l1_I;
    Velocity      left_leg_l1_v;
    Acceleration  left_leg_l1_a;
    Force         left_leg_l1_f;
    // Link 'left_leg_l2' :
    const InertiaMatrix& left_leg_l2_I;
    Velocity      left_leg_l2_v;
    Acceleration  left_leg_l2_a;
    Force         left_leg_l2_f;
    // Link 'left_leg_l3' :
    const InertiaMatrix& left_leg_l3_I;
    Velocity      left_leg_l3_v;
    Acceleration  left_leg_l3_a;
    Force         left_leg_l3_f;
    // Link 'left_leg_l4' :
    const InertiaMatrix& left_leg_l4_I;
    Velocity      left_leg_l4_v;
    Acceleration  left_leg_l4_a;
    Force         left_leg_l4_f;
    // Link 'left_leg_l5' :
    const InertiaMatrix& left_leg_l5_I;
    Velocity      left_leg_l5_v;
    Acceleration  left_leg_l5_a;
    Force         left_leg_l5_f;
    // Link 'left_leg_l6' :
    const InertiaMatrix& left_leg_l6_I;
    Velocity      left_leg_l6_v;
    Acceleration  left_leg_l6_a;
    Force         left_leg_l6_f;

    // The robot base
    const InertiaMatrix& torso_I;
    InertiaMatrix torso_Ic;
    Force         torso_f;
    // The composite inertia tensors
    InertiaMatrix right_leg_l1_Ic;
    InertiaMatrix right_leg_l2_Ic;
    InertiaMatrix right_leg_l3_Ic;
    InertiaMatrix right_leg_l4_Ic;
    InertiaMatrix right_leg_l5_Ic;
    const InertiaMatrix& right_leg_l6_Ic;
    InertiaMatrix left_leg_l1_Ic;
    InertiaMatrix left_leg_l2_Ic;
    InertiaMatrix left_leg_l3_Ic;
    InertiaMatrix left_leg_l4_Ic;
    InertiaMatrix left_leg_l5_Ic;
    const InertiaMatrix& left_leg_l6_Ic;

private:
    static const ExtForces zeroExtForces;
};

template <typename TRAIT>
inline void InverseDynamics<TRAIT>::setJointStatus(const JointState& q) const
{
    (xm->fr_right_leg_l1_X_fr_torso)(q);
    (xm->fr_right_leg_l2_X_fr_right_leg_l1)(q);
    (xm->fr_right_leg_l3_X_fr_right_leg_l2)(q);
    (xm->fr_right_leg_l4_X_fr_right_leg_l3)(q);
    (xm->fr_right_leg_l5_X_fr_right_leg_l4)(q);
    (xm->fr_right_leg_l6_X_fr_right_leg_l5)(q);
    (xm->fr_left_leg_l1_X_fr_torso)(q);
    (xm->fr_left_leg_l2_X_fr_left_leg_l1)(q);
    (xm->fr_left_leg_l3_X_fr_left_leg_l2)(q);
    (xm->fr_left_leg_l4_X_fr_left_leg_l3)(q);
    (xm->fr_left_leg_l5_X_fr_left_leg_l4)(q);
    (xm->fr_left_leg_l6_X_fr_left_leg_l5)(q);
}

template <typename TRAIT>
inline void InverseDynamics<TRAIT>::id(
    JointState& jForces, Acceleration& torso_a,
    const Acceleration& g, const Velocity& torso_v,
    const JointState& q, const JointState& qd, const JointState& qdd,
    const ExtForces& fext)
{
    setJointStatus(q);
    id(jForces, torso_a, g, torso_v,
       qd, qdd, fext);
}

template <typename TRAIT>
inline void InverseDynamics<TRAIT>::G_terms_fully_actuated(
    Force& baseWrench, JointState& jForces,
    const Acceleration& g, const JointState& q)
{
    setJointStatus(q);
    G_terms_fully_actuated(baseWrench, jForces, g);
}

template <typename TRAIT>
inline void InverseDynamics<TRAIT>::C_terms_fully_actuated(
    Force& baseWrench, JointState& jForces,
    const Velocity& torso_v, const JointState& q, const JointState& qd)
{
    setJointStatus(q);
    C_terms_fully_actuated(baseWrench, jForces, torso_v, qd);
}

template <typename TRAIT>
inline void InverseDynamics<TRAIT>::id_fully_actuated(
        Force& baseWrench, JointState& jForces,
        const Acceleration& g, const Velocity& torso_v, const Acceleration& baseAccel,
        const JointState& q, const JointState& qd, const JointState& qdd, const ExtForces& fext)
{
    setJointStatus(q);
    id_fully_actuated(baseWrench, jForces, g, torso_v,
        baseAccel, qd, qdd, fext);
}

}

typedef tpl::InverseDynamics<rbd::DoubleTrait> InverseDynamics;

}
}

}

#include "inverse_dynamics.impl.h"

#endif
