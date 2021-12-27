

//Implementation of default constructor
template <typename TRAIT>
iit::Walker::dyn::tpl::JSIM<TRAIT>::JSIM(IProperties& inertiaProperties, FTransforms& forceTransforms) :
    linkInertias(inertiaProperties),
    frcTransf( &forceTransforms ),
    right_leg_l6_Ic(linkInertias.getTensor_right_leg_l6()),
    left_leg_l6_Ic(linkInertias.getTensor_left_leg_l6())
{
    //Initialize the matrix itself
    this->setZero();
}

#define DATA tpl::JSIM<TRAIT>::operator()
#define Fcol(j) (tpl::JSIM<TRAIT>:: template block<6,1>(0,(j)+6))
#define F(i,j) DATA((i),(j)+6)

template <typename TRAIT>
const typename iit::Walker::dyn::tpl::JSIM<TRAIT>& iit::Walker::dyn::tpl::JSIM<TRAIT>::update(const JointState& state) {

    // Precomputes only once the coordinate transforms:
    frcTransf -> fr_left_leg_l5_X_fr_left_leg_l6(state);
    frcTransf -> fr_left_leg_l4_X_fr_left_leg_l5(state);
    frcTransf -> fr_left_leg_l3_X_fr_left_leg_l4(state);
    frcTransf -> fr_left_leg_l2_X_fr_left_leg_l3(state);
    frcTransf -> fr_left_leg_l1_X_fr_left_leg_l2(state);
    frcTransf -> fr_torso_X_fr_left_leg_l1(state);
    frcTransf -> fr_right_leg_l5_X_fr_right_leg_l6(state);
    frcTransf -> fr_right_leg_l4_X_fr_right_leg_l5(state);
    frcTransf -> fr_right_leg_l3_X_fr_right_leg_l4(state);
    frcTransf -> fr_right_leg_l2_X_fr_right_leg_l3(state);
    frcTransf -> fr_right_leg_l1_X_fr_right_leg_l2(state);
    frcTransf -> fr_torso_X_fr_right_leg_l1(state);

    // Initializes the composite inertia tensors
    torso_Ic = linkInertias.getTensor_torso();
    right_leg_l1_Ic = linkInertias.getTensor_right_leg_l1();
    right_leg_l2_Ic = linkInertias.getTensor_right_leg_l2();
    right_leg_l3_Ic = linkInertias.getTensor_right_leg_l3();
    right_leg_l4_Ic = linkInertias.getTensor_right_leg_l4();
    right_leg_l5_Ic = linkInertias.getTensor_right_leg_l5();
    left_leg_l1_Ic = linkInertias.getTensor_left_leg_l1();
    left_leg_l2_Ic = linkInertias.getTensor_left_leg_l2();
    left_leg_l3_Ic = linkInertias.getTensor_left_leg_l3();
    left_leg_l4_Ic = linkInertias.getTensor_left_leg_l4();
    left_leg_l5_Ic = linkInertias.getTensor_left_leg_l5();

    // "Bottom-up" loop to update the inertia-composite property of each link, for the current configuration

    // Link left_leg_l6:
    iit::rbd::transformInertia<Scalar>(left_leg_l6_Ic, frcTransf -> fr_left_leg_l5_X_fr_left_leg_l6, Ic_spare);
    left_leg_l5_Ic += Ic_spare;

    Fcol(LEFT_LEG_J6) = left_leg_l6_Ic.col(iit::rbd::AZ);
    DATA(LEFT_LEG_J6+6, LEFT_LEG_J6+6) = Fcol(LEFT_LEG_J6)(iit::rbd::AZ);

    Fcol(LEFT_LEG_J6) = frcTransf -> fr_left_leg_l5_X_fr_left_leg_l6 * Fcol(LEFT_LEG_J6);
    DATA(LEFT_LEG_J6+6, LEFT_LEG_J5+6) = F(iit::rbd::AZ,LEFT_LEG_J6);
    DATA(LEFT_LEG_J5+6, LEFT_LEG_J6+6) = DATA(LEFT_LEG_J6+6, LEFT_LEG_J5+6);
    Fcol(LEFT_LEG_J6) = frcTransf -> fr_left_leg_l4_X_fr_left_leg_l5 * Fcol(LEFT_LEG_J6);
    DATA(LEFT_LEG_J6+6, LEFT_LEG_J4+6) = F(iit::rbd::AZ,LEFT_LEG_J6);
    DATA(LEFT_LEG_J4+6, LEFT_LEG_J6+6) = DATA(LEFT_LEG_J6+6, LEFT_LEG_J4+6);
    Fcol(LEFT_LEG_J6) = frcTransf -> fr_left_leg_l3_X_fr_left_leg_l4 * Fcol(LEFT_LEG_J6);
    DATA(LEFT_LEG_J6+6, LEFT_LEG_J3+6) = F(iit::rbd::AZ,LEFT_LEG_J6);
    DATA(LEFT_LEG_J3+6, LEFT_LEG_J6+6) = DATA(LEFT_LEG_J6+6, LEFT_LEG_J3+6);
    Fcol(LEFT_LEG_J6) = frcTransf -> fr_left_leg_l2_X_fr_left_leg_l3 * Fcol(LEFT_LEG_J6);
    DATA(LEFT_LEG_J6+6, LEFT_LEG_J2+6) = F(iit::rbd::AZ,LEFT_LEG_J6);
    DATA(LEFT_LEG_J2+6, LEFT_LEG_J6+6) = DATA(LEFT_LEG_J6+6, LEFT_LEG_J2+6);
    Fcol(LEFT_LEG_J6) = frcTransf -> fr_left_leg_l1_X_fr_left_leg_l2 * Fcol(LEFT_LEG_J6);
    DATA(LEFT_LEG_J6+6, LEFT_LEG_J1+6) = F(iit::rbd::AZ,LEFT_LEG_J6);
    DATA(LEFT_LEG_J1+6, LEFT_LEG_J6+6) = DATA(LEFT_LEG_J6+6, LEFT_LEG_J1+6);
    Fcol(LEFT_LEG_J6) = frcTransf -> fr_torso_X_fr_left_leg_l1 * Fcol(LEFT_LEG_J6);

    // Link left_leg_l5:
    iit::rbd::transformInertia<Scalar>(left_leg_l5_Ic, frcTransf -> fr_left_leg_l4_X_fr_left_leg_l5, Ic_spare);
    left_leg_l4_Ic += Ic_spare;

    Fcol(LEFT_LEG_J5) = left_leg_l5_Ic.col(iit::rbd::AZ);
    DATA(LEFT_LEG_J5+6, LEFT_LEG_J5+6) = Fcol(LEFT_LEG_J5)(iit::rbd::AZ);

    Fcol(LEFT_LEG_J5) = frcTransf -> fr_left_leg_l4_X_fr_left_leg_l5 * Fcol(LEFT_LEG_J5);
    DATA(LEFT_LEG_J5+6, LEFT_LEG_J4+6) = F(iit::rbd::AZ,LEFT_LEG_J5);
    DATA(LEFT_LEG_J4+6, LEFT_LEG_J5+6) = DATA(LEFT_LEG_J5+6, LEFT_LEG_J4+6);
    Fcol(LEFT_LEG_J5) = frcTransf -> fr_left_leg_l3_X_fr_left_leg_l4 * Fcol(LEFT_LEG_J5);
    DATA(LEFT_LEG_J5+6, LEFT_LEG_J3+6) = F(iit::rbd::AZ,LEFT_LEG_J5);
    DATA(LEFT_LEG_J3+6, LEFT_LEG_J5+6) = DATA(LEFT_LEG_J5+6, LEFT_LEG_J3+6);
    Fcol(LEFT_LEG_J5) = frcTransf -> fr_left_leg_l2_X_fr_left_leg_l3 * Fcol(LEFT_LEG_J5);
    DATA(LEFT_LEG_J5+6, LEFT_LEG_J2+6) = F(iit::rbd::AZ,LEFT_LEG_J5);
    DATA(LEFT_LEG_J2+6, LEFT_LEG_J5+6) = DATA(LEFT_LEG_J5+6, LEFT_LEG_J2+6);
    Fcol(LEFT_LEG_J5) = frcTransf -> fr_left_leg_l1_X_fr_left_leg_l2 * Fcol(LEFT_LEG_J5);
    DATA(LEFT_LEG_J5+6, LEFT_LEG_J1+6) = F(iit::rbd::AZ,LEFT_LEG_J5);
    DATA(LEFT_LEG_J1+6, LEFT_LEG_J5+6) = DATA(LEFT_LEG_J5+6, LEFT_LEG_J1+6);
    Fcol(LEFT_LEG_J5) = frcTransf -> fr_torso_X_fr_left_leg_l1 * Fcol(LEFT_LEG_J5);

    // Link left_leg_l4:
    iit::rbd::transformInertia<Scalar>(left_leg_l4_Ic, frcTransf -> fr_left_leg_l3_X_fr_left_leg_l4, Ic_spare);
    left_leg_l3_Ic += Ic_spare;

    Fcol(LEFT_LEG_J4) = left_leg_l4_Ic.col(iit::rbd::AZ);
    DATA(LEFT_LEG_J4+6, LEFT_LEG_J4+6) = Fcol(LEFT_LEG_J4)(iit::rbd::AZ);

    Fcol(LEFT_LEG_J4) = frcTransf -> fr_left_leg_l3_X_fr_left_leg_l4 * Fcol(LEFT_LEG_J4);
    DATA(LEFT_LEG_J4+6, LEFT_LEG_J3+6) = F(iit::rbd::AZ,LEFT_LEG_J4);
    DATA(LEFT_LEG_J3+6, LEFT_LEG_J4+6) = DATA(LEFT_LEG_J4+6, LEFT_LEG_J3+6);
    Fcol(LEFT_LEG_J4) = frcTransf -> fr_left_leg_l2_X_fr_left_leg_l3 * Fcol(LEFT_LEG_J4);
    DATA(LEFT_LEG_J4+6, LEFT_LEG_J2+6) = F(iit::rbd::AZ,LEFT_LEG_J4);
    DATA(LEFT_LEG_J2+6, LEFT_LEG_J4+6) = DATA(LEFT_LEG_J4+6, LEFT_LEG_J2+6);
    Fcol(LEFT_LEG_J4) = frcTransf -> fr_left_leg_l1_X_fr_left_leg_l2 * Fcol(LEFT_LEG_J4);
    DATA(LEFT_LEG_J4+6, LEFT_LEG_J1+6) = F(iit::rbd::AZ,LEFT_LEG_J4);
    DATA(LEFT_LEG_J1+6, LEFT_LEG_J4+6) = DATA(LEFT_LEG_J4+6, LEFT_LEG_J1+6);
    Fcol(LEFT_LEG_J4) = frcTransf -> fr_torso_X_fr_left_leg_l1 * Fcol(LEFT_LEG_J4);

    // Link left_leg_l3:
    iit::rbd::transformInertia<Scalar>(left_leg_l3_Ic, frcTransf -> fr_left_leg_l2_X_fr_left_leg_l3, Ic_spare);
    left_leg_l2_Ic += Ic_spare;

    Fcol(LEFT_LEG_J3) = left_leg_l3_Ic.col(iit::rbd::AZ);
    DATA(LEFT_LEG_J3+6, LEFT_LEG_J3+6) = Fcol(LEFT_LEG_J3)(iit::rbd::AZ);

    Fcol(LEFT_LEG_J3) = frcTransf -> fr_left_leg_l2_X_fr_left_leg_l3 * Fcol(LEFT_LEG_J3);
    DATA(LEFT_LEG_J3+6, LEFT_LEG_J2+6) = F(iit::rbd::AZ,LEFT_LEG_J3);
    DATA(LEFT_LEG_J2+6, LEFT_LEG_J3+6) = DATA(LEFT_LEG_J3+6, LEFT_LEG_J2+6);
    Fcol(LEFT_LEG_J3) = frcTransf -> fr_left_leg_l1_X_fr_left_leg_l2 * Fcol(LEFT_LEG_J3);
    DATA(LEFT_LEG_J3+6, LEFT_LEG_J1+6) = F(iit::rbd::AZ,LEFT_LEG_J3);
    DATA(LEFT_LEG_J1+6, LEFT_LEG_J3+6) = DATA(LEFT_LEG_J3+6, LEFT_LEG_J1+6);
    Fcol(LEFT_LEG_J3) = frcTransf -> fr_torso_X_fr_left_leg_l1 * Fcol(LEFT_LEG_J3);

    // Link left_leg_l2:
    iit::rbd::transformInertia<Scalar>(left_leg_l2_Ic, frcTransf -> fr_left_leg_l1_X_fr_left_leg_l2, Ic_spare);
    left_leg_l1_Ic += Ic_spare;

    Fcol(LEFT_LEG_J2) = left_leg_l2_Ic.col(iit::rbd::AZ);
    DATA(LEFT_LEG_J2+6, LEFT_LEG_J2+6) = Fcol(LEFT_LEG_J2)(iit::rbd::AZ);

    Fcol(LEFT_LEG_J2) = frcTransf -> fr_left_leg_l1_X_fr_left_leg_l2 * Fcol(LEFT_LEG_J2);
    DATA(LEFT_LEG_J2+6, LEFT_LEG_J1+6) = F(iit::rbd::AZ,LEFT_LEG_J2);
    DATA(LEFT_LEG_J1+6, LEFT_LEG_J2+6) = DATA(LEFT_LEG_J2+6, LEFT_LEG_J1+6);
    Fcol(LEFT_LEG_J2) = frcTransf -> fr_torso_X_fr_left_leg_l1 * Fcol(LEFT_LEG_J2);

    // Link left_leg_l1:
    iit::rbd::transformInertia<Scalar>(left_leg_l1_Ic, frcTransf -> fr_torso_X_fr_left_leg_l1, Ic_spare);
    torso_Ic += Ic_spare;

    Fcol(LEFT_LEG_J1) = left_leg_l1_Ic.col(iit::rbd::AZ);
    DATA(LEFT_LEG_J1+6, LEFT_LEG_J1+6) = Fcol(LEFT_LEG_J1)(iit::rbd::AZ);

    Fcol(LEFT_LEG_J1) = frcTransf -> fr_torso_X_fr_left_leg_l1 * Fcol(LEFT_LEG_J1);

    // Link right_leg_l6:
    iit::rbd::transformInertia<Scalar>(right_leg_l6_Ic, frcTransf -> fr_right_leg_l5_X_fr_right_leg_l6, Ic_spare);
    right_leg_l5_Ic += Ic_spare;

    Fcol(RIGHT_LEG_J6) = right_leg_l6_Ic.col(iit::rbd::AZ);
    DATA(RIGHT_LEG_J6+6, RIGHT_LEG_J6+6) = Fcol(RIGHT_LEG_J6)(iit::rbd::AZ);

    Fcol(RIGHT_LEG_J6) = frcTransf -> fr_right_leg_l5_X_fr_right_leg_l6 * Fcol(RIGHT_LEG_J6);
    DATA(RIGHT_LEG_J6+6, RIGHT_LEG_J5+6) = F(iit::rbd::AZ,RIGHT_LEG_J6);
    DATA(RIGHT_LEG_J5+6, RIGHT_LEG_J6+6) = DATA(RIGHT_LEG_J6+6, RIGHT_LEG_J5+6);
    Fcol(RIGHT_LEG_J6) = frcTransf -> fr_right_leg_l4_X_fr_right_leg_l5 * Fcol(RIGHT_LEG_J6);
    DATA(RIGHT_LEG_J6+6, RIGHT_LEG_J4+6) = F(iit::rbd::AZ,RIGHT_LEG_J6);
    DATA(RIGHT_LEG_J4+6, RIGHT_LEG_J6+6) = DATA(RIGHT_LEG_J6+6, RIGHT_LEG_J4+6);
    Fcol(RIGHT_LEG_J6) = frcTransf -> fr_right_leg_l3_X_fr_right_leg_l4 * Fcol(RIGHT_LEG_J6);
    DATA(RIGHT_LEG_J6+6, RIGHT_LEG_J3+6) = F(iit::rbd::AZ,RIGHT_LEG_J6);
    DATA(RIGHT_LEG_J3+6, RIGHT_LEG_J6+6) = DATA(RIGHT_LEG_J6+6, RIGHT_LEG_J3+6);
    Fcol(RIGHT_LEG_J6) = frcTransf -> fr_right_leg_l2_X_fr_right_leg_l3 * Fcol(RIGHT_LEG_J6);
    DATA(RIGHT_LEG_J6+6, RIGHT_LEG_J2+6) = F(iit::rbd::AZ,RIGHT_LEG_J6);
    DATA(RIGHT_LEG_J2+6, RIGHT_LEG_J6+6) = DATA(RIGHT_LEG_J6+6, RIGHT_LEG_J2+6);
    Fcol(RIGHT_LEG_J6) = frcTransf -> fr_right_leg_l1_X_fr_right_leg_l2 * Fcol(RIGHT_LEG_J6);
    DATA(RIGHT_LEG_J6+6, RIGHT_LEG_J1+6) = F(iit::rbd::AZ,RIGHT_LEG_J6);
    DATA(RIGHT_LEG_J1+6, RIGHT_LEG_J6+6) = DATA(RIGHT_LEG_J6+6, RIGHT_LEG_J1+6);
    Fcol(RIGHT_LEG_J6) = frcTransf -> fr_torso_X_fr_right_leg_l1 * Fcol(RIGHT_LEG_J6);

    // Link right_leg_l5:
    iit::rbd::transformInertia<Scalar>(right_leg_l5_Ic, frcTransf -> fr_right_leg_l4_X_fr_right_leg_l5, Ic_spare);
    right_leg_l4_Ic += Ic_spare;

    Fcol(RIGHT_LEG_J5) = right_leg_l5_Ic.col(iit::rbd::AZ);
    DATA(RIGHT_LEG_J5+6, RIGHT_LEG_J5+6) = Fcol(RIGHT_LEG_J5)(iit::rbd::AZ);

    Fcol(RIGHT_LEG_J5) = frcTransf -> fr_right_leg_l4_X_fr_right_leg_l5 * Fcol(RIGHT_LEG_J5);
    DATA(RIGHT_LEG_J5+6, RIGHT_LEG_J4+6) = F(iit::rbd::AZ,RIGHT_LEG_J5);
    DATA(RIGHT_LEG_J4+6, RIGHT_LEG_J5+6) = DATA(RIGHT_LEG_J5+6, RIGHT_LEG_J4+6);
    Fcol(RIGHT_LEG_J5) = frcTransf -> fr_right_leg_l3_X_fr_right_leg_l4 * Fcol(RIGHT_LEG_J5);
    DATA(RIGHT_LEG_J5+6, RIGHT_LEG_J3+6) = F(iit::rbd::AZ,RIGHT_LEG_J5);
    DATA(RIGHT_LEG_J3+6, RIGHT_LEG_J5+6) = DATA(RIGHT_LEG_J5+6, RIGHT_LEG_J3+6);
    Fcol(RIGHT_LEG_J5) = frcTransf -> fr_right_leg_l2_X_fr_right_leg_l3 * Fcol(RIGHT_LEG_J5);
    DATA(RIGHT_LEG_J5+6, RIGHT_LEG_J2+6) = F(iit::rbd::AZ,RIGHT_LEG_J5);
    DATA(RIGHT_LEG_J2+6, RIGHT_LEG_J5+6) = DATA(RIGHT_LEG_J5+6, RIGHT_LEG_J2+6);
    Fcol(RIGHT_LEG_J5) = frcTransf -> fr_right_leg_l1_X_fr_right_leg_l2 * Fcol(RIGHT_LEG_J5);
    DATA(RIGHT_LEG_J5+6, RIGHT_LEG_J1+6) = F(iit::rbd::AZ,RIGHT_LEG_J5);
    DATA(RIGHT_LEG_J1+6, RIGHT_LEG_J5+6) = DATA(RIGHT_LEG_J5+6, RIGHT_LEG_J1+6);
    Fcol(RIGHT_LEG_J5) = frcTransf -> fr_torso_X_fr_right_leg_l1 * Fcol(RIGHT_LEG_J5);

    // Link right_leg_l4:
    iit::rbd::transformInertia<Scalar>(right_leg_l4_Ic, frcTransf -> fr_right_leg_l3_X_fr_right_leg_l4, Ic_spare);
    right_leg_l3_Ic += Ic_spare;

    Fcol(RIGHT_LEG_J4) = right_leg_l4_Ic.col(iit::rbd::AZ);
    DATA(RIGHT_LEG_J4+6, RIGHT_LEG_J4+6) = Fcol(RIGHT_LEG_J4)(iit::rbd::AZ);

    Fcol(RIGHT_LEG_J4) = frcTransf -> fr_right_leg_l3_X_fr_right_leg_l4 * Fcol(RIGHT_LEG_J4);
    DATA(RIGHT_LEG_J4+6, RIGHT_LEG_J3+6) = F(iit::rbd::AZ,RIGHT_LEG_J4);
    DATA(RIGHT_LEG_J3+6, RIGHT_LEG_J4+6) = DATA(RIGHT_LEG_J4+6, RIGHT_LEG_J3+6);
    Fcol(RIGHT_LEG_J4) = frcTransf -> fr_right_leg_l2_X_fr_right_leg_l3 * Fcol(RIGHT_LEG_J4);
    DATA(RIGHT_LEG_J4+6, RIGHT_LEG_J2+6) = F(iit::rbd::AZ,RIGHT_LEG_J4);
    DATA(RIGHT_LEG_J2+6, RIGHT_LEG_J4+6) = DATA(RIGHT_LEG_J4+6, RIGHT_LEG_J2+6);
    Fcol(RIGHT_LEG_J4) = frcTransf -> fr_right_leg_l1_X_fr_right_leg_l2 * Fcol(RIGHT_LEG_J4);
    DATA(RIGHT_LEG_J4+6, RIGHT_LEG_J1+6) = F(iit::rbd::AZ,RIGHT_LEG_J4);
    DATA(RIGHT_LEG_J1+6, RIGHT_LEG_J4+6) = DATA(RIGHT_LEG_J4+6, RIGHT_LEG_J1+6);
    Fcol(RIGHT_LEG_J4) = frcTransf -> fr_torso_X_fr_right_leg_l1 * Fcol(RIGHT_LEG_J4);

    // Link right_leg_l3:
    iit::rbd::transformInertia<Scalar>(right_leg_l3_Ic, frcTransf -> fr_right_leg_l2_X_fr_right_leg_l3, Ic_spare);
    right_leg_l2_Ic += Ic_spare;

    Fcol(RIGHT_LEG_J3) = right_leg_l3_Ic.col(iit::rbd::AZ);
    DATA(RIGHT_LEG_J3+6, RIGHT_LEG_J3+6) = Fcol(RIGHT_LEG_J3)(iit::rbd::AZ);

    Fcol(RIGHT_LEG_J3) = frcTransf -> fr_right_leg_l2_X_fr_right_leg_l3 * Fcol(RIGHT_LEG_J3);
    DATA(RIGHT_LEG_J3+6, RIGHT_LEG_J2+6) = F(iit::rbd::AZ,RIGHT_LEG_J3);
    DATA(RIGHT_LEG_J2+6, RIGHT_LEG_J3+6) = DATA(RIGHT_LEG_J3+6, RIGHT_LEG_J2+6);
    Fcol(RIGHT_LEG_J3) = frcTransf -> fr_right_leg_l1_X_fr_right_leg_l2 * Fcol(RIGHT_LEG_J3);
    DATA(RIGHT_LEG_J3+6, RIGHT_LEG_J1+6) = F(iit::rbd::AZ,RIGHT_LEG_J3);
    DATA(RIGHT_LEG_J1+6, RIGHT_LEG_J3+6) = DATA(RIGHT_LEG_J3+6, RIGHT_LEG_J1+6);
    Fcol(RIGHT_LEG_J3) = frcTransf -> fr_torso_X_fr_right_leg_l1 * Fcol(RIGHT_LEG_J3);

    // Link right_leg_l2:
    iit::rbd::transformInertia<Scalar>(right_leg_l2_Ic, frcTransf -> fr_right_leg_l1_X_fr_right_leg_l2, Ic_spare);
    right_leg_l1_Ic += Ic_spare;

    Fcol(RIGHT_LEG_J2) = right_leg_l2_Ic.col(iit::rbd::AZ);
    DATA(RIGHT_LEG_J2+6, RIGHT_LEG_J2+6) = Fcol(RIGHT_LEG_J2)(iit::rbd::AZ);

    Fcol(RIGHT_LEG_J2) = frcTransf -> fr_right_leg_l1_X_fr_right_leg_l2 * Fcol(RIGHT_LEG_J2);
    DATA(RIGHT_LEG_J2+6, RIGHT_LEG_J1+6) = F(iit::rbd::AZ,RIGHT_LEG_J2);
    DATA(RIGHT_LEG_J1+6, RIGHT_LEG_J2+6) = DATA(RIGHT_LEG_J2+6, RIGHT_LEG_J1+6);
    Fcol(RIGHT_LEG_J2) = frcTransf -> fr_torso_X_fr_right_leg_l1 * Fcol(RIGHT_LEG_J2);

    // Link right_leg_l1:
    iit::rbd::transformInertia<Scalar>(right_leg_l1_Ic, frcTransf -> fr_torso_X_fr_right_leg_l1, Ic_spare);
    torso_Ic += Ic_spare;

    Fcol(RIGHT_LEG_J1) = right_leg_l1_Ic.col(iit::rbd::AZ);
    DATA(RIGHT_LEG_J1+6, RIGHT_LEG_J1+6) = Fcol(RIGHT_LEG_J1)(iit::rbd::AZ);

    Fcol(RIGHT_LEG_J1) = frcTransf -> fr_torso_X_fr_right_leg_l1 * Fcol(RIGHT_LEG_J1);

    // Copies the upper-right block into the lower-left block, after transposing
    JSIM<TRAIT>:: template block<12, 6>(6,0) = (JSIM<TRAIT>:: template block<6, 12>(0,6)).transpose();
    // The composite-inertia of the whole robot is the upper-left quadrant of the JSIM
    JSIM<TRAIT>:: template block<6,6>(0,0) = torso_Ic;
    return *this;
}

