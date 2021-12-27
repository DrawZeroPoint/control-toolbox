// Initialization of static-const data
template <typename TRAIT>
const typename iit::Walker::dyn::tpl::InverseDynamics<TRAIT>::ExtForces
iit::Walker::dyn::tpl::InverseDynamics<TRAIT>::zeroExtForces(Force::Zero());

template <typename TRAIT>
iit::Walker::dyn::tpl::InverseDynamics<TRAIT>::InverseDynamics(IProperties& inertia, MTransforms& transforms) :
    inertiaProps( & inertia ),
    xm( & transforms ),
    right_leg_l1_I(inertiaProps->getTensor_right_leg_l1() ),
    right_leg_l2_I(inertiaProps->getTensor_right_leg_l2() ),
    right_leg_l3_I(inertiaProps->getTensor_right_leg_l3() ),
    right_leg_l4_I(inertiaProps->getTensor_right_leg_l4() ),
    right_leg_l5_I(inertiaProps->getTensor_right_leg_l5() ),
    right_leg_l6_I(inertiaProps->getTensor_right_leg_l6() ),
    left_leg_l1_I(inertiaProps->getTensor_left_leg_l1() ),
    left_leg_l2_I(inertiaProps->getTensor_left_leg_l2() ),
    left_leg_l3_I(inertiaProps->getTensor_left_leg_l3() ),
    left_leg_l4_I(inertiaProps->getTensor_left_leg_l4() ),
    left_leg_l5_I(inertiaProps->getTensor_left_leg_l5() ),
    left_leg_l6_I(inertiaProps->getTensor_left_leg_l6() )
    ,
        torso_I( inertiaProps->getTensor_torso() ),
        right_leg_l6_Ic(right_leg_l6_I),
        left_leg_l6_Ic(left_leg_l6_I)
{
#ifndef EIGEN_NO_DEBUG
    std::cout << "Robot Walker, InverseDynamics<TRAIT>::InverseDynamics()" << std::endl;
    std::cout << "Compiled with Eigen debug active" << std::endl;
#endif
    right_leg_l1_v.setZero();
    right_leg_l2_v.setZero();
    right_leg_l3_v.setZero();
    right_leg_l4_v.setZero();
    right_leg_l5_v.setZero();
    right_leg_l6_v.setZero();
    left_leg_l1_v.setZero();
    left_leg_l2_v.setZero();
    left_leg_l3_v.setZero();
    left_leg_l4_v.setZero();
    left_leg_l5_v.setZero();
    left_leg_l6_v.setZero();

    vcross.setZero();
}

