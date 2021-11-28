#include <iit/rbd/utils.h>
#include "miscellaneous.h"

using namespace iit::Franka;
using namespace iit::Franka::dyn;

iit::rbd::Vector3d iit::Franka::getWholeBodyCOM(
    const InertiaProperties& inertiaProps,
    const HomogeneousTransforms& ht)
{
    iit::rbd::Vector3d tmpSum(iit::rbd::Vector3d::Zero());


    HomogeneousTransforms::MatrixType tmpX(HomogeneousTransforms::MatrixType::Identity());
    tmpX = tmpX * ht.fr_table_X_fr_panda_link1;
    tmpSum += inertiaProps.getMass_panda_link1() *
            ( iit::rbd::Utils::transform(tmpX, inertiaProps.getCOM_panda_link1()));
    
    tmpX = tmpX * ht.fr_panda_link1_X_fr_panda_link2;
    tmpSum += inertiaProps.getMass_panda_link2() *
            ( iit::rbd::Utils::transform(tmpX, inertiaProps.getCOM_panda_link2()));
    
    tmpX = tmpX * ht.fr_panda_link2_X_fr_panda_link3;
    tmpSum += inertiaProps.getMass_panda_link3() *
            ( iit::rbd::Utils::transform(tmpX, inertiaProps.getCOM_panda_link3()));
    
    tmpX = tmpX * ht.fr_panda_link3_X_fr_panda_link4;
    tmpSum += inertiaProps.getMass_panda_link4() *
            ( iit::rbd::Utils::transform(tmpX, inertiaProps.getCOM_panda_link4()));
    
    tmpX = tmpX * ht.fr_panda_link4_X_fr_panda_link5;
    tmpSum += inertiaProps.getMass_panda_link5() *
            ( iit::rbd::Utils::transform(tmpX, inertiaProps.getCOM_panda_link5()));
    
    tmpX = tmpX * ht.fr_panda_link5_X_fr_panda_link6;
    tmpSum += inertiaProps.getMass_panda_link6() *
            ( iit::rbd::Utils::transform(tmpX, inertiaProps.getCOM_panda_link6()));
    
    tmpX = tmpX * ht.fr_panda_link6_X_fr_panda_link7;
    tmpSum += inertiaProps.getMass_panda_link7() *
            ( iit::rbd::Utils::transform(tmpX, inertiaProps.getCOM_panda_link7()));
    

    return tmpSum / inertiaProps.getTotalMass();
}

iit::rbd::Vector3d iit::Franka::getWholeBodyCOM(
    const InertiaProperties& inertiaProps,
    const JointState& q,
    HomogeneousTransforms& ht)
{
    // First updates the coordinate transforms that will be used by the routine
    ht.fr_table_X_fr_panda_link1(q);
    ht.fr_panda_link1_X_fr_panda_link2(q);
    ht.fr_panda_link2_X_fr_panda_link3(q);
    ht.fr_panda_link3_X_fr_panda_link4(q);
    ht.fr_panda_link4_X_fr_panda_link5(q);
    ht.fr_panda_link5_X_fr_panda_link6(q);
    ht.fr_panda_link6_X_fr_panda_link7(q);

    // The actual calculus
    return getWholeBodyCOM(inertiaProps, ht);
}