#undef DATA
#undef F

template <typename TRAIT>
void iit::Walker::dyn::tpl::JSIM<TRAIT>::computeL() {
    L = this -> template triangularView<Eigen::Lower>();
    // Joint left_leg_j6, index 11 :
    L(11, 11) = std::sqrt(L(11, 11));
    L(11, 10) = L(11, 10) / L(11, 11);
    L(11, 9) = L(11, 9) / L(11, 11);
    L(11, 8) = L(11, 8) / L(11, 11);
    L(11, 7) = L(11, 7) / L(11, 11);
    L(11, 6) = L(11, 6) / L(11, 11);
    L(10, 10) = L(10, 10) - L(11, 10) * L(11, 10);
    L(10, 9) = L(10, 9) - L(11, 10) * L(11, 9);
    L(10, 8) = L(10, 8) - L(11, 10) * L(11, 8);
    L(10, 7) = L(10, 7) - L(11, 10) * L(11, 7);
    L(10, 6) = L(10, 6) - L(11, 10) * L(11, 6);
    L(9, 9) = L(9, 9) - L(11, 9) * L(11, 9);
    L(9, 8) = L(9, 8) - L(11, 9) * L(11, 8);
    L(9, 7) = L(9, 7) - L(11, 9) * L(11, 7);
    L(9, 6) = L(9, 6) - L(11, 9) * L(11, 6);
    L(8, 8) = L(8, 8) - L(11, 8) * L(11, 8);
    L(8, 7) = L(8, 7) - L(11, 8) * L(11, 7);
    L(8, 6) = L(8, 6) - L(11, 8) * L(11, 6);
    L(7, 7) = L(7, 7) - L(11, 7) * L(11, 7);
    L(7, 6) = L(7, 6) - L(11, 7) * L(11, 6);
    L(6, 6) = L(6, 6) - L(11, 6) * L(11, 6);
    
    // Joint left_leg_j5, index 10 :
    L(10, 10) = std::sqrt(L(10, 10));
    L(10, 9) = L(10, 9) / L(10, 10);
    L(10, 8) = L(10, 8) / L(10, 10);
    L(10, 7) = L(10, 7) / L(10, 10);
    L(10, 6) = L(10, 6) / L(10, 10);
    L(9, 9) = L(9, 9) - L(10, 9) * L(10, 9);
    L(9, 8) = L(9, 8) - L(10, 9) * L(10, 8);
    L(9, 7) = L(9, 7) - L(10, 9) * L(10, 7);
    L(9, 6) = L(9, 6) - L(10, 9) * L(10, 6);
    L(8, 8) = L(8, 8) - L(10, 8) * L(10, 8);
    L(8, 7) = L(8, 7) - L(10, 8) * L(10, 7);
    L(8, 6) = L(8, 6) - L(10, 8) * L(10, 6);
    L(7, 7) = L(7, 7) - L(10, 7) * L(10, 7);
    L(7, 6) = L(7, 6) - L(10, 7) * L(10, 6);
    L(6, 6) = L(6, 6) - L(10, 6) * L(10, 6);
    
    // Joint left_leg_j4, index 9 :
    L(9, 9) = std::sqrt(L(9, 9));
    L(9, 8) = L(9, 8) / L(9, 9);
    L(9, 7) = L(9, 7) / L(9, 9);
    L(9, 6) = L(9, 6) / L(9, 9);
    L(8, 8) = L(8, 8) - L(9, 8) * L(9, 8);
    L(8, 7) = L(8, 7) - L(9, 8) * L(9, 7);
    L(8, 6) = L(8, 6) - L(9, 8) * L(9, 6);
    L(7, 7) = L(7, 7) - L(9, 7) * L(9, 7);
    L(7, 6) = L(7, 6) - L(9, 7) * L(9, 6);
    L(6, 6) = L(6, 6) - L(9, 6) * L(9, 6);
    
    // Joint left_leg_j3, index 8 :
    L(8, 8) = std::sqrt(L(8, 8));
    L(8, 7) = L(8, 7) / L(8, 8);
    L(8, 6) = L(8, 6) / L(8, 8);
    L(7, 7) = L(7, 7) - L(8, 7) * L(8, 7);
    L(7, 6) = L(7, 6) - L(8, 7) * L(8, 6);
    L(6, 6) = L(6, 6) - L(8, 6) * L(8, 6);
    
    // Joint left_leg_j2, index 7 :
    L(7, 7) = std::sqrt(L(7, 7));
    L(7, 6) = L(7, 6) / L(7, 7);
    L(6, 6) = L(6, 6) - L(7, 6) * L(7, 6);
    
    // Joint left_leg_j1, index 6 :
    L(6, 6) = std::sqrt(L(6, 6));
    
    // Joint right_leg_j6, index 5 :
    L(5, 5) = std::sqrt(L(5, 5));
    L(5, 4) = L(5, 4) / L(5, 5);
    L(5, 3) = L(5, 3) / L(5, 5);
    L(5, 2) = L(5, 2) / L(5, 5);
    L(5, 1) = L(5, 1) / L(5, 5);
    L(5, 0) = L(5, 0) / L(5, 5);
    L(4, 4) = L(4, 4) - L(5, 4) * L(5, 4);
    L(4, 3) = L(4, 3) - L(5, 4) * L(5, 3);
    L(4, 2) = L(4, 2) - L(5, 4) * L(5, 2);
    L(4, 1) = L(4, 1) - L(5, 4) * L(5, 1);
    L(4, 0) = L(4, 0) - L(5, 4) * L(5, 0);
    L(3, 3) = L(3, 3) - L(5, 3) * L(5, 3);
    L(3, 2) = L(3, 2) - L(5, 3) * L(5, 2);
    L(3, 1) = L(3, 1) - L(5, 3) * L(5, 1);
    L(3, 0) = L(3, 0) - L(5, 3) * L(5, 0);
    L(2, 2) = L(2, 2) - L(5, 2) * L(5, 2);
    L(2, 1) = L(2, 1) - L(5, 2) * L(5, 1);
    L(2, 0) = L(2, 0) - L(5, 2) * L(5, 0);
    L(1, 1) = L(1, 1) - L(5, 1) * L(5, 1);
    L(1, 0) = L(1, 0) - L(5, 1) * L(5, 0);
    L(0, 0) = L(0, 0) - L(5, 0) * L(5, 0);
    
    // Joint right_leg_j5, index 4 :
    L(4, 4) = std::sqrt(L(4, 4));
    L(4, 3) = L(4, 3) / L(4, 4);
    L(4, 2) = L(4, 2) / L(4, 4);
    L(4, 1) = L(4, 1) / L(4, 4);
    L(4, 0) = L(4, 0) / L(4, 4);
    L(3, 3) = L(3, 3) - L(4, 3) * L(4, 3);
    L(3, 2) = L(3, 2) - L(4, 3) * L(4, 2);
    L(3, 1) = L(3, 1) - L(4, 3) * L(4, 1);
    L(3, 0) = L(3, 0) - L(4, 3) * L(4, 0);
    L(2, 2) = L(2, 2) - L(4, 2) * L(4, 2);
    L(2, 1) = L(2, 1) - L(4, 2) * L(4, 1);
    L(2, 0) = L(2, 0) - L(4, 2) * L(4, 0);
    L(1, 1) = L(1, 1) - L(4, 1) * L(4, 1);
    L(1, 0) = L(1, 0) - L(4, 1) * L(4, 0);
    L(0, 0) = L(0, 0) - L(4, 0) * L(4, 0);
    
    // Joint right_leg_j4, index 3 :
    L(3, 3) = std::sqrt(L(3, 3));
    L(3, 2) = L(3, 2) / L(3, 3);
    L(3, 1) = L(3, 1) / L(3, 3);
    L(3, 0) = L(3, 0) / L(3, 3);
    L(2, 2) = L(2, 2) - L(3, 2) * L(3, 2);
    L(2, 1) = L(2, 1) - L(3, 2) * L(3, 1);
    L(2, 0) = L(2, 0) - L(3, 2) * L(3, 0);
    L(1, 1) = L(1, 1) - L(3, 1) * L(3, 1);
    L(1, 0) = L(1, 0) - L(3, 1) * L(3, 0);
    L(0, 0) = L(0, 0) - L(3, 0) * L(3, 0);
    
    // Joint right_leg_j3, index 2 :
    L(2, 2) = std::sqrt(L(2, 2));
    L(2, 1) = L(2, 1) / L(2, 2);
    L(2, 0) = L(2, 0) / L(2, 2);
    L(1, 1) = L(1, 1) - L(2, 1) * L(2, 1);
    L(1, 0) = L(1, 0) - L(2, 1) * L(2, 0);
    L(0, 0) = L(0, 0) - L(2, 0) * L(2, 0);
    
    // Joint right_leg_j2, index 1 :
    L(1, 1) = std::sqrt(L(1, 1));
    L(1, 0) = L(1, 0) / L(1, 1);
    L(0, 0) = L(0, 0) - L(1, 0) * L(1, 0);
    
    // Joint right_leg_j1, index 0 :
    L(0, 0) = std::sqrt(L(0, 0));
    
}

