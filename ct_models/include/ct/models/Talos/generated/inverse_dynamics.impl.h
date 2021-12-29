// Initialization of static-const data
template <typename TRAIT>
const typename iit::Talos::dyn::tpl::InverseDynamics<TRAIT>::ExtForces
iit::Talos::dyn::tpl::InverseDynamics<TRAIT>::zeroExtForces(Force::Zero());

template <typename TRAIT>
iit::Talos::dyn::tpl::InverseDynamics<TRAIT>::InverseDynamics(IProperties& inertia, MTransforms& transforms) :
    inertiaProps( & inertia ),
    xm( & transforms ),
    leg_left_1_link_I(inertiaProps->getTensor_leg_left_1_link() ),
    leg_left_2_link_I(inertiaProps->getTensor_leg_left_2_link() ),
    leg_left_3_link_I(inertiaProps->getTensor_leg_left_3_link() ),
    leg_left_4_link_I(inertiaProps->getTensor_leg_left_4_link() ),
    leg_left_5_link_I(inertiaProps->getTensor_leg_left_5_link() ),
    leg_left_6_link_I(inertiaProps->getTensor_leg_left_6_link() ),
    leg_right_1_link_I(inertiaProps->getTensor_leg_right_1_link() ),
    leg_right_2_link_I(inertiaProps->getTensor_leg_right_2_link() ),
    leg_right_3_link_I(inertiaProps->getTensor_leg_right_3_link() ),
    leg_right_4_link_I(inertiaProps->getTensor_leg_right_4_link() ),
    leg_right_5_link_I(inertiaProps->getTensor_leg_right_5_link() ),
    leg_right_6_link_I(inertiaProps->getTensor_leg_right_6_link() )
    ,
        base_link_I( inertiaProps->getTensor_base_link() ),
        leg_left_6_link_Ic(leg_left_6_link_I),
        leg_right_6_link_Ic(leg_right_6_link_I)
{
#ifndef EIGEN_NO_DEBUG
    std::cout << "Robot Talos, InverseDynamics<TRAIT>::InverseDynamics()" << std::endl;
    std::cout << "Compiled with Eigen debug active" << std::endl;
#endif
    leg_left_1_link_v.setZero();
    leg_left_2_link_v.setZero();
    leg_left_3_link_v.setZero();
    leg_left_4_link_v.setZero();
    leg_left_5_link_v.setZero();
    leg_left_6_link_v.setZero();
    leg_right_1_link_v.setZero();
    leg_right_2_link_v.setZero();
    leg_right_3_link_v.setZero();
    leg_right_4_link_v.setZero();
    leg_right_5_link_v.setZero();
    leg_right_6_link_v.setZero();

    vcross.setZero();
}