template <typename TRAIT>
void iit::Walker::dyn::tpl::InverseDynamics<TRAIT>::id(
    JointState& jForces, Acceleration& torso_a,
    const Acceleration& g, const Velocity& torso_v,
    const JointState& qd, const JointState& qdd,
    const ExtForces& fext)
{
    torso_Ic = torso_I;
    right_leg_l1_Ic = right_leg_l1_I;
    right_leg_l2_Ic = right_leg_l2_I;
    right_leg_l3_Ic = right_leg_l3_I;
    right_leg_l4_Ic = right_leg_l4_I;
    right_leg_l5_Ic = right_leg_l5_I;
    left_leg_l1_Ic = left_leg_l1_I;
    left_leg_l2_Ic = left_leg_l2_I;
    left_leg_l3_Ic = left_leg_l3_I;
    left_leg_l4_Ic = left_leg_l4_I;
    left_leg_l5_Ic = left_leg_l5_I;

    // First pass, link 'right_leg_l1'
    right_leg_l1_v = ((xm->fr_right_leg_l1_X_fr_torso) * torso_v);
    right_leg_l1_v(iit::rbd::AZ) += qd(RIGHT_LEG_J1);
    
    iit::rbd::motionCrossProductMx<Scalar>(right_leg_l1_v, vcross);
    
    right_leg_l1_a = (vcross.col(iit::rbd::AZ) * qd(RIGHT_LEG_J1));
    right_leg_l1_a(iit::rbd::AZ) += qdd(RIGHT_LEG_J1);
    
    right_leg_l1_f = right_leg_l1_I * right_leg_l1_a + iit::rbd::vxIv(right_leg_l1_v, right_leg_l1_I);
    
    // First pass, link 'right_leg_l2'
    right_leg_l2_v = ((xm->fr_right_leg_l2_X_fr_right_leg_l1) * right_leg_l1_v);
    right_leg_l2_v(iit::rbd::AZ) += qd(RIGHT_LEG_J2);
    
    iit::rbd::motionCrossProductMx<Scalar>(right_leg_l2_v, vcross);
    
    right_leg_l2_a = (xm->fr_right_leg_l2_X_fr_right_leg_l1) * right_leg_l1_a + vcross.col(iit::rbd::AZ) * qd(RIGHT_LEG_J2);
    right_leg_l2_a(iit::rbd::AZ) += qdd(RIGHT_LEG_J2);
    
    right_leg_l2_f = right_leg_l2_I * right_leg_l2_a + iit::rbd::vxIv(right_leg_l2_v, right_leg_l2_I);
    
    // First pass, link 'right_leg_l3'
    right_leg_l3_v = ((xm->fr_right_leg_l3_X_fr_right_leg_l2) * right_leg_l2_v);
    right_leg_l3_v(iit::rbd::AZ) += qd(RIGHT_LEG_J3);
    
    iit::rbd::motionCrossProductMx<Scalar>(right_leg_l3_v, vcross);
    
    right_leg_l3_a = (xm->fr_right_leg_l3_X_fr_right_leg_l2) * right_leg_l2_a + vcross.col(iit::rbd::AZ) * qd(RIGHT_LEG_J3);
    right_leg_l3_a(iit::rbd::AZ) += qdd(RIGHT_LEG_J3);
    
    right_leg_l3_f = right_leg_l3_I * right_leg_l3_a + iit::rbd::vxIv(right_leg_l3_v, right_leg_l3_I);
    
    // First pass, link 'right_leg_l4'
    right_leg_l4_v = ((xm->fr_right_leg_l4_X_fr_right_leg_l3) * right_leg_l3_v);
    right_leg_l4_v(iit::rbd::AZ) += qd(RIGHT_LEG_J4);
    
    iit::rbd::motionCrossProductMx<Scalar>(right_leg_l4_v, vcross);
    
    right_leg_l4_a = (xm->fr_right_leg_l4_X_fr_right_leg_l3) * right_leg_l3_a + vcross.col(iit::rbd::AZ) * qd(RIGHT_LEG_J4);
    right_leg_l4_a(iit::rbd::AZ) += qdd(RIGHT_LEG_J4);
    
    right_leg_l4_f = right_leg_l4_I * right_leg_l4_a + iit::rbd::vxIv(right_leg_l4_v, right_leg_l4_I);
    
    // First pass, link 'right_leg_l5'
    right_leg_l5_v = ((xm->fr_right_leg_l5_X_fr_right_leg_l4) * right_leg_l4_v);
    right_leg_l5_v(iit::rbd::AZ) += qd(RIGHT_LEG_J5);
    
    iit::rbd::motionCrossProductMx<Scalar>(right_leg_l5_v, vcross);
    
    right_leg_l5_a = (xm->fr_right_leg_l5_X_fr_right_leg_l4) * right_leg_l4_a + vcross.col(iit::rbd::AZ) * qd(RIGHT_LEG_J5);
    right_leg_l5_a(iit::rbd::AZ) += qdd(RIGHT_LEG_J5);
    
    right_leg_l5_f = right_leg_l5_I * right_leg_l5_a + iit::rbd::vxIv(right_leg_l5_v, right_leg_l5_I);
    
    // First pass, link 'right_leg_l6'
    right_leg_l6_v = ((xm->fr_right_leg_l6_X_fr_right_leg_l5) * right_leg_l5_v);
    right_leg_l6_v(iit::rbd::AZ) += qd(RIGHT_LEG_J6);
    
    iit::rbd::motionCrossProductMx<Scalar>(right_leg_l6_v, vcross);
    
    right_leg_l6_a = (xm->fr_right_leg_l6_X_fr_right_leg_l5) * right_leg_l5_a + vcross.col(iit::rbd::AZ) * qd(RIGHT_LEG_J6);
    right_leg_l6_a(iit::rbd::AZ) += qdd(RIGHT_LEG_J6);
    
    right_leg_l6_f = right_leg_l6_I * right_leg_l6_a + iit::rbd::vxIv(right_leg_l6_v, right_leg_l6_I);
    
    // First pass, link 'left_leg_l1'
    left_leg_l1_v = ((xm->fr_left_leg_l1_X_fr_torso) * torso_v);
    left_leg_l1_v(iit::rbd::AZ) += qd(LEFT_LEG_J1);
    
    iit::rbd::motionCrossProductMx<Scalar>(left_leg_l1_v, vcross);
    
    left_leg_l1_a = (vcross.col(iit::rbd::AZ) * qd(LEFT_LEG_J1));
    left_leg_l1_a(iit::rbd::AZ) += qdd(LEFT_LEG_J1);
    
    left_leg_l1_f = left_leg_l1_I * left_leg_l1_a + iit::rbd::vxIv(left_leg_l1_v, left_leg_l1_I);
    
    // First pass, link 'left_leg_l2'
    left_leg_l2_v = ((xm->fr_left_leg_l2_X_fr_left_leg_l1) * left_leg_l1_v);
    left_leg_l2_v(iit::rbd::AZ) += qd(LEFT_LEG_J2);
    
    iit::rbd::motionCrossProductMx<Scalar>(left_leg_l2_v, vcross);
    
    left_leg_l2_a = (xm->fr_left_leg_l2_X_fr_left_leg_l1) * left_leg_l1_a + vcross.col(iit::rbd::AZ) * qd(LEFT_LEG_J2);
    left_leg_l2_a(iit::rbd::AZ) += qdd(LEFT_LEG_J2);
    
    left_leg_l2_f = left_leg_l2_I * left_leg_l2_a + iit::rbd::vxIv(left_leg_l2_v, left_leg_l2_I);
    
    // First pass, link 'left_leg_l3'
    left_leg_l3_v = ((xm->fr_left_leg_l3_X_fr_left_leg_l2) * left_leg_l2_v);
    left_leg_l3_v(iit::rbd::AZ) += qd(LEFT_LEG_J3);
    
    iit::rbd::motionCrossProductMx<Scalar>(left_leg_l3_v, vcross);
    
    left_leg_l3_a = (xm->fr_left_leg_l3_X_fr_left_leg_l2) * left_leg_l2_a + vcross.col(iit::rbd::AZ) * qd(LEFT_LEG_J3);
    left_leg_l3_a(iit::rbd::AZ) += qdd(LEFT_LEG_J3);
    
    left_leg_l3_f = left_leg_l3_I * left_leg_l3_a + iit::rbd::vxIv(left_leg_l3_v, left_leg_l3_I);
    
    // First pass, link 'left_leg_l4'
    left_leg_l4_v = ((xm->fr_left_leg_l4_X_fr_left_leg_l3) * left_leg_l3_v);
    left_leg_l4_v(iit::rbd::AZ) += qd(LEFT_LEG_J4);
    
    iit::rbd::motionCrossProductMx<Scalar>(left_leg_l4_v, vcross);
    
    left_leg_l4_a = (xm->fr_left_leg_l4_X_fr_left_leg_l3) * left_leg_l3_a + vcross.col(iit::rbd::AZ) * qd(LEFT_LEG_J4);
    left_leg_l4_a(iit::rbd::AZ) += qdd(LEFT_LEG_J4);
    
    left_leg_l4_f = left_leg_l4_I * left_leg_l4_a + iit::rbd::vxIv(left_leg_l4_v, left_leg_l4_I);
    
    // First pass, link 'left_leg_l5'
    left_leg_l5_v = ((xm->fr_left_leg_l5_X_fr_left_leg_l4) * left_leg_l4_v);
    left_leg_l5_v(iit::rbd::AZ) += qd(LEFT_LEG_J5);
    
    iit::rbd::motionCrossProductMx<Scalar>(left_leg_l5_v, vcross);
    
    left_leg_l5_a = (xm->fr_left_leg_l5_X_fr_left_leg_l4) * left_leg_l4_a + vcross.col(iit::rbd::AZ) * qd(LEFT_LEG_J5);
    left_leg_l5_a(iit::rbd::AZ) += qdd(LEFT_LEG_J5);
    
    left_leg_l5_f = left_leg_l5_I * left_leg_l5_a + iit::rbd::vxIv(left_leg_l5_v, left_leg_l5_I);
    
    // First pass, link 'left_leg_l6'
    left_leg_l6_v = ((xm->fr_left_leg_l6_X_fr_left_leg_l5) * left_leg_l5_v);
    left_leg_l6_v(iit::rbd::AZ) += qd(LEFT_LEG_J6);
    
    iit::rbd::motionCrossProductMx<Scalar>(left_leg_l6_v, vcross);
    
    left_leg_l6_a = (xm->fr_left_leg_l6_X_fr_left_leg_l5) * left_leg_l5_a + vcross.col(iit::rbd::AZ) * qd(LEFT_LEG_J6);
    left_leg_l6_a(iit::rbd::AZ) += qdd(LEFT_LEG_J6);
    
    left_leg_l6_f = left_leg_l6_I * left_leg_l6_a + iit::rbd::vxIv(left_leg_l6_v, left_leg_l6_I);
    
    // The force exerted on the floating base by the links
    torso_f = iit::rbd::vxIv(torso_v, torso_I);
    

    // Add the external forces:
    torso_f -= fext[TORSO];
    right_leg_l1_f -= fext[RIGHT_LEG_L1];
    right_leg_l2_f -= fext[RIGHT_LEG_L2];
    right_leg_l3_f -= fext[RIGHT_LEG_L3];
    right_leg_l4_f -= fext[RIGHT_LEG_L4];
    right_leg_l5_f -= fext[RIGHT_LEG_L5];
    right_leg_l6_f -= fext[RIGHT_LEG_L6];
    left_leg_l1_f -= fext[LEFT_LEG_L1];
    left_leg_l2_f -= fext[LEFT_LEG_L2];
    left_leg_l3_f -= fext[LEFT_LEG_L3];
    left_leg_l4_f -= fext[LEFT_LEG_L4];
    left_leg_l5_f -= fext[LEFT_LEG_L5];
    left_leg_l6_f -= fext[LEFT_LEG_L6];

    left_leg_l5_Ic = left_leg_l5_Ic + (xm->fr_left_leg_l6_X_fr_left_leg_l5).transpose() * left_leg_l6_Ic * (xm->fr_left_leg_l6_X_fr_left_leg_l5);
    left_leg_l5_f = left_leg_l5_f + (xm->fr_left_leg_l6_X_fr_left_leg_l5).transpose() * left_leg_l6_f;
    
    left_leg_l4_Ic = left_leg_l4_Ic + (xm->fr_left_leg_l5_X_fr_left_leg_l4).transpose() * left_leg_l5_Ic * (xm->fr_left_leg_l5_X_fr_left_leg_l4);
    left_leg_l4_f = left_leg_l4_f + (xm->fr_left_leg_l5_X_fr_left_leg_l4).transpose() * left_leg_l5_f;
    
    left_leg_l3_Ic = left_leg_l3_Ic + (xm->fr_left_leg_l4_X_fr_left_leg_l3).transpose() * left_leg_l4_Ic * (xm->fr_left_leg_l4_X_fr_left_leg_l3);
    left_leg_l3_f = left_leg_l3_f + (xm->fr_left_leg_l4_X_fr_left_leg_l3).transpose() * left_leg_l4_f;
    
    left_leg_l2_Ic = left_leg_l2_Ic + (xm->fr_left_leg_l3_X_fr_left_leg_l2).transpose() * left_leg_l3_Ic * (xm->fr_left_leg_l3_X_fr_left_leg_l2);
    left_leg_l2_f = left_leg_l2_f + (xm->fr_left_leg_l3_X_fr_left_leg_l2).transpose() * left_leg_l3_f;
    
    left_leg_l1_Ic = left_leg_l1_Ic + (xm->fr_left_leg_l2_X_fr_left_leg_l1).transpose() * left_leg_l2_Ic * (xm->fr_left_leg_l2_X_fr_left_leg_l1);
    left_leg_l1_f = left_leg_l1_f + (xm->fr_left_leg_l2_X_fr_left_leg_l1).transpose() * left_leg_l2_f;
    
    torso_Ic = torso_Ic + (xm->fr_left_leg_l1_X_fr_torso).transpose() * left_leg_l1_Ic * (xm->fr_left_leg_l1_X_fr_torso);
    torso_f = torso_f + (xm->fr_left_leg_l1_X_fr_torso).transpose() * left_leg_l1_f;
    
    right_leg_l5_Ic = right_leg_l5_Ic + (xm->fr_right_leg_l6_X_fr_right_leg_l5).transpose() * right_leg_l6_Ic * (xm->fr_right_leg_l6_X_fr_right_leg_l5);
    right_leg_l5_f = right_leg_l5_f + (xm->fr_right_leg_l6_X_fr_right_leg_l5).transpose() * right_leg_l6_f;
    
    right_leg_l4_Ic = right_leg_l4_Ic + (xm->fr_right_leg_l5_X_fr_right_leg_l4).transpose() * right_leg_l5_Ic * (xm->fr_right_leg_l5_X_fr_right_leg_l4);
    right_leg_l4_f = right_leg_l4_f + (xm->fr_right_leg_l5_X_fr_right_leg_l4).transpose() * right_leg_l5_f;
    
    right_leg_l3_Ic = right_leg_l3_Ic + (xm->fr_right_leg_l4_X_fr_right_leg_l3).transpose() * right_leg_l4_Ic * (xm->fr_right_leg_l4_X_fr_right_leg_l3);
    right_leg_l3_f = right_leg_l3_f + (xm->fr_right_leg_l4_X_fr_right_leg_l3).transpose() * right_leg_l4_f;
    
    right_leg_l2_Ic = right_leg_l2_Ic + (xm->fr_right_leg_l3_X_fr_right_leg_l2).transpose() * right_leg_l3_Ic * (xm->fr_right_leg_l3_X_fr_right_leg_l2);
    right_leg_l2_f = right_leg_l2_f + (xm->fr_right_leg_l3_X_fr_right_leg_l2).transpose() * right_leg_l3_f;
    
    right_leg_l1_Ic = right_leg_l1_Ic + (xm->fr_right_leg_l2_X_fr_right_leg_l1).transpose() * right_leg_l2_Ic * (xm->fr_right_leg_l2_X_fr_right_leg_l1);
    right_leg_l1_f = right_leg_l1_f + (xm->fr_right_leg_l2_X_fr_right_leg_l1).transpose() * right_leg_l2_f;
    
    torso_Ic = torso_Ic + (xm->fr_right_leg_l1_X_fr_torso).transpose() * right_leg_l1_Ic * (xm->fr_right_leg_l1_X_fr_torso);
    torso_f = torso_f + (xm->fr_right_leg_l1_X_fr_torso).transpose() * right_leg_l1_f;
    

    // The base acceleration due to the force due to the movement of the links
    torso_a = - torso_Ic.inverse() * torso_f;
    
    right_leg_l1_a = xm->fr_right_leg_l1_X_fr_torso * torso_a;
    jForces(RIGHT_LEG_J1) = (right_leg_l1_Ic.row(iit::rbd::AZ) * right_leg_l1_a + right_leg_l1_f(iit::rbd::AZ));
    
    right_leg_l2_a = xm->fr_right_leg_l2_X_fr_right_leg_l1 * right_leg_l1_a;
    jForces(RIGHT_LEG_J2) = (right_leg_l2_Ic.row(iit::rbd::AZ) * right_leg_l2_a + right_leg_l2_f(iit::rbd::AZ));
    
    right_leg_l3_a = xm->fr_right_leg_l3_X_fr_right_leg_l2 * right_leg_l2_a;
    jForces(RIGHT_LEG_J3) = (right_leg_l3_Ic.row(iit::rbd::AZ) * right_leg_l3_a + right_leg_l3_f(iit::rbd::AZ));
    
    right_leg_l4_a = xm->fr_right_leg_l4_X_fr_right_leg_l3 * right_leg_l3_a;
    jForces(RIGHT_LEG_J4) = (right_leg_l4_Ic.row(iit::rbd::AZ) * right_leg_l4_a + right_leg_l4_f(iit::rbd::AZ));
    
    right_leg_l5_a = xm->fr_right_leg_l5_X_fr_right_leg_l4 * right_leg_l4_a;
    jForces(RIGHT_LEG_J5) = (right_leg_l5_Ic.row(iit::rbd::AZ) * right_leg_l5_a + right_leg_l5_f(iit::rbd::AZ));
    
    right_leg_l6_a = xm->fr_right_leg_l6_X_fr_right_leg_l5 * right_leg_l5_a;
    jForces(RIGHT_LEG_J6) = (right_leg_l6_Ic.row(iit::rbd::AZ) * right_leg_l6_a + right_leg_l6_f(iit::rbd::AZ));
    
    left_leg_l1_a = xm->fr_left_leg_l1_X_fr_torso * torso_a;
    jForces(LEFT_LEG_J1) = (left_leg_l1_Ic.row(iit::rbd::AZ) * left_leg_l1_a + left_leg_l1_f(iit::rbd::AZ));
    
    left_leg_l2_a = xm->fr_left_leg_l2_X_fr_left_leg_l1 * left_leg_l1_a;
    jForces(LEFT_LEG_J2) = (left_leg_l2_Ic.row(iit::rbd::AZ) * left_leg_l2_a + left_leg_l2_f(iit::rbd::AZ));
    
    left_leg_l3_a = xm->fr_left_leg_l3_X_fr_left_leg_l2 * left_leg_l2_a;
    jForces(LEFT_LEG_J3) = (left_leg_l3_Ic.row(iit::rbd::AZ) * left_leg_l3_a + left_leg_l3_f(iit::rbd::AZ));
    
    left_leg_l4_a = xm->fr_left_leg_l4_X_fr_left_leg_l3 * left_leg_l3_a;
    jForces(LEFT_LEG_J4) = (left_leg_l4_Ic.row(iit::rbd::AZ) * left_leg_l4_a + left_leg_l4_f(iit::rbd::AZ));
    
    left_leg_l5_a = xm->fr_left_leg_l5_X_fr_left_leg_l4 * left_leg_l4_a;
    jForces(LEFT_LEG_J5) = (left_leg_l5_Ic.row(iit::rbd::AZ) * left_leg_l5_a + left_leg_l5_f(iit::rbd::AZ));
    
    left_leg_l6_a = xm->fr_left_leg_l6_X_fr_left_leg_l5 * left_leg_l5_a;
    jForces(LEFT_LEG_J6) = (left_leg_l6_Ic.row(iit::rbd::AZ) * left_leg_l6_a + left_leg_l6_f(iit::rbd::AZ));
    

    torso_a += g;
}

