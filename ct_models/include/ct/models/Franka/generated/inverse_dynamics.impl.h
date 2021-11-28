// Initialization of static-const data
template <typename TRAIT>
const typename iit::Franka::dyn::tpl::InverseDynamics<TRAIT>::ExtForces
iit::Franka::dyn::tpl::InverseDynamics<TRAIT>::zeroExtForces(Force::Zero());

template <typename TRAIT>
iit::Franka::dyn::tpl::InverseDynamics<TRAIT>::InverseDynamics(IProperties& inertia, MTransforms& transforms) :
    inertiaProps( & inertia ),
    xm( & transforms ),
    panda_link1_I(inertiaProps->getTensor_panda_link1() ),
    panda_link2_I(inertiaProps->getTensor_panda_link2() ),
    panda_link3_I(inertiaProps->getTensor_panda_link3() ),
    panda_link4_I(inertiaProps->getTensor_panda_link4() ),
    panda_link5_I(inertiaProps->getTensor_panda_link5() ),
    panda_link6_I(inertiaProps->getTensor_panda_link6() ),
    panda_link7_I(inertiaProps->getTensor_panda_link7() )
    {
#ifndef EIGEN_NO_DEBUG
    std::cout << "Robot Franka, InverseDynamics<TRAIT>::InverseDynamics()" << std::endl;
    std::cout << "Compiled with Eigen debug active" << std::endl;
#endif
    panda_link1_v.setZero();
    panda_link2_v.setZero();
    panda_link3_v.setZero();
    panda_link4_v.setZero();
    panda_link5_v.setZero();
    panda_link6_v.setZero();
    panda_link7_v.setZero();

    vcross.setZero();
}

template <typename TRAIT>
void iit::Franka::dyn::tpl::InverseDynamics<TRAIT>::id(
    JointState& jForces,
    const JointState& qd, const JointState& qdd,
    const ExtForces& fext)
{
    firstPass(qd, qdd, fext);
    secondPass(jForces);
}

template <typename TRAIT>
void iit::Franka::dyn::tpl::InverseDynamics<TRAIT>::G_terms(JointState& jForces)
{
    // Link 'panda_link1'
    panda_link1_a = (xm->fr_panda_link1_X_fr_table).col(iit::rbd::LZ) * Scalar(iit::rbd::g);
    panda_link1_f = panda_link1_I * panda_link1_a;
    // Link 'panda_link2'
    panda_link2_a = (xm->fr_panda_link2_X_fr_panda_link1) * panda_link1_a;
    panda_link2_f = panda_link2_I * panda_link2_a;
    // Link 'panda_link3'
    panda_link3_a = (xm->fr_panda_link3_X_fr_panda_link2) * panda_link2_a;
    panda_link3_f = panda_link3_I * panda_link3_a;
    // Link 'panda_link4'
    panda_link4_a = (xm->fr_panda_link4_X_fr_panda_link3) * panda_link3_a;
    panda_link4_f = panda_link4_I * panda_link4_a;
    // Link 'panda_link5'
    panda_link5_a = (xm->fr_panda_link5_X_fr_panda_link4) * panda_link4_a;
    panda_link5_f = panda_link5_I * panda_link5_a;
    // Link 'panda_link6'
    panda_link6_a = (xm->fr_panda_link6_X_fr_panda_link5) * panda_link5_a;
    panda_link6_f = panda_link6_I * panda_link6_a;
    // Link 'panda_link7'
    panda_link7_a = (xm->fr_panda_link7_X_fr_panda_link6) * panda_link6_a;
    panda_link7_f = panda_link7_I * panda_link7_a;

    secondPass(jForces);
}