template <typename TRAIT>
void iit::Talos::dyn::tpl::InverseDynamics<TRAIT>::id(
    JointState& jForces, Acceleration& base_link_a,
    const Acceleration& g, const Velocity& base_link_v,
    const JointState& qd, const JointState& qdd,
    const ExtForces& fext)
{
    base_link_Ic = base_link_I;
    leg_left_1_link_Ic = leg_left_1_link_I;
    leg_left_2_link_Ic = leg_left_2_link_I;
    leg_left_3_link_Ic = leg_left_3_link_I;
    leg_left_4_link_Ic = leg_left_4_link_I;
    leg_left_5_link_Ic = leg_left_5_link_I;
    leg_right_1_link_Ic = leg_right_1_link_I;
    leg_right_2_link_Ic = leg_right_2_link_I;
    leg_right_3_link_Ic = leg_right_3_link_I;
    leg_right_4_link_Ic = leg_right_4_link_I;
    leg_right_5_link_Ic = leg_right_5_link_I;

    // First pass, link 'leg_left_1_link'
    leg_left_1_link_v = ((xm->fr_leg_left_1_link_X_fr_base_link) * base_link_v);
    leg_left_1_link_v(iit::rbd::AZ) += qd(LEG_LEFT_1_JOINT);
    
    iit::rbd::motionCrossProductMx<Scalar>(leg_left_1_link_v, vcross);
    
    leg_left_1_link_a = (vcross.col(iit::rbd::AZ) * qd(LEG_LEFT_1_JOINT));
    leg_left_1_link_a(iit::rbd::AZ) += qdd(LEG_LEFT_1_JOINT);
    
    leg_left_1_link_f = leg_left_1_link_I * leg_left_1_link_a + iit::rbd::vxIv(leg_left_1_link_v, leg_left_1_link_I);
    
    // First pass, link 'leg_left_2_link'
    leg_left_2_link_v = ((xm->fr_leg_left_2_link_X_fr_leg_left_1_link) * leg_left_1_link_v);
    leg_left_2_link_v(iit::rbd::AZ) += qd(LEG_LEFT_2_JOINT);
    
    iit::rbd::motionCrossProductMx<Scalar>(leg_left_2_link_v, vcross);
    
    leg_left_2_link_a = (xm->fr_leg_left_2_link_X_fr_leg_left_1_link) * leg_left_1_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_LEFT_2_JOINT);
    leg_left_2_link_a(iit::rbd::AZ) += qdd(LEG_LEFT_2_JOINT);
    
    leg_left_2_link_f = leg_left_2_link_I * leg_left_2_link_a + iit::rbd::vxIv(leg_left_2_link_v, leg_left_2_link_I);
    
    // First pass, link 'leg_left_3_link'
    leg_left_3_link_v = ((xm->fr_leg_left_3_link_X_fr_leg_left_2_link) * leg_left_2_link_v);
    leg_left_3_link_v(iit::rbd::AZ) += qd(LEG_LEFT_3_JOINT);
    
    iit::rbd::motionCrossProductMx<Scalar>(leg_left_3_link_v, vcross);
    
    leg_left_3_link_a = (xm->fr_leg_left_3_link_X_fr_leg_left_2_link) * leg_left_2_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_LEFT_3_JOINT);
    leg_left_3_link_a(iit::rbd::AZ) += qdd(LEG_LEFT_3_JOINT);
    
    leg_left_3_link_f = leg_left_3_link_I * leg_left_3_link_a + iit::rbd::vxIv(leg_left_3_link_v, leg_left_3_link_I);
    
    // First pass, link 'leg_left_4_link'
    leg_left_4_link_v = ((xm->fr_leg_left_4_link_X_fr_leg_left_3_link) * leg_left_3_link_v);
    leg_left_4_link_v(iit::rbd::AZ) += qd(LEG_LEFT_4_JOINT);
    
    iit::rbd::motionCrossProductMx<Scalar>(leg_left_4_link_v, vcross);
    
    leg_left_4_link_a = (xm->fr_leg_left_4_link_X_fr_leg_left_3_link) * leg_left_3_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_LEFT_4_JOINT);
    leg_left_4_link_a(iit::rbd::AZ) += qdd(LEG_LEFT_4_JOINT);
    
    leg_left_4_link_f = leg_left_4_link_I * leg_left_4_link_a + iit::rbd::vxIv(leg_left_4_link_v, leg_left_4_link_I);
    
    // First pass, link 'leg_left_5_link'
    leg_left_5_link_v = ((xm->fr_leg_left_5_link_X_fr_leg_left_4_link) * leg_left_4_link_v);
    leg_left_5_link_v(iit::rbd::AZ) += qd(LEG_LEFT_5_JOINT);
    
    iit::rbd::motionCrossProductMx<Scalar>(leg_left_5_link_v, vcross);
    
    leg_left_5_link_a = (xm->fr_leg_left_5_link_X_fr_leg_left_4_link) * leg_left_4_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_LEFT_5_JOINT);
    leg_left_5_link_a(iit::rbd::AZ) += qdd(LEG_LEFT_5_JOINT);
    
    leg_left_5_link_f = leg_left_5_link_I * leg_left_5_link_a + iit::rbd::vxIv(leg_left_5_link_v, leg_left_5_link_I);
    
    // First pass, link 'leg_left_6_link'
    leg_left_6_link_v = ((xm->fr_leg_left_6_link_X_fr_leg_left_5_link) * leg_left_5_link_v);
    leg_left_6_link_v(iit::rbd::AZ) += qd(LEG_LEFT_6_JOINT);
    
    iit::rbd::motionCrossProductMx<Scalar>(leg_left_6_link_v, vcross);
    
    leg_left_6_link_a = (xm->fr_leg_left_6_link_X_fr_leg_left_5_link) * leg_left_5_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_LEFT_6_JOINT);
    leg_left_6_link_a(iit::rbd::AZ) += qdd(LEG_LEFT_6_JOINT);
    
    leg_left_6_link_f = leg_left_6_link_I * leg_left_6_link_a + iit::rbd::vxIv(leg_left_6_link_v, leg_left_6_link_I);
    
    // First pass, link 'leg_right_1_link'
    leg_right_1_link_v = ((xm->fr_leg_right_1_link_X_fr_base_link) * base_link_v);
    leg_right_1_link_v(iit::rbd::AZ) += qd(LEG_RIGHT_1_JOINT);
    
    iit::rbd::motionCrossProductMx<Scalar>(leg_right_1_link_v, vcross);
    
    leg_right_1_link_a = (vcross.col(iit::rbd::AZ) * qd(LEG_RIGHT_1_JOINT));
    leg_right_1_link_a(iit::rbd::AZ) += qdd(LEG_RIGHT_1_JOINT);
    
    leg_right_1_link_f = leg_right_1_link_I * leg_right_1_link_a + iit::rbd::vxIv(leg_right_1_link_v, leg_right_1_link_I);
    
    // First pass, link 'leg_right_2_link'
    leg_right_2_link_v = ((xm->fr_leg_right_2_link_X_fr_leg_right_1_link) * leg_right_1_link_v);
    leg_right_2_link_v(iit::rbd::AZ) += qd(LEG_RIGHT_2_JOINT);
    
    iit::rbd::motionCrossProductMx<Scalar>(leg_right_2_link_v, vcross);
    
    leg_right_2_link_a = (xm->fr_leg_right_2_link_X_fr_leg_right_1_link) * leg_right_1_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_RIGHT_2_JOINT);
    leg_right_2_link_a(iit::rbd::AZ) += qdd(LEG_RIGHT_2_JOINT);
    
    leg_right_2_link_f = leg_right_2_link_I * leg_right_2_link_a + iit::rbd::vxIv(leg_right_2_link_v, leg_right_2_link_I);
    
    // First pass, link 'leg_right_3_link'
    leg_right_3_link_v = ((xm->fr_leg_right_3_link_X_fr_leg_right_2_link) * leg_right_2_link_v);
    leg_right_3_link_v(iit::rbd::AZ) += qd(LEG_RIGHT_3_JOINT);
    
    iit::rbd::motionCrossProductMx<Scalar>(leg_right_3_link_v, vcross);
    
    leg_right_3_link_a = (xm->fr_leg_right_3_link_X_fr_leg_right_2_link) * leg_right_2_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_RIGHT_3_JOINT);
    leg_right_3_link_a(iit::rbd::AZ) += qdd(LEG_RIGHT_3_JOINT);
    
    leg_right_3_link_f = leg_right_3_link_I * leg_right_3_link_a + iit::rbd::vxIv(leg_right_3_link_v, leg_right_3_link_I);
    
    // First pass, link 'leg_right_4_link'
    leg_right_4_link_v = ((xm->fr_leg_right_4_link_X_fr_leg_right_3_link) * leg_right_3_link_v);
    leg_right_4_link_v(iit::rbd::AZ) += qd(LEG_RIGHT_4_JOINT);
    
    iit::rbd::motionCrossProductMx<Scalar>(leg_right_4_link_v, vcross);
    
    leg_right_4_link_a = (xm->fr_leg_right_4_link_X_fr_leg_right_3_link) * leg_right_3_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_RIGHT_4_JOINT);
    leg_right_4_link_a(iit::rbd::AZ) += qdd(LEG_RIGHT_4_JOINT);
    
    leg_right_4_link_f = leg_right_4_link_I * leg_right_4_link_a + iit::rbd::vxIv(leg_right_4_link_v, leg_right_4_link_I);
    
    // First pass, link 'leg_right_5_link'
    leg_right_5_link_v = ((xm->fr_leg_right_5_link_X_fr_leg_right_4_link) * leg_right_4_link_v);
    leg_right_5_link_v(iit::rbd::AZ) += qd(LEG_RIGHT_5_JOINT);
    
    iit::rbd::motionCrossProductMx<Scalar>(leg_right_5_link_v, vcross);
    
    leg_right_5_link_a = (xm->fr_leg_right_5_link_X_fr_leg_right_4_link) * leg_right_4_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_RIGHT_5_JOINT);
    leg_right_5_link_a(iit::rbd::AZ) += qdd(LEG_RIGHT_5_JOINT);
    
    leg_right_5_link_f = leg_right_5_link_I * leg_right_5_link_a + iit::rbd::vxIv(leg_right_5_link_v, leg_right_5_link_I);
    
    // First pass, link 'leg_right_6_link'
    leg_right_6_link_v = ((xm->fr_leg_right_6_link_X_fr_leg_right_5_link) * leg_right_5_link_v);
    leg_right_6_link_v(iit::rbd::AZ) += qd(LEG_RIGHT_6_JOINT);
    
    iit::rbd::motionCrossProductMx<Scalar>(leg_right_6_link_v, vcross);
    
    leg_right_6_link_a = (xm->fr_leg_right_6_link_X_fr_leg_right_5_link) * leg_right_5_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_RIGHT_6_JOINT);
    leg_right_6_link_a(iit::rbd::AZ) += qdd(LEG_RIGHT_6_JOINT);
    
    leg_right_6_link_f = leg_right_6_link_I * leg_right_6_link_a + iit::rbd::vxIv(leg_right_6_link_v, leg_right_6_link_I);
    
    // The force exerted on the floating base by the links
    base_link_f = iit::rbd::vxIv(base_link_v, base_link_I);
    

    // Add the external forces:
    base_link_f -= fext[BASE_LINK];
    leg_left_1_link_f -= fext[LEG_LEFT_1_LINK];
    leg_left_2_link_f -= fext[LEG_LEFT_2_LINK];
    leg_left_3_link_f -= fext[LEG_LEFT_3_LINK];
    leg_left_4_link_f -= fext[LEG_LEFT_4_LINK];
    leg_left_5_link_f -= fext[LEG_LEFT_5_LINK];
    leg_left_6_link_f -= fext[LEG_LEFT_6_LINK];
    leg_right_1_link_f -= fext[LEG_RIGHT_1_LINK];
    leg_right_2_link_f -= fext[LEG_RIGHT_2_LINK];
    leg_right_3_link_f -= fext[LEG_RIGHT_3_LINK];
    leg_right_4_link_f -= fext[LEG_RIGHT_4_LINK];
    leg_right_5_link_f -= fext[LEG_RIGHT_5_LINK];
    leg_right_6_link_f -= fext[LEG_RIGHT_6_LINK];

    leg_right_5_link_Ic = leg_right_5_link_Ic + (xm->fr_leg_right_6_link_X_fr_leg_right_5_link).transpose() * leg_right_6_link_Ic * (xm->fr_leg_right_6_link_X_fr_leg_right_5_link);
    leg_right_5_link_f = leg_right_5_link_f + (xm->fr_leg_right_6_link_X_fr_leg_right_5_link).transpose() * leg_right_6_link_f;
    
    leg_right_4_link_Ic = leg_right_4_link_Ic + (xm->fr_leg_right_5_link_X_fr_leg_right_4_link).transpose() * leg_right_5_link_Ic * (xm->fr_leg_right_5_link_X_fr_leg_right_4_link);
    leg_right_4_link_f = leg_right_4_link_f + (xm->fr_leg_right_5_link_X_fr_leg_right_4_link).transpose() * leg_right_5_link_f;
    
    leg_right_3_link_Ic = leg_right_3_link_Ic + (xm->fr_leg_right_4_link_X_fr_leg_right_3_link).transpose() * leg_right_4_link_Ic * (xm->fr_leg_right_4_link_X_fr_leg_right_3_link);
    leg_right_3_link_f = leg_right_3_link_f + (xm->fr_leg_right_4_link_X_fr_leg_right_3_link).transpose() * leg_right_4_link_f;
    
    leg_right_2_link_Ic = leg_right_2_link_Ic + (xm->fr_leg_right_3_link_X_fr_leg_right_2_link).transpose() * leg_right_3_link_Ic * (xm->fr_leg_right_3_link_X_fr_leg_right_2_link);
    leg_right_2_link_f = leg_right_2_link_f + (xm->fr_leg_right_3_link_X_fr_leg_right_2_link).transpose() * leg_right_3_link_f;
    
    leg_right_1_link_Ic = leg_right_1_link_Ic + (xm->fr_leg_right_2_link_X_fr_leg_right_1_link).transpose() * leg_right_2_link_Ic * (xm->fr_leg_right_2_link_X_fr_leg_right_1_link);
    leg_right_1_link_f = leg_right_1_link_f + (xm->fr_leg_right_2_link_X_fr_leg_right_1_link).transpose() * leg_right_2_link_f;
    
    base_link_Ic = base_link_Ic + (xm->fr_leg_right_1_link_X_fr_base_link).transpose() * leg_right_1_link_Ic * (xm->fr_leg_right_1_link_X_fr_base_link);
    base_link_f = base_link_f + (xm->fr_leg_right_1_link_X_fr_base_link).transpose() * leg_right_1_link_f;
    
    leg_left_5_link_Ic = leg_left_5_link_Ic + (xm->fr_leg_left_6_link_X_fr_leg_left_5_link).transpose() * leg_left_6_link_Ic * (xm->fr_leg_left_6_link_X_fr_leg_left_5_link);
    leg_left_5_link_f = leg_left_5_link_f + (xm->fr_leg_left_6_link_X_fr_leg_left_5_link).transpose() * leg_left_6_link_f;
    
    leg_left_4_link_Ic = leg_left_4_link_Ic + (xm->fr_leg_left_5_link_X_fr_leg_left_4_link).transpose() * leg_left_5_link_Ic * (xm->fr_leg_left_5_link_X_fr_leg_left_4_link);
    leg_left_4_link_f = leg_left_4_link_f + (xm->fr_leg_left_5_link_X_fr_leg_left_4_link).transpose() * leg_left_5_link_f;
    
    leg_left_3_link_Ic = leg_left_3_link_Ic + (xm->fr_leg_left_4_link_X_fr_leg_left_3_link).transpose() * leg_left_4_link_Ic * (xm->fr_leg_left_4_link_X_fr_leg_left_3_link);
    leg_left_3_link_f = leg_left_3_link_f + (xm->fr_leg_left_4_link_X_fr_leg_left_3_link).transpose() * leg_left_4_link_f;
    
    leg_left_2_link_Ic = leg_left_2_link_Ic + (xm->fr_leg_left_3_link_X_fr_leg_left_2_link).transpose() * leg_left_3_link_Ic * (xm->fr_leg_left_3_link_X_fr_leg_left_2_link);
    leg_left_2_link_f = leg_left_2_link_f + (xm->fr_leg_left_3_link_X_fr_leg_left_2_link).transpose() * leg_left_3_link_f;
    
    leg_left_1_link_Ic = leg_left_1_link_Ic + (xm->fr_leg_left_2_link_X_fr_leg_left_1_link).transpose() * leg_left_2_link_Ic * (xm->fr_leg_left_2_link_X_fr_leg_left_1_link);
    leg_left_1_link_f = leg_left_1_link_f + (xm->fr_leg_left_2_link_X_fr_leg_left_1_link).transpose() * leg_left_2_link_f;
    
    base_link_Ic = base_link_Ic + (xm->fr_leg_left_1_link_X_fr_base_link).transpose() * leg_left_1_link_Ic * (xm->fr_leg_left_1_link_X_fr_base_link);
    base_link_f = base_link_f + (xm->fr_leg_left_1_link_X_fr_base_link).transpose() * leg_left_1_link_f;
    

    // The base acceleration due to the force due to the movement of the links
    base_link_a = - base_link_Ic.inverse() * base_link_f;
    
    leg_left_1_link_a = xm->fr_leg_left_1_link_X_fr_base_link * base_link_a;
    jForces(LEG_LEFT_1_JOINT) = (leg_left_1_link_Ic.row(iit::rbd::AZ) * leg_left_1_link_a + leg_left_1_link_f(iit::rbd::AZ));
    
    leg_left_2_link_a = xm->fr_leg_left_2_link_X_fr_leg_left_1_link * leg_left_1_link_a;
    jForces(LEG_LEFT_2_JOINT) = (leg_left_2_link_Ic.row(iit::rbd::AZ) * leg_left_2_link_a + leg_left_2_link_f(iit::rbd::AZ));
    
    leg_left_3_link_a = xm->fr_leg_left_3_link_X_fr_leg_left_2_link * leg_left_2_link_a;
    jForces(LEG_LEFT_3_JOINT) = (leg_left_3_link_Ic.row(iit::rbd::AZ) * leg_left_3_link_a + leg_left_3_link_f(iit::rbd::AZ));
    
    leg_left_4_link_a = xm->fr_leg_left_4_link_X_fr_leg_left_3_link * leg_left_3_link_a;
    jForces(LEG_LEFT_4_JOINT) = (leg_left_4_link_Ic.row(iit::rbd::AZ) * leg_left_4_link_a + leg_left_4_link_f(iit::rbd::AZ));
    
    leg_left_5_link_a = xm->fr_leg_left_5_link_X_fr_leg_left_4_link * leg_left_4_link_a;
    jForces(LEG_LEFT_5_JOINT) = (leg_left_5_link_Ic.row(iit::rbd::AZ) * leg_left_5_link_a + leg_left_5_link_f(iit::rbd::AZ));
    
    leg_left_6_link_a = xm->fr_leg_left_6_link_X_fr_leg_left_5_link * leg_left_5_link_a;
    jForces(LEG_LEFT_6_JOINT) = (leg_left_6_link_Ic.row(iit::rbd::AZ) * leg_left_6_link_a + leg_left_6_link_f(iit::rbd::AZ));
    
    leg_right_1_link_a = xm->fr_leg_right_1_link_X_fr_base_link * base_link_a;
    jForces(LEG_RIGHT_1_JOINT) = (leg_right_1_link_Ic.row(iit::rbd::AZ) * leg_right_1_link_a + leg_right_1_link_f(iit::rbd::AZ));
    
    leg_right_2_link_a = xm->fr_leg_right_2_link_X_fr_leg_right_1_link * leg_right_1_link_a;
    jForces(LEG_RIGHT_2_JOINT) = (leg_right_2_link_Ic.row(iit::rbd::AZ) * leg_right_2_link_a + leg_right_2_link_f(iit::rbd::AZ));
    
    leg_right_3_link_a = xm->fr_leg_right_3_link_X_fr_leg_right_2_link * leg_right_2_link_a;
    jForces(LEG_RIGHT_3_JOINT) = (leg_right_3_link_Ic.row(iit::rbd::AZ) * leg_right_3_link_a + leg_right_3_link_f(iit::rbd::AZ));
    
    leg_right_4_link_a = xm->fr_leg_right_4_link_X_fr_leg_right_3_link * leg_right_3_link_a;
    jForces(LEG_RIGHT_4_JOINT) = (leg_right_4_link_Ic.row(iit::rbd::AZ) * leg_right_4_link_a + leg_right_4_link_f(iit::rbd::AZ));
    
    leg_right_5_link_a = xm->fr_leg_right_5_link_X_fr_leg_right_4_link * leg_right_4_link_a;
    jForces(LEG_RIGHT_5_JOINT) = (leg_right_5_link_Ic.row(iit::rbd::AZ) * leg_right_5_link_a + leg_right_5_link_f(iit::rbd::AZ));
    
    leg_right_6_link_a = xm->fr_leg_right_6_link_X_fr_leg_right_5_link * leg_right_5_link_a;
    jForces(LEG_RIGHT_6_JOINT) = (leg_right_6_link_Ic.row(iit::rbd::AZ) * leg_right_6_link_a + leg_right_6_link_f(iit::rbd::AZ));
    

    base_link_a += g;
}

