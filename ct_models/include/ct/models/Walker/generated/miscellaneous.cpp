#include <iit/rbd/utils.h>
#include "miscellaneous.h"

using namespace iit::Walker;
using namespace iit::Walker::dyn;

iit::rbd::Vector3d iit::Walker::getWholeBodyCOM(
    const InertiaProperties& inertiaProps,
    const HomogeneousTransforms& ht)
{
    iit::rbd::Vector3d tmpSum(iit::rbd::Vector3d::Zero());

    tmpSum += inertiaProps.getCOM_torso() * inertiaProps.getMass_torso();

    HomogeneousTransforms::MatrixType tmpX(HomogeneousTransforms::MatrixType::Identity());
    HomogeneousTransforms::MatrixType base_X_right_leg_j1_chain;
    HomogeneousTransforms::MatrixType base_X_left_leg_j1_chain;
    
    
    base_X_right_leg_j1_chain = tmpX * ht.fr_torso_X_fr_right_leg_l1;
    tmpSum += inertiaProps.getMass_right_leg_l1() *
            ( iit::rbd::Utils::transform(base_X_right_leg_j1_chain, inertiaProps.getCOM_right_leg_l1()));
    
    base_X_right_leg_j1_chain = base_X_right_leg_j1_chain * ht.fr_right_leg_l1_X_fr_right_leg_l2;
    tmpSum += inertiaProps.getMass_right_leg_l2() *
            ( iit::rbd::Utils::transform(base_X_right_leg_j1_chain, inertiaProps.getCOM_right_leg_l2()));
    
    base_X_right_leg_j1_chain = base_X_right_leg_j1_chain * ht.fr_right_leg_l2_X_fr_right_leg_l3;
    tmpSum += inertiaProps.getMass_right_leg_l3() *
            ( iit::rbd::Utils::transform(base_X_right_leg_j1_chain, inertiaProps.getCOM_right_leg_l3()));
    
    base_X_right_leg_j1_chain = base_X_right_leg_j1_chain * ht.fr_right_leg_l3_X_fr_right_leg_l4;
    tmpSum += inertiaProps.getMass_right_leg_l4() *
            ( iit::rbd::Utils::transform(base_X_right_leg_j1_chain, inertiaProps.getCOM_right_leg_l4()));
    
    base_X_right_leg_j1_chain = base_X_right_leg_j1_chain * ht.fr_right_leg_l4_X_fr_right_leg_l5;
    tmpSum += inertiaProps.getMass_right_leg_l5() *
            ( iit::rbd::Utils::transform(base_X_right_leg_j1_chain, inertiaProps.getCOM_right_leg_l5()));
    
    base_X_right_leg_j1_chain = base_X_right_leg_j1_chain * ht.fr_right_leg_l5_X_fr_right_leg_l6;
    tmpSum += inertiaProps.getMass_right_leg_l6() *
            ( iit::rbd::Utils::transform(base_X_right_leg_j1_chain, inertiaProps.getCOM_right_leg_l6()));
    
    base_X_left_leg_j1_chain = tmpX * ht.fr_torso_X_fr_left_leg_l1;
    tmpSum += inertiaProps.getMass_left_leg_l1() *
            ( iit::rbd::Utils::transform(base_X_left_leg_j1_chain, inertiaProps.getCOM_left_leg_l1()));
    
    base_X_left_leg_j1_chain = base_X_left_leg_j1_chain * ht.fr_left_leg_l1_X_fr_left_leg_l2;
    tmpSum += inertiaProps.getMass_left_leg_l2() *
            ( iit::rbd::Utils::transform(base_X_left_leg_j1_chain, inertiaProps.getCOM_left_leg_l2()));
    
    base_X_left_leg_j1_chain = base_X_left_leg_j1_chain * ht.fr_left_leg_l2_X_fr_left_leg_l3;
    tmpSum += inertiaProps.getMass_left_leg_l3() *
            ( iit::rbd::Utils::transform(base_X_left_leg_j1_chain, inertiaProps.getCOM_left_leg_l3()));
    
    base_X_left_leg_j1_chain = base_X_left_leg_j1_chain * ht.fr_left_leg_l3_X_fr_left_leg_l4;
    tmpSum += inertiaProps.getMass_left_leg_l4() *
            ( iit::rbd::Utils::transform(base_X_left_leg_j1_chain, inertiaProps.getCOM_left_leg_l4()));
    
    base_X_left_leg_j1_chain = base_X_left_leg_j1_chain * ht.fr_left_leg_l4_X_fr_left_leg_l5;
    tmpSum += inertiaProps.getMass_left_leg_l5() *
            ( iit::rbd::Utils::transform(base_X_left_leg_j1_chain, inertiaProps.getCOM_left_leg_l5()));
    
    base_X_left_leg_j1_chain = base_X_left_leg_j1_chain * ht.fr_left_leg_l5_X_fr_left_leg_l6;
    tmpSum += inertiaProps.getMass_left_leg_l6() *
            ( iit::rbd::Utils::transform(base_X_left_leg_j1_chain, inertiaProps.getCOM_left_leg_l6()));
    

    return tmpSum / inertiaProps.getTotalMass();
}

iit::rbd::Vector3d iit::Walker::getWholeBodyCOM(
    const InertiaProperties& inertiaProps,
    const JointState& q,
    HomogeneousTransforms& ht)
{
    // First updates the coordinate transforms that will be used by the routine
    ht.fr_torso_X_fr_right_leg_l1(q);
    ht.fr_torso_X_fr_left_leg_l1(q);
    ht.fr_right_leg_l1_X_fr_right_leg_l2(q);
    ht.fr_right_leg_l2_X_fr_right_leg_l3(q);
    ht.fr_right_leg_l3_X_fr_right_leg_l4(q);
    ht.fr_right_leg_l4_X_fr_right_leg_l5(q);
    ht.fr_right_leg_l5_X_fr_right_leg_l6(q);
    ht.fr_left_leg_l1_X_fr_left_leg_l2(q);
    ht.fr_left_leg_l2_X_fr_left_leg_l3(q);
    ht.fr_left_leg_l3_X_fr_left_leg_l4(q);
    ht.fr_left_leg_l4_X_fr_left_leg_l5(q);
    ht.fr_left_leg_l5_X_fr_left_leg_l6(q);

    // The actual calculus
    return getWholeBodyCOM(inertiaProps, ht);
}