template <typename TRAIT>
void iit::Franka::dyn::tpl::InverseDynamics<TRAIT>::C_terms(JointState& jForces, const JointState& qd)
{
    // Link 'panda_link1'
    panda_link1_v(iit::rbd::AZ) = qd(PANDA_JOINT1);   // panda_link1_v = vJ, for the first link of a fixed base robot
    
    panda_link1_f = iit::rbd::vxIv(qd(PANDA_JOINT1), panda_link1_I);
    
    // Link 'panda_link2'
    panda_link2_v = ((xm->fr_panda_link2_X_fr_panda_link1) * panda_link1_v);
    panda_link2_v(iit::rbd::AZ) += qd(PANDA_JOINT2);
    
    iit::rbd::motionCrossProductMx<Scalar>(panda_link2_v, vcross);
    
    panda_link2_a = (vcross.col(iit::rbd::AZ) * qd(PANDA_JOINT2));
    
    panda_link2_f = panda_link2_I * panda_link2_a + iit::rbd::vxIv(panda_link2_v, panda_link2_I);
    
    // Link 'panda_link3'
    panda_link3_v = ((xm->fr_panda_link3_X_fr_panda_link2) * panda_link2_v);
    panda_link3_v(iit::rbd::AZ) += qd(PANDA_JOINT3);
    
    iit::rbd::motionCrossProductMx<Scalar>(panda_link3_v, vcross);
    
    panda_link3_a = (xm->fr_panda_link3_X_fr_panda_link2) * panda_link2_a + vcross.col(iit::rbd::AZ) * qd(PANDA_JOINT3);
    
    panda_link3_f = panda_link3_I * panda_link3_a + iit::rbd::vxIv(panda_link3_v, panda_link3_I);
    
    // Link 'panda_link4'
    panda_link4_v = ((xm->fr_panda_link4_X_fr_panda_link3) * panda_link3_v);
    panda_link4_v(iit::rbd::AZ) += qd(PANDA_JOINT4);
    
    iit::rbd::motionCrossProductMx<Scalar>(panda_link4_v, vcross);
    
    panda_link4_a = (xm->fr_panda_link4_X_fr_panda_link3) * panda_link3_a + vcross.col(iit::rbd::AZ) * qd(PANDA_JOINT4);
    
    panda_link4_f = panda_link4_I * panda_link4_a + iit::rbd::vxIv(panda_link4_v, panda_link4_I);
    
    // Link 'panda_link5'
    panda_link5_v = ((xm->fr_panda_link5_X_fr_panda_link4) * panda_link4_v);
    panda_link5_v(iit::rbd::AZ) += qd(PANDA_JOINT5);
    
    iit::rbd::motionCrossProductMx<Scalar>(panda_link5_v, vcross);
    
    panda_link5_a = (xm->fr_panda_link5_X_fr_panda_link4) * panda_link4_a + vcross.col(iit::rbd::AZ) * qd(PANDA_JOINT5);
    
    panda_link5_f = panda_link5_I * panda_link5_a + iit::rbd::vxIv(panda_link5_v, panda_link5_I);
    
    // Link 'panda_link6'
    panda_link6_v = ((xm->fr_panda_link6_X_fr_panda_link5) * panda_link5_v);
    panda_link6_v(iit::rbd::AZ) += qd(PANDA_JOINT6);
    
    iit::rbd::motionCrossProductMx<Scalar>(panda_link6_v, vcross);
    
    panda_link6_a = (xm->fr_panda_link6_X_fr_panda_link5) * panda_link5_a + vcross.col(iit::rbd::AZ) * qd(PANDA_JOINT6);
    
    panda_link6_f = panda_link6_I * panda_link6_a + iit::rbd::vxIv(panda_link6_v, panda_link6_I);
    
    // Link 'panda_link7'
    panda_link7_v = ((xm->fr_panda_link7_X_fr_panda_link6) * panda_link6_v);
    panda_link7_v(iit::rbd::AZ) += qd(PANDA_JOINT7);
    
    iit::rbd::motionCrossProductMx<Scalar>(panda_link7_v, vcross);
    
    panda_link7_a = (xm->fr_panda_link7_X_fr_panda_link6) * panda_link6_a + vcross.col(iit::rbd::AZ) * qd(PANDA_JOINT7);
    
    panda_link7_f = panda_link7_I * panda_link7_a + iit::rbd::vxIv(panda_link7_v, panda_link7_I);
    

    secondPass(jForces);
}

