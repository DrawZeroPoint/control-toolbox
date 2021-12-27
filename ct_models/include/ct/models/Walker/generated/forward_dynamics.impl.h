
// Initialization of static-const data
template <typename TRAIT>
const typename iit::Walker::dyn::tpl::ForwardDynamics<TRAIT>::ExtForces
    iit::Walker::dyn::tpl::ForwardDynamics<TRAIT>::zeroExtForces(Force::Zero());

template <typename TRAIT>
iit::Walker::dyn::tpl::ForwardDynamics<TRAIT>::ForwardDynamics(iit::Walker::dyn::tpl::InertiaProperties<TRAIT>& inertia, MTransforms& transforms) :
    inertiaProps( & inertia ),
    motionTransforms( & transforms )
{
    right_leg_l1_v.setZero();
    right_leg_l1_c.setZero();
    right_leg_l2_v.setZero();
    right_leg_l2_c.setZero();
    right_leg_l3_v.setZero();
    right_leg_l3_c.setZero();
    right_leg_l4_v.setZero();
    right_leg_l4_c.setZero();
    right_leg_l5_v.setZero();
    right_leg_l5_c.setZero();
    right_leg_l6_v.setZero();
    right_leg_l6_c.setZero();
    left_leg_l1_v.setZero();
    left_leg_l1_c.setZero();
    left_leg_l2_v.setZero();
    left_leg_l2_c.setZero();
    left_leg_l3_v.setZero();
    left_leg_l3_c.setZero();
    left_leg_l4_v.setZero();
    left_leg_l4_c.setZero();
    left_leg_l5_v.setZero();
    left_leg_l5_c.setZero();
    left_leg_l6_v.setZero();
    left_leg_l6_c.setZero();

    vcross.setZero();
    Ia_r.setZero();

}