template <typename TRAIT>
void iit::Walker::dyn::tpl::InverseDynamics<TRAIT>::G_terms_fully_actuated(
    Force& baseWrench, JointState& jForces,
    const Acceleration& g)
{
    const Acceleration& torso_a = -g;

    // Link 'right_leg_l1'
    right_leg_l1_a = (xm->fr_right_leg_l1_X_fr_torso) * torso_a;
    right_leg_l1_f = right_leg_l1_I * right_leg_l1_a;
    // Link 'right_leg_l2'
    right_leg_l2_a = (xm->fr_right_leg_l2_X_fr_right_leg_l1) * right_leg_l1_a;
    right_leg_l2_f = right_leg_l2_I * right_leg_l2_a;
    // Link 'right_leg_l3'
    right_leg_l3_a = (xm->fr_right_leg_l3_X_fr_right_leg_l2) * right_leg_l2_a;
    right_leg_l3_f = right_leg_l3_I * right_leg_l3_a;
    // Link 'right_leg_l4'
    right_leg_l4_a = (xm->fr_right_leg_l4_X_fr_right_leg_l3) * right_leg_l3_a;
    right_leg_l4_f = right_leg_l4_I * right_leg_l4_a;
    // Link 'right_leg_l5'
    right_leg_l5_a = (xm->fr_right_leg_l5_X_fr_right_leg_l4) * right_leg_l4_a;
    right_leg_l5_f = right_leg_l5_I * right_leg_l5_a;
    // Link 'right_leg_l6'
    right_leg_l6_a = (xm->fr_right_leg_l6_X_fr_right_leg_l5) * right_leg_l5_a;
    right_leg_l6_f = right_leg_l6_I * right_leg_l6_a;
    // Link 'left_leg_l1'
    left_leg_l1_a = (xm->fr_left_leg_l1_X_fr_torso) * torso_a;
    left_leg_l1_f = left_leg_l1_I * left_leg_l1_a;
    // Link 'left_leg_l2'
    left_leg_l2_a = (xm->fr_left_leg_l2_X_fr_left_leg_l1) * left_leg_l1_a;
    left_leg_l2_f = left_leg_l2_I * left_leg_l2_a;
    // Link 'left_leg_l3'
    left_leg_l3_a = (xm->fr_left_leg_l3_X_fr_left_leg_l2) * left_leg_l2_a;
    left_leg_l3_f = left_leg_l3_I * left_leg_l3_a;
    // Link 'left_leg_l4'
    left_leg_l4_a = (xm->fr_left_leg_l4_X_fr_left_leg_l3) * left_leg_l3_a;
    left_leg_l4_f = left_leg_l4_I * left_leg_l4_a;
    // Link 'left_leg_l5'
    left_leg_l5_a = (xm->fr_left_leg_l5_X_fr_left_leg_l4) * left_leg_l4_a;
    left_leg_l5_f = left_leg_l5_I * left_leg_l5_a;
    // Link 'left_leg_l6'
    left_leg_l6_a = (xm->fr_left_leg_l6_X_fr_left_leg_l5) * left_leg_l5_a;
    left_leg_l6_f = left_leg_l6_I * left_leg_l6_a;

    torso_f = torso_I * torso_a;

    secondPass_fullyActuated(jForces);

    baseWrench = torso_f;
}

