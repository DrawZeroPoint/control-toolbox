

//Implementation of default constructor
template <typename TRAIT>
iit::Franka::dyn::tpl::JSIM<TRAIT>::JSIM(IProperties& inertiaProperties, FTransforms& forceTransforms) :
    linkInertias(inertiaProperties),
    frcTransf( &forceTransforms ),
    panda_link7_Ic(linkInertias.getTensor_panda_link7())
{
    //Initialize the matrix itself
    this->setZero();
}

#define DATA tpl::JSIM<TRAIT>::operator()

template <typename TRAIT>
const typename iit::Franka::dyn::tpl::JSIM<TRAIT>& iit::Franka::dyn::tpl::JSIM<TRAIT>::update(const JointState& state) {
    ForceVector F;

    // Precomputes only once the coordinate transforms:
    frcTransf -> fr_panda_link6_X_fr_panda_link7(state);
    frcTransf -> fr_panda_link5_X_fr_panda_link6(state);
    frcTransf -> fr_panda_link4_X_fr_panda_link5(state);
    frcTransf -> fr_panda_link3_X_fr_panda_link4(state);
    frcTransf -> fr_panda_link2_X_fr_panda_link3(state);
    frcTransf -> fr_panda_link1_X_fr_panda_link2(state);

    // Initializes the composite inertia tensors
    panda_link1_Ic = linkInertias.getTensor_panda_link1();
    panda_link2_Ic = linkInertias.getTensor_panda_link2();
    panda_link3_Ic = linkInertias.getTensor_panda_link3();
    panda_link4_Ic = linkInertias.getTensor_panda_link4();
    panda_link5_Ic = linkInertias.getTensor_panda_link5();
    panda_link6_Ic = linkInertias.getTensor_panda_link6();

    // "Bottom-up" loop to update the inertia-composite property of each link, for the current configuration

    // Link panda_link7:
    iit::rbd::transformInertia<Scalar>(panda_link7_Ic, frcTransf -> fr_panda_link6_X_fr_panda_link7, Ic_spare);
    panda_link6_Ic += Ic_spare;

    F = panda_link7_Ic.col(iit::rbd::AZ);
    DATA(PANDA_JOINT7, PANDA_JOINT7) = F(iit::rbd::AZ);

    F = frcTransf -> fr_panda_link6_X_fr_panda_link7 * F;
    DATA(PANDA_JOINT7, PANDA_JOINT6) = F(iit::rbd::AZ);
    DATA(PANDA_JOINT6, PANDA_JOINT7) = DATA(PANDA_JOINT7, PANDA_JOINT6);
    F = frcTransf -> fr_panda_link5_X_fr_panda_link6 * F;
    DATA(PANDA_JOINT7, PANDA_JOINT5) = F(iit::rbd::AZ);
    DATA(PANDA_JOINT5, PANDA_JOINT7) = DATA(PANDA_JOINT7, PANDA_JOINT5);
    F = frcTransf -> fr_panda_link4_X_fr_panda_link5 * F;
    DATA(PANDA_JOINT7, PANDA_JOINT4) = F(iit::rbd::AZ);
    DATA(PANDA_JOINT4, PANDA_JOINT7) = DATA(PANDA_JOINT7, PANDA_JOINT4);
    F = frcTransf -> fr_panda_link3_X_fr_panda_link4 * F;
    DATA(PANDA_JOINT7, PANDA_JOINT3) = F(iit::rbd::AZ);
    DATA(PANDA_JOINT3, PANDA_JOINT7) = DATA(PANDA_JOINT7, PANDA_JOINT3);
    F = frcTransf -> fr_panda_link2_X_fr_panda_link3 * F;
    DATA(PANDA_JOINT7, PANDA_JOINT2) = F(iit::rbd::AZ);
    DATA(PANDA_JOINT2, PANDA_JOINT7) = DATA(PANDA_JOINT7, PANDA_JOINT2);
    F = frcTransf -> fr_panda_link1_X_fr_panda_link2 * F;
    DATA(PANDA_JOINT7, PANDA_JOINT1) = F(iit::rbd::AZ);
    DATA(PANDA_JOINT1, PANDA_JOINT7) = DATA(PANDA_JOINT7, PANDA_JOINT1);

    // Link panda_link6:
    iit::rbd::transformInertia<Scalar>(panda_link6_Ic, frcTransf -> fr_panda_link5_X_fr_panda_link6, Ic_spare);
    panda_link5_Ic += Ic_spare;

    F = panda_link6_Ic.col(iit::rbd::AZ);
    DATA(PANDA_JOINT6, PANDA_JOINT6) = F(iit::rbd::AZ);

    F = frcTransf -> fr_panda_link5_X_fr_panda_link6 * F;
    DATA(PANDA_JOINT6, PANDA_JOINT5) = F(iit::rbd::AZ);
    DATA(PANDA_JOINT5, PANDA_JOINT6) = DATA(PANDA_JOINT6, PANDA_JOINT5);
    F = frcTransf -> fr_panda_link4_X_fr_panda_link5 * F;
    DATA(PANDA_JOINT6, PANDA_JOINT4) = F(iit::rbd::AZ);
    DATA(PANDA_JOINT4, PANDA_JOINT6) = DATA(PANDA_JOINT6, PANDA_JOINT4);
    F = frcTransf -> fr_panda_link3_X_fr_panda_link4 * F;
    DATA(PANDA_JOINT6, PANDA_JOINT3) = F(iit::rbd::AZ);
    DATA(PANDA_JOINT3, PANDA_JOINT6) = DATA(PANDA_JOINT6, PANDA_JOINT3);
    F = frcTransf -> fr_panda_link2_X_fr_panda_link3 * F;
    DATA(PANDA_JOINT6, PANDA_JOINT2) = F(iit::rbd::AZ);
    DATA(PANDA_JOINT2, PANDA_JOINT6) = DATA(PANDA_JOINT6, PANDA_JOINT2);
    F = frcTransf -> fr_panda_link1_X_fr_panda_link2 * F;
    DATA(PANDA_JOINT6, PANDA_JOINT1) = F(iit::rbd::AZ);
    DATA(PANDA_JOINT1, PANDA_JOINT6) = DATA(PANDA_JOINT6, PANDA_JOINT1);

    // Link panda_link5:
    iit::rbd::transformInertia<Scalar>(panda_link5_Ic, frcTransf -> fr_panda_link4_X_fr_panda_link5, Ic_spare);
    panda_link4_Ic += Ic_spare;

    F = panda_link5_Ic.col(iit::rbd::AZ);
    DATA(PANDA_JOINT5, PANDA_JOINT5) = F(iit::rbd::AZ);

    F = frcTransf -> fr_panda_link4_X_fr_panda_link5 * F;
    DATA(PANDA_JOINT5, PANDA_JOINT4) = F(iit::rbd::AZ);
    DATA(PANDA_JOINT4, PANDA_JOINT5) = DATA(PANDA_JOINT5, PANDA_JOINT4);
    F = frcTransf -> fr_panda_link3_X_fr_panda_link4 * F;
    DATA(PANDA_JOINT5, PANDA_JOINT3) = F(iit::rbd::AZ);
    DATA(PANDA_JOINT3, PANDA_JOINT5) = DATA(PANDA_JOINT5, PANDA_JOINT3);
    F = frcTransf -> fr_panda_link2_X_fr_panda_link3 * F;
    DATA(PANDA_JOINT5, PANDA_JOINT2) = F(iit::rbd::AZ);
    DATA(PANDA_JOINT2, PANDA_JOINT5) = DATA(PANDA_JOINT5, PANDA_JOINT2);
    F = frcTransf -> fr_panda_link1_X_fr_panda_link2 * F;
    DATA(PANDA_JOINT5, PANDA_JOINT1) = F(iit::rbd::AZ);
    DATA(PANDA_JOINT1, PANDA_JOINT5) = DATA(PANDA_JOINT5, PANDA_JOINT1);

    // Link panda_link4:
    iit::rbd::transformInertia<Scalar>(panda_link4_Ic, frcTransf -> fr_panda_link3_X_fr_panda_link4, Ic_spare);
    panda_link3_Ic += Ic_spare;

    F = panda_link4_Ic.col(iit::rbd::AZ);
    DATA(PANDA_JOINT4, PANDA_JOINT4) = F(iit::rbd::AZ);

    F = frcTransf -> fr_panda_link3_X_fr_panda_link4 * F;
    DATA(PANDA_JOINT4, PANDA_JOINT3) = F(iit::rbd::AZ);
    DATA(PANDA_JOINT3, PANDA_JOINT4) = DATA(PANDA_JOINT4, PANDA_JOINT3);
    F = frcTransf -> fr_panda_link2_X_fr_panda_link3 * F;
    DATA(PANDA_JOINT4, PANDA_JOINT2) = F(iit::rbd::AZ);
    DATA(PANDA_JOINT2, PANDA_JOINT4) = DATA(PANDA_JOINT4, PANDA_JOINT2);
    F = frcTransf -> fr_panda_link1_X_fr_panda_link2 * F;
    DATA(PANDA_JOINT4, PANDA_JOINT1) = F(iit::rbd::AZ);
    DATA(PANDA_JOINT1, PANDA_JOINT4) = DATA(PANDA_JOINT4, PANDA_JOINT1);

    // Link panda_link3:
    iit::rbd::transformInertia<Scalar>(panda_link3_Ic, frcTransf -> fr_panda_link2_X_fr_panda_link3, Ic_spare);
    panda_link2_Ic += Ic_spare;

    F = panda_link3_Ic.col(iit::rbd::AZ);
    DATA(PANDA_JOINT3, PANDA_JOINT3) = F(iit::rbd::AZ);

    F = frcTransf -> fr_panda_link2_X_fr_panda_link3 * F;
    DATA(PANDA_JOINT3, PANDA_JOINT2) = F(iit::rbd::AZ);
    DATA(PANDA_JOINT2, PANDA_JOINT3) = DATA(PANDA_JOINT3, PANDA_JOINT2);
    F = frcTransf -> fr_panda_link1_X_fr_panda_link2 * F;
    DATA(PANDA_JOINT3, PANDA_JOINT1) = F(iit::rbd::AZ);
    DATA(PANDA_JOINT1, PANDA_JOINT3) = DATA(PANDA_JOINT3, PANDA_JOINT1);

    // Link panda_link2:
    iit::rbd::transformInertia<Scalar>(panda_link2_Ic, frcTransf -> fr_panda_link1_X_fr_panda_link2, Ic_spare);
    panda_link1_Ic += Ic_spare;

    F = panda_link2_Ic.col(iit::rbd::AZ);
    DATA(PANDA_JOINT2, PANDA_JOINT2) = F(iit::rbd::AZ);

    F = frcTransf -> fr_panda_link1_X_fr_panda_link2 * F;
    DATA(PANDA_JOINT2, PANDA_JOINT1) = F(iit::rbd::AZ);
    DATA(PANDA_JOINT1, PANDA_JOINT2) = DATA(PANDA_JOINT2, PANDA_JOINT1);

    // Link panda_link1:

    F = panda_link1_Ic.col(iit::rbd::AZ);
    DATA(PANDA_JOINT1, PANDA_JOINT1) = F(iit::rbd::AZ);


    return *this;
}

