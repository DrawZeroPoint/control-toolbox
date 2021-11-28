
// Initialization of static-const data
template <typename TRAIT>
const typename iit::Franka::dyn::tpl::ForwardDynamics<TRAIT>::ExtForces
    iit::Franka::dyn::tpl::ForwardDynamics<TRAIT>::zeroExtForces(Force::Zero());

template <typename TRAIT>
iit::Franka::dyn::tpl::ForwardDynamics<TRAIT>::ForwardDynamics(iit::Franka::dyn::tpl::InertiaProperties<TRAIT>& inertia, MTransforms& transforms) :
    inertiaProps( & inertia ),
    motionTransforms( & transforms )
{
    panda_link1_v.setZero();
    panda_link1_c.setZero();
    panda_link2_v.setZero();
    panda_link2_c.setZero();
    panda_link3_v.setZero();
    panda_link3_c.setZero();
    panda_link4_v.setZero();
    panda_link4_c.setZero();
    panda_link5_v.setZero();
    panda_link5_c.setZero();
    panda_link6_v.setZero();
    panda_link6_c.setZero();
    panda_link7_v.setZero();
    panda_link7_c.setZero();

    vcross.setZero();
    Ia_r.setZero();

}

template <typename TRAIT>
void iit::Franka::dyn::tpl::ForwardDynamics<TRAIT>::fd(
    JointState& qdd,
    const JointState& qd,
    const JointState& tau,
    const ExtForces& fext/* = zeroExtForces */)
{
    
    panda_link1_AI = inertiaProps->getTensor_panda_link1();
    panda_link1_p = - fext[PANDA_LINK1];
    panda_link2_AI = inertiaProps->getTensor_panda_link2();
    panda_link2_p = - fext[PANDA_LINK2];
    panda_link3_AI = inertiaProps->getTensor_panda_link3();
    panda_link3_p = - fext[PANDA_LINK3];
    panda_link4_AI = inertiaProps->getTensor_panda_link4();
    panda_link4_p = - fext[PANDA_LINK4];
    panda_link5_AI = inertiaProps->getTensor_panda_link5();
    panda_link5_p = - fext[PANDA_LINK5];
    panda_link6_AI = inertiaProps->getTensor_panda_link6();
    panda_link6_p = - fext[PANDA_LINK6];
    panda_link7_AI = inertiaProps->getTensor_panda_link7();
    panda_link7_p = - fext[PANDA_LINK7];
    // ---------------------- FIRST PASS ---------------------- //
    // Note that, during the first pass, the articulated inertias are really
    //  just the spatial inertia of the links (see assignments above).
    //  Afterwards things change, and articulated inertias shall not be used
    //  in functions which work specifically with spatial inertias.
    
    // + Link panda_link1
    //  - The spatial velocity:
    panda_link1_v(iit::rbd::AZ) = qd(PANDA_JOINT1);
    
    //  - The bias force term:
    panda_link1_p += iit::rbd::vxIv(qd(PANDA_JOINT1), panda_link1_AI);
    
    // + Link panda_link2
    //  - The spatial velocity:
    panda_link2_v = (motionTransforms-> fr_panda_link2_X_fr_panda_link1) * panda_link1_v;
    panda_link2_v(iit::rbd::AZ) += qd(PANDA_JOINT2);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(panda_link2_v, vcross);
    panda_link2_c = vcross.col(iit::rbd::AZ) * qd(PANDA_JOINT2);
    
    //  - The bias force term:
    panda_link2_p += iit::rbd::vxIv(panda_link2_v, panda_link2_AI);
    
    // + Link panda_link3
    //  - The spatial velocity:
    panda_link3_v = (motionTransforms-> fr_panda_link3_X_fr_panda_link2) * panda_link2_v;
    panda_link3_v(iit::rbd::AZ) += qd(PANDA_JOINT3);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(panda_link3_v, vcross);
    panda_link3_c = vcross.col(iit::rbd::AZ) * qd(PANDA_JOINT3);
    
    //  - The bias force term:
    panda_link3_p += iit::rbd::vxIv(panda_link3_v, panda_link3_AI);
    
    // + Link panda_link4
    //  - The spatial velocity:
    panda_link4_v = (motionTransforms-> fr_panda_link4_X_fr_panda_link3) * panda_link3_v;
    panda_link4_v(iit::rbd::AZ) += qd(PANDA_JOINT4);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(panda_link4_v, vcross);
    panda_link4_c = vcross.col(iit::rbd::AZ) * qd(PANDA_JOINT4);
    
    //  - The bias force term:
    panda_link4_p += iit::rbd::vxIv(panda_link4_v, panda_link4_AI);
    
    // + Link panda_link5
    //  - The spatial velocity:
    panda_link5_v = (motionTransforms-> fr_panda_link5_X_fr_panda_link4) * panda_link4_v;
    panda_link5_v(iit::rbd::AZ) += qd(PANDA_JOINT5);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(panda_link5_v, vcross);
    panda_link5_c = vcross.col(iit::rbd::AZ) * qd(PANDA_JOINT5);
    
    //  - The bias force term:
    panda_link5_p += iit::rbd::vxIv(panda_link5_v, panda_link5_AI);
    
    // + Link panda_link6
    //  - The spatial velocity:
    panda_link6_v = (motionTransforms-> fr_panda_link6_X_fr_panda_link5) * panda_link5_v;
    panda_link6_v(iit::rbd::AZ) += qd(PANDA_JOINT6);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(panda_link6_v, vcross);
    panda_link6_c = vcross.col(iit::rbd::AZ) * qd(PANDA_JOINT6);
    
    //  - The bias force term:
    panda_link6_p += iit::rbd::vxIv(panda_link6_v, panda_link6_AI);
    
    // + Link panda_link7
    //  - The spatial velocity:
    panda_link7_v = (motionTransforms-> fr_panda_link7_X_fr_panda_link6) * panda_link6_v;
    panda_link7_v(iit::rbd::AZ) += qd(PANDA_JOINT7);
    
    //  - The velocity-product acceleration term:
    iit::rbd::motionCrossProductMx<Scalar>(panda_link7_v, vcross);
    panda_link7_c = vcross.col(iit::rbd::AZ) * qd(PANDA_JOINT7);
    
    //  - The bias force term:
    panda_link7_p += iit::rbd::vxIv(panda_link7_v, panda_link7_AI);
    
    
    // ---------------------- SECOND PASS ---------------------- //
    Matrix66S IaB;
    Force pa;
    
    // + Link panda_link7
    panda_link7_u = tau(PANDA_JOINT7) - panda_link7_p(iit::rbd::AZ);
    panda_link7_U = panda_link7_AI.col(iit::rbd::AZ);
    panda_link7_D = panda_link7_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(panda_link7_AI, panda_link7_U, panda_link7_D, Ia_r);  // same as: Ia_r = panda_link7_AI - panda_link7_U/panda_link7_D * panda_link7_U.transpose();
    pa = panda_link7_p + Ia_r * panda_link7_c + panda_link7_U * panda_link7_u/panda_link7_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_panda_link7_X_fr_panda_link6, IaB);
    panda_link6_AI += IaB;
    panda_link6_p += (motionTransforms-> fr_panda_link7_X_fr_panda_link6).transpose() * pa;
    
    // + Link panda_link6
    panda_link6_u = tau(PANDA_JOINT6) - panda_link6_p(iit::rbd::AZ);
    panda_link6_U = panda_link6_AI.col(iit::rbd::AZ);
    panda_link6_D = panda_link6_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(panda_link6_AI, panda_link6_U, panda_link6_D, Ia_r);  // same as: Ia_r = panda_link6_AI - panda_link6_U/panda_link6_D * panda_link6_U.transpose();
    pa = panda_link6_p + Ia_r * panda_link6_c + panda_link6_U * panda_link6_u/panda_link6_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_panda_link6_X_fr_panda_link5, IaB);
    panda_link5_AI += IaB;
    panda_link5_p += (motionTransforms-> fr_panda_link6_X_fr_panda_link5).transpose() * pa;
    
    // + Link panda_link5
    panda_link5_u = tau(PANDA_JOINT5) - panda_link5_p(iit::rbd::AZ);
    panda_link5_U = panda_link5_AI.col(iit::rbd::AZ);
    panda_link5_D = panda_link5_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(panda_link5_AI, panda_link5_U, panda_link5_D, Ia_r);  // same as: Ia_r = panda_link5_AI - panda_link5_U/panda_link5_D * panda_link5_U.transpose();
    pa = panda_link5_p + Ia_r * panda_link5_c + panda_link5_U * panda_link5_u/panda_link5_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_panda_link5_X_fr_panda_link4, IaB);
    panda_link4_AI += IaB;
    panda_link4_p += (motionTransforms-> fr_panda_link5_X_fr_panda_link4).transpose() * pa;
    
    // + Link panda_link4
    panda_link4_u = tau(PANDA_JOINT4) - panda_link4_p(iit::rbd::AZ);
    panda_link4_U = panda_link4_AI.col(iit::rbd::AZ);
    panda_link4_D = panda_link4_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(panda_link4_AI, panda_link4_U, panda_link4_D, Ia_r);  // same as: Ia_r = panda_link4_AI - panda_link4_U/panda_link4_D * panda_link4_U.transpose();
    pa = panda_link4_p + Ia_r * panda_link4_c + panda_link4_U * panda_link4_u/panda_link4_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_panda_link4_X_fr_panda_link3, IaB);
    panda_link3_AI += IaB;
    panda_link3_p += (motionTransforms-> fr_panda_link4_X_fr_panda_link3).transpose() * pa;
    
    // + Link panda_link3
    panda_link3_u = tau(PANDA_JOINT3) - panda_link3_p(iit::rbd::AZ);
    panda_link3_U = panda_link3_AI.col(iit::rbd::AZ);
    panda_link3_D = panda_link3_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(panda_link3_AI, panda_link3_U, panda_link3_D, Ia_r);  // same as: Ia_r = panda_link3_AI - panda_link3_U/panda_link3_D * panda_link3_U.transpose();
    pa = panda_link3_p + Ia_r * panda_link3_c + panda_link3_U * panda_link3_u/panda_link3_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_panda_link3_X_fr_panda_link2, IaB);
    panda_link2_AI += IaB;
    panda_link2_p += (motionTransforms-> fr_panda_link3_X_fr_panda_link2).transpose() * pa;
    
    // + Link panda_link2
    panda_link2_u = tau(PANDA_JOINT2) - panda_link2_p(iit::rbd::AZ);
    panda_link2_U = panda_link2_AI.col(iit::rbd::AZ);
    panda_link2_D = panda_link2_U(iit::rbd::AZ);
    
    iit::rbd::compute_Ia_revolute(panda_link2_AI, panda_link2_U, panda_link2_D, Ia_r);  // same as: Ia_r = panda_link2_AI - panda_link2_U/panda_link2_D * panda_link2_U.transpose();
    pa = panda_link2_p + Ia_r * panda_link2_c + panda_link2_U * panda_link2_u/panda_link2_D;
    ctransform_Ia_revolute(Ia_r, motionTransforms-> fr_panda_link2_X_fr_panda_link1, IaB);
    panda_link1_AI += IaB;
    panda_link1_p += (motionTransforms-> fr_panda_link2_X_fr_panda_link1).transpose() * pa;
    
    // + Link panda_link1
    panda_link1_u = tau(PANDA_JOINT1) - panda_link1_p(iit::rbd::AZ);
    panda_link1_U = panda_link1_AI.col(iit::rbd::AZ);
    panda_link1_D = panda_link1_U(iit::rbd::AZ);
    
    
    
    // ---------------------- THIRD PASS ---------------------- //
    panda_link1_a = (motionTransforms-> fr_panda_link1_X_fr_table).col(iit::rbd::LZ) * Scalar(iit::rbd::g);
    qdd(PANDA_JOINT1) = (panda_link1_u - panda_link1_U.dot(panda_link1_a)) / panda_link1_D;
    panda_link1_a(iit::rbd::AZ) += qdd(PANDA_JOINT1);
    
    panda_link2_a = (motionTransforms-> fr_panda_link2_X_fr_panda_link1) * panda_link1_a + panda_link2_c;
    qdd(PANDA_JOINT2) = (panda_link2_u - panda_link2_U.dot(panda_link2_a)) / panda_link2_D;
    panda_link2_a(iit::rbd::AZ) += qdd(PANDA_JOINT2);
    
    panda_link3_a = (motionTransforms-> fr_panda_link3_X_fr_panda_link2) * panda_link2_a + panda_link3_c;
    qdd(PANDA_JOINT3) = (panda_link3_u - panda_link3_U.dot(panda_link3_a)) / panda_link3_D;
    panda_link3_a(iit::rbd::AZ) += qdd(PANDA_JOINT3);
    
    panda_link4_a = (motionTransforms-> fr_panda_link4_X_fr_panda_link3) * panda_link3_a + panda_link4_c;
    qdd(PANDA_JOINT4) = (panda_link4_u - panda_link4_U.dot(panda_link4_a)) / panda_link4_D;
    panda_link4_a(iit::rbd::AZ) += qdd(PANDA_JOINT4);
    
    panda_link5_a = (motionTransforms-> fr_panda_link5_X_fr_panda_link4) * panda_link4_a + panda_link5_c;
    qdd(PANDA_JOINT5) = (panda_link5_u - panda_link5_U.dot(panda_link5_a)) / panda_link5_D;
    panda_link5_a(iit::rbd::AZ) += qdd(PANDA_JOINT5);
    
    panda_link6_a = (motionTransforms-> fr_panda_link6_X_fr_panda_link5) * panda_link5_a + panda_link6_c;
    qdd(PANDA_JOINT6) = (panda_link6_u - panda_link6_U.dot(panda_link6_a)) / panda_link6_D;
    panda_link6_a(iit::rbd::AZ) += qdd(PANDA_JOINT6);
    
    panda_link7_a = (motionTransforms-> fr_panda_link7_X_fr_panda_link6) * panda_link6_a + panda_link7_c;
    qdd(PANDA_JOINT7) = (panda_link7_u - panda_link7_U.dot(panda_link7_a)) / panda_link7_D;
    panda_link7_a(iit::rbd::AZ) += qdd(PANDA_JOINT7);
    
    
}