template <typename TRAIT>
void iit::Franka::dyn::tpl::InverseDynamics<TRAIT>::firstPass(const JointState& qd, const JointState& qdd, const ExtForces& fext)
{
    // First pass, link 'panda_link1'
    panda_link1_a = (xm->fr_panda_link1_X_fr_table).col(iit::rbd::LZ) * Scalar(iit::rbd::g);
    panda_link1_a(iit::rbd::AZ) += qdd(PANDA_JOINT1);
    panda_link1_v(iit::rbd::AZ) = qd(PANDA_JOINT1);   // panda_link1_v = vJ, for the first link of a fixed base robot
    
    panda_link1_f = panda_link1_I * panda_link1_a + iit::rbd::vxIv(qd(PANDA_JOINT1), panda_link1_I)  - fext[PANDA_LINK1];
    
    // First pass, link 'panda_link2'
    panda_link2_v = ((xm->fr_panda_link2_X_fr_panda_link1) * panda_link1_v);
    panda_link2_v(iit::rbd::AZ) += qd(PANDA_JOINT2);
    
    iit::rbd::motionCrossProductMx<Scalar>(panda_link2_v, vcross);
    
    panda_link2_a = (xm->fr_panda_link2_X_fr_panda_link1) * panda_link1_a + vcross.col(iit::rbd::AZ) * qd(PANDA_JOINT2);
    panda_link2_a(iit::rbd::AZ) += qdd(PANDA_JOINT2);
    
    panda_link2_f = panda_link2_I * panda_link2_a + iit::rbd::vxIv(panda_link2_v, panda_link2_I) - fext[PANDA_LINK2];
    
    // First pass, link 'panda_link3'
    panda_link3_v = ((xm->fr_panda_link3_X_fr_panda_link2) * panda_link2_v);
    panda_link3_v(iit::rbd::AZ) += qd(PANDA_JOINT3);
    
    iit::rbd::motionCrossProductMx<Scalar>(panda_link3_v, vcross);
    
    panda_link3_a = (xm->fr_panda_link3_X_fr_panda_link2) * panda_link2_a + vcross.col(iit::rbd::AZ) * qd(PANDA_JOINT3);
    panda_link3_a(iit::rbd::AZ) += qdd(PANDA_JOINT3);
    
    panda_link3_f = panda_link3_I * panda_link3_a + iit::rbd::vxIv(panda_link3_v, panda_link3_I) - fext[PANDA_LINK3];
    
    // First pass, link 'panda_link4'
    panda_link4_v = ((xm->fr_panda_link4_X_fr_panda_link3) * panda_link3_v);
    panda_link4_v(iit::rbd::AZ) += qd(PANDA_JOINT4);
    
    iit::rbd::motionCrossProductMx<Scalar>(panda_link4_v, vcross);
    
    panda_link4_a = (xm->fr_panda_link4_X_fr_panda_link3) * panda_link3_a + vcross.col(iit::rbd::AZ) * qd(PANDA_JOINT4);
    panda_link4_a(iit::rbd::AZ) += qdd(PANDA_JOINT4);
    
    panda_link4_f = panda_link4_I * panda_link4_a + iit::rbd::vxIv(panda_link4_v, panda_link4_I) - fext[PANDA_LINK4];
    
    // First pass, link 'panda_link5'
    panda_link5_v = ((xm->fr_panda_link5_X_fr_panda_link4) * panda_link4_v);
    panda_link5_v(iit::rbd::AZ) += qd(PANDA_JOINT5);
    
    iit::rbd::motionCrossProductMx<Scalar>(panda_link5_v, vcross);
    
    panda_link5_a = (xm->fr_panda_link5_X_fr_panda_link4) * panda_link4_a + vcross.col(iit::rbd::AZ) * qd(PANDA_JOINT5);
    panda_link5_a(iit::rbd::AZ) += qdd(PANDA_JOINT5);
    
    panda_link5_f = panda_link5_I * panda_link5_a + iit::rbd::vxIv(panda_link5_v, panda_link5_I) - fext[PANDA_LINK5];
    
    // First pass, link 'panda_link6'
    panda_link6_v = ((xm->fr_panda_link6_X_fr_panda_link5) * panda_link5_v);
    panda_link6_v(iit::rbd::AZ) += qd(PANDA_JOINT6);
    
    iit::rbd::motionCrossProductMx<Scalar>(panda_link6_v, vcross);
    
    panda_link6_a = (xm->fr_panda_link6_X_fr_panda_link5) * panda_link5_a + vcross.col(iit::rbd::AZ) * qd(PANDA_JOINT6);
    panda_link6_a(iit::rbd::AZ) += qdd(PANDA_JOINT6);
    
    panda_link6_f = panda_link6_I * panda_link6_a + iit::rbd::vxIv(panda_link6_v, panda_link6_I) - fext[PANDA_LINK6];
    
    // First pass, link 'panda_link7'
    panda_link7_v = ((xm->fr_panda_link7_X_fr_panda_link6) * panda_link6_v);
    panda_link7_v(iit::rbd::AZ) += qd(PANDA_JOINT7);
    
    iit::rbd::motionCrossProductMx<Scalar>(panda_link7_v, vcross);
    
    panda_link7_a = (xm->fr_panda_link7_X_fr_panda_link6) * panda_link6_a + vcross.col(iit::rbd::AZ) * qd(PANDA_JOINT7);
    panda_link7_a(iit::rbd::AZ) += qdd(PANDA_JOINT7);
    
    panda_link7_f = panda_link7_I * panda_link7_a + iit::rbd::vxIv(panda_link7_v, panda_link7_I) - fext[PANDA_LINK7];
    
}