template <typename TRAIT>
void iit::Talos::dyn::tpl::InverseDynamics<TRAIT>::G_terms_fully_actuated(
    Force& baseWrench, JointState& jForces,
    const Acceleration& g)
{
    const Acceleration& base_link_a = -g;

    // Link 'leg_left_1_link'
    leg_left_1_link_a = (xm->fr_leg_left_1_link_X_fr_base_link) * base_link_a;
    leg_left_1_link_f = leg_left_1_link_I * leg_left_1_link_a;
    // Link 'leg_left_2_link'
    leg_left_2_link_a = (xm->fr_leg_left_2_link_X_fr_leg_left_1_link) * leg_left_1_link_a;
    leg_left_2_link_f = leg_left_2_link_I * leg_left_2_link_a;
    // Link 'leg_left_3_link'
    leg_left_3_link_a = (xm->fr_leg_left_3_link_X_fr_leg_left_2_link) * leg_left_2_link_a;
    leg_left_3_link_f = leg_left_3_link_I * leg_left_3_link_a;
    // Link 'leg_left_4_link'
    leg_left_4_link_a = (xm->fr_leg_left_4_link_X_fr_leg_left_3_link) * leg_left_3_link_a;
    leg_left_4_link_f = leg_left_4_link_I * leg_left_4_link_a;
    // Link 'leg_left_5_link'
    leg_left_5_link_a = (xm->fr_leg_left_5_link_X_fr_leg_left_4_link) * leg_left_4_link_a;
    leg_left_5_link_f = leg_left_5_link_I * leg_left_5_link_a;
    // Link 'leg_left_6_link'
    leg_left_6_link_a = (xm->fr_leg_left_6_link_X_fr_leg_left_5_link) * leg_left_5_link_a;
    leg_left_6_link_f = leg_left_6_link_I * leg_left_6_link_a;
    // Link 'leg_right_1_link'
    leg_right_1_link_a = (xm->fr_leg_right_1_link_X_fr_base_link) * base_link_a;
    leg_right_1_link_f = leg_right_1_link_I * leg_right_1_link_a;
    // Link 'leg_right_2_link'
    leg_right_2_link_a = (xm->fr_leg_right_2_link_X_fr_leg_right_1_link) * leg_right_1_link_a;
    leg_right_2_link_f = leg_right_2_link_I * leg_right_2_link_a;
    // Link 'leg_right_3_link'
    leg_right_3_link_a = (xm->fr_leg_right_3_link_X_fr_leg_right_2_link) * leg_right_2_link_a;
    leg_right_3_link_f = leg_right_3_link_I * leg_right_3_link_a;
    // Link 'leg_right_4_link'
    leg_right_4_link_a = (xm->fr_leg_right_4_link_X_fr_leg_right_3_link) * leg_right_3_link_a;
    leg_right_4_link_f = leg_right_4_link_I * leg_right_4_link_a;
    // Link 'leg_right_5_link'
    leg_right_5_link_a = (xm->fr_leg_right_5_link_X_fr_leg_right_4_link) * leg_right_4_link_a;
    leg_right_5_link_f = leg_right_5_link_I * leg_right_5_link_a;
    // Link 'leg_right_6_link'
    leg_right_6_link_a = (xm->fr_leg_right_6_link_X_fr_leg_right_5_link) * leg_right_5_link_a;
    leg_right_6_link_f = leg_right_6_link_I * leg_right_6_link_a;

    base_link_f = base_link_I * base_link_a;

    secondPass_fullyActuated(jForces);

    baseWrench = base_link_f;
}

