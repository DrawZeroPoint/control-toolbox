
// Initialization of static-const data
template <typename TRAIT>
const typename iit::Talos::dyn::tpl::ForwardDynamics<TRAIT>::ExtForces
    iit::Talos::dyn::tpl::ForwardDynamics<TRAIT>::zeroExtForces(Force::Zero());

template <typename TRAIT>
iit::Talos::dyn::tpl::ForwardDynamics<TRAIT>::ForwardDynamics(iit::Talos::dyn::tpl::InertiaProperties<TRAIT>& inertia, MTransforms& transforms) :
    inertiaProps( & inertia ),
    motionTransforms( & transforms )
{
    leg_left_1_link_v.setZero();
    leg_left_1_link_c.setZero();
    leg_left_2_link_v.setZero();
    leg_left_2_link_c.setZero();
    leg_left_3_link_v.setZero();
    leg_left_3_link_c.setZero();
    leg_left_4_link_v.setZero();
    leg_left_4_link_c.setZero();
    leg_left_5_link_v.setZero();
    leg_left_5_link_c.setZero();
    leg_left_6_link_v.setZero();
    leg_left_6_link_c.setZero();
    leg_right_1_link_v.setZero();
    leg_right_1_link_c.setZero();
    leg_right_2_link_v.setZero();
    leg_right_2_link_c.setZero();
    leg_right_3_link_v.setZero();
    leg_right_3_link_c.setZero();
    leg_right_4_link_v.setZero();
    leg_right_4_link_c.setZero();
    leg_right_5_link_v.setZero();
    leg_right_5_link_c.setZero();
    leg_right_6_link_v.setZero();
    leg_right_6_link_c.setZero();

    vcross.setZero();
    Ia_r.setZero();

}