#undef DATA
#undef F

template <typename TRAIT>
void iit::Franka::dyn::tpl::JSIM<TRAIT>::computeL() {
    L = this -> template triangularView<Eigen::Lower>();
    // Joint panda_joint7, index 6 :
    L(6, 6) = std::sqrt(L(6, 6));
    L(6, 5) = L(6, 5) / L(6, 6);
    L(6, 4) = L(6, 4) / L(6, 6);
    L(6, 3) = L(6, 3) / L(6, 6);
    L(6, 2) = L(6, 2) / L(6, 6);
    L(6, 1) = L(6, 1) / L(6, 6);
    L(6, 0) = L(6, 0) / L(6, 6);
    L(5, 5) = L(5, 5) - L(6, 5) * L(6, 5);
    L(5, 4) = L(5, 4) - L(6, 5) * L(6, 4);
    L(5, 3) = L(5, 3) - L(6, 5) * L(6, 3);
    L(5, 2) = L(5, 2) - L(6, 5) * L(6, 2);
    L(5, 1) = L(5, 1) - L(6, 5) * L(6, 1);
    L(5, 0) = L(5, 0) - L(6, 5) * L(6, 0);
    L(4, 4) = L(4, 4) - L(6, 4) * L(6, 4);
    L(4, 3) = L(4, 3) - L(6, 4) * L(6, 3);
    L(4, 2) = L(4, 2) - L(6, 4) * L(6, 2);
    L(4, 1) = L(4, 1) - L(6, 4) * L(6, 1);
    L(4, 0) = L(4, 0) - L(6, 4) * L(6, 0);
    L(3, 3) = L(3, 3) - L(6, 3) * L(6, 3);
    L(3, 2) = L(3, 2) - L(6, 3) * L(6, 2);
    L(3, 1) = L(3, 1) - L(6, 3) * L(6, 1);
    L(3, 0) = L(3, 0) - L(6, 3) * L(6, 0);
    L(2, 2) = L(2, 2) - L(6, 2) * L(6, 2);
    L(2, 1) = L(2, 1) - L(6, 2) * L(6, 1);
    L(2, 0) = L(2, 0) - L(6, 2) * L(6, 0);
    L(1, 1) = L(1, 1) - L(6, 1) * L(6, 1);
    L(1, 0) = L(1, 0) - L(6, 1) * L(6, 0);
    L(0, 0) = L(0, 0) - L(6, 0) * L(6, 0);
    
    // Joint panda_joint6, index 5 :
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
    
    // Joint panda_joint5, index 4 :
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
    
    // Joint panda_joint4, index 3 :
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
    
    // Joint panda_joint3, index 2 :
    L(2, 2) = std::sqrt(L(2, 2));
    L(2, 1) = L(2, 1) / L(2, 2);
    L(2, 0) = L(2, 0) / L(2, 2);
    L(1, 1) = L(1, 1) - L(2, 1) * L(2, 1);
    L(1, 0) = L(1, 0) - L(2, 1) * L(2, 0);
    L(0, 0) = L(0, 0) - L(2, 0) * L(2, 0);
    
    // Joint panda_joint2, index 1 :
    L(1, 1) = std::sqrt(L(1, 1));
    L(1, 0) = L(1, 0) / L(1, 1);
    L(0, 0) = L(0, 0) - L(1, 0) * L(1, 0);
    
    // Joint panda_joint1, index 0 :
    L(0, 0) = std::sqrt(L(0, 0));
    
}

