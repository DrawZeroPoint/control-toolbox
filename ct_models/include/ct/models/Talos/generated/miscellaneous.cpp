#include <iit/rbd/utils.h>
#include "miscellaneous.h"

using namespace iit::Talos;
using namespace iit::Talos::dyn;

iit::rbd::Vector3d iit::Talos::getWholeBodyCOM(
    const InertiaProperties& inertiaProps,
    const HomogeneousTransforms& ht)
{
    iit::rbd::Vector3d tmpSum(iit::rbd::Vector3d::Zero());

    tmpSum += inertiaProps.getCOM_base_link() * inertiaProps.getMass_base_link();

    HomogeneousTransforms::MatrixType tmpX(HomogeneousTransforms::MatrixType::Identity());
    HomogeneousTransforms::MatrixType base_X_leg_left_1_joint_chain;
    HomogeneousTransforms::MatrixType base_X_leg_right_1_joint_chain;
    
    
    base_X_leg_left_1_joint_chain = tmpX * ht.fr_base_link_X_fr_leg_left_1_link;
    tmpSum += inertiaProps.getMass_leg_left_1_link() *
            ( iit::rbd::Utils::transform(base_X_leg_left_1_joint_chain, inertiaProps.getCOM_leg_left_1_link()));
    
    base_X_leg_left_1_joint_chain = base_X_leg_left_1_joint_chain * ht.fr_leg_left_1_link_X_fr_leg_left_2_link;
    tmpSum += inertiaProps.getMass_leg_left_2_link() *
            ( iit::rbd::Utils::transform(base_X_leg_left_1_joint_chain, inertiaProps.getCOM_leg_left_2_link()));
    
    base_X_leg_left_1_joint_chain = base_X_leg_left_1_joint_chain * ht.fr_leg_left_2_link_X_fr_leg_left_3_link;
    tmpSum += inertiaProps.getMass_leg_left_3_link() *
            ( iit::rbd::Utils::transform(base_X_leg_left_1_joint_chain, inertiaProps.getCOM_leg_left_3_link()));
    
    base_X_leg_left_1_joint_chain = base_X_leg_left_1_joint_chain * ht.fr_leg_left_3_link_X_fr_leg_left_4_link;
    tmpSum += inertiaProps.getMass_leg_left_4_link() *
            ( iit::rbd::Utils::transform(base_X_leg_left_1_joint_chain, inertiaProps.getCOM_leg_left_4_link()));
    
    base_X_leg_left_1_joint_chain = base_X_leg_left_1_joint_chain * ht.fr_leg_left_4_link_X_fr_leg_left_5_link;
    tmpSum += inertiaProps.getMass_leg_left_5_link() *
            ( iit::rbd::Utils::transform(base_X_leg_left_1_joint_chain, inertiaProps.getCOM_leg_left_5_link()));
    
    base_X_leg_left_1_joint_chain = base_X_leg_left_1_joint_chain * ht.fr_leg_left_5_link_X_fr_leg_left_6_link;
    tmpSum += inertiaProps.getMass_leg_left_6_link() *
            ( iit::rbd::Utils::transform(base_X_leg_left_1_joint_chain, inertiaProps.getCOM_leg_left_6_link()));
    
    base_X_leg_right_1_joint_chain = tmpX * ht.fr_base_link_X_fr_leg_right_1_link;
    tmpSum += inertiaProps.getMass_leg_right_1_link() *
            ( iit::rbd::Utils::transform(base_X_leg_right_1_joint_chain, inertiaProps.getCOM_leg_right_1_link()));
    
    base_X_leg_right_1_joint_chain = base_X_leg_right_1_joint_chain * ht.fr_leg_right_1_link_X_fr_leg_right_2_link;
    tmpSum += inertiaProps.getMass_leg_right_2_link() *
            ( iit::rbd::Utils::transform(base_X_leg_right_1_joint_chain, inertiaProps.getCOM_leg_right_2_link()));
    
    base_X_leg_right_1_joint_chain = base_X_leg_right_1_joint_chain * ht.fr_leg_right_2_link_X_fr_leg_right_3_link;
    tmpSum += inertiaProps.getMass_leg_right_3_link() *
            ( iit::rbd::Utils::transform(base_X_leg_right_1_joint_chain, inertiaProps.getCOM_leg_right_3_link()));
    
    base_X_leg_right_1_joint_chain = base_X_leg_right_1_joint_chain * ht.fr_leg_right_3_link_X_fr_leg_right_4_link;
    tmpSum += inertiaProps.getMass_leg_right_4_link() *
            ( iit::rbd::Utils::transform(base_X_leg_right_1_joint_chain, inertiaProps.getCOM_leg_right_4_link()));
    
    base_X_leg_right_1_joint_chain = base_X_leg_right_1_joint_chain * ht.fr_leg_right_4_link_X_fr_leg_right_5_link;
    tmpSum += inertiaProps.getMass_leg_right_5_link() *
            ( iit::rbd::Utils::transform(base_X_leg_right_1_joint_chain, inertiaProps.getCOM_leg_right_5_link()));
    
    base_X_leg_right_1_joint_chain = base_X_leg_right_1_joint_chain * ht.fr_leg_right_5_link_X_fr_leg_right_6_link;
    tmpSum += inertiaProps.getMass_leg_right_6_link() *
            ( iit::rbd::Utils::transform(base_X_leg_right_1_joint_chain, inertiaProps.getCOM_leg_right_6_link()));
    

    return tmpSum / inertiaProps.getTotalMass();
}

iit::rbd::Vector3d iit::Talos::getWholeBodyCOM(
    const InertiaProperties& inertiaProps,
    const JointState& q,
    HomogeneousTransforms& ht)
{
    // First updates the coordinate transforms that will be used by the routine
    ht.fr_base_link_X_fr_leg_left_1_link(q);
    ht.fr_base_link_X_fr_leg_right_1_link(q);
    ht.fr_leg_left_1_link_X_fr_leg_left_2_link(q);
    ht.fr_leg_left_2_link_X_fr_leg_left_3_link(q);
    ht.fr_leg_left_3_link_X_fr_leg_left_4_link(q);
    ht.fr_leg_left_4_link_X_fr_leg_left_5_link(q);
    ht.fr_leg_left_5_link_X_fr_leg_left_6_link(q);
    ht.fr_leg_right_1_link_X_fr_leg_right_2_link(q);
    ht.fr_leg_right_2_link_X_fr_leg_right_3_link(q);
    ht.fr_leg_right_3_link_X_fr_leg_right_4_link(q);
    ht.fr_leg_right_4_link_X_fr_leg_right_5_link(q);
    ht.fr_leg_right_5_link_X_fr_leg_right_6_link(q);

    // The actual calculus
    return getWholeBodyCOM(inertiaProps, ht);
}