template <typename TRAIT>
void iit::Talos::dyn::tpl::InverseDynamics<TRAIT>::C_terms_fully_actuated(
    Force& baseWrench, JointState& jForces,
    const Velocity& base_link_v, const JointState& qd)
{
    // Link 'leg_left_1_link'
    leg_left_1_link_v = ((xm->fr_leg_left_1_link_X_fr_base_link) * base_link_v);
    leg_left_1_link_v(iit::rbd::AZ) += qd(LEG_LEFT_1_JOINT);
    iit::rbd::motionCrossProductMx<Scalar>(leg_left_1_link_v, vcross);
    leg_left_1_link_a = (vcross.col(iit::rbd::AZ) * qd(LEG_LEFT_1_JOINT));
    leg_left_1_link_f = leg_left_1_link_I * leg_left_1_link_a + iit::rbd::vxIv(leg_left_1_link_v, leg_left_1_link_I);
    
    // Link 'leg_left_2_link'
    leg_left_2_link_v = ((xm->fr_leg_left_2_link_X_fr_leg_left_1_link) * leg_left_1_link_v);
    leg_left_2_link_v(iit::rbd::AZ) += qd(LEG_LEFT_2_JOINT);
    iit::rbd::motionCrossProductMx<Scalar>(leg_left_2_link_v, vcross);
    leg_left_2_link_a = (xm->fr_leg_left_2_link_X_fr_leg_left_1_link) * leg_left_1_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_LEFT_2_JOINT);
    leg_left_2_link_f = leg_left_2_link_I * leg_left_2_link_a + iit::rbd::vxIv(leg_left_2_link_v, leg_left_2_link_I);
    
    // Link 'leg_left_3_link'
    leg_left_3_link_v = ((xm->fr_leg_left_3_link_X_fr_leg_left_2_link) * leg_left_2_link_v);
    leg_left_3_link_v(iit::rbd::AZ) += qd(LEG_LEFT_3_JOINT);
    iit::rbd::motionCrossProductMx<Scalar>(leg_left_3_link_v, vcross);
    leg_left_3_link_a = (xm->fr_leg_left_3_link_X_fr_leg_left_2_link) * leg_left_2_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_LEFT_3_JOINT);
    leg_left_3_link_f = leg_left_3_link_I * leg_left_3_link_a + iit::rbd::vxIv(leg_left_3_link_v, leg_left_3_link_I);
    
    // Link 'leg_left_4_link'
    leg_left_4_link_v = ((xm->fr_leg_left_4_link_X_fr_leg_left_3_link) * leg_left_3_link_v);
    leg_left_4_link_v(iit::rbd::AZ) += qd(LEG_LEFT_4_JOINT);
    iit::rbd::motionCrossProductMx<Scalar>(leg_left_4_link_v, vcross);
    leg_left_4_link_a = (xm->fr_leg_left_4_link_X_fr_leg_left_3_link) * leg_left_3_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_LEFT_4_JOINT);
    leg_left_4_link_f = leg_left_4_link_I * leg_left_4_link_a + iit::rbd::vxIv(leg_left_4_link_v, leg_left_4_link_I);
    
    // Link 'leg_left_5_link'
    leg_left_5_link_v = ((xm->fr_leg_left_5_link_X_fr_leg_left_4_link) * leg_left_4_link_v);
    leg_left_5_link_v(iit::rbd::AZ) += qd(LEG_LEFT_5_JOINT);
    iit::rbd::motionCrossProductMx<Scalar>(leg_left_5_link_v, vcross);
    leg_left_5_link_a = (xm->fr_leg_left_5_link_X_fr_leg_left_4_link) * leg_left_4_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_LEFT_5_JOINT);
    leg_left_5_link_f = leg_left_5_link_I * leg_left_5_link_a + iit::rbd::vxIv(leg_left_5_link_v, leg_left_5_link_I);
    
    // Link 'leg_left_6_link'
    leg_left_6_link_v = ((xm->fr_leg_left_6_link_X_fr_leg_left_5_link) * leg_left_5_link_v);
    leg_left_6_link_v(iit::rbd::AZ) += qd(LEG_LEFT_6_JOINT);
    iit::rbd::motionCrossProductMx<Scalar>(leg_left_6_link_v, vcross);
    leg_left_6_link_a = (xm->fr_leg_left_6_link_X_fr_leg_left_5_link) * leg_left_5_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_LEFT_6_JOINT);
    leg_left_6_link_f = leg_left_6_link_I * leg_left_6_link_a + iit::rbd::vxIv(leg_left_6_link_v, leg_left_6_link_I);
    
    // Link 'leg_right_1_link'
    leg_right_1_link_v = ((xm->fr_leg_right_1_link_X_fr_base_link) * base_link_v);
    leg_right_1_link_v(iit::rbd::AZ) += qd(LEG_RIGHT_1_JOINT);
    iit::rbd::motionCrossProductMx<Scalar>(leg_right_1_link_v, vcross);
    leg_right_1_link_a = (vcross.col(iit::rbd::AZ) * qd(LEG_RIGHT_1_JOINT));
    leg_right_1_link_f = leg_right_1_link_I * leg_right_1_link_a + iit::rbd::vxIv(leg_right_1_link_v, leg_right_1_link_I);
    
    // Link 'leg_right_2_link'
    leg_right_2_link_v = ((xm->fr_leg_right_2_link_X_fr_leg_right_1_link) * leg_right_1_link_v);
    leg_right_2_link_v(iit::rbd::AZ) += qd(LEG_RIGHT_2_JOINT);
    iit::rbd::motionCrossProductMx<Scalar>(leg_right_2_link_v, vcross);
    leg_right_2_link_a = (xm->fr_leg_right_2_link_X_fr_leg_right_1_link) * leg_right_1_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_RIGHT_2_JOINT);
    leg_right_2_link_f = leg_right_2_link_I * leg_right_2_link_a + iit::rbd::vxIv(leg_right_2_link_v, leg_right_2_link_I);
    
    // Link 'leg_right_3_link'
    leg_right_3_link_v = ((xm->fr_leg_right_3_link_X_fr_leg_right_2_link) * leg_right_2_link_v);
    leg_right_3_link_v(iit::rbd::AZ) += qd(LEG_RIGHT_3_JOINT);
    iit::rbd::motionCrossProductMx<Scalar>(leg_right_3_link_v, vcross);
    leg_right_3_link_a = (xm->fr_leg_right_3_link_X_fr_leg_right_2_link) * leg_right_2_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_RIGHT_3_JOINT);
    leg_right_3_link_f = leg_right_3_link_I * leg_right_3_link_a + iit::rbd::vxIv(leg_right_3_link_v, leg_right_3_link_I);
    
    // Link 'leg_right_4_link'
    leg_right_4_link_v = ((xm->fr_leg_right_4_link_X_fr_leg_right_3_link) * leg_right_3_link_v);
    leg_right_4_link_v(iit::rbd::AZ) += qd(LEG_RIGHT_4_JOINT);
    iit::rbd::motionCrossProductMx<Scalar>(leg_right_4_link_v, vcross);
    leg_right_4_link_a = (xm->fr_leg_right_4_link_X_fr_leg_right_3_link) * leg_right_3_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_RIGHT_4_JOINT);
    leg_right_4_link_f = leg_right_4_link_I * leg_right_4_link_a + iit::rbd::vxIv(leg_right_4_link_v, leg_right_4_link_I);
    
    // Link 'leg_right_5_link'
    leg_right_5_link_v = ((xm->fr_leg_right_5_link_X_fr_leg_right_4_link) * leg_right_4_link_v);
    leg_right_5_link_v(iit::rbd::AZ) += qd(LEG_RIGHT_5_JOINT);
    iit::rbd::motionCrossProductMx<Scalar>(leg_right_5_link_v, vcross);
    leg_right_5_link_a = (xm->fr_leg_right_5_link_X_fr_leg_right_4_link) * leg_right_4_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_RIGHT_5_JOINT);
    leg_right_5_link_f = leg_right_5_link_I * leg_right_5_link_a + iit::rbd::vxIv(leg_right_5_link_v, leg_right_5_link_I);
    
    // Link 'leg_right_6_link'
    leg_right_6_link_v = ((xm->fr_leg_right_6_link_X_fr_leg_right_5_link) * leg_right_5_link_v);
    leg_right_6_link_v(iit::rbd::AZ) += qd(LEG_RIGHT_6_JOINT);
    iit::rbd::motionCrossProductMx<Scalar>(leg_right_6_link_v, vcross);
    leg_right_6_link_a = (xm->fr_leg_right_6_link_X_fr_leg_right_5_link) * leg_right_5_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_RIGHT_6_JOINT);
    leg_right_6_link_f = leg_right_6_link_I * leg_right_6_link_a + iit::rbd::vxIv(leg_right_6_link_v, leg_right_6_link_I);
    

    base_link_f = iit::rbd::vxIv(base_link_v, base_link_I);

    secondPass_fullyActuated(jForces);

    baseWrench = base_link_f;
}

