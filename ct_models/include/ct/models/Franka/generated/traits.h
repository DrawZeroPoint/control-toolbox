#ifndef IIT_ROBOGEN__FRANKA_TRAITS_H_
#define IIT_ROBOGEN__FRANKA_TRAITS_H_

#include "declarations.h"
#include "transforms.h"
#include "inverse_dynamics.h"
#include "forward_dynamics.h"
#include "jsim.h"
#include "inertia_properties.h"
#include "jacobians.h"
#include <iit/rbd/traits/TraitSelector.h>


namespace iit {
namespace Franka {

namespace tpl {

template <typename SCALAR>
struct Traits {
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW

    typedef SCALAR S;

    typedef typename Franka::JointIdentifiers JointID;
    typedef typename Franka::LinkIdentifiers  LinkID;
    typedef typename iit::rbd::tpl::TraitSelector<SCALAR>::Trait Trait;

    typedef typename Franka::tpl::JointState<SCALAR> JointState;



    typedef typename Franka::tpl::HomogeneousTransforms<Trait> HomogeneousTransforms;
    typedef typename Franka::tpl::MotionTransforms<Trait> MotionTransforms;
    typedef typename Franka::tpl::ForceTransforms<Trait> ForceTransforms;
    typedef typename Franka::tpl::Jacobians<Trait> Jacobians;

    typedef typename iit::Franka::dyn::tpl::InertiaProperties<Trait> InertiaProperties;
    typedef typename iit::Franka::dyn::tpl::ForwardDynamics<Trait> FwdDynEngine;
    typedef typename iit::Franka::dyn::tpl::InverseDynamics<Trait> InvDynEngine;
    typedef typename iit::Franka::dyn::tpl::JSIM<Trait> JSIM;

    static const int joints_count = Franka::jointsCount;
    static const int links_count  = Franka::linksCount;
    static const bool floating_base = false;

    static inline const JointID* orderedJointIDs();
    static inline const LinkID*  orderedLinkIDs();
};

template <typename SCALAR>
inline const typename Traits<SCALAR>::JointID*  Traits<SCALAR>::orderedJointIDs() {
    return Franka::orderedJointIDs;
}
template <typename SCALAR>
inline const typename Traits<SCALAR>::LinkID*  Traits<SCALAR>::orderedLinkIDs() {
    return Franka::orderedLinkIDs;
}

}

typedef tpl::Traits<double> Traits; // default instantiation - backward compatibility...

}
}

#endif