template <typename TRAIT>
void iit::Walker::dyn::tpl::JSIM<TRAIT>::computeInverse() {
    computeLInverse();

    inverse(0, 0) =  + (Linv(0, 0) * Linv(0, 0));
    inverse(1, 1) =  + (Linv(1, 0) * Linv(1, 0)) + (Linv(1, 1) * Linv(1, 1));
    inverse(1, 0) =  + (Linv(1, 0) * Linv(0, 0));
    inverse(0, 1) = inverse(1, 0);
    inverse(2, 2) =  + (Linv(2, 0) * Linv(2, 0)) + (Linv(2, 1) * Linv(2, 1)) + (Linv(2, 2) * Linv(2, 2));
    inverse(2, 1) =  + (Linv(2, 0) * Linv(1, 0)) + (Linv(2, 1) * Linv(1, 1));
    inverse(1, 2) = inverse(2, 1);
    inverse(2, 0) =  + (Linv(2, 0) * Linv(0, 0));
    inverse(0, 2) = inverse(2, 0);
    inverse(3, 3) =  + (Linv(3, 0) * Linv(3, 0)) + (Linv(3, 1) * Linv(3, 1)) + (Linv(3, 2) * Linv(3, 2)) + (Linv(3, 3) * Linv(3, 3));
    inverse(3, 2) =  + (Linv(3, 0) * Linv(2, 0)) + (Linv(3, 1) * Linv(2, 1)) + (Linv(3, 2) * Linv(2, 2));
    inverse(2, 3) = inverse(3, 2);
    inverse(3, 1) =  + (Linv(3, 0) * Linv(1, 0)) + (Linv(3, 1) * Linv(1, 1));
    inverse(1, 3) = inverse(3, 1);
    inverse(3, 0) =  + (Linv(3, 0) * Linv(0, 0));
    inverse(0, 3) = inverse(3, 0);
    inverse(4, 4) =  + (Linv(4, 0) * Linv(4, 0)) + (Linv(4, 1) * Linv(4, 1)) + (Linv(4, 2) * Linv(4, 2)) + (Linv(4, 3) * Linv(4, 3)) + (Linv(4, 4) * Linv(4, 4));
    inverse(4, 3) =  + (Linv(4, 0) * Linv(3, 0)) + (Linv(4, 1) * Linv(3, 1)) + (Linv(4, 2) * Linv(3, 2)) + (Linv(4, 3) * Linv(3, 3));
    inverse(3, 4) = inverse(4, 3);
    inverse(4, 2) =  + (Linv(4, 0) * Linv(2, 0)) + (Linv(4, 1) * Linv(2, 1)) + (Linv(4, 2) * Linv(2, 2));
    inverse(2, 4) = inverse(4, 2);
    inverse(4, 1) =  + (Linv(4, 0) * Linv(1, 0)) + (Linv(4, 1) * Linv(1, 1));
    inverse(1, 4) = inverse(4, 1);
    inverse(4, 0) =  + (Linv(4, 0) * Linv(0, 0));
    inverse(0, 4) = inverse(4, 0);
    inverse(5, 5) =  + (Linv(5, 0) * Linv(5, 0)) + (Linv(5, 1) * Linv(5, 1)) + (Linv(5, 2) * Linv(5, 2)) + (Linv(5, 3) * Linv(5, 3)) + (Linv(5, 4) * Linv(5, 4)) + (Linv(5, 5) * Linv(5, 5));
    inverse(5, 4) =  + (Linv(5, 0) * Linv(4, 0)) + (Linv(5, 1) * Linv(4, 1)) + (Linv(5, 2) * Linv(4, 2)) + (Linv(5, 3) * Linv(4, 3)) + (Linv(5, 4) * Linv(4, 4));
    inverse(4, 5) = inverse(5, 4);
    inverse(5, 3) =  + (Linv(5, 0) * Linv(3, 0)) + (Linv(5, 1) * Linv(3, 1)) + (Linv(5, 2) * Linv(3, 2)) + (Linv(5, 3) * Linv(3, 3));
    inverse(3, 5) = inverse(5, 3);
    inverse(5, 2) =  + (Linv(5, 0) * Linv(2, 0)) + (Linv(5, 1) * Linv(2, 1)) + (Linv(5, 2) * Linv(2, 2));
    inverse(2, 5) = inverse(5, 2);
    inverse(5, 1) =  + (Linv(5, 0) * Linv(1, 0)) + (Linv(5, 1) * Linv(1, 1));
    inverse(1, 5) = inverse(5, 1);
    inverse(5, 0) =  + (Linv(5, 0) * Linv(0, 0));
    inverse(0, 5) = inverse(5, 0);
    inverse(6, 6) =  + (Linv(6, 6) * Linv(6, 6));
    inverse(7, 7) =  + (Linv(7, 6) * Linv(7, 6)) + (Linv(7, 7) * Linv(7, 7));
    inverse(7, 6) =  + (Linv(7, 6) * Linv(6, 6));
    inverse(6, 7) = inverse(7, 6);
    inverse(8, 8) =  + (Linv(8, 6) * Linv(8, 6)) + (Linv(8, 7) * Linv(8, 7)) + (Linv(8, 8) * Linv(8, 8));
    inverse(8, 7) =  + (Linv(8, 6) * Linv(7, 6)) + (Linv(8, 7) * Linv(7, 7));
    inverse(7, 8) = inverse(8, 7);
    inverse(8, 6) =  + (Linv(8, 6) * Linv(6, 6));
    inverse(6, 8) = inverse(8, 6);
    inverse(9, 9) =  + (Linv(9, 6) * Linv(9, 6)) + (Linv(9, 7) * Linv(9, 7)) + (Linv(9, 8) * Linv(9, 8)) + (Linv(9, 9) * Linv(9, 9));
    inverse(9, 8) =  + (Linv(9, 6) * Linv(8, 6)) + (Linv(9, 7) * Linv(8, 7)) + (Linv(9, 8) * Linv(8, 8));
    inverse(8, 9) = inverse(9, 8);
    inverse(9, 7) =  + (Linv(9, 6) * Linv(7, 6)) + (Linv(9, 7) * Linv(7, 7));
    inverse(7, 9) = inverse(9, 7);
    inverse(9, 6) =  + (Linv(9, 6) * Linv(6, 6));
    inverse(6, 9) = inverse(9, 6);
    inverse(10, 10) =  + (Linv(10, 6) * Linv(10, 6)) + (Linv(10, 7) * Linv(10, 7)) + (Linv(10, 8) * Linv(10, 8)) + (Linv(10, 9) * Linv(10, 9)) + (Linv(10, 10) * Linv(10, 10));
    inverse(10, 9) =  + (Linv(10, 6) * Linv(9, 6)) + (Linv(10, 7) * Linv(9, 7)) + (Linv(10, 8) * Linv(9, 8)) + (Linv(10, 9) * Linv(9, 9));
    inverse(9, 10) = inverse(10, 9);
    inverse(10, 8) =  + (Linv(10, 6) * Linv(8, 6)) + (Linv(10, 7) * Linv(8, 7)) + (Linv(10, 8) * Linv(8, 8));
    inverse(8, 10) = inverse(10, 8);
    inverse(10, 7) =  + (Linv(10, 6) * Linv(7, 6)) + (Linv(10, 7) * Linv(7, 7));
    inverse(7, 10) = inverse(10, 7);
    inverse(10, 6) =  + (Linv(10, 6) * Linv(6, 6));
    inverse(6, 10) = inverse(10, 6);
    inverse(11, 11) =  + (Linv(11, 6) * Linv(11, 6)) + (Linv(11, 7) * Linv(11, 7)) + (Linv(11, 8) * Linv(11, 8)) + (Linv(11, 9) * Linv(11, 9)) + (Linv(11, 10) * Linv(11, 10)) + (Linv(11, 11) * Linv(11, 11));
    inverse(11, 10) =  + (Linv(11, 6) * Linv(10, 6)) + (Linv(11, 7) * Linv(10, 7)) + (Linv(11, 8) * Linv(10, 8)) + (Linv(11, 9) * Linv(10, 9)) + (Linv(11, 10) * Linv(10, 10));
    inverse(10, 11) = inverse(11, 10);
    inverse(11, 9) =  + (Linv(11, 6) * Linv(9, 6)) + (Linv(11, 7) * Linv(9, 7)) + (Linv(11, 8) * Linv(9, 8)) + (Linv(11, 9) * Linv(9, 9));
    inverse(9, 11) = inverse(11, 9);
    inverse(11, 8) =  + (Linv(11, 6) * Linv(8, 6)) + (Linv(11, 7) * Linv(8, 7)) + (Linv(11, 8) * Linv(8, 8));
    inverse(8, 11) = inverse(11, 8);
    inverse(11, 7) =  + (Linv(11, 6) * Linv(7, 6)) + (Linv(11, 7) * Linv(7, 7));
    inverse(7, 11) = inverse(11, 7);
    inverse(11, 6) =  + (Linv(11, 6) * Linv(6, 6));
    inverse(6, 11) = inverse(11, 6);
}