template <typename TRAIT>
void iit::Walker::dyn::tpl::InverseDynamics<TRAIT>::C_terms_fully_actuated(
    Force& baseWrench, JointState& jForces,
    const Velocity& torso_v, const JointState& qd)
{
    // Link 'right_leg_l1'
    right_leg_l1_v = ((xm->fr_right_leg_l1_X_fr_torso) * torso_v);
    right_leg_l1_v(iit::rbd::AZ) += qd(RIGHT_LEG_J1);
    iit::rbd::motionCrossProductMx<Scalar>(right_leg_l1_v, vcross);
    right_leg_l1_a = (vcross.col(iit::rbd::AZ) * qd(RIGHT_LEG_J1));
    right_leg_l1_f = right_leg_l1_I * right_leg_l1_a + iit::rbd::vxIv(right_leg_l1_v, right_leg_l1_I);
    
    // Link 'right_leg_l2'
    right_leg_l2_v = ((xm->fr_right_leg_l2_X_fr_right_leg_l1) * right_leg_l1_v);
    right_leg_l2_v(iit::rbd::AZ) += qd(RIGHT_LEG_J2);
    iit::rbd::motionCrossProductMx<Scalar>(right_leg_l2_v, vcross);
    right_leg_l2_a = (xm->fr_right_leg_l2_X_fr_right_leg_l1) * right_leg_l1_a + vcross.col(iit::rbd::AZ) * qd(RIGHT_LEG_J2);
    right_leg_l2_f = right_leg_l2_I * right_leg_l2_a + iit::rbd::vxIv(right_leg_l2_v, right_leg_l2_I);
    
    // Link 'right_leg_l3'
    right_leg_l3_v = ((xm->fr_right_leg_l3_X_fr_right_leg_l2) * right_leg_l2_v);
    right_leg_l3_v(iit::rbd::AZ) += qd(RIGHT_LEG_J3);
    iit::rbd::motionCrossProductMx<Scalar>(right_leg_l3_v, vcross);
    right_leg_l3_a = (xm->fr_right_leg_l3_X_fr_right_leg_l2) * right_leg_l2_a + vcross.col(iit::rbd::AZ) * qd(RIGHT_LEG_J3);
    right_leg_l3_f = right_leg_l3_I * right_leg_l3_a + iit::rbd::vxIv(right_leg_l3_v, right_leg_l3_I);
    
    // Link 'right_leg_l4'
    right_leg_l4_v = ((xm->fr_right_leg_l4_X_fr_right_leg_l3) * right_leg_l3_v);
    right_leg_l4_v(iit::rbd::AZ) += qd(RIGHT_LEG_J4);
    iit::rbd::motionCrossProductMx<Scalar>(right_leg_l4_v, vcross);
    right_leg_l4_a = (xm->fr_right_leg_l4_X_fr_right_leg_l3) * right_leg_l3_a + vcross.col(iit::rbd::AZ) * qd(RIGHT_LEG_J4);
    right_leg_l4_f = right_leg_l4_I * right_leg_l4_a + iit::rbd::vxIv(right_leg_l4_v, right_leg_l4_I);
    
    // Link 'right_leg_l5'
    right_leg_l5_v = ((xm->fr_right_leg_l5_X_fr_right_leg_l4) * right_leg_l4_v);
    right_leg_l5_v(iit::rbd::AZ) += qd(RIGHT_LEG_J5);
    iit::rbd::motionCrossProductMx<Scalar>(right_leg_l5_v, vcross);
    right_leg_l5_a = (xm->fr_right_leg_l5_X_fr_right_leg_l4) * right_leg_l4_a + vcross.col(iit::rbd::AZ) * qd(RIGHT_LEG_J5);
    right_leg_l5_f = right_leg_l5_I * right_leg_l5_a + iit::rbd::vxIv(right_leg_l5_v, right_leg_l5_I);
    
    // Link 'right_leg_l6'
    right_leg_l6_v = ((xm->fr_right_leg_l6_X_fr_right_leg_l5) * right_leg_l5_v);
    right_leg_l6_v(iit::rbd::AZ) += qd(RIGHT_LEG_J6);
    iit::rbd::motionCrossProductMx<Scalar>(right_leg_l6_v, vcross);
    right_leg_l6_a = (xm->fr_right_leg_l6_X_fr_right_leg_l5) * right_leg_l5_a + vcross.col(iit::rbd::AZ) * qd(RIGHT_LEG_J6);
    right_leg_l6_f = right_leg_l6_I * right_leg_l6_a + iit::rbd::vxIv(right_leg_l6_v, right_leg_l6_I);
    
    // Link 'left_leg_l1'
    left_leg_l1_v = ((xm->fr_left_leg_l1_X_fr_torso) * torso_v);
    left_leg_l1_v(iit::rbd::AZ) += qd(LEFT_LEG_J1);
    iit::rbd::motionCrossProductMx<Scalar>(left_leg_l1_v, vcross);
    left_leg_l1_a = (vcross.col(iit::rbd::AZ) * qd(LEFT_LEG_J1));
    left_leg_l1_f = left_leg_l1_I * left_leg_l1_a + iit::rbd::vxIv(left_leg_l1_v, left_leg_l1_I);
    
    // Link 'left_leg_l2'
    left_leg_l2_v = ((xm->fr_left_leg_l2_X_fr_left_leg_l1) * left_leg_l1_v);
    left_leg_l2_v(iit::rbd::AZ) += qd(LEFT_LEG_J2);
    iit::rbd::motionCrossProductMx<Scalar>(left_leg_l2_v, vcross);
    left_leg_l2_a = (xm->fr_left_leg_l2_X_fr_left_leg_l1) * left_leg_l1_a + vcross.col(iit::rbd::AZ) * qd(LEFT_LEG_J2);
    left_leg_l2_f = left_leg_l2_I * left_leg_l2_a + iit::rbd::vxIv(left_leg_l2_v, left_leg_l2_I);
    
    // Link 'left_leg_l3'
    left_leg_l3_v = ((xm->fr_left_leg_l3_X_fr_left_leg_l2) * left_leg_l2_v);
    left_leg_l3_v(iit::rbd::AZ) += qd(LEFT_LEG_J3);
    iit::rbd::motionCrossProductMx<Scalar>(left_leg_l3_v, vcross);
    left_leg_l3_a = (xm->fr_left_leg_l3_X_fr_left_leg_l2) * left_leg_l2_a + vcross.col(iit::rbd::AZ) * qd(LEFT_LEG_J3);
    left_leg_l3_f = left_leg_l3_I * left_leg_l3_a + iit::rbd::vxIv(left_leg_l3_v, left_leg_l3_I);
    
    // Link 'left_leg_l4'
    left_leg_l4_v = ((xm->fr_left_leg_l4_X_fr_left_leg_l3) * left_leg_l3_v);
    left_leg_l4_v(iit::rbd::AZ) += qd(LEFT_LEG_J4);
    iit::rbd::motionCrossProductMx<Scalar>(left_leg_l4_v, vcross);
    left_leg_l4_a = (xm->fr_left_leg_l4_X_fr_left_leg_l3) * left_leg_l3_a + vcross.col(iit::rbd::AZ) * qd(LEFT_LEG_J4);
    left_leg_l4_f = left_leg_l4_I * left_leg_l4_a + iit::rbd::vxIv(left_leg_l4_v, left_leg_l4_I);
    
    // Link 'left_leg_l5'
    left_leg_l5_v = ((xm->fr_left_leg_l5_X_fr_left_leg_l4) * left_leg_l4_v);
    left_leg_l5_v(iit::rbd::AZ) += qd(LEFT_LEG_J5);
    iit::rbd::motionCrossProductMx<Scalar>(left_leg_l5_v, vcross);
    left_leg_l5_a = (xm->fr_left_leg_l5_X_fr_left_leg_l4) * left_leg_l4_a + vcross.col(iit::rbd::AZ) * qd(LEFT_LEG_J5);
    left_leg_l5_f = left_leg_l5_I * left_leg_l5_a + iit::rbd::vxIv(left_leg_l5_v, left_leg_l5_I);
    
    // Link 'left_leg_l6'
    left_leg_l6_v = ((xm->fr_left_leg_l6_X_fr_left_leg_l5) * left_leg_l5_v);
    left_leg_l6_v(iit::rbd::AZ) += qd(LEFT_LEG_J6);
    iit::rbd::motionCrossProductMx<Scalar>(left_leg_l6_v, vcross);
    left_leg_l6_a = (xm->fr_left_leg_l6_X_fr_left_leg_l5) * left_leg_l5_a + vcross.col(iit::rbd::AZ) * qd(LEFT_LEG_J6);
    left_leg_l6_f = left_leg_l6_I * left_leg_l6_a + iit::rbd::vxIv(left_leg_l6_v, left_leg_l6_I);
    

    torso_f = iit::rbd::vxIv(torso_v, torso_I);

    secondPass_fullyActuated(jForces);

    baseWrench = torso_f;
}