template <typename TRAIT>
void iit::Talos::dyn::tpl::InverseDynamics<TRAIT>::id_fully_actuated(
        Force& baseWrench, JointState& jForces,
        const Acceleration& g, const Velocity& base_link_v, const Acceleration& baseAccel,
        const JointState& qd, const JointState& qdd, const ExtForces& fext)
{
    Acceleration base_link_a = baseAccel -g;

    // First pass, link 'leg_left_1_link'
    leg_left_1_link_v = ((xm->fr_leg_left_1_link_X_fr_base_link) * base_link_v);
    leg_left_1_link_v(iit::rbd::AZ) += qd(LEG_LEFT_1_JOINT);
    
    iit::rbd::motionCrossProductMx<Scalar>(leg_left_1_link_v, vcross);
    
    leg_left_1_link_a = (xm->fr_leg_left_1_link_X_fr_base_link) * base_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_LEFT_1_JOINT);
    leg_left_1_link_a(iit::rbd::AZ) += qdd(LEG_LEFT_1_JOINT);
    
    leg_left_1_link_f = leg_left_1_link_I * leg_left_1_link_a + iit::rbd::vxIv(leg_left_1_link_v, leg_left_1_link_I) - fext[LEG_LEFT_1_LINK];
    
    // First pass, link 'leg_left_2_link'
    leg_left_2_link_v = ((xm->fr_leg_left_2_link_X_fr_leg_left_1_link) * leg_left_1_link_v);
    leg_left_2_link_v(iit::rbd::AZ) += qd(LEG_LEFT_2_JOINT);
    
    iit::rbd::motionCrossProductMx<Scalar>(leg_left_2_link_v, vcross);
    
    leg_left_2_link_a = (xm->fr_leg_left_2_link_X_fr_leg_left_1_link) * leg_left_1_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_LEFT_2_JOINT);
    leg_left_2_link_a(iit::rbd::AZ) += qdd(LEG_LEFT_2_JOINT);
    
    leg_left_2_link_f = leg_left_2_link_I * leg_left_2_link_a + iit::rbd::vxIv(leg_left_2_link_v, leg_left_2_link_I) - fext[LEG_LEFT_2_LINK];
    
    // First pass, link 'leg_left_3_link'
    leg_left_3_link_v = ((xm->fr_leg_left_3_link_X_fr_leg_left_2_link) * leg_left_2_link_v);
    leg_left_3_link_v(iit::rbd::AZ) += qd(LEG_LEFT_3_JOINT);
    
    iit::rbd::motionCrossProductMx<Scalar>(leg_left_3_link_v, vcross);
    
    leg_left_3_link_a = (xm->fr_leg_left_3_link_X_fr_leg_left_2_link) * leg_left_2_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_LEFT_3_JOINT);
    leg_left_3_link_a(iit::rbd::AZ) += qdd(LEG_LEFT_3_JOINT);
    
    leg_left_3_link_f = leg_left_3_link_I * leg_left_3_link_a + iit::rbd::vxIv(leg_left_3_link_v, leg_left_3_link_I) - fext[LEG_LEFT_3_LINK];
    
    // First pass, link 'leg_left_4_link'
    leg_left_4_link_v = ((xm->fr_leg_left_4_link_X_fr_leg_left_3_link) * leg_left_3_link_v);
    leg_left_4_link_v(iit::rbd::AZ) += qd(LEG_LEFT_4_JOINT);
    
    iit::rbd::motionCrossProductMx<Scalar>(leg_left_4_link_v, vcross);
    
    leg_left_4_link_a = (xm->fr_leg_left_4_link_X_fr_leg_left_3_link) * leg_left_3_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_LEFT_4_JOINT);
    leg_left_4_link_a(iit::rbd::AZ) += qdd(LEG_LEFT_4_JOINT);
    
    leg_left_4_link_f = leg_left_4_link_I * leg_left_4_link_a + iit::rbd::vxIv(leg_left_4_link_v, leg_left_4_link_I) - fext[LEG_LEFT_4_LINK];
    
    // First pass, link 'leg_left_5_link'
    leg_left_5_link_v = ((xm->fr_leg_left_5_link_X_fr_leg_left_4_link) * leg_left_4_link_v);
    leg_left_5_link_v(iit::rbd::AZ) += qd(LEG_LEFT_5_JOINT);
    
    iit::rbd::motionCrossProductMx<Scalar>(leg_left_5_link_v, vcross);
    
    leg_left_5_link_a = (xm->fr_leg_left_5_link_X_fr_leg_left_4_link) * leg_left_4_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_LEFT_5_JOINT);
    leg_left_5_link_a(iit::rbd::AZ) += qdd(LEG_LEFT_5_JOINT);
    
    leg_left_5_link_f = leg_left_5_link_I * leg_left_5_link_a + iit::rbd::vxIv(leg_left_5_link_v, leg_left_5_link_I) - fext[LEG_LEFT_5_LINK];
    
    // First pass, link 'leg_left_6_link'
    leg_left_6_link_v = ((xm->fr_leg_left_6_link_X_fr_leg_left_5_link) * leg_left_5_link_v);
    leg_left_6_link_v(iit::rbd::AZ) += qd(LEG_LEFT_6_JOINT);
    
    iit::rbd::motionCrossProductMx<Scalar>(leg_left_6_link_v, vcross);
    
    leg_left_6_link_a = (xm->fr_leg_left_6_link_X_fr_leg_left_5_link) * leg_left_5_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_LEFT_6_JOINT);
    leg_left_6_link_a(iit::rbd::AZ) += qdd(LEG_LEFT_6_JOINT);
    
    leg_left_6_link_f = leg_left_6_link_I * leg_left_6_link_a + iit::rbd::vxIv(leg_left_6_link_v, leg_left_6_link_I) - fext[LEG_LEFT_6_LINK];
    
    // First pass, link 'leg_right_1_link'
    leg_right_1_link_v = ((xm->fr_leg_right_1_link_X_fr_base_link) * base_link_v);
    leg_right_1_link_v(iit::rbd::AZ) += qd(LEG_RIGHT_1_JOINT);
    
    iit::rbd::motionCrossProductMx<Scalar>(leg_right_1_link_v, vcross);
    
    leg_right_1_link_a = (xm->fr_leg_right_1_link_X_fr_base_link) * base_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_RIGHT_1_JOINT);
    leg_right_1_link_a(iit::rbd::AZ) += qdd(LEG_RIGHT_1_JOINT);
    
    leg_right_1_link_f = leg_right_1_link_I * leg_right_1_link_a + iit::rbd::vxIv(leg_right_1_link_v, leg_right_1_link_I) - fext[LEG_RIGHT_1_LINK];
    
    // First pass, link 'leg_right_2_link'
    leg_right_2_link_v = ((xm->fr_leg_right_2_link_X_fr_leg_right_1_link) * leg_right_1_link_v);
    leg_right_2_link_v(iit::rbd::AZ) += qd(LEG_RIGHT_2_JOINT);
    
    iit::rbd::motionCrossProductMx<Scalar>(leg_right_2_link_v, vcross);
    
    leg_right_2_link_a = (xm->fr_leg_right_2_link_X_fr_leg_right_1_link) * leg_right_1_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_RIGHT_2_JOINT);
    leg_right_2_link_a(iit::rbd::AZ) += qdd(LEG_RIGHT_2_JOINT);
    
    leg_right_2_link_f = leg_right_2_link_I * leg_right_2_link_a + iit::rbd::vxIv(leg_right_2_link_v, leg_right_2_link_I) - fext[LEG_RIGHT_2_LINK];
    
    // First pass, link 'leg_right_3_link'
    leg_right_3_link_v = ((xm->fr_leg_right_3_link_X_fr_leg_right_2_link) * leg_right_2_link_v);
    leg_right_3_link_v(iit::rbd::AZ) += qd(LEG_RIGHT_3_JOINT);
    
    iit::rbd::motionCrossProductMx<Scalar>(leg_right_3_link_v, vcross);
    
    leg_right_3_link_a = (xm->fr_leg_right_3_link_X_fr_leg_right_2_link) * leg_right_2_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_RIGHT_3_JOINT);
    leg_right_3_link_a(iit::rbd::AZ) += qdd(LEG_RIGHT_3_JOINT);
    
    leg_right_3_link_f = leg_right_3_link_I * leg_right_3_link_a + iit::rbd::vxIv(leg_right_3_link_v, leg_right_3_link_I) - fext[LEG_RIGHT_3_LINK];
    
    // First pass, link 'leg_right_4_link'
    leg_right_4_link_v = ((xm->fr_leg_right_4_link_X_fr_leg_right_3_link) * leg_right_3_link_v);
    leg_right_4_link_v(iit::rbd::AZ) += qd(LEG_RIGHT_4_JOINT);
    
    iit::rbd::motionCrossProductMx<Scalar>(leg_right_4_link_v, vcross);
    
    leg_right_4_link_a = (xm->fr_leg_right_4_link_X_fr_leg_right_3_link) * leg_right_3_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_RIGHT_4_JOINT);
    leg_right_4_link_a(iit::rbd::AZ) += qdd(LEG_RIGHT_4_JOINT);
    
    leg_right_4_link_f = leg_right_4_link_I * leg_right_4_link_a + iit::rbd::vxIv(leg_right_4_link_v, leg_right_4_link_I) - fext[LEG_RIGHT_4_LINK];
    
    // First pass, link 'leg_right_5_link'
    leg_right_5_link_v = ((xm->fr_leg_right_5_link_X_fr_leg_right_4_link) * leg_right_4_link_v);
    leg_right_5_link_v(iit::rbd::AZ) += qd(LEG_RIGHT_5_JOINT);
    
    iit::rbd::motionCrossProductMx<Scalar>(leg_right_5_link_v, vcross);
    
    leg_right_5_link_a = (xm->fr_leg_right_5_link_X_fr_leg_right_4_link) * leg_right_4_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_RIGHT_5_JOINT);
    leg_right_5_link_a(iit::rbd::AZ) += qdd(LEG_RIGHT_5_JOINT);
    
    leg_right_5_link_f = leg_right_5_link_I * leg_right_5_link_a + iit::rbd::vxIv(leg_right_5_link_v, leg_right_5_link_I) - fext[LEG_RIGHT_5_LINK];
    
    // First pass, link 'leg_right_6_link'
    leg_right_6_link_v = ((xm->fr_leg_right_6_link_X_fr_leg_right_5_link) * leg_right_5_link_v);
    leg_right_6_link_v(iit::rbd::AZ) += qd(LEG_RIGHT_6_JOINT);
    
    iit::rbd::motionCrossProductMx<Scalar>(leg_right_6_link_v, vcross);
    
    leg_right_6_link_a = (xm->fr_leg_right_6_link_X_fr_leg_right_5_link) * leg_right_5_link_a + vcross.col(iit::rbd::AZ) * qd(LEG_RIGHT_6_JOINT);
    leg_right_6_link_a(iit::rbd::AZ) += qdd(LEG_RIGHT_6_JOINT);
    
    leg_right_6_link_f = leg_right_6_link_I * leg_right_6_link_a + iit::rbd::vxIv(leg_right_6_link_v, leg_right_6_link_I) - fext[LEG_RIGHT_6_LINK];
    

    // The base
    base_link_f = base_link_I * base_link_a + iit::rbd::vxIv(base_link_v, base_link_I) - fext[BASE_LINK];

    secondPass_fullyActuated(jForces);

    baseWrench = base_link_f;
}