template <typename TRAIT>
void iit::Walker::dyn::tpl::JSIM<TRAIT>::computeLInverse() {
    //assumes L has been computed already
    Linv(0, 0) = 1 / L(0, 0);
    Linv(1, 1) = 1 / L(1, 1);
    Linv(2, 2) = 1 / L(2, 2);
    Linv(3, 3) = 1 / L(3, 3);
    Linv(4, 4) = 1 / L(4, 4);
    Linv(5, 5) = 1 / L(5, 5);
    Linv(6, 6) = 1 / L(6, 6);
    Linv(7, 7) = 1 / L(7, 7);
    Linv(8, 8) = 1 / L(8, 8);
    Linv(9, 9) = 1 / L(9, 9);
    Linv(10, 10) = 1 / L(10, 10);
    Linv(11, 11) = 1 / L(11, 11);
    Linv(1, 0) = - Linv(0, 0) * ((Linv(1, 1) * L(1, 0)) + 0);
    Linv(2, 1) = - Linv(1, 1) * ((Linv(2, 2) * L(2, 1)) + 0);
    Linv(2, 0) = - Linv(0, 0) * ((Linv(2, 1) * L(1, 0)) + (Linv(2, 2) * L(2, 0)) + 0);
    Linv(3, 2) = - Linv(2, 2) * ((Linv(3, 3) * L(3, 2)) + 0);
    Linv(3, 1) = - Linv(1, 1) * ((Linv(3, 2) * L(2, 1)) + (Linv(3, 3) * L(3, 1)) + 0);
    Linv(3, 0) = - Linv(0, 0) * ((Linv(3, 1) * L(1, 0)) + (Linv(3, 2) * L(2, 0)) + (Linv(3, 3) * L(3, 0)) + 0);
    Linv(4, 3) = - Linv(3, 3) * ((Linv(4, 4) * L(4, 3)) + 0);
    Linv(4, 2) = - Linv(2, 2) * ((Linv(4, 3) * L(3, 2)) + (Linv(4, 4) * L(4, 2)) + 0);
    Linv(4, 1) = - Linv(1, 1) * ((Linv(4, 2) * L(2, 1)) + (Linv(4, 3) * L(3, 1)) + (Linv(4, 4) * L(4, 1)) + 0);
    Linv(4, 0) = - Linv(0, 0) * ((Linv(4, 1) * L(1, 0)) + (Linv(4, 2) * L(2, 0)) + (Linv(4, 3) * L(3, 0)) + (Linv(4, 4) * L(4, 0)) + 0);
    Linv(5, 4) = - Linv(4, 4) * ((Linv(5, 5) * L(5, 4)) + 0);
    Linv(5, 3) = - Linv(3, 3) * ((Linv(5, 4) * L(4, 3)) + (Linv(5, 5) * L(5, 3)) + 0);
    Linv(5, 2) = - Linv(2, 2) * ((Linv(5, 3) * L(3, 2)) + (Linv(5, 4) * L(4, 2)) + (Linv(5, 5) * L(5, 2)) + 0);
    Linv(5, 1) = - Linv(1, 1) * ((Linv(5, 2) * L(2, 1)) + (Linv(5, 3) * L(3, 1)) + (Linv(5, 4) * L(4, 1)) + (Linv(5, 5) * L(5, 1)) + 0);
    Linv(5, 0) = - Linv(0, 0) * ((Linv(5, 1) * L(1, 0)) + (Linv(5, 2) * L(2, 0)) + (Linv(5, 3) * L(3, 0)) + (Linv(5, 4) * L(4, 0)) + (Linv(5, 5) * L(5, 0)) + 0);
    Linv(7, 6) = - Linv(6, 6) * ((Linv(7, 7) * L(7, 6)) + 0);
    Linv(8, 7) = - Linv(7, 7) * ((Linv(8, 8) * L(8, 7)) + 0);
    Linv(8, 6) = - Linv(6, 6) * ((Linv(8, 7) * L(7, 6)) + (Linv(8, 8) * L(8, 6)) + 0);
    Linv(9, 8) = - Linv(8, 8) * ((Linv(9, 9) * L(9, 8)) + 0);
    Linv(9, 7) = - Linv(7, 7) * ((Linv(9, 8) * L(8, 7)) + (Linv(9, 9) * L(9, 7)) + 0);
    Linv(9, 6) = - Linv(6, 6) * ((Linv(9, 7) * L(7, 6)) + (Linv(9, 8) * L(8, 6)) + (Linv(9, 9) * L(9, 6)) + 0);
    Linv(10, 9) = - Linv(9, 9) * ((Linv(10, 10) * L(10, 9)) + 0);
    Linv(10, 8) = - Linv(8, 8) * ((Linv(10, 9) * L(9, 8)) + (Linv(10, 10) * L(10, 8)) + 0);
    Linv(10, 7) = - Linv(7, 7) * ((Linv(10, 8) * L(8, 7)) + (Linv(10, 9) * L(9, 7)) + (Linv(10, 10) * L(10, 7)) + 0);
    Linv(10, 6) = - Linv(6, 6) * ((Linv(10, 7) * L(7, 6)) + (Linv(10, 8) * L(8, 6)) + (Linv(10, 9) * L(9, 6)) + (Linv(10, 10) * L(10, 6)) + 0);
    Linv(11, 10) = - Linv(10, 10) * ((Linv(11, 11) * L(11, 10)) + 0);
    Linv(11, 9) = - Linv(9, 9) * ((Linv(11, 10) * L(10, 9)) + (Linv(11, 11) * L(11, 9)) + 0);
    Linv(11, 8) = - Linv(8, 8) * ((Linv(11, 9) * L(9, 8)) + (Linv(11, 10) * L(10, 8)) + (Linv(11, 11) * L(11, 8)) + 0);
    Linv(11, 7) = - Linv(7, 7) * ((Linv(11, 8) * L(8, 7)) + (Linv(11, 9) * L(9, 7)) + (Linv(11, 10) * L(10, 7)) + (Linv(11, 11) * L(11, 7)) + 0);
    Linv(11, 6) = - Linv(6, 6) * ((Linv(11, 7) * L(7, 6)) + (Linv(11, 8) * L(8, 6)) + (Linv(11, 9) * L(9, 6)) + (Linv(11, 10) * L(10, 6)) + (Linv(11, 11) * L(11, 6)) + 0);
}