template <typename TRAIT>
void iit::Walker::dyn::tpl::InverseDynamics<TRAIT>::id_fully_actuated(
        Force& baseWrench, JointState& jForces,
        const Acceleration& g, const Velocity& torso_v, const Acceleration& baseAccel,
        const JointState& qd, const JointState& qdd, const ExtForces& fext)
{
    Acceleration torso_a = baseAccel -g;

    // First pass, link 'right_leg_l1'
    right_leg_l1_v = ((xm->fr_right_leg_l1_X_fr_torso) * torso_v);
    right_leg_l1_v(iit::rbd::AZ) += qd(RIGHT_LEG_J1);
    
    iit::rbd::motionCrossProductMx<Scalar>(right_leg_l1_v, vcross);
    
    right_leg_l1_a = (xm->fr_right_leg_l1_X_fr_torso) * torso_a + vcross.col(iit::rbd::AZ) * qd(RIGHT_LEG_J1);
    right_leg_l1_a(iit::rbd::AZ) += qdd(RIGHT_LEG_J1);
    
    right_leg_l1_f = right_leg_l1_I * right_leg_l1_a + iit::rbd::vxIv(right_leg_l1_v, right_leg_l1_I) - fext[RIGHT_LEG_L1];
    
    // First pass, link 'right_leg_l2'
    right_leg_l2_v = ((xm->fr_right_leg_l2_X_fr_right_leg_l1) * right_leg_l1_v);
    right_leg_l2_v(iit::rbd::AZ) += qd(RIGHT_LEG_J2);
    
    iit::rbd::motionCrossProductMx<Scalar>(right_leg_l2_v, vcross);
    
    right_leg_l2_a = (xm->fr_right_leg_l2_X_fr_right_leg_l1) * right_leg_l1_a + vcross.col(iit::rbd::AZ) * qd(RIGHT_LEG_J2);
    right_leg_l2_a(iit::rbd::AZ) += qdd(RIGHT_LEG_J2);
    
    right_leg_l2_f = right_leg_l2_I * right_leg_l2_a + iit::rbd::vxIv(right_leg_l2_v, right_leg_l2_I) - fext[RIGHT_LEG_L2];
    
    // First pass, link 'right_leg_l3'
    right_leg_l3_v = ((xm->fr_right_leg_l3_X_fr_right_leg_l2) * right_leg_l2_v);
    right_leg_l3_v(iit::rbd::AZ) += qd(RIGHT_LEG_J3);
    
    iit::rbd::motionCrossProductMx<Scalar>(right_leg_l3_v, vcross);
    
    right_leg_l3_a = (xm->fr_right_leg_l3_X_fr_right_leg_l2) * right_leg_l2_a + vcross.col(iit::rbd::AZ) * qd(RIGHT_LEG_J3);
    right_leg_l3_a(iit::rbd::AZ) += qdd(RIGHT_LEG_J3);
    
    right_leg_l3_f = right_leg_l3_I * right_leg_l3_a + iit::rbd::vxIv(right_leg_l3_v, right_leg_l3_I) - fext[RIGHT_LEG_L3];
    
    // First pass, link 'right_leg_l4'
    right_leg_l4_v = ((xm->fr_right_leg_l4_X_fr_right_leg_l3) * right_leg_l3_v);
    right_leg_l4_v(iit::rbd::AZ) += qd(RIGHT_LEG_J4);
    
    iit::rbd::motionCrossProductMx<Scalar>(right_leg_l4_v, vcross);
    
    right_leg_l4_a = (xm->fr_right_leg_l4_X_fr_right_leg_l3) * right_leg_l3_a + vcross.col(iit::rbd::AZ) * qd(RIGHT_LEG_J4);
    right_leg_l4_a(iit::rbd::AZ) += qdd(RIGHT_LEG_J4);
    
    right_leg_l4_f = right_leg_l4_I * right_leg_l4_a + iit::rbd::vxIv(right_leg_l4_v, right_leg_l4_I) - fext[RIGHT_LEG_L4];
    
    // First pass, link 'right_leg_l5'
    right_leg_l5_v = ((xm->fr_right_leg_l5_X_fr_right_leg_l4) * right_leg_l4_v);
    right_leg_l5_v(iit::rbd::AZ) += qd(RIGHT_LEG_J5);
    
    iit::rbd::motionCrossProductMx<Scalar>(right_leg_l5_v, vcross);
    
    right_leg_l5_a = (xm->fr_right_leg_l5_X_fr_right_leg_l4) * right_leg_l4_a + vcross.col(iit::rbd::AZ) * qd(RIGHT_LEG_J5);
    right_leg_l5_a(iit::rbd::AZ) += qdd(RIGHT_LEG_J5);
    
    right_leg_l5_f = right_leg_l5_I * right_leg_l5_a + iit::rbd::vxIv(right_leg_l5_v, right_leg_l5_I) - fext[RIGHT_LEG_L5];
    
    // First pass, link 'right_leg_l6'
    right_leg_l6_v = ((xm->fr_right_leg_l6_X_fr_right_leg_l5) * right_leg_l5_v);
    right_leg_l6_v(iit::rbd::AZ) += qd(RIGHT_LEG_J6);
    
    iit::rbd::motionCrossProductMx<Scalar>(right_leg_l6_v, vcross);
    
    right_leg_l6_a = (xm->fr_right_leg_l6_X_fr_right_leg_l5) * right_leg_l5_a + vcross.col(iit::rbd::AZ) * qd(RIGHT_LEG_J6);
    right_leg_l6_a(iit::rbd::AZ) += qdd(RIGHT_LEG_J6);
    
    right_leg_l6_f = right_leg_l6_I * right_leg_l6_a + iit::rbd::vxIv(right_leg_l6_v, right_leg_l6_I) - fext[RIGHT_LEG_L6];
    
    // First pass, link 'left_leg_l1'
    left_leg_l1_v = ((xm->fr_left_leg_l1_X_fr_torso) * torso_v);
    left_leg_l1_v(iit::rbd::AZ) += qd(LEFT_LEG_J1);
    
    iit::rbd::motionCrossProductMx<Scalar>(left_leg_l1_v, vcross);
    
    left_leg_l1_a = (xm->fr_left_leg_l1_X_fr_torso) * torso_a + vcross.col(iit::rbd::AZ) * qd(LEFT_LEG_J1);
    left_leg_l1_a(iit::rbd::AZ) += qdd(LEFT_LEG_J1);
    
    left_leg_l1_f = left_leg_l1_I * left_leg_l1_a + iit::rbd::vxIv(left_leg_l1_v, left_leg_l1_I) - fext[LEFT_LEG_L1];
    
    // First pass, link 'left_leg_l2'
    left_leg_l2_v = ((xm->fr_left_leg_l2_X_fr_left_leg_l1) * left_leg_l1_v);
    left_leg_l2_v(iit::rbd::AZ) += qd(LEFT_LEG_J2);
    
    iit::rbd::motionCrossProductMx<Scalar>(left_leg_l2_v, vcross);
    
    left_leg_l2_a = (xm->fr_left_leg_l2_X_fr_left_leg_l1) * left_leg_l1_a + vcross.col(iit::rbd::AZ) * qd(LEFT_LEG_J2);
    left_leg_l2_a(iit::rbd::AZ) += qdd(LEFT_LEG_J2);
    
    left_leg_l2_f = left_leg_l2_I * left_leg_l2_a + iit::rbd::vxIv(left_leg_l2_v, left_leg_l2_I) - fext[LEFT_LEG_L2];
    
    // First pass, link 'left_leg_l3'
    left_leg_l3_v = ((xm->fr_left_leg_l3_X_fr_left_leg_l2) * left_leg_l2_v);
    left_leg_l3_v(iit::rbd::AZ) += qd(LEFT_LEG_J3);
    
    iit::rbd::motionCrossProductMx<Scalar>(left_leg_l3_v, vcross);
    
    left_leg_l3_a = (xm->fr_left_leg_l3_X_fr_left_leg_l2) * left_leg_l2_a + vcross.col(iit::rbd::AZ) * qd(LEFT_LEG_J3);
    left_leg_l3_a(iit::rbd::AZ) += qdd(LEFT_LEG_J3);
    
    left_leg_l3_f = left_leg_l3_I * left_leg_l3_a + iit::rbd::vxIv(left_leg_l3_v, left_leg_l3_I) - fext[LEFT_LEG_L3];
    
    // First pass, link 'left_leg_l4'
    left_leg_l4_v = ((xm->fr_left_leg_l4_X_fr_left_leg_l3) * left_leg_l3_v);
    left_leg_l4_v(iit::rbd::AZ) += qd(LEFT_LEG_J4);
    
    iit::rbd::motionCrossProductMx<Scalar>(left_leg_l4_v, vcross);
    
    left_leg_l4_a = (xm->fr_left_leg_l4_X_fr_left_leg_l3) * left_leg_l3_a + vcross.col(iit::rbd::AZ) * qd(LEFT_LEG_J4);
    left_leg_l4_a(iit::rbd::AZ) += qdd(LEFT_LEG_J4);
    
    left_leg_l4_f = left_leg_l4_I * left_leg_l4_a + iit::rbd::vxIv(left_leg_l4_v, left_leg_l4_I) - fext[LEFT_LEG_L4];
    
    // First pass, link 'left_leg_l5'
    left_leg_l5_v = ((xm->fr_left_leg_l5_X_fr_left_leg_l4) * left_leg_l4_v);
    left_leg_l5_v(iit::rbd::AZ) += qd(LEFT_LEG_J5);
    
    iit::rbd::motionCrossProductMx<Scalar>(left_leg_l5_v, vcross);
    
    left_leg_l5_a = (xm->fr_left_leg_l5_X_fr_left_leg_l4) * left_leg_l4_a + vcross.col(iit::rbd::AZ) * qd(LEFT_LEG_J5);
    left_leg_l5_a(iit::rbd::AZ) += qdd(LEFT_LEG_J5);
    
    left_leg_l5_f = left_leg_l5_I * left_leg_l5_a + iit::rbd::vxIv(left_leg_l5_v, left_leg_l5_I) - fext[LEFT_LEG_L5];
    
    // First pass, link 'left_leg_l6'
    left_leg_l6_v = ((xm->fr_left_leg_l6_X_fr_left_leg_l5) * left_leg_l5_v);
    left_leg_l6_v(iit::rbd::AZ) += qd(LEFT_LEG_J6);
    
    iit::rbd::motionCrossProductMx<Scalar>(left_leg_l6_v, vcross);
    
    left_leg_l6_a = (xm->fr_left_leg_l6_X_fr_left_leg_l5) * left_leg_l5_a + vcross.col(iit::rbd::AZ) * qd(LEFT_LEG_J6);
    left_leg_l6_a(iit::rbd::AZ) += qdd(LEFT_LEG_J6);
    
    left_leg_l6_f = left_leg_l6_I * left_leg_l6_a + iit::rbd::vxIv(left_leg_l6_v, left_leg_l6_I) - fext[LEFT_LEG_L6];
    

    // The base
    torso_f = torso_I * torso_a + iit::rbd::vxIv(torso_v, torso_I) - fext[TORSO];

    secondPass_fullyActuated(jForces);

    baseWrench = torso_f;
}