template <typename TRAIT>
void iit::Franka::dyn::tpl::InverseDynamics<TRAIT>::secondPass(JointState& jForces)
{
    // Link 'panda_link7'
    jForces(PANDA_JOINT7) = panda_link7_f(iit::rbd::AZ);
    panda_link6_f += xm->fr_panda_link7_X_fr_panda_link6.transpose() * panda_link7_f;
    // Link 'panda_link6'
    jForces(PANDA_JOINT6) = panda_link6_f(iit::rbd::AZ);
    panda_link5_f += xm->fr_panda_link6_X_fr_panda_link5.transpose() * panda_link6_f;
    // Link 'panda_link5'
    jForces(PANDA_JOINT5) = panda_link5_f(iit::rbd::AZ);
    panda_link4_f += xm->fr_panda_link5_X_fr_panda_link4.transpose() * panda_link5_f;
    // Link 'panda_link4'
    jForces(PANDA_JOINT4) = panda_link4_f(iit::rbd::AZ);
    panda_link3_f += xm->fr_panda_link4_X_fr_panda_link3.transpose() * panda_link4_f;
    // Link 'panda_link3'
    jForces(PANDA_JOINT3) = panda_link3_f(iit::rbd::AZ);
    panda_link2_f += xm->fr_panda_link3_X_fr_panda_link2.transpose() * panda_link3_f;
    // Link 'panda_link2'
    jForces(PANDA_JOINT2) = panda_link2_f(iit::rbd::AZ);
    panda_link1_f += xm->fr_panda_link2_X_fr_panda_link1.transpose() * panda_link2_f;
    // Link 'panda_link1'
    jForces(PANDA_JOINT1) = panda_link1_f(iit::rbd::AZ);
}