template <typename TRAIT>
void iit::Franka::dyn::tpl::JSIM<TRAIT>::computeInverse() {
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
    inverse(6, 6) =  + (Linv(6, 0) * Linv(6, 0)) + (Linv(6, 1) * Linv(6, 1)) + (Linv(6, 2) * Linv(6, 2)) + (Linv(6, 3) * Linv(6, 3)) + (Linv(6, 4) * Linv(6, 4)) + (Linv(6, 5) * Linv(6, 5)) + (Linv(6, 6) * Linv(6, 6));
    inverse(6, 5) =  + (Linv(6, 0) * Linv(5, 0)) + (Linv(6, 1) * Linv(5, 1)) + (Linv(6, 2) * Linv(5, 2)) + (Linv(6, 3) * Linv(5, 3)) + (Linv(6, 4) * Linv(5, 4)) + (Linv(6, 5) * Linv(5, 5));
    inverse(5, 6) = inverse(6, 5);
    inverse(6, 4) =  + (Linv(6, 0) * Linv(4, 0)) + (Linv(6, 1) * Linv(4, 1)) + (Linv(6, 2) * Linv(4, 2)) + (Linv(6, 3) * Linv(4, 3)) + (Linv(6, 4) * Linv(4, 4));
    inverse(4, 6) = inverse(6, 4);
    inverse(6, 3) =  + (Linv(6, 0) * Linv(3, 0)) + (Linv(6, 1) * Linv(3, 1)) + (Linv(6, 2) * Linv(3, 2)) + (Linv(6, 3) * Linv(3, 3));
    inverse(3, 6) = inverse(6, 3);
    inverse(6, 2) =  + (Linv(6, 0) * Linv(2, 0)) + (Linv(6, 1) * Linv(2, 1)) + (Linv(6, 2) * Linv(2, 2));
    inverse(2, 6) = inverse(6, 2);
    inverse(6, 1) =  + (Linv(6, 0) * Linv(1, 0)) + (Linv(6, 1) * Linv(1, 1));
    inverse(1, 6) = inverse(6, 1);
    inverse(6, 0) =  + (Linv(6, 0) * Linv(0, 0));
    inverse(0, 6) = inverse(6, 0);
}