template <typename TRAIT>
void iit::Walker::dyn::tpl::ForwardDynamics<TRAIT>::fd(
    JointState& qdd,
    Acceleration& torso_a,
    const Velocity& torso_v,
    const Acceleration& g,
    const JointState& qd,
    const JointState& tau,
    const ExtForces& fext/* = zeroExtForces */)
{
    
    torso_AI = inertiaProps->getTensor_torso();
    torso_p = - fext[TORSO];
    right_leg_l1_AI = inertiaProps->getTensor_right_leg_l1();
    right_leg_l1_p = - fext[RIGHT_LEG_L1];
    right_leg_l2_AI = inertiaProps->getTensor_right_leg_l2();
    right_leg_l2_p = - fext[RIGHT_LEG_L2];
    right_leg_l3_AI = inertiaProps->getTensor_right_leg_l3();
    right_leg_l3_p = - fext[RIGHT_LEG_L3];
    right_leg_l4_AI = inertiaProps->getTensor_right_leg_l4();
    right_leg_l4_p = - fext[RIGHT_LEG_L4];
    right_leg_l5_AI = inertiaProps->getTensor_right_leg_l5();
    right_leg_l5_p = - fext[RIGHT_LEG_L5];
    right_leg_l6_AI = inertiaProps->getTensor_right_leg_l6();
    right_leg_l6_p = - fext[RIGHT_LEG_L6];
    left_leg_l1_AI = inertiaProps->getTensor_left_leg_l1();
    left_leg_l1_p = - fext[LEFT_LEG_L1];
    left_leg_l2_AI = inertiaProps->getTensor_left_leg_l2();
    left_leg_l2_p = - fext[LEFT_LEG_L2];
    left_leg_l3_AI = inertiaProps->getTensor_left_leg_l3();
    left_leg_l3_p = - fext[LEFT_LEG_L3];
    left_leg_l4_AI = inertiaProps->getTensor_left_leg_l4();
    left_leg_l4_p = - fext[LEFT_LEG_L4];
    left_leg_l5_AI = inertiaProps->getTensor_left_leg_l5();
    left_leg_l5_p = - fext[LEFT_LEG_L5];
    left_leg_l6_AI = inertiaProps->getTensor_left_leg_l6();
    left_leg_l6_p = - fext[LEFT_LEG_L6];
    // ---------------------- FIRST PASS ---------------------- //
    // Note that, during the first pass, the articulated inertias are really
    //  just the spatial inertia of the links (see assignments above).
    //  Afterwards things change, and articulated inertias shall not be used
    //  in functions which work specifically with spatial inertias.
    
    // + Link right_leg_l1
    //  - The spatial velocity:
    right_leg_l1_v = (motionTransforms-> fr_right_leg_l1_X_fr_torso) * torso_v;
    right_leg_l1_v(iit::rbd::AZ) += qd(RIGHT_LEG_J1);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(right_leg_l1_v, vcross);
    right_leg_l1_c = vcross.col(iit::rbd::AZ) * qd(RIGHT_LEG_J1);
    
    //  - The bias force term:
    right_leg_l1_p += iit::rbd::vxIv(right_leg_l1_v, right_leg_l1_AI);
    
    // + Link right_leg_l2
    //  - The spatial velocity:
    right_leg_l2_v = (motionTransforms-> fr_right_leg_l2_X_fr_right_leg_l1) * right_leg_l1_v;
    right_leg_l2_v(iit::rbd::AZ) += qd(RIGHT_LEG_J2);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(right_leg_l2_v, vcross);
    right_leg_l2_c = vcross.col(iit::rbd::AZ) * qd(RIGHT_LEG_J2);
    
    //  - The bias force term:
    right_leg_l2_p += iit::rbd::vxIv(right_leg_l2_v, right_leg_l2_AI);
    
    // + Link right_leg_l3
    //  - The spatial velocity:
    right_leg_l3_v = (motionTransforms-> fr_right_leg_l3_X_fr_right_leg_l2) * right_leg_l2_v;
    right_leg_l3_v(iit::rbd::AZ) += qd(RIGHT_LEG_J3);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(right_leg_l3_v, vcross);
    right_leg_l3_c = vcross.col(iit::rbd::AZ) * qd(RIGHT_LEG_J3);
    
    //  - The bias force term:
    right_leg_l3_p += iit::rbd::vxIv(right_leg_l3_v, right_leg_l3_AI);
    
    // + Link right_leg_l4
    //  - The spatial velocity:
    right_leg_l4_v = (motionTransforms-> fr_right_leg_l4_X_fr_right_leg_l3) * right_leg_l3_v;
    right_leg_l4_v(iit::rbd::AZ) += qd(RIGHT_LEG_J4);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(right_leg_l4_v, vcross);
    right_leg_l4_c = vcross.col(iit::rbd::AZ) * qd(RIGHT_LEG_J4);
    
    //  - The bias force term:
    right_leg_l4_p += iit::rbd::vxIv(right_leg_l4_v, right_leg_l4_AI);
    
    // + Link right_leg_l5
    //  - The spatial velocity:
    right_leg_l5_v = (motionTransforms-> fr_right_leg_l5_X_fr_right_leg_l4) * right_leg_l4_v;
    right_leg_l5_v(iit::rbd::AZ) += qd(RIGHT_LEG_J5);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(right_leg_l5_v, vcross);
    right_leg_l5_c = vcross.col(iit::rbd::AZ) * qd(RIGHT_LEG_J5);
    
    //  - The bias force term:
    right_leg_l5_p += iit::rbd::vxIv(right_leg_l5_v, right_leg_l5_AI);
    
    // + Link right_leg_l6
    //  - The spatial velocity:
    right_leg_l6_v = (motionTransforms-> fr_right_leg_l6_X_fr_right_leg_l5) * right_leg_l5_v;
    right_leg_l6_v(iit::rbd::AZ) += qd(RIGHT_LEG_J6);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(right_leg_l6_v, vcross);
    right_leg_l6_c = vcross.col(iit::rbd::AZ) * qd(RIGHT_LEG_J6);
    
    //  - The bias force term:
    right_leg_l6_p += iit::rbd::vxIv(right_leg_l6_v, right_leg_l6_AI);
    
    // + Link left_leg_l1
    //  - The spatial velocity:
    left_leg_l1_v = (motionTransforms-> fr_left_leg_l1_X_fr_torso) * torso_v;
    left_leg_l1_v(iit::rbd::AZ) += qd(LEFT_LEG_J1);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(left_leg_l1_v, vcross);
    left_leg_l1_c = vcross.col(iit::rbd::AZ) * qd(LEFT_LEG_J1);
    
    //  - The bias force term:
    left_leg_l1_p += iit::rbd::vxIv(left_leg_l1_v, left_leg_l1_AI);
    
    // + Link left_leg_l2
    //  - The spatial velocity:
    left_leg_l2_v = (motionTransforms-> fr_left_leg_l2_X_fr_left_leg_l1) * left_leg_l1_v;
    left_leg_l2_v(iit::rbd::AZ) += qd(LEFT_LEG_J2);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(left_leg_l2_v, vcross);
    left_leg_l2_c = vcross.col(iit::rbd::AZ) * qd(LEFT_LEG_J2);
    
    //  - The bias force term:
    left_leg_l2_p += iit::rbd::vxIv(left_leg_l2_v, left_leg_l2_AI);
    
    // + Link left_leg_l3
    //  - The spatial velocity:
    left_leg_l3_v = (motionTransforms-> fr_left_leg_l3_X_fr_left_leg_l2) * left_leg_l2_v;
    left_leg_l3_v(iit::rbd::AZ) += qd(LEFT_LEG_J3);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(left_leg_l3_v, vcross);
    left_leg_l3_c = vcross.col(iit::rbd::AZ) * qd(LEFT_LEG_J3);
    
    //  - The bias force term:
    left_leg_l3_p += iit::rbd::vxIv(left_leg_l3_v, left_leg_l3_AI);
    
    // + Link left_leg_l4
    //  - The spatial velocity:
    left_leg_l4_v = (motionTransforms-> fr_left_leg_l4_X_fr_left_leg_l3) * left_leg_l3_v;
    left_leg_l4_v(iit::rbd::AZ) += qd(LEFT_LEG_J4);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(left_leg_l4_v, vcross);
    left_leg_l4_c = vcross.col(iit::rbd::AZ) * qd(LEFT_LEG_J4);
    
    //  - The bias force term:
    left_leg_l4_p += iit::rbd::vxIv(left_leg_l4_v, left_leg_l4_AI);
    
    // + Link left_leg_l5
    //  - The spatial velocity:
    left_leg_l5_v = (motionTransforms-> fr_left_leg_l5_X_fr_left_leg_l4) * left_leg_l4_v;
    left_leg_l5_v(iit::rbd::AZ) += qd(LEFT_LEG_J5);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(left_leg_l5_v, vcross);
    left_leg_l5_c = vcross.col(iit::rbd::AZ) * qd(LEFT_LEG_J5);
    
    //  - The bias force term:
    left_leg_l5_p += iit::rbd::vxIv(left_leg_l5_v, left_leg_l5_AI);
    
    // + Link left_leg_l6
    //  - The spatial velocity:
    left_leg_l6_v = (motionTransforms-> fr_left_leg_l6_X_fr_left_leg_l5) * left_leg_l5_v;
    left_leg_l6_v(iit::rbd::AZ) += qd(LEFT_LEG_J6);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(left_leg_l6_v, vcross);
    left_leg_l6_c = vcross.col(iit::rbd::AZ) * qd(LEFT_LEG_J6);
    
    //  - The bias force term:
    left_leg_l6_p += iit::rbd::vxIv(left_leg_l6_v, left_leg_l6_AI);
    
    // + The floating base body
    torso_p += iit::rbd::vxIv(torso_v, torso_AI);
    
    // ---------------------- SECOND PASS ---------------------- //
    Matrix66S IaB;
    Force pa;
    
    // + Link left_leg_l6
    left_leg_l6_u = tau(LEFT_LEG_J6) - left_leg_l6_p(iit::rbd::AZ);
    left_leg_l6_U = left_leg_l6_AI.col(iit::rbd::AZ);
    left_leg_l6_D = left_leg_l6_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(left_leg_l6_AI, left_leg_l6_U, left_leg_l6_D, Ia_r);  // same as: Ia_r = left_leg_l6_AI - left_leg_l6_U/left_leg_l6_D * left_leg_l6_U.transpose();
    pa = left_leg_l6_p + Ia_r * left_leg_l6_c + left_leg_l6_U * left_leg_l6_u/left_leg_l6_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_left_leg_l6_X_fr_left_leg_l5, IaB);
    left_leg_l5_AI += IaB;
    left_leg_l5_p += (motionTransforms-> fr_left_leg_l6_X_fr_left_leg_l5).transpose() * pa;
    
    // + Link left_leg_l5
    left_leg_l5_u = tau(LEFT_LEG_J5) - left_leg_l5_p(iit::rbd::AZ);
    left_leg_l5_U = left_leg_l5_AI.col(iit::rbd::AZ);
    left_leg_l5_D = left_leg_l5_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(left_leg_l5_AI, left_leg_l5_U, left_leg_l5_D, Ia_r);  // same as: Ia_r = left_leg_l5_AI - left_leg_l5_U/left_leg_l5_D * left_leg_l5_U.transpose();
    pa = left_leg_l5_p + Ia_r * left_leg_l5_c + left_leg_l5_U * left_leg_l5_u/left_leg_l5_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_left_leg_l5_X_fr_left_leg_l4, IaB);
    left_leg_l4_AI += IaB;
    left_leg_l4_p += (motionTransforms-> fr_left_leg_l5_X_fr_left_leg_l4).transpose() * pa;
    
    // + Link left_leg_l4
    left_leg_l4_u = tau(LEFT_LEG_J4) - left_leg_l4_p(iit::rbd::AZ);
    left_leg_l4_U = left_leg_l4_AI.col(iit::rbd::AZ);
    left_leg_l4_D = left_leg_l4_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(left_leg_l4_AI, left_leg_l4_U, left_leg_l4_D, Ia_r);  // same as: Ia_r = left_leg_l4_AI - left_leg_l4_U/left_leg_l4_D * left_leg_l4_U.transpose();
    pa = left_leg_l4_p + Ia_r * left_leg_l4_c + left_leg_l4_U * left_leg_l4_u/left_leg_l4_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_left_leg_l4_X_fr_left_leg_l3, IaB);
    left_leg_l3_AI += IaB;
    left_leg_l3_p += (motionTransforms-> fr_left_leg_l4_X_fr_left_leg_l3).transpose() * pa;
    
    // + Link left_leg_l3
    left_leg_l3_u = tau(LEFT_LEG_J3) - left_leg_l3_p(iit::rbd::AZ);
    left_leg_l3_U = left_leg_l3_AI.col(iit::rbd::AZ);
    left_leg_l3_D = left_leg_l3_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(left_leg_l3_AI, left_leg_l3_U, left_leg_l3_D, Ia_r);  // same as: Ia_r = left_leg_l3_AI - left_leg_l3_U/left_leg_l3_D * left_leg_l3_U.transpose();
    pa = left_leg_l3_p + Ia_r * left_leg_l3_c + left_leg_l3_U * left_leg_l3_u/left_leg_l3_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_left_leg_l3_X_fr_left_leg_l2, IaB);
    left_leg_l2_AI += IaB;
    left_leg_l2_p += (motionTransforms-> fr_left_leg_l3_X_fr_left_leg_l2).transpose() * pa;
    
    // + Link left_leg_l2
    left_leg_l2_u = tau(LEFT_LEG_J2) - left_leg_l2_p(iit::rbd::AZ);
    left_leg_l2_U = left_leg_l2_AI.col(iit::rbd::AZ);
    left_leg_l2_D = left_leg_l2_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(left_leg_l2_AI, left_leg_l2_U, left_leg_l2_D, Ia_r);  // same as: Ia_r = left_leg_l2_AI - left_leg_l2_U/left_leg_l2_D * left_leg_l2_U.transpose();
    pa = left_leg_l2_p + Ia_r * left_leg_l2_c + left_leg_l2_U * left_leg_l2_u/left_leg_l2_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_left_leg_l2_X_fr_left_leg_l1, IaB);
    left_leg_l1_AI += IaB;
    left_leg_l1_p += (motionTransforms-> fr_left_leg_l2_X_fr_left_leg_l1).transpose() * pa;
    
    // + Link left_leg_l1
    left_leg_l1_u = tau(LEFT_LEG_J1) - left_leg_l1_p(iit::rbd::AZ);
    left_leg_l1_U = left_leg_l1_AI.col(iit::rbd::AZ);
    left_leg_l1_D = left_leg_l1_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(left_leg_l1_AI, left_leg_l1_U, left_leg_l1_D, Ia_r);  // same as: Ia_r = left_leg_l1_AI - left_leg_l1_U/left_leg_l1_D * left_leg_l1_U.transpose();
    pa = left_leg_l1_p + Ia_r * left_leg_l1_c + left_leg_l1_U * left_leg_l1_u/left_leg_l1_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_left_leg_l1_X_fr_torso, IaB);
    torso_AI += IaB;
    torso_p += (motionTransforms-> fr_left_leg_l1_X_fr_torso).transpose() * pa;
    
    // + Link right_leg_l6
    right_leg_l6_u = tau(RIGHT_LEG_J6) - right_leg_l6_p(iit::rbd::AZ);
    right_leg_l6_U = right_leg_l6_AI.col(iit::rbd::AZ);
    right_leg_l6_D = right_leg_l6_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(right_leg_l6_AI, right_leg_l6_U, right_leg_l6_D, Ia_r);  // same as: Ia_r = right_leg_l6_AI - right_leg_l6_U/right_leg_l6_D * right_leg_l6_U.transpose();
    pa = right_leg_l6_p + Ia_r * right_leg_l6_c + right_leg_l6_U * right_leg_l6_u/right_leg_l6_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_right_leg_l6_X_fr_right_leg_l5, IaB);
    right_leg_l5_AI += IaB;
    right_leg_l5_p += (motionTransforms-> fr_right_leg_l6_X_fr_right_leg_l5).transpose() * pa;
    
    // + Link right_leg_l5
    right_leg_l5_u = tau(RIGHT_LEG_J5) - right_leg_l5_p(iit::rbd::AZ);
    right_leg_l5_U = right_leg_l5_AI.col(iit::rbd::AZ);
    right_leg_l5_D = right_leg_l5_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(right_leg_l5_AI, right_leg_l5_U, right_leg_l5_D, Ia_r);  // same as: Ia_r = right_leg_l5_AI - right_leg_l5_U/right_leg_l5_D * right_leg_l5_U.transpose();
    pa = right_leg_l5_p + Ia_r * right_leg_l5_c + right_leg_l5_U * right_leg_l5_u/right_leg_l5_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_right_leg_l5_X_fr_right_leg_l4, IaB);
    right_leg_l4_AI += IaB;
    right_leg_l4_p += (motionTransforms-> fr_right_leg_l5_X_fr_right_leg_l4).transpose() * pa;
    
    // + Link right_leg_l4
    right_leg_l4_u = tau(RIGHT_LEG_J4) - right_leg_l4_p(iit::rbd::AZ);
    right_leg_l4_U = right_leg_l4_AI.col(iit::rbd::AZ);
    right_leg_l4_D = right_leg_l4_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(right_leg_l4_AI, right_leg_l4_U, right_leg_l4_D, Ia_r);  // same as: Ia_r = right_leg_l4_AI - right_leg_l4_U/right_leg_l4_D * right_leg_l4_U.transpose();
    pa = right_leg_l4_p + Ia_r * right_leg_l4_c + right_leg_l4_U * right_leg_l4_u/right_leg_l4_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_right_leg_l4_X_fr_right_leg_l3, IaB);
    right_leg_l3_AI += IaB;
    right_leg_l3_p += (motionTransforms-> fr_right_leg_l4_X_fr_right_leg_l3).transpose() * pa;
    
    // + Link right_leg_l3
    right_leg_l3_u = tau(RIGHT_LEG_J3) - right_leg_l3_p(iit::rbd::AZ);
    right_leg_l3_U = right_leg_l3_AI.col(iit::rbd::AZ);
    right_leg_l3_D = right_leg_l3_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(right_leg_l3_AI, right_leg_l3_U, right_leg_l3_D, Ia_r);  // same as: Ia_r = right_leg_l3_AI - right_leg_l3_U/right_leg_l3_D * right_leg_l3_U.transpose();
    pa = right_leg_l3_p + Ia_r * right_leg_l3_c + right_leg_l3_U * right_leg_l3_u/right_leg_l3_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_right_leg_l3_X_fr_right_leg_l2, IaB);
    right_leg_l2_AI += IaB;
    right_leg_l2_p += (motionTransforms-> fr_right_leg_l3_X_fr_right_leg_l2).transpose() * pa;
    
    // + Link right_leg_l2
    right_leg_l2_u = tau(RIGHT_LEG_J2) - right_leg_l2_p(iit::rbd::AZ);
    right_leg_l2_U = right_leg_l2_AI.col(iit::rbd::AZ);
    right_leg_l2_D = right_leg_l2_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(right_leg_l2_AI, right_leg_l2_U, right_leg_l2_D, Ia_r);  // same as: Ia_r = right_leg_l2_AI - right_leg_l2_U/right_leg_l2_D * right_leg_l2_U.transpose();
    pa = right_leg_l2_p + Ia_r * right_leg_l2_c + right_leg_l2_U * right_leg_l2_u/right_leg_l2_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_right_leg_l2_X_fr_right_leg_l1, IaB);
    right_leg_l1_AI += IaB;
    right_leg_l1_p += (motionTransforms-> fr_right_leg_l2_X_fr_right_leg_l1).transpose() * pa;
    
    // + Link right_leg_l1
    right_leg_l1_u = tau(RIGHT_LEG_J1) - right_leg_l1_p(iit::rbd::AZ);
    right_leg_l1_U = right_leg_l1_AI.col(iit::rbd::AZ);
    right_leg_l1_D = right_leg_l1_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(right_leg_l1_AI, right_leg_l1_U, right_leg_l1_D, Ia_r);  // same as: Ia_r = right_leg_l1_AI - right_leg_l1_U/right_leg_l1_D * right_leg_l1_U.transpose();
    pa = right_leg_l1_p + Ia_r * right_leg_l1_c + right_leg_l1_U * right_leg_l1_u/right_leg_l1_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_right_leg_l1_X_fr_torso, IaB);
    torso_AI += IaB;
    torso_p += (motionTransforms-> fr_right_leg_l1_X_fr_torso).transpose() * pa;
    
    // + The acceleration of the floating base torso, without gravity
    torso_a = - TRAIT::solve(torso_AI, torso_p);  // torso_a = - IA^-1 * torso_p
    
    // ---------------------- THIRD PASS ---------------------- //
    right_leg_l1_a = (motionTransforms-> fr_right_leg_l1_X_fr_torso) * torso_a + right_leg_l1_c;
    qdd(RIGHT_LEG_J1) = (right_leg_l1_u - right_leg_l1_U.dot(right_leg_l1_a)) / right_leg_l1_D;
    right_leg_l1_a(iit::rbd::AZ) += qdd(RIGHT_LEG_J1);
    
    right_leg_l2_a = (motionTransforms-> fr_right_leg_l2_X_fr_right_leg_l1) * right_leg_l1_a + right_leg_l2_c;
    qdd(RIGHT_LEG_J2) = (right_leg_l2_u - right_leg_l2_U.dot(right_leg_l2_a)) / right_leg_l2_D;
    right_leg_l2_a(iit::rbd::AZ) += qdd(RIGHT_LEG_J2);
    
    right_leg_l3_a = (motionTransforms-> fr_right_leg_l3_X_fr_right_leg_l2) * right_leg_l2_a + right_leg_l3_c;
    qdd(RIGHT_LEG_J3) = (right_leg_l3_u - right_leg_l3_U.dot(right_leg_l3_a)) / right_leg_l3_D;
    right_leg_l3_a(iit::rbd::AZ) += qdd(RIGHT_LEG_J3);
    
    right_leg_l4_a = (motionTransforms-> fr_right_leg_l4_X_fr_right_leg_l3) * right_leg_l3_a + right_leg_l4_c;
    qdd(RIGHT_LEG_J4) = (right_leg_l4_u - right_leg_l4_U.dot(right_leg_l4_a)) / right_leg_l4_D;
    right_leg_l4_a(iit::rbd::AZ) += qdd(RIGHT_LEG_J4);
    
    right_leg_l5_a = (motionTransforms-> fr_right_leg_l5_X_fr_right_leg_l4) * right_leg_l4_a + right_leg_l5_c;
    qdd(RIGHT_LEG_J5) = (right_leg_l5_u - right_leg_l5_U.dot(right_leg_l5_a)) / right_leg_l5_D;
    right_leg_l5_a(iit::rbd::AZ) += qdd(RIGHT_LEG_J5);
    
    right_leg_l6_a = (motionTransforms-> fr_right_leg_l6_X_fr_right_leg_l5) * right_leg_l5_a + right_leg_l6_c;
    qdd(RIGHT_LEG_J6) = (right_leg_l6_u - right_leg_l6_U.dot(right_leg_l6_a)) / right_leg_l6_D;
    right_leg_l6_a(iit::rbd::AZ) += qdd(RIGHT_LEG_J6);
    
    left_leg_l1_a = (motionTransforms-> fr_left_leg_l1_X_fr_torso) * torso_a + left_leg_l1_c;
    qdd(LEFT_LEG_J1) = (left_leg_l1_u - left_leg_l1_U.dot(left_leg_l1_a)) / left_leg_l1_D;
    left_leg_l1_a(iit::rbd::AZ) += qdd(LEFT_LEG_J1);
    
    left_leg_l2_a = (motionTransforms-> fr_left_leg_l2_X_fr_left_leg_l1) * left_leg_l1_a + left_leg_l2_c;
    qdd(LEFT_LEG_J2) = (left_leg_l2_u - left_leg_l2_U.dot(left_leg_l2_a)) / left_leg_l2_D;
    left_leg_l2_a(iit::rbd::AZ) += qdd(LEFT_LEG_J2);
    
    left_leg_l3_a = (motionTransforms-> fr_left_leg_l3_X_fr_left_leg_l2) * left_leg_l2_a + left_leg_l3_c;
    qdd(LEFT_LEG_J3) = (left_leg_l3_u - left_leg_l3_U.dot(left_leg_l3_a)) / left_leg_l3_D;
    left_leg_l3_a(iit::rbd::AZ) += qdd(LEFT_LEG_J3);
    
    left_leg_l4_a = (motionTransforms-> fr_left_leg_l4_X_fr_left_leg_l3) * left_leg_l3_a + left_leg_l4_c;
    qdd(LEFT_LEG_J4) = (left_leg_l4_u - left_leg_l4_U.dot(left_leg_l4_a)) / left_leg_l4_D;
    left_leg_l4_a(iit::rbd::AZ) += qdd(LEFT_LEG_J4);
    
    left_leg_l5_a = (motionTransforms-> fr_left_leg_l5_X_fr_left_leg_l4) * left_leg_l4_a + left_leg_l5_c;
    qdd(LEFT_LEG_J5) = (left_leg_l5_u - left_leg_l5_U.dot(left_leg_l5_a)) / left_leg_l5_D;
    left_leg_l5_a(iit::rbd::AZ) += qdd(LEFT_LEG_J5);
    
    left_leg_l6_a = (motionTransforms-> fr_left_leg_l6_X_fr_left_leg_l5) * left_leg_l5_a + left_leg_l6_c;
    qdd(LEFT_LEG_J6) = (left_leg_l6_u - left_leg_l6_U.dot(left_leg_l6_a)) / left_leg_l6_D;
    left_leg_l6_a(iit::rbd::AZ) += qdd(LEFT_LEG_J6);
    
    
    // + Add gravity to the acceleration of the floating base
    torso_a += g;
}