template <typename TRAIT>
void iit::Walker::dyn::tpl::InverseDynamics<TRAIT>::secondPass_fullyActuated(JointState& jForces)
{
    // Link 'left_leg_l6'
    jForces(LEFT_LEG_J6) = left_leg_l6_f(iit::rbd::AZ);
    left_leg_l5_f += xm->fr_left_leg_l6_X_fr_left_leg_l5.transpose() * left_leg_l6_f;
    // Link 'left_leg_l5'
    jForces(LEFT_LEG_J5) = left_leg_l5_f(iit::rbd::AZ);
    left_leg_l4_f += xm->fr_left_leg_l5_X_fr_left_leg_l4.transpose() * left_leg_l5_f;
    // Link 'left_leg_l4'
    jForces(LEFT_LEG_J4) = left_leg_l4_f(iit::rbd::AZ);
    left_leg_l3_f += xm->fr_left_leg_l4_X_fr_left_leg_l3.transpose() * left_leg_l4_f;
    // Link 'left_leg_l3'
    jForces(LEFT_LEG_J3) = left_leg_l3_f(iit::rbd::AZ);
    left_leg_l2_f += xm->fr_left_leg_l3_X_fr_left_leg_l2.transpose() * left_leg_l3_f;
    // Link 'left_leg_l2'
    jForces(LEFT_LEG_J2) = left_leg_l2_f(iit::rbd::AZ);
    left_leg_l1_f += xm->fr_left_leg_l2_X_fr_left_leg_l1.transpose() * left_leg_l2_f;
    // Link 'left_leg_l1'
    jForces(LEFT_LEG_J1) = left_leg_l1_f(iit::rbd::AZ);
    torso_f += xm->fr_left_leg_l1_X_fr_torso.transpose() * left_leg_l1_f;
    // Link 'right_leg_l6'
    jForces(RIGHT_LEG_J6) = right_leg_l6_f(iit::rbd::AZ);
    right_leg_l5_f += xm->fr_right_leg_l6_X_fr_right_leg_l5.transpose() * right_leg_l6_f;
    // Link 'right_leg_l5'
    jForces(RIGHT_LEG_J5) = right_leg_l5_f(iit::rbd::AZ);
    right_leg_l4_f += xm->fr_right_leg_l5_X_fr_right_leg_l4.transpose() * right_leg_l5_f;
    // Link 'right_leg_l4'
    jForces(RIGHT_LEG_J4) = right_leg_l4_f(iit::rbd::AZ);
    right_leg_l3_f += xm->fr_right_leg_l4_X_fr_right_leg_l3.transpose() * right_leg_l4_f;
    // Link 'right_leg_l3'
    jForces(RIGHT_LEG_J3) = right_leg_l3_f(iit::rbd::AZ);
    right_leg_l2_f += xm->fr_right_leg_l3_X_fr_right_leg_l2.transpose() * right_leg_l3_f;
    // Link 'right_leg_l2'
    jForces(RIGHT_LEG_J2) = right_leg_l2_f(iit::rbd::AZ);
    right_leg_l1_f += xm->fr_right_leg_l2_X_fr_right_leg_l1.transpose() * right_leg_l2_f;
    // Link 'right_leg_l1'
    jForces(RIGHT_LEG_J1) = right_leg_l1_f(iit::rbd::AZ);
    torso_f += xm->fr_right_leg_l1_X_fr_torso.transpose() * right_leg_l1_f;
}