template <typename TRAIT>
void iit::Talos::dyn::tpl::InverseDynamics<TRAIT>::secondPass_fullyActuated(JointState& jForces)
{
    // Link 'leg_right_6_link'
    jForces(LEG_RIGHT_6_JOINT) = leg_right_6_link_f(iit::rbd::AZ);
    leg_right_5_link_f += xm->fr_leg_right_6_link_X_fr_leg_right_5_link.transpose() * leg_right_6_link_f;
    // Link 'leg_right_5_link'
    jForces(LEG_RIGHT_5_JOINT) = leg_right_5_link_f(iit::rbd::AZ);
    leg_right_4_link_f += xm->fr_leg_right_5_link_X_fr_leg_right_4_link.transpose() * leg_right_5_link_f;
    // Link 'leg_right_4_link'
    jForces(LEG_RIGHT_4_JOINT) = leg_right_4_link_f(iit::rbd::AZ);
    leg_right_3_link_f += xm->fr_leg_right_4_link_X_fr_leg_right_3_link.transpose() * leg_right_4_link_f;
    // Link 'leg_right_3_link'
    jForces(LEG_RIGHT_3_JOINT) = leg_right_3_link_f(iit::rbd::AZ);
    leg_right_2_link_f += xm->fr_leg_right_3_link_X_fr_leg_right_2_link.transpose() * leg_right_3_link_f;
    // Link 'leg_right_2_link'
    jForces(LEG_RIGHT_2_JOINT) = leg_right_2_link_f(iit::rbd::AZ);
    leg_right_1_link_f += xm->fr_leg_right_2_link_X_fr_leg_right_1_link.transpose() * leg_right_2_link_f;
    // Link 'leg_right_1_link'
    jForces(LEG_RIGHT_1_JOINT) = leg_right_1_link_f(iit::rbd::AZ);
    base_link_f += xm->fr_leg_right_1_link_X_fr_base_link.transpose() * leg_right_1_link_f;
    // Link 'leg_left_6_link'
    jForces(LEG_LEFT_6_JOINT) = leg_left_6_link_f(iit::rbd::AZ);
    leg_left_5_link_f += xm->fr_leg_left_6_link_X_fr_leg_left_5_link.transpose() * leg_left_6_link_f;
    // Link 'leg_left_5_link'
    jForces(LEG_LEFT_5_JOINT) = leg_left_5_link_f(iit::rbd::AZ);
    leg_left_4_link_f += xm->fr_leg_left_5_link_X_fr_leg_left_4_link.transpose() * leg_left_5_link_f;
    // Link 'leg_left_4_link'
    jForces(LEG_LEFT_4_JOINT) = leg_left_4_link_f(iit::rbd::AZ);
    leg_left_3_link_f += xm->fr_leg_left_4_link_X_fr_leg_left_3_link.transpose() * leg_left_4_link_f;
    // Link 'leg_left_3_link'
    jForces(LEG_LEFT_3_JOINT) = leg_left_3_link_f(iit::rbd::AZ);
    leg_left_2_link_f += xm->fr_leg_left_3_link_X_fr_leg_left_2_link.transpose() * leg_left_3_link_f;
    // Link 'leg_left_2_link'
    jForces(LEG_LEFT_2_JOINT) = leg_left_2_link_f(iit::rbd::AZ);
    leg_left_1_link_f += xm->fr_leg_left_2_link_X_fr_leg_left_1_link.transpose() * leg_left_2_link_f;
    // Link 'leg_left_1_link'
    jForces(LEG_LEFT_1_JOINT) = leg_left_1_link_f(iit::rbd::AZ);
    base_link_f += xm->fr_leg_left_1_link_X_fr_base_link.transpose() * leg_left_1_link_f;
}