template <typename TRAIT>
void iit::Talos::dyn::tpl::ForwardDynamics<TRAIT>::fd(
    JointState& qdd,
    Acceleration& base_link_a,
    const Velocity& base_link_v,
    const Acceleration& g,
    const JointState& qd,
    const JointState& tau,
    const ExtForces& fext/* = zeroExtForces */)
{
    
    base_link_AI = inertiaProps->getTensor_base_link();
    base_link_p = - fext[BASE_LINK];
    leg_left_1_link_AI = inertiaProps->getTensor_leg_left_1_link();
    leg_left_1_link_p = - fext[LEG_LEFT_1_LINK];
    leg_left_2_link_AI = inertiaProps->getTensor_leg_left_2_link();
    leg_left_2_link_p = - fext[LEG_LEFT_2_LINK];
    leg_left_3_link_AI = inertiaProps->getTensor_leg_left_3_link();
    leg_left_3_link_p = - fext[LEG_LEFT_3_LINK];
    leg_left_4_link_AI = inertiaProps->getTensor_leg_left_4_link();
    leg_left_4_link_p = - fext[LEG_LEFT_4_LINK];
    leg_left_5_link_AI = inertiaProps->getTensor_leg_left_5_link();
    leg_left_5_link_p = - fext[LEG_LEFT_5_LINK];
    leg_left_6_link_AI = inertiaProps->getTensor_leg_left_6_link();
    leg_left_6_link_p = - fext[LEG_LEFT_6_LINK];
    leg_right_1_link_AI = inertiaProps->getTensor_leg_right_1_link();
    leg_right_1_link_p = - fext[LEG_RIGHT_1_LINK];
    leg_right_2_link_AI = inertiaProps->getTensor_leg_right_2_link();
    leg_right_2_link_p = - fext[LEG_RIGHT_2_LINK];
    leg_right_3_link_AI = inertiaProps->getTensor_leg_right_3_link();
    leg_right_3_link_p = - fext[LEG_RIGHT_3_LINK];
    leg_right_4_link_AI = inertiaProps->getTensor_leg_right_4_link();
    leg_right_4_link_p = - fext[LEG_RIGHT_4_LINK];
    leg_right_5_link_AI = inertiaProps->getTensor_leg_right_5_link();
    leg_right_5_link_p = - fext[LEG_RIGHT_5_LINK];
    leg_right_6_link_AI = inertiaProps->getTensor_leg_right_6_link();
    leg_right_6_link_p = - fext[LEG_RIGHT_6_LINK];
    // ---------------------- FIRST PASS ---------------------- //
    // Note that, during the first pass, the articulated inertias are really
    //  just the spatial inertia of the links (see assignments above).
    //  Afterwards things change, and articulated inertias shall not be used
    //  in functions which work specifically with spatial inertias.
    
    // + Link leg_left_1_link
    //  - The spatial velocity:
    leg_left_1_link_v = (motionTransforms-> fr_leg_left_1_link_X_fr_base_link) * base_link_v;
    leg_left_1_link_v(iit::rbd::AZ) += qd(LEG_LEFT_1_JOINT);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(leg_left_1_link_v, vcross);
    leg_left_1_link_c = vcross.col(iit::rbd::AZ) * qd(LEG_LEFT_1_JOINT);
    
    //  - The bias force term:
    leg_left_1_link_p += iit::rbd::vxIv(leg_left_1_link_v, leg_left_1_link_AI);
    
    // + Link leg_left_2_link
    //  - The spatial velocity:
    leg_left_2_link_v = (motionTransforms-> fr_leg_left_2_link_X_fr_leg_left_1_link) * leg_left_1_link_v;
    leg_left_2_link_v(iit::rbd::AZ) += qd(LEG_LEFT_2_JOINT);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(leg_left_2_link_v, vcross);
    leg_left_2_link_c = vcross.col(iit::rbd::AZ) * qd(LEG_LEFT_2_JOINT);
    
    //  - The bias force term:
    leg_left_2_link_p += iit::rbd::vxIv(leg_left_2_link_v, leg_left_2_link_AI);
    
    // + Link leg_left_3_link
    //  - The spatial velocity:
    leg_left_3_link_v = (motionTransforms-> fr_leg_left_3_link_X_fr_leg_left_2_link) * leg_left_2_link_v;
    leg_left_3_link_v(iit::rbd::AZ) += qd(LEG_LEFT_3_JOINT);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(leg_left_3_link_v, vcross);
    leg_left_3_link_c = vcross.col(iit::rbd::AZ) * qd(LEG_LEFT_3_JOINT);
    
    //  - The bias force term:
    leg_left_3_link_p += iit::rbd::vxIv(leg_left_3_link_v, leg_left_3_link_AI);
    
    // + Link leg_left_4_link
    //  - The spatial velocity:
    leg_left_4_link_v = (motionTransforms-> fr_leg_left_4_link_X_fr_leg_left_3_link) * leg_left_3_link_v;
    leg_left_4_link_v(iit::rbd::AZ) += qd(LEG_LEFT_4_JOINT);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(leg_left_4_link_v, vcross);
    leg_left_4_link_c = vcross.col(iit::rbd::AZ) * qd(LEG_LEFT_4_JOINT);
    
    //  - The bias force term:
    leg_left_4_link_p += iit::rbd::vxIv(leg_left_4_link_v, leg_left_4_link_AI);
    
    // + Link leg_left_5_link
    //  - The spatial velocity:
    leg_left_5_link_v = (motionTransforms-> fr_leg_left_5_link_X_fr_leg_left_4_link) * leg_left_4_link_v;
    leg_left_5_link_v(iit::rbd::AZ) += qd(LEG_LEFT_5_JOINT);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(leg_left_5_link_v, vcross);
    leg_left_5_link_c = vcross.col(iit::rbd::AZ) * qd(LEG_LEFT_5_JOINT);
    
    //  - The bias force term:
    leg_left_5_link_p += iit::rbd::vxIv(leg_left_5_link_v, leg_left_5_link_AI);
    
    // + Link leg_left_6_link
    //  - The spatial velocity:
    leg_left_6_link_v = (motionTransforms-> fr_leg_left_6_link_X_fr_leg_left_5_link) * leg_left_5_link_v;
    leg_left_6_link_v(iit::rbd::AZ) += qd(LEG_LEFT_6_JOINT);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(leg_left_6_link_v, vcross);
    leg_left_6_link_c = vcross.col(iit::rbd::AZ) * qd(LEG_LEFT_6_JOINT);
    
    //  - The bias force term:
    leg_left_6_link_p += iit::rbd::vxIv(leg_left_6_link_v, leg_left_6_link_AI);
    
    // + Link leg_right_1_link
    //  - The spatial velocity:
    leg_right_1_link_v = (motionTransforms-> fr_leg_right_1_link_X_fr_base_link) * base_link_v;
    leg_right_1_link_v(iit::rbd::AZ) += qd(LEG_RIGHT_1_JOINT);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(leg_right_1_link_v, vcross);
    leg_right_1_link_c = vcross.col(iit::rbd::AZ) * qd(LEG_RIGHT_1_JOINT);
    
    //  - The bias force term:
    leg_right_1_link_p += iit::rbd::vxIv(leg_right_1_link_v, leg_right_1_link_AI);
    
    // + Link leg_right_2_link
    //  - The spatial velocity:
    leg_right_2_link_v = (motionTransforms-> fr_leg_right_2_link_X_fr_leg_right_1_link) * leg_right_1_link_v;
    leg_right_2_link_v(iit::rbd::AZ) += qd(LEG_RIGHT_2_JOINT);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(leg_right_2_link_v, vcross);
    leg_right_2_link_c = vcross.col(iit::rbd::AZ) * qd(LEG_RIGHT_2_JOINT);
    
    //  - The bias force term:
    leg_right_2_link_p += iit::rbd::vxIv(leg_right_2_link_v, leg_right_2_link_AI);
    
    // + Link leg_right_3_link
    //  - The spatial velocity:
    leg_right_3_link_v = (motionTransforms-> fr_leg_right_3_link_X_fr_leg_right_2_link) * leg_right_2_link_v;
    leg_right_3_link_v(iit::rbd::AZ) += qd(LEG_RIGHT_3_JOINT);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(leg_right_3_link_v, vcross);
    leg_right_3_link_c = vcross.col(iit::rbd::AZ) * qd(LEG_RIGHT_3_JOINT);
    
    //  - The bias force term:
    leg_right_3_link_p += iit::rbd::vxIv(leg_right_3_link_v, leg_right_3_link_AI);
    
    // + Link leg_right_4_link
    //  - The spatial velocity:
    leg_right_4_link_v = (motionTransforms-> fr_leg_right_4_link_X_fr_leg_right_3_link) * leg_right_3_link_v;
    leg_right_4_link_v(iit::rbd::AZ) += qd(LEG_RIGHT_4_JOINT);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(leg_right_4_link_v, vcross);
    leg_right_4_link_c = vcross.col(iit::rbd::AZ) * qd(LEG_RIGHT_4_JOINT);
    
    //  - The bias force term:
    leg_right_4_link_p += iit::rbd::vxIv(leg_right_4_link_v, leg_right_4_link_AI);
    
    // + Link leg_right_5_link
    //  - The spatial velocity:
    leg_right_5_link_v = (motionTransforms-> fr_leg_right_5_link_X_fr_leg_right_4_link) * leg_right_4_link_v;
    leg_right_5_link_v(iit::rbd::AZ) += qd(LEG_RIGHT_5_JOINT);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(leg_right_5_link_v, vcross);
    leg_right_5_link_c = vcross.col(iit::rbd::AZ) * qd(LEG_RIGHT_5_JOINT);
    
    //  - The bias force term:
    leg_right_5_link_p += iit::rbd::vxIv(leg_right_5_link_v, leg_right_5_link_AI);
    
    // + Link leg_right_6_link
    //  - The spatial velocity:
    leg_right_6_link_v = (motionTransforms-> fr_leg_right_6_link_X_fr_leg_right_5_link) * leg_right_5_link_v;
    leg_right_6_link_v(iit::rbd::AZ) += qd(LEG_RIGHT_6_JOINT);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(leg_right_6_link_v, vcross);
    leg_right_6_link_c = vcross.col(iit::rbd::AZ) * qd(LEG_RIGHT_6_JOINT);
    
    //  - The bias force term:
    leg_right_6_link_p += iit::rbd::vxIv(leg_right_6_link_v, leg_right_6_link_AI);
    
    // + The floating base body
    base_link_p += iit::rbd::vxIv(base_link_v, base_link_AI);
    
    // ---------------------- SECOND PASS ---------------------- //
    Matrix66S IaB;
    Force pa;
    
    // + Link leg_right_6_link
    leg_right_6_link_u = tau(LEG_RIGHT_6_JOINT) - leg_right_6_link_p(iit::rbd::AZ);
    leg_right_6_link_U = leg_right_6_link_AI.col(iit::rbd::AZ);
    leg_right_6_link_D = leg_right_6_link_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(leg_right_6_link_AI, leg_right_6_link_U, leg_right_6_link_D, Ia_r);  // same as: Ia_r = leg_right_6_link_AI - leg_right_6_link_U/leg_right_6_link_D * leg_right_6_link_U.transpose();
    pa = leg_right_6_link_p + Ia_r * leg_right_6_link_c + leg_right_6_link_U * leg_right_6_link_u/leg_right_6_link_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_leg_right_6_link_X_fr_leg_right_5_link, IaB);
    leg_right_5_link_AI += IaB;
    leg_right_5_link_p += (motionTransforms-> fr_leg_right_6_link_X_fr_leg_right_5_link).transpose() * pa;
    
    // + Link leg_right_5_link
    leg_right_5_link_u = tau(LEG_RIGHT_5_JOINT) - leg_right_5_link_p(iit::rbd::AZ);
    leg_right_5_link_U = leg_right_5_link_AI.col(iit::rbd::AZ);
    leg_right_5_link_D = leg_right_5_link_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(leg_right_5_link_AI, leg_right_5_link_U, leg_right_5_link_D, Ia_r);  // same as: Ia_r = leg_right_5_link_AI - leg_right_5_link_U/leg_right_5_link_D * leg_right_5_link_U.transpose();
    pa = leg_right_5_link_p + Ia_r * leg_right_5_link_c + leg_right_5_link_U * leg_right_5_link_u/leg_right_5_link_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_leg_right_5_link_X_fr_leg_right_4_link, IaB);
    leg_right_4_link_AI += IaB;
    leg_right_4_link_p += (motionTransforms-> fr_leg_right_5_link_X_fr_leg_right_4_link).transpose() * pa;
    
    // + Link leg_right_4_link
    leg_right_4_link_u = tau(LEG_RIGHT_4_JOINT) - leg_right_4_link_p(iit::rbd::AZ);
    leg_right_4_link_U = leg_right_4_link_AI.col(iit::rbd::AZ);
    leg_right_4_link_D = leg_right_4_link_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(leg_right_4_link_AI, leg_right_4_link_U, leg_right_4_link_D, Ia_r);  // same as: Ia_r = leg_right_4_link_AI - leg_right_4_link_U/leg_right_4_link_D * leg_right_4_link_U.transpose();
    pa = leg_right_4_link_p + Ia_r * leg_right_4_link_c + leg_right_4_link_U * leg_right_4_link_u/leg_right_4_link_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_leg_right_4_link_X_fr_leg_right_3_link, IaB);
    leg_right_3_link_AI += IaB;
    leg_right_3_link_p += (motionTransforms-> fr_leg_right_4_link_X_fr_leg_right_3_link).transpose() * pa;
    
    // + Link leg_right_3_link
    leg_right_3_link_u = tau(LEG_RIGHT_3_JOINT) - leg_right_3_link_p(iit::rbd::AZ);
    leg_right_3_link_U = leg_right_3_link_AI.col(iit::rbd::AZ);
    leg_right_3_link_D = leg_right_3_link_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(leg_right_3_link_AI, leg_right_3_link_U, leg_right_3_link_D, Ia_r);  // same as: Ia_r = leg_right_3_link_AI - leg_right_3_link_U/leg_right_3_link_D * leg_right_3_link_U.transpose();
    pa = leg_right_3_link_p + Ia_r * leg_right_3_link_c + leg_right_3_link_U * leg_right_3_link_u/leg_right_3_link_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_leg_right_3_link_X_fr_leg_right_2_link, IaB);
    leg_right_2_link_AI += IaB;
    leg_right_2_link_p += (motionTransforms-> fr_leg_right_3_link_X_fr_leg_right_2_link).transpose() * pa;
    
    // + Link leg_right_2_link
    leg_right_2_link_u = tau(LEG_RIGHT_2_JOINT) - leg_right_2_link_p(iit::rbd::AZ);
    leg_right_2_link_U = leg_right_2_link_AI.col(iit::rbd::AZ);
    leg_right_2_link_D = leg_right_2_link_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(leg_right_2_link_AI, leg_right_2_link_U, leg_right_2_link_D, Ia_r);  // same as: Ia_r = leg_right_2_link_AI - leg_right_2_link_U/leg_right_2_link_D * leg_right_2_link_U.transpose();
    pa = leg_right_2_link_p + Ia_r * leg_right_2_link_c + leg_right_2_link_U * leg_right_2_link_u/leg_right_2_link_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_leg_right_2_link_X_fr_leg_right_1_link, IaB);
    leg_right_1_link_AI += IaB;
    leg_right_1_link_p += (motionTransforms-> fr_leg_right_2_link_X_fr_leg_right_1_link).transpose() * pa;
    
    // + Link leg_right_1_link
    leg_right_1_link_u = tau(LEG_RIGHT_1_JOINT) - leg_right_1_link_p(iit::rbd::AZ);
    leg_right_1_link_U = leg_right_1_link_AI.col(iit::rbd::AZ);
    leg_right_1_link_D = leg_right_1_link_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(leg_right_1_link_AI, leg_right_1_link_U, leg_right_1_link_D, Ia_r);  // same as: Ia_r = leg_right_1_link_AI - leg_right_1_link_U/leg_right_1_link_D * leg_right_1_link_U.transpose();
    pa = leg_right_1_link_p + Ia_r * leg_right_1_link_c + leg_right_1_link_U * leg_right_1_link_u/leg_right_1_link_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_leg_right_1_link_X_fr_base_link, IaB);
    base_link_AI += IaB;
    base_link_p += (motionTransforms-> fr_leg_right_1_link_X_fr_base_link).transpose() * pa;
    
    // + Link leg_left_6_link
    leg_left_6_link_u = tau(LEG_LEFT_6_JOINT) - leg_left_6_link_p(iit::rbd::AZ);
    leg_left_6_link_U = leg_left_6_link_AI.col(iit::rbd::AZ);
    leg_left_6_link_D = leg_left_6_link_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(leg_left_6_link_AI, leg_left_6_link_U, leg_left_6_link_D, Ia_r);  // same as: Ia_r = leg_left_6_link_AI - leg_left_6_link_U/leg_left_6_link_D * leg_left_6_link_U.transpose();
    pa = leg_left_6_link_p + Ia_r * leg_left_6_link_c + leg_left_6_link_U * leg_left_6_link_u/leg_left_6_link_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_leg_left_6_link_X_fr_leg_left_5_link, IaB);
    leg_left_5_link_AI += IaB;
    leg_left_5_link_p += (motionTransforms-> fr_leg_left_6_link_X_fr_leg_left_5_link).transpose() * pa;
    
    // + Link leg_left_5_link
    leg_left_5_link_u = tau(LEG_LEFT_5_JOINT) - leg_left_5_link_p(iit::rbd::AZ);
    leg_left_5_link_U = leg_left_5_link_AI.col(iit::rbd::AZ);
    leg_left_5_link_D = leg_left_5_link_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(leg_left_5_link_AI, leg_left_5_link_U, leg_left_5_link_D, Ia_r);  // same as: Ia_r = leg_left_5_link_AI - leg_left_5_link_U/leg_left_5_link_D * leg_left_5_link_U.transpose();
    pa = leg_left_5_link_p + Ia_r * leg_left_5_link_c + leg_left_5_link_U * leg_left_5_link_u/leg_left_5_link_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_leg_left_5_link_X_fr_leg_left_4_link, IaB);
    leg_left_4_link_AI += IaB;
    leg_left_4_link_p += (motionTransforms-> fr_leg_left_5_link_X_fr_leg_left_4_link).transpose() * pa;
    
    // + Link leg_left_4_link
    leg_left_4_link_u = tau(LEG_LEFT_4_JOINT) - leg_left_4_link_p(iit::rbd::AZ);
    leg_left_4_link_U = leg_left_4_link_AI.col(iit::rbd::AZ);
    leg_left_4_link_D = leg_left_4_link_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(leg_left_4_link_AI, leg_left_4_link_U, leg_left_4_link_D, Ia_r);  // same as: Ia_r = leg_left_4_link_AI - leg_left_4_link_U/leg_left_4_link_D * leg_left_4_link_U.transpose();
    pa = leg_left_4_link_p + Ia_r * leg_left_4_link_c + leg_left_4_link_U * leg_left_4_link_u/leg_left_4_link_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_leg_left_4_link_X_fr_leg_left_3_link, IaB);
    leg_left_3_link_AI += IaB;
    leg_left_3_link_p += (motionTransforms-> fr_leg_left_4_link_X_fr_leg_left_3_link).transpose() * pa;
    
    // + Link leg_left_3_link
    leg_left_3_link_u = tau(LEG_LEFT_3_JOINT) - leg_left_3_link_p(iit::rbd::AZ);
    leg_left_3_link_U = leg_left_3_link_AI.col(iit::rbd::AZ);
    leg_left_3_link_D = leg_left_3_link_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(leg_left_3_link_AI, leg_left_3_link_U, leg_left_3_link_D, Ia_r);  // same as: Ia_r = leg_left_3_link_AI - leg_left_3_link_U/leg_left_3_link_D * leg_left_3_link_U.transpose();
    pa = leg_left_3_link_p + Ia_r * leg_left_3_link_c + leg_left_3_link_U * leg_left_3_link_u/leg_left_3_link_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_leg_left_3_link_X_fr_leg_left_2_link, IaB);
    leg_left_2_link_AI += IaB;
    leg_left_2_link_p += (motionTransforms-> fr_leg_left_3_link_X_fr_leg_left_2_link).transpose() * pa;
    
    // + Link leg_left_2_link
    leg_left_2_link_u = tau(LEG_LEFT_2_JOINT) - leg_left_2_link_p(iit::rbd::AZ);
    leg_left_2_link_U = leg_left_2_link_AI.col(iit::rbd::AZ);
    leg_left_2_link_D = leg_left_2_link_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(leg_left_2_link_AI, leg_left_2_link_U, leg_left_2_link_D, Ia_r);  // same as: Ia_r = leg_left_2_link_AI - leg_left_2_link_U/leg_left_2_link_D * leg_left_2_link_U.transpose();
    pa = leg_left_2_link_p + Ia_r * leg_left_2_link_c + leg_left_2_link_U * leg_left_2_link_u/leg_left_2_link_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_leg_left_2_link_X_fr_leg_left_1_link, IaB);
    leg_left_1_link_AI += IaB;
    leg_left_1_link_p += (motionTransforms-> fr_leg_left_2_link_X_fr_leg_left_1_link).transpose() * pa;
    
    // + Link leg_left_1_link
    leg_left_1_link_u = tau(LEG_LEFT_1_JOINT) - leg_left_1_link_p(iit::rbd::AZ);
    leg_left_1_link_U = leg_left_1_link_AI.col(iit::rbd::AZ);
    leg_left_1_link_D = leg_left_1_link_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(leg_left_1_link_AI, leg_left_1_link_U, leg_left_1_link_D, Ia_r);  // same as: Ia_r = leg_left_1_link_AI - leg_left_1_link_U/leg_left_1_link_D * leg_left_1_link_U.transpose();
    pa = leg_left_1_link_p + Ia_r * leg_left_1_link_c + leg_left_1_link_U * leg_left_1_link_u/leg_left_1_link_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_leg_left_1_link_X_fr_base_link, IaB);
    base_link_AI += IaB;
    base_link_p += (motionTransforms-> fr_leg_left_1_link_X_fr_base_link).transpose() * pa;
    
    // + The acceleration of the floating base base_link, without gravity
    base_link_a = - TRAIT::solve(base_link_AI, base_link_p);  // base_link_a = - IA^-1 * base_link_p
    
    // ---------------------- THIRD PASS ---------------------- //
    leg_left_1_link_a = (motionTransforms-> fr_leg_left_1_link_X_fr_base_link) * base_link_a + leg_left_1_link_c;
    qdd(LEG_LEFT_1_JOINT) = (leg_left_1_link_u - leg_left_1_link_U.dot(leg_left_1_link_a)) / leg_left_1_link_D;
    leg_left_1_link_a(iit::rbd::AZ) += qdd(LEG_LEFT_1_JOINT);
    
    leg_left_2_link_a = (motionTransforms-> fr_leg_left_2_link_X_fr_leg_left_1_link) * leg_left_1_link_a + leg_left_2_link_c;
    qdd(LEG_LEFT_2_JOINT) = (leg_left_2_link_u - leg_left_2_link_U.dot(leg_left_2_link_a)) / leg_left_2_link_D;
    leg_left_2_link_a(iit::rbd::AZ) += qdd(LEG_LEFT_2_JOINT);
    
    leg_left_3_link_a = (motionTransforms-> fr_leg_left_3_link_X_fr_leg_left_2_link) * leg_left_2_link_a + leg_left_3_link_c;
    qdd(LEG_LEFT_3_JOINT) = (leg_left_3_link_u - leg_left_3_link_U.dot(leg_left_3_link_a)) / leg_left_3_link_D;
    leg_left_3_link_a(iit::rbd::AZ) += qdd(LEG_LEFT_3_JOINT);
    
    leg_left_4_link_a = (motionTransforms-> fr_leg_left_4_link_X_fr_leg_left_3_link) * leg_left_3_link_a + leg_left_4_link_c;
    qdd(LEG_LEFT_4_JOINT) = (leg_left_4_link_u - leg_left_4_link_U.dot(leg_left_4_link_a)) / leg_left_4_link_D;
    leg_left_4_link_a(iit::rbd::AZ) += qdd(LEG_LEFT_4_JOINT);
    
    leg_left_5_link_a = (motionTransforms-> fr_leg_left_5_link_X_fr_leg_left_4_link) * leg_left_4_link_a + leg_left_5_link_c;
    qdd(LEG_LEFT_5_JOINT) = (leg_left_5_link_u - leg_left_5_link_U.dot(leg_left_5_link_a)) / leg_left_5_link_D;
    leg_left_5_link_a(iit::rbd::AZ) += qdd(LEG_LEFT_5_JOINT);
    
    leg_left_6_link_a = (motionTransforms-> fr_leg_left_6_link_X_fr_leg_left_5_link) * leg_left_5_link_a + leg_left_6_link_c;
    qdd(LEG_LEFT_6_JOINT) = (leg_left_6_link_u - leg_left_6_link_U.dot(leg_left_6_link_a)) / leg_left_6_link_D;
    leg_left_6_link_a(iit::rbd::AZ) += qdd(LEG_LEFT_6_JOINT);
    
    leg_right_1_link_a = (motionTransforms-> fr_leg_right_1_link_X_fr_base_link) * base_link_a + leg_right_1_link_c;
    qdd(LEG_RIGHT_1_JOINT) = (leg_right_1_link_u - leg_right_1_link_U.dot(leg_right_1_link_a)) / leg_right_1_link_D;
    leg_right_1_link_a(iit::rbd::AZ) += qdd(LEG_RIGHT_1_JOINT);
    
    leg_right_2_link_a = (motionTransforms-> fr_leg_right_2_link_X_fr_leg_right_1_link) * leg_right_1_link_a + leg_right_2_link_c;
    qdd(LEG_RIGHT_2_JOINT) = (leg_right_2_link_u - leg_right_2_link_U.dot(leg_right_2_link_a)) / leg_right_2_link_D;
    leg_right_2_link_a(iit::rbd::AZ) += qdd(LEG_RIGHT_2_JOINT);
    
    leg_right_3_link_a = (motionTransforms-> fr_leg_right_3_link_X_fr_leg_right_2_link) * leg_right_2_link_a + leg_right_3_link_c;
    qdd(LEG_RIGHT_3_JOINT) = (leg_right_3_link_u - leg_right_3_link_U.dot(leg_right_3_link_a)) / leg_right_3_link_D;
    leg_right_3_link_a(iit::rbd::AZ) += qdd(LEG_RIGHT_3_JOINT);
    
    leg_right_4_link_a = (motionTransforms-> fr_leg_right_4_link_X_fr_leg_right_3_link) * leg_right_3_link_a + leg_right_4_link_c;
    qdd(LEG_RIGHT_4_JOINT) = (leg_right_4_link_u - leg_right_4_link_U.dot(leg_right_4_link_a)) / leg_right_4_link_D;
    leg_right_4_link_a(iit::rbd::AZ) += qdd(LEG_RIGHT_4_JOINT);
    
    leg_right_5_link_a = (motionTransforms-> fr_leg_right_5_link_X_fr_leg_right_4_link) * leg_right_4_link_a + leg_right_5_link_c;
    qdd(LEG_RIGHT_5_JOINT) = (leg_right_5_link_u - leg_right_5_link_U.dot(leg_right_5_link_a)) / leg_right_5_link_D;
    leg_right_5_link_a(iit::rbd::AZ) += qdd(LEG_RIGHT_5_JOINT);
    
    leg_right_6_link_a = (motionTransforms-> fr_leg_right_6_link_X_fr_leg_right_5_link) * leg_right_5_link_a + leg_right_6_link_c;
    qdd(LEG_RIGHT_6_JOINT) = (leg_right_6_link_u - leg_right_6_link_U.dot(leg_right_6_link_a)) / leg_right_6_link_D;
    leg_right_6_link_a(iit::rbd::AZ) += qdd(LEG_RIGHT_6_JOINT);
    
    
    // + Add gravity to the acceleration of the floating base
    base_link_a += g;
}
