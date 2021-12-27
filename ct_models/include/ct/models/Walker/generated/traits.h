#ifndef IIT_ROBOGEN__WALKER_TRAITS_H_
#define IIT_ROBOGEN__WALKER_TRAITS_H_

#include "declarations.h"
#include "transforms.h"
#include "inverse_dynamics.h"
#include "forward_dynamics.h"
#include "jsim.h"
#include "inertia_properties.h"
#include "jacobians.h"
#include <iit/rbd/traits/TraitSelector.h>


namespace iit {
namespace Walker {

namespace tpl {

template <typename SCALAR>
struct Traits {
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW

    typedef SCALAR S;

    typedef typename Walker::JointIdentifiers JointID;
    typedef typename Walker::LinkIdentifiers  LinkID;
    typedef typename iit::rbd::tpl::TraitSelector<SCALAR>::Trait Trait;

    typedef typename Walker::tpl::JointState<SCALAR> JointState;



    typedef typename Walker::tpl::HomogeneousTransforms<Trait> HomogeneousTransforms;
    typedef typename Walker::tpl::MotionTransforms<Trait> MotionTransforms;
    typedef typename Walker::tpl::ForceTransforms<Trait> ForceTransforms;
    typedef typename Walker::tpl::Jacobians<Trait> Jacobians;

    typedef typename iit::Walker::dyn::tpl::InertiaProperties<Trait> InertiaProperties;
    typedef typename iit::Walker::dyn::tpl::ForwardDynamics<Trait> FwdDynEngine;
    typedef typename iit::Walker::dyn::tpl::InverseDynamics<Trait> InvDynEngine;
    typedef typename iit::Walker::dyn::tpl::JSIM<Trait> JSIM;

    static const int joints_count = Walker::jointsCount;
    static const int links_count  = Walker::linksCount;
    static const bool floating_base = true;

    static inline const JointID* orderedJointIDs();
    static inline const LinkID*  orderedLinkIDs();
};

template <typename SCALAR>
inline const typename Traits<SCALAR>::JointID*  Traits<SCALAR>::orderedJointIDs() {
    return Walker::orderedJointIDs;
}
template <typename SCALAR>
inline const typename Traits<SCALAR>::LinkID*  Traits<SCALAR>::orderedLinkIDs() {
    return Walker::orderedLinkIDs;
}

}

typedef tpl::Traits<double> Traits; // default instantiation - backward compatibility...

}
}

#endif