template <typename TRAIT>
void iit::Franka::dyn::tpl::JSIM<TRAIT>::computeLInverse() {
    //assumes L has been computed already
    Linv(0, 0) = 1 / L(0, 0);
    Linv(1, 1) = 1 / L(1, 1);
    Linv(2, 2) = 1 / L(2, 2);
    Linv(3, 3) = 1 / L(3, 3);
    Linv(4, 4) = 1 / L(4, 4);
    Linv(5, 5) = 1 / L(5, 5);
    Linv(6, 6) = 1 / L(6, 6);
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
    Linv(6, 5) = - Linv(5, 5) * ((Linv(6, 6) * L(6, 5)) + 0);
    Linv(6, 4) = - Linv(4, 4) * ((Linv(6, 5) * L(5, 4)) + (Linv(6, 6) * L(6, 4)) + 0);
    Linv(6, 3) = - Linv(3, 3) * ((Linv(6, 4) * L(4, 3)) + (Linv(6, 5) * L(5, 3)) + (Linv(6, 6) * L(6, 3)) + 0);
    Linv(6, 2) = - Linv(2, 2) * ((Linv(6, 3) * L(3, 2)) + (Linv(6, 4) * L(4, 2)) + (Linv(6, 5) * L(5, 2)) + (Linv(6, 6) * L(6, 2)) + 0);
    Linv(6, 1) = - Linv(1, 1) * ((Linv(6, 2) * L(2, 1)) + (Linv(6, 3) * L(3, 1)) + (Linv(6, 4) * L(4, 1)) + (Linv(6, 5) * L(5, 1)) + (Linv(6, 6) * L(6, 1)) + 0);
    Linv(6, 0) = - Linv(0, 0) * ((Linv(6, 1) * L(1, 0)) + (Linv(6, 2) * L(2, 0)) + (Linv(6, 3) * L(3, 0)) + (Linv(6, 4) * L(4, 0)) + (Linv(6, 5) * L(5, 0)) + (Linv(6, 6) * L(6, 0)) + 0);
}

