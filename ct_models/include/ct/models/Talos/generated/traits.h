#ifndef IIT_ROBOGEN__TALOS_TRAITS_H_
#define IIT_ROBOGEN__TALOS_TRAITS_H_

#include "declarations.h"
#include "transforms.h"
#include "inverse_dynamics.h"
#include "forward_dynamics.h"
#include "jsim.h"
#include "inertia_properties.h"
#include "jacobians.h"
#include <iit/rbd/traits/TraitSelector.h>


namespace iit {
namespace Talos {

namespace tpl {

template <typename SCALAR>
struct Traits {
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW

    typedef SCALAR S;

    typedef typename Talos::JointIdentifiers JointID;
    typedef typename Talos::LinkIdentifiers  LinkID;
    typedef typename iit::rbd::tpl::TraitSelector<SCALAR>::Trait Trait;

    typedef typename Talos::tpl::JointState<SCALAR> JointState;



    typedef typename Talos::tpl::HomogeneousTransforms<Trait> HomogeneousTransforms;
    typedef typename Talos::tpl::MotionTransforms<Trait> MotionTransforms;
    typedef typename Talos::tpl::ForceTransforms<Trait> ForceTransforms;
    typedef typename Talos::tpl::Jacobians<Trait> Jacobians;

    typedef typename iit::Talos::dyn::tpl::InertiaProperties<Trait> InertiaProperties;
    typedef typename iit::Talos::dyn::tpl::ForwardDynamics<Trait> FwdDynEngine;
    typedef typename iit::Talos::dyn::tpl::InverseDynamics<Trait> InvDynEngine;
    typedef typename iit::Talos::dyn::tpl::JSIM<Trait> JSIM;

    static const int joints_count = Talos::jointsCount;
    static const int links_count  = Talos::linksCount;
    static const bool floating_base = true;

    static inline const JointID* orderedJointIDs();
    static inline const LinkID*  orderedLinkIDs();
};

template <typename SCALAR>
inline const typename Traits<SCALAR>::JointID*  Traits<SCALAR>::orderedJointIDs() {
    return Talos::orderedJointIDs;
}
template <typename SCALAR>
inline const typename Traits<SCALAR>::LinkID*  Traits<SCALAR>::orderedLinkIDs() {
    return Talos::orderedLinkIDs;
}

}

typedef tpl::Traits<double> Traits; // default instantiation - backward compatibility...

}
}

#endif
