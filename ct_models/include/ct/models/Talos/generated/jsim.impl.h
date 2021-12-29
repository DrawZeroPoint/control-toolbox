

//Implementation of default constructor
template <typename TRAIT>
iit::Talos::dyn::tpl::JSIM<TRAIT>::JSIM(IProperties& inertiaProperties, FTransforms& forceTransforms) :
    linkInertias(inertiaProperties),
    frcTransf( &forceTransforms ),
    leg_left_6_link_Ic(linkInertias.getTensor_leg_left_6_link()),
    leg_right_6_link_Ic(linkInertias.getTensor_leg_right_6_link())
{
    //Initialize the matrix itself
    this->setZero();
}

#define DATA tpl::JSIM<TRAIT>::operator()
#define Fcol(j) (tpl::JSIM<TRAIT>:: template block<6,1>(0,(j)+6))
#define F(i,j) DATA((i),(j)+6)

template <typename TRAIT>
const typename iit::Talos::dyn::tpl::JSIM<TRAIT>& iit::Talos::dyn::tpl::JSIM<TRAIT>::update(const JointState& state) {

    // Precomputes only once the coordinate transforms:
    frcTransf -> fr_leg_right_5_link_X_fr_leg_right_6_link(state);
    frcTransf -> fr_leg_right_4_link_X_fr_leg_right_5_link(state);
    frcTransf -> fr_leg_right_3_link_X_fr_leg_right_4_link(state);
    frcTransf -> fr_leg_right_2_link_X_fr_leg_right_3_link(state);
    frcTransf -> fr_leg_right_1_link_X_fr_leg_right_2_link(state);
    frcTransf -> fr_base_link_X_fr_leg_right_1_link(state);
    frcTransf -> fr_leg_left_5_link_X_fr_leg_left_6_link(state);
    frcTransf -> fr_leg_left_4_link_X_fr_leg_left_5_link(state);
    frcTransf -> fr_leg_left_3_link_X_fr_leg_left_4_link(state);
    frcTransf -> fr_leg_left_2_link_X_fr_leg_left_3_link(state);
    frcTransf -> fr_leg_left_1_link_X_fr_leg_left_2_link(state);
    frcTransf -> fr_base_link_X_fr_leg_left_1_link(state);

    // Initializes the composite inertia tensors
    base_link_Ic = linkInertias.getTensor_base_link();
    leg_left_1_link_Ic = linkInertias.getTensor_leg_left_1_link();
    leg_left_2_link_Ic = linkInertias.getTensor_leg_left_2_link();
    leg_left_3_link_Ic = linkInertias.getTensor_leg_left_3_link();
    leg_left_4_link_Ic = linkInertias.getTensor_leg_left_4_link();
    leg_left_5_link_Ic = linkInertias.getTensor_leg_left_5_link();
    leg_right_1_link_Ic = linkInertias.getTensor_leg_right_1_link();
    leg_right_2_link_Ic = linkInertias.getTensor_leg_right_2_link();
    leg_right_3_link_Ic = linkInertias.getTensor_leg_right_3_link();
    leg_right_4_link_Ic = linkInertias.getTensor_leg_right_4_link();
    leg_right_5_link_Ic = linkInertias.getTensor_leg_right_5_link();

    // "Bottom-up" loop to update the inertia-composite property of each link, for the current configuration

    // Link leg_right_6_link:
    iit::rbd::transformInertia<Scalar>(leg_right_6_link_Ic, frcTransf -> fr_leg_right_5_link_X_fr_leg_right_6_link, Ic_spare);
    leg_right_5_link_Ic += Ic_spare;

    Fcol(LEG_RIGHT_6_JOINT) = leg_right_6_link_Ic.col(iit::rbd::AZ);
    DATA(LEG_RIGHT_6_JOINT+6, LEG_RIGHT_6_JOINT+6) = Fcol(LEG_RIGHT_6_JOINT)(iit::rbd::AZ);

    Fcol(LEG_RIGHT_6_JOINT) = frcTransf -> fr_leg_right_5_link_X_fr_leg_right_6_link * Fcol(LEG_RIGHT_6_JOINT);
    DATA(LEG_RIGHT_6_JOINT+6, LEG_RIGHT_5_JOINT+6) = F(iit::rbd::AZ,LEG_RIGHT_6_JOINT);
    DATA(LEG_RIGHT_5_JOINT+6, LEG_RIGHT_6_JOINT+6) = DATA(LEG_RIGHT_6_JOINT+6, LEG_RIGHT_5_JOINT+6);
    Fcol(LEG_RIGHT_6_JOINT) = frcTransf -> fr_leg_right_4_link_X_fr_leg_right_5_link * Fcol(LEG_RIGHT_6_JOINT);
    DATA(LEG_RIGHT_6_JOINT+6, LEG_RIGHT_4_JOINT+6) = F(iit::rbd::AZ,LEG_RIGHT_6_JOINT);
    DATA(LEG_RIGHT_4_JOINT+6, LEG_RIGHT_6_JOINT+6) = DATA(LEG_RIGHT_6_JOINT+6, LEG_RIGHT_4_JOINT+6);
    Fcol(LEG_RIGHT_6_JOINT) = frcTransf -> fr_leg_right_3_link_X_fr_leg_right_4_link * Fcol(LEG_RIGHT_6_JOINT);
    DATA(LEG_RIGHT_6_JOINT+6, LEG_RIGHT_3_JOINT+6) = F(iit::rbd::AZ,LEG_RIGHT_6_JOINT);
    DATA(LEG_RIGHT_3_JOINT+6, LEG_RIGHT_6_JOINT+6) = DATA(LEG_RIGHT_6_JOINT+6, LEG_RIGHT_3_JOINT+6);
    Fcol(LEG_RIGHT_6_JOINT) = frcTransf -> fr_leg_right_2_link_X_fr_leg_right_3_link * Fcol(LEG_RIGHT_6_JOINT);
    DATA(LEG_RIGHT_6_JOINT+6, LEG_RIGHT_2_JOINT+6) = F(iit::rbd::AZ,LEG_RIGHT_6_JOINT);
    DATA(LEG_RIGHT_2_JOINT+6, LEG_RIGHT_6_JOINT+6) = DATA(LEG_RIGHT_6_JOINT+6, LEG_RIGHT_2_JOINT+6);
    Fcol(LEG_RIGHT_6_JOINT) = frcTransf -> fr_leg_right_1_link_X_fr_leg_right_2_link * Fcol(LEG_RIGHT_6_JOINT);
    DATA(LEG_RIGHT_6_JOINT+6, LEG_RIGHT_1_JOINT+6) = F(iit::rbd::AZ,LEG_RIGHT_6_JOINT);
    DATA(LEG_RIGHT_1_JOINT+6, LEG_RIGHT_6_JOINT+6) = DATA(LEG_RIGHT_6_JOINT+6, LEG_RIGHT_1_JOINT+6);
    Fcol(LEG_RIGHT_6_JOINT) = frcTransf -> fr_base_link_X_fr_leg_right_1_link * Fcol(LEG_RIGHT_6_JOINT);

    // Link leg_right_5_link:
    iit::rbd::transformInertia<Scalar>(leg_right_5_link_Ic, frcTransf -> fr_leg_right_4_link_X_fr_leg_right_5_link, Ic_spare);
    leg_right_4_link_Ic += Ic_spare;

    Fcol(LEG_RIGHT_5_JOINT) = leg_right_5_link_Ic.col(iit::rbd::AZ);
    DATA(LEG_RIGHT_5_JOINT+6, LEG_RIGHT_5_JOINT+6) = Fcol(LEG_RIGHT_5_JOINT)(iit::rbd::AZ);

    Fcol(LEG_RIGHT_5_JOINT) = frcTransf -> fr_leg_right_4_link_X_fr_leg_right_5_link * Fcol(LEG_RIGHT_5_JOINT);
    DATA(LEG_RIGHT_5_JOINT+6, LEG_RIGHT_4_JOINT+6) = F(iit::rbd::AZ,LEG_RIGHT_5_JOINT);
    DATA(LEG_RIGHT_4_JOINT+6, LEG_RIGHT_5_JOINT+6) = DATA(LEG_RIGHT_5_JOINT+6, LEG_RIGHT_4_JOINT+6);
    Fcol(LEG_RIGHT_5_JOINT) = frcTransf -> fr_leg_right_3_link_X_fr_leg_right_4_link * Fcol(LEG_RIGHT_5_JOINT);
    DATA(LEG_RIGHT_5_JOINT+6, LEG_RIGHT_3_JOINT+6) = F(iit::rbd::AZ,LEG_RIGHT_5_JOINT);
    DATA(LEG_RIGHT_3_JOINT+6, LEG_RIGHT_5_JOINT+6) = DATA(LEG_RIGHT_5_JOINT+6, LEG_RIGHT_3_JOINT+6);
    Fcol(LEG_RIGHT_5_JOINT) = frcTransf -> fr_leg_right_2_link_X_fr_leg_right_3_link * Fcol(LEG_RIGHT_5_JOINT);
    DATA(LEG_RIGHT_5_JOINT+6, LEG_RIGHT_2_JOINT+6) = F(iit::rbd::AZ,LEG_RIGHT_5_JOINT);
    DATA(LEG_RIGHT_2_JOINT+6, LEG_RIGHT_5_JOINT+6) = DATA(LEG_RIGHT_5_JOINT+6, LEG_RIGHT_2_JOINT+6);
    Fcol(LEG_RIGHT_5_JOINT) = frcTransf -> fr_leg_right_1_link_X_fr_leg_right_2_link * Fcol(LEG_RIGHT_5_JOINT);
    DATA(LEG_RIGHT_5_JOINT+6, LEG_RIGHT_1_JOINT+6) = F(iit::rbd::AZ,LEG_RIGHT_5_JOINT);
    DATA(LEG_RIGHT_1_JOINT+6, LEG_RIGHT_5_JOINT+6) = DATA(LEG_RIGHT_5_JOINT+6, LEG_RIGHT_1_JOINT+6);
    Fcol(LEG_RIGHT_5_JOINT) = frcTransf -> fr_base_link_X_fr_leg_right_1_link * Fcol(LEG_RIGHT_5_JOINT);

    // Link leg_right_4_link:
    iit::rbd::transformInertia<Scalar>(leg_right_4_link_Ic, frcTransf -> fr_leg_right_3_link_X_fr_leg_right_4_link, Ic_spare);
    leg_right_3_link_Ic += Ic_spare;

    Fcol(LEG_RIGHT_4_JOINT) = leg_right_4_link_Ic.col(iit::rbd::AZ);
    DATA(LEG_RIGHT_4_JOINT+6, LEG_RIGHT_4_JOINT+6) = Fcol(LEG_RIGHT_4_JOINT)(iit::rbd::AZ);

    Fcol(LEG_RIGHT_4_JOINT) = frcTransf -> fr_leg_right_3_link_X_fr_leg_right_4_link * Fcol(LEG_RIGHT_4_JOINT);
    DATA(LEG_RIGHT_4_JOINT+6, LEG_RIGHT_3_JOINT+6) = F(iit::rbd::AZ,LEG_RIGHT_4_JOINT);
    DATA(LEG_RIGHT_3_JOINT+6, LEG_RIGHT_4_JOINT+6) = DATA(LEG_RIGHT_4_JOINT+6, LEG_RIGHT_3_JOINT+6);
    Fcol(LEG_RIGHT_4_JOINT) = frcTransf -> fr_leg_right_2_link_X_fr_leg_right_3_link * Fcol(LEG_RIGHT_4_JOINT);
    DATA(LEG_RIGHT_4_JOINT+6, LEG_RIGHT_2_JOINT+6) = F(iit::rbd::AZ,LEG_RIGHT_4_JOINT);
    DATA(LEG_RIGHT_2_JOINT+6, LEG_RIGHT_4_JOINT+6) = DATA(LEG_RIGHT_4_JOINT+6, LEG_RIGHT_2_JOINT+6);
    Fcol(LEG_RIGHT_4_JOINT) = frcTransf -> fr_leg_right_1_link_X_fr_leg_right_2_link * Fcol(LEG_RIGHT_4_JOINT);
    DATA(LEG_RIGHT_4_JOINT+6, LEG_RIGHT_1_JOINT+6) = F(iit::rbd::AZ,LEG_RIGHT_4_JOINT);
    DATA(LEG_RIGHT_1_JOINT+6, LEG_RIGHT_4_JOINT+6) = DATA(LEG_RIGHT_4_JOINT+6, LEG_RIGHT_1_JOINT+6);
    Fcol(LEG_RIGHT_4_JOINT) = frcTransf -> fr_base_link_X_fr_leg_right_1_link * Fcol(LEG_RIGHT_4_JOINT);

    // Link leg_right_3_link:
    iit::rbd::transformInertia<Scalar>(leg_right_3_link_Ic, frcTransf -> fr_leg_right_2_link_X_fr_leg_right_3_link, Ic_spare);
    leg_right_2_link_Ic += Ic_spare;

    Fcol(LEG_RIGHT_3_JOINT) = leg_right_3_link_Ic.col(iit::rbd::AZ);
    DATA(LEG_RIGHT_3_JOINT+6, LEG_RIGHT_3_JOINT+6) = Fcol(LEG_RIGHT_3_JOINT)(iit::rbd::AZ);

    Fcol(LEG_RIGHT_3_JOINT) = frcTransf -> fr_leg_right_2_link_X_fr_leg_right_3_link * Fcol(LEG_RIGHT_3_JOINT);
    DATA(LEG_RIGHT_3_JOINT+6, LEG_RIGHT_2_JOINT+6) = F(iit::rbd::AZ,LEG_RIGHT_3_JOINT);
    DATA(LEG_RIGHT_2_JOINT+6, LEG_RIGHT_3_JOINT+6) = DATA(LEG_RIGHT_3_JOINT+6, LEG_RIGHT_2_JOINT+6);
    Fcol(LEG_RIGHT_3_JOINT) = frcTransf -> fr_leg_right_1_link_X_fr_leg_right_2_link * Fcol(LEG_RIGHT_3_JOINT);
    DATA(LEG_RIGHT_3_JOINT+6, LEG_RIGHT_1_JOINT+6) = F(iit::rbd::AZ,LEG_RIGHT_3_JOINT);
    DATA(LEG_RIGHT_1_JOINT+6, LEG_RIGHT_3_JOINT+6) = DATA(LEG_RIGHT_3_JOINT+6, LEG_RIGHT_1_JOINT+6);
    Fcol(LEG_RIGHT_3_JOINT) = frcTransf -> fr_base_link_X_fr_leg_right_1_link * Fcol(LEG_RIGHT_3_JOINT);

    // Link leg_right_2_link:
    iit::rbd::transformInertia<Scalar>(leg_right_2_link_Ic, frcTransf -> fr_leg_right_1_link_X_fr_leg_right_2_link, Ic_spare);
    leg_right_1_link_Ic += Ic_spare;

    Fcol(LEG_RIGHT_2_JOINT) = leg_right_2_link_Ic.col(iit::rbd::AZ);
    DATA(LEG_RIGHT_2_JOINT+6, LEG_RIGHT_2_JOINT+6) = Fcol(LEG_RIGHT_2_JOINT)(iit::rbd::AZ);

    Fcol(LEG_RIGHT_2_JOINT) = frcTransf -> fr_leg_right_1_link_X_fr_leg_right_2_link * Fcol(LEG_RIGHT_2_JOINT);
    DATA(LEG_RIGHT_2_JOINT+6, LEG_RIGHT_1_JOINT+6) = F(iit::rbd::AZ,LEG_RIGHT_2_JOINT);
    DATA(LEG_RIGHT_1_JOINT+6, LEG_RIGHT_2_JOINT+6) = DATA(LEG_RIGHT_2_JOINT+6, LEG_RIGHT_1_JOINT+6);
    Fcol(LEG_RIGHT_2_JOINT) = frcTransf -> fr_base_link_X_fr_leg_right_1_link * Fcol(LEG_RIGHT_2_JOINT);

    // Link leg_right_1_link:
    iit::rbd::transformInertia<Scalar>(leg_right_1_link_Ic, frcTransf -> fr_base_link_X_fr_leg_right_1_link, Ic_spare);
    base_link_Ic += Ic_spare;

    Fcol(LEG_RIGHT_1_JOINT) = leg_right_1_link_Ic.col(iit::rbd::AZ);
    DATA(LEG_RIGHT_1_JOINT+6, LEG_RIGHT_1_JOINT+6) = Fcol(LEG_RIGHT_1_JOINT)(iit::rbd::AZ);

    Fcol(LEG_RIGHT_1_JOINT) = frcTransf -> fr_base_link_X_fr_leg_right_1_link * Fcol(LEG_RIGHT_1_JOINT);

    // Link leg_left_6_link:
    iit::rbd::transformInertia<Scalar>(leg_left_6_link_Ic, frcTransf -> fr_leg_left_5_link_X_fr_leg_left_6_link, Ic_spare);
    leg_left_5_link_Ic += Ic_spare;

    Fcol(LEG_LEFT_6_JOINT) = leg_left_6_link_Ic.col(iit::rbd::AZ);
    DATA(LEG_LEFT_6_JOINT+6, LEG_LEFT_6_JOINT+6) = Fcol(LEG_LEFT_6_JOINT)(iit::rbd::AZ);

    Fcol(LEG_LEFT_6_JOINT) = frcTransf -> fr_leg_left_5_link_X_fr_leg_left_6_link * Fcol(LEG_LEFT_6_JOINT);
    DATA(LEG_LEFT_6_JOINT+6, LEG_LEFT_5_JOINT+6) = F(iit::rbd::AZ,LEG_LEFT_6_JOINT);
    DATA(LEG_LEFT_5_JOINT+6, LEG_LEFT_6_JOINT+6) = DATA(LEG_LEFT_6_JOINT+6, LEG_LEFT_5_JOINT+6);
    Fcol(LEG_LEFT_6_JOINT) = frcTransf -> fr_leg_left_4_link_X_fr_leg_left_5_link * Fcol(LEG_LEFT_6_JOINT);
    DATA(LEG_LEFT_6_JOINT+6, LEG_LEFT_4_JOINT+6) = F(iit::rbd::AZ,LEG_LEFT_6_JOINT);
    DATA(LEG_LEFT_4_JOINT+6, LEG_LEFT_6_JOINT+6) = DATA(LEG_LEFT_6_JOINT+6, LEG_LEFT_4_JOINT+6);
    Fcol(LEG_LEFT_6_JOINT) = frcTransf -> fr_leg_left_3_link_X_fr_leg_left_4_link * Fcol(LEG_LEFT_6_JOINT);
    DATA(LEG_LEFT_6_JOINT+6, LEG_LEFT_3_JOINT+6) = F(iit::rbd::AZ,LEG_LEFT_6_JOINT);
    DATA(LEG_LEFT_3_JOINT+6, LEG_LEFT_6_JOINT+6) = DATA(LEG_LEFT_6_JOINT+6, LEG_LEFT_3_JOINT+6);
    Fcol(LEG_LEFT_6_JOINT) = frcTransf -> fr_leg_left_2_link_X_fr_leg_left_3_link * Fcol(LEG_LEFT_6_JOINT);
    DATA(LEG_LEFT_6_JOINT+6, LEG_LEFT_2_JOINT+6) = F(iit::rbd::AZ,LEG_LEFT_6_JOINT);
    DATA(LEG_LEFT_2_JOINT+6, LEG_LEFT_6_JOINT+6) = DATA(LEG_LEFT_6_JOINT+6, LEG_LEFT_2_JOINT+6);
    Fcol(LEG_LEFT_6_JOINT) = frcTransf -> fr_leg_left_1_link_X_fr_leg_left_2_link * Fcol(LEG_LEFT_6_JOINT);
    DATA(LEG_LEFT_6_JOINT+6, LEG_LEFT_1_JOINT+6) = F(iit::rbd::AZ,LEG_LEFT_6_JOINT);
    DATA(LEG_LEFT_1_JOINT+6, LEG_LEFT_6_JOINT+6) = DATA(LEG_LEFT_6_JOINT+6, LEG_LEFT_1_JOINT+6);
    Fcol(LEG_LEFT_6_JOINT) = frcTransf -> fr_base_link_X_fr_leg_left_1_link * Fcol(LEG_LEFT_6_JOINT);

    // Link leg_left_5_link:
    iit::rbd::transformInertia<Scalar>(leg_left_5_link_Ic, frcTransf -> fr_leg_left_4_link_X_fr_leg_left_5_link, Ic_spare);
    leg_left_4_link_Ic += Ic_spare;

    Fcol(LEG_LEFT_5_JOINT) = leg_left_5_link_Ic.col(iit::rbd::AZ);
    DATA(LEG_LEFT_5_JOINT+6, LEG_LEFT_5_JOINT+6) = Fcol(LEG_LEFT_5_JOINT)(iit::rbd::AZ);

    Fcol(LEG_LEFT_5_JOINT) = frcTransf -> fr_leg_left_4_link_X_fr_leg_left_5_link * Fcol(LEG_LEFT_5_JOINT);
    DATA(LEG_LEFT_5_JOINT+6, LEG_LEFT_4_JOINT+6) = F(iit::rbd::AZ,LEG_LEFT_5_JOINT);
    DATA(LEG_LEFT_4_JOINT+6, LEG_LEFT_5_JOINT+6) = DATA(LEG_LEFT_5_JOINT+6, LEG_LEFT_4_JOINT+6);
    Fcol(LEG_LEFT_5_JOINT) = frcTransf -> fr_leg_left_3_link_X_fr_leg_left_4_link * Fcol(LEG_LEFT_5_JOINT);
    DATA(LEG_LEFT_5_JOINT+6, LEG_LEFT_3_JOINT+6) = F(iit::rbd::AZ,LEG_LEFT_5_JOINT);
    DATA(LEG_LEFT_3_JOINT+6, LEG_LEFT_5_JOINT+6) = DATA(LEG_LEFT_5_JOINT+6, LEG_LEFT_3_JOINT+6);
    Fcol(LEG_LEFT_5_JOINT) = frcTransf -> fr_leg_left_2_link_X_fr_leg_left_3_link * Fcol(LEG_LEFT_5_JOINT);
    DATA(LEG_LEFT_5_JOINT+6, LEG_LEFT_2_JOINT+6) = F(iit::rbd::AZ,LEG_LEFT_5_JOINT);
    DATA(LEG_LEFT_2_JOINT+6, LEG_LEFT_5_JOINT+6) = DATA(LEG_LEFT_5_JOINT+6, LEG_LEFT_2_JOINT+6);
    Fcol(LEG_LEFT_5_JOINT) = frcTransf -> fr_leg_left_1_link_X_fr_leg_left_2_link * Fcol(LEG_LEFT_5_JOINT);
    DATA(LEG_LEFT_5_JOINT+6, LEG_LEFT_1_JOINT+6) = F(iit::rbd::AZ,LEG_LEFT_5_JOINT);
    DATA(LEG_LEFT_1_JOINT+6, LEG_LEFT_5_JOINT+6) = DATA(LEG_LEFT_5_JOINT+6, LEG_LEFT_1_JOINT+6);
    Fcol(LEG_LEFT_5_JOINT) = frcTransf -> fr_base_link_X_fr_leg_left_1_link * Fcol(LEG_LEFT_5_JOINT);

    // Link leg_left_4_link:
    iit::rbd::transformInertia<Scalar>(leg_left_4_link_Ic, frcTransf -> fr_leg_left_3_link_X_fr_leg_left_4_link, Ic_spare);
    leg_left_3_link_Ic += Ic_spare;

    Fcol(LEG_LEFT_4_JOINT) = leg_left_4_link_Ic.col(iit::rbd::AZ);
    DATA(LEG_LEFT_4_JOINT+6, LEG_LEFT_4_JOINT+6) = Fcol(LEG_LEFT_4_JOINT)(iit::rbd::AZ);

    Fcol(LEG_LEFT_4_JOINT) = frcTransf -> fr_leg_left_3_link_X_fr_leg_left_4_link * Fcol(LEG_LEFT_4_JOINT);
    DATA(LEG_LEFT_4_JOINT+6, LEG_LEFT_3_JOINT+6) = F(iit::rbd::AZ,LEG_LEFT_4_JOINT);
    DATA(LEG_LEFT_3_JOINT+6, LEG_LEFT_4_JOINT+6) = DATA(LEG_LEFT_4_JOINT+6, LEG_LEFT_3_JOINT+6);
    Fcol(LEG_LEFT_4_JOINT) = frcTransf -> fr_leg_left_2_link_X_fr_leg_left_3_link * Fcol(LEG_LEFT_4_JOINT);
    DATA(LEG_LEFT_4_JOINT+6, LEG_LEFT_2_JOINT+6) = F(iit::rbd::AZ,LEG_LEFT_4_JOINT);
    DATA(LEG_LEFT_2_JOINT+6, LEG_LEFT_4_JOINT+6) = DATA(LEG_LEFT_4_JOINT+6, LEG_LEFT_2_JOINT+6);
    Fcol(LEG_LEFT_4_JOINT) = frcTransf -> fr_leg_left_1_link_X_fr_leg_left_2_link * Fcol(LEG_LEFT_4_JOINT);
    DATA(LEG_LEFT_4_JOINT+6, LEG_LEFT_1_JOINT+6) = F(iit::rbd::AZ,LEG_LEFT_4_JOINT);
    DATA(LEG_LEFT_1_JOINT+6, LEG_LEFT_4_JOINT+6) = DATA(LEG_LEFT_4_JOINT+6, LEG_LEFT_1_JOINT+6);
    Fcol(LEG_LEFT_4_JOINT) = frcTransf -> fr_base_link_X_fr_leg_left_1_link * Fcol(LEG_LEFT_4_JOINT);

    // Link leg_left_3_link:
    iit::rbd::transformInertia<Scalar>(leg_left_3_link_Ic, frcTransf -> fr_leg_left_2_link_X_fr_leg_left_3_link, Ic_spare);
    leg_left_2_link_Ic += Ic_spare;

    Fcol(LEG_LEFT_3_JOINT) = leg_left_3_link_Ic.col(iit::rbd::AZ);
    DATA(LEG_LEFT_3_JOINT+6, LEG_LEFT_3_JOINT+6) = Fcol(LEG_LEFT_3_JOINT)(iit::rbd::AZ);

    Fcol(LEG_LEFT_3_JOINT) = frcTransf -> fr_leg_left_2_link_X_fr_leg_left_3_link * Fcol(LEG_LEFT_3_JOINT);
    DATA(LEG_LEFT_3_JOINT+6, LEG_LEFT_2_JOINT+6) = F(iit::rbd::AZ,LEG_LEFT_3_JOINT);
    DATA(LEG_LEFT_2_JOINT+6, LEG_LEFT_3_JOINT+6) = DATA(LEG_LEFT_3_JOINT+6, LEG_LEFT_2_JOINT+6);
    Fcol(LEG_LEFT_3_JOINT) = frcTransf -> fr_leg_left_1_link_X_fr_leg_left_2_link * Fcol(LEG_LEFT_3_JOINT);
    DATA(LEG_LEFT_3_JOINT+6, LEG_LEFT_1_JOINT+6) = F(iit::rbd::AZ,LEG_LEFT_3_JOINT);
    DATA(LEG_LEFT_1_JOINT+6, LEG_LEFT_3_JOINT+6) = DATA(LEG_LEFT_3_JOINT+6, LEG_LEFT_1_JOINT+6);
    Fcol(LEG_LEFT_3_JOINT) = frcTransf -> fr_base_link_X_fr_leg_left_1_link * Fcol(LEG_LEFT_3_JOINT);

    // Link leg_left_2_link:
    iit::rbd::transformInertia<Scalar>(leg_left_2_link_Ic, frcTransf -> fr_leg_left_1_link_X_fr_leg_left_2_link, Ic_spare);
    leg_left_1_link_Ic += Ic_spare;

    Fcol(LEG_LEFT_2_JOINT) = leg_left_2_link_Ic.col(iit::rbd::AZ);
    DATA(LEG_LEFT_2_JOINT+6, LEG_LEFT_2_JOINT+6) = Fcol(LEG_LEFT_2_JOINT)(iit::rbd::AZ);

    Fcol(LEG_LEFT_2_JOINT) = frcTransf -> fr_leg_left_1_link_X_fr_leg_left_2_link * Fcol(LEG_LEFT_2_JOINT);
    DATA(LEG_LEFT_2_JOINT+6, LEG_LEFT_1_JOINT+6) = F(iit::rbd::AZ,LEG_LEFT_2_JOINT);
    DATA(LEG_LEFT_1_JOINT+6, LEG_LEFT_2_JOINT+6) = DATA(LEG_LEFT_2_JOINT+6, LEG_LEFT_1_JOINT+6);
    Fcol(LEG_LEFT_2_JOINT) = frcTransf -> fr_base_link_X_fr_leg_left_1_link * Fcol(LEG_LEFT_2_JOINT);

    // Link leg_left_1_link:
    iit::rbd::transformInertia<Scalar>(leg_left_1_link_Ic, frcTransf -> fr_base_link_X_fr_leg_left_1_link, Ic_spare);
    base_link_Ic += Ic_spare;

    Fcol(LEG_LEFT_1_JOINT) = leg_left_1_link_Ic.col(iit::rbd::AZ);
    DATA(LEG_LEFT_1_JOINT+6, LEG_LEFT_1_JOINT+6) = Fcol(LEG_LEFT_1_JOINT)(iit::rbd::AZ);

    Fcol(LEG_LEFT_1_JOINT) = frcTransf -> fr_base_link_X_fr_leg_left_1_link * Fcol(LEG_LEFT_1_JOINT);

    // Copies the upper-right block into the lower-left block, after transposing
    JSIM<TRAIT>:: template block<12, 6>(6,0) = (JSIM<TRAIT>:: template block<6, 12>(0,6)).transpose();
    // The composite-inertia of the whole robot is the upper-left quadrant of the JSIM
    JSIM<TRAIT>:: template block<6,6>(0,0) = base_link_Ic;
    return *this;
}

#undef DATA
#undef F

template <typename TRAIT>
void iit::Talos::dyn::tpl::JSIM<TRAIT>::computeL() {
    L = this -> template triangularView<Eigen::Lower>();
    // Joint leg_right_6_joint, index 13 :
    L(13, 13) = std::sqrt(L(13, 13));
    L(13, 12) = L(13, 12) / L(13, 13);
    L(13, 11) = L(13, 11) / L(13, 13);
    L(13, 10) = L(13, 10) / L(13, 13);
    L(13, 9) = L(13, 9) / L(13, 13);
    L(13, 8) = L(13, 8) / L(13, 13);
    L(12, 12) = L(12, 12) - L(13, 12) * L(13, 12);
    L(12, 11) = L(12, 11) - L(13, 12) * L(13, 11);
    L(12, 10) = L(12, 10) - L(13, 12) * L(13, 10);
    L(12, 9) = L(12, 9) - L(13, 12) * L(13, 9);
    L(12, 8) = L(12, 8) - L(13, 12) * L(13, 8);
    L(11, 11) = L(11, 11) - L(13, 11) * L(13, 11);
    L(11, 10) = L(11, 10) - L(13, 11) * L(13, 10);
    L(11, 9) = L(11, 9) - L(13, 11) * L(13, 9);
    L(11, 8) = L(11, 8) - L(13, 11) * L(13, 8);
    L(10, 10) = L(10, 10) - L(13, 10) * L(13, 10);
    L(10, 9) = L(10, 9) - L(13, 10) * L(13, 9);
    L(10, 8) = L(10, 8) - L(13, 10) * L(13, 8);
    L(9, 9) = L(9, 9) - L(13, 9) * L(13, 9);
    L(9, 8) = L(9, 8) - L(13, 9) * L(13, 8);
    L(8, 8) = L(8, 8) - L(13, 8) * L(13, 8);
    
    // Joint leg_right_5_joint, index 12 :
    L(12, 12) = std::sqrt(L(12, 12));
    L(12, 11) = L(12, 11) / L(12, 12);
    L(12, 10) = L(12, 10) / L(12, 12);
    L(12, 9) = L(12, 9) / L(12, 12);
    L(12, 8) = L(12, 8) / L(12, 12);
    L(11, 11) = L(11, 11) - L(12, 11) * L(12, 11);
    L(11, 10) = L(11, 10) - L(12, 11) * L(12, 10);
    L(11, 9) = L(11, 9) - L(12, 11) * L(12, 9);
    L(11, 8) = L(11, 8) - L(12, 11) * L(12, 8);
    L(10, 10) = L(10, 10) - L(12, 10) * L(12, 10);
    L(10, 9) = L(10, 9) - L(12, 10) * L(12, 9);
    L(10, 8) = L(10, 8) - L(12, 10) * L(12, 8);
    L(9, 9) = L(9, 9) - L(12, 9) * L(12, 9);
    L(9, 8) = L(9, 8) - L(12, 9) * L(12, 8);
    L(8, 8) = L(8, 8) - L(12, 8) * L(12, 8);
    
    // Joint leg_right_4_joint, index 11 :
    L(11, 11) = std::sqrt(L(11, 11));
    L(11, 10) = L(11, 10) / L(11, 11);
    L(11, 9) = L(11, 9) / L(11, 11);
    L(11, 8) = L(11, 8) / L(11, 11);
    L(10, 10) = L(10, 10) - L(11, 10) * L(11, 10);
    L(10, 9) = L(10, 9) - L(11, 10) * L(11, 9);
    L(10, 8) = L(10, 8) - L(11, 10) * L(11, 8);
    L(9, 9) = L(9, 9) - L(11, 9) * L(11, 9);
    L(9, 8) = L(9, 8) - L(11, 9) * L(11, 8);
    L(8, 8) = L(8, 8) - L(11, 8) * L(11, 8);
    
    // Joint leg_right_3_joint, index 10 :
    L(10, 10) = std::sqrt(L(10, 10));
    L(10, 9) = L(10, 9) / L(10, 10);
    L(10, 8) = L(10, 8) / L(10, 10);
    L(9, 9) = L(9, 9) - L(10, 9) * L(10, 9);
    L(9, 8) = L(9, 8) - L(10, 9) * L(10, 8);
    L(8, 8) = L(8, 8) - L(10, 8) * L(10, 8);
    
    // Joint leg_right_2_joint, index 9 :
    L(9, 9) = std::sqrt(L(9, 9));
    L(9, 8) = L(9, 8) / L(9, 9);
    L(8, 8) = L(8, 8) - L(9, 8) * L(9, 8);
    
    // Joint leg_right_1_joint, index 8 :
    L(8, 8) = std::sqrt(L(8, 8));
    
    // Joint leg_left_6_joint, index 7 :
    L(7, 7) = std::sqrt(L(7, 7));
    L(7, 6) = L(7, 6) / L(7, 7);
    L(7, 5) = L(7, 5) / L(7, 7);
    L(7, 4) = L(7, 4) / L(7, 7);
    L(7, 3) = L(7, 3) / L(7, 7);
    L(7, 2) = L(7, 2) / L(7, 7);
    L(6, 6) = L(6, 6) - L(7, 6) * L(7, 6);
    L(6, 5) = L(6, 5) - L(7, 6) * L(7, 5);
    L(6, 4) = L(6, 4) - L(7, 6) * L(7, 4);
    L(6, 3) = L(6, 3) - L(7, 6) * L(7, 3);
    L(6, 2) = L(6, 2) - L(7, 6) * L(7, 2);
    L(5, 5) = L(5, 5) - L(7, 5) * L(7, 5);
    L(5, 4) = L(5, 4) - L(7, 5) * L(7, 4);
    L(5, 3) = L(5, 3) - L(7, 5) * L(7, 3);
    L(5, 2) = L(5, 2) - L(7, 5) * L(7, 2);
    L(4, 4) = L(4, 4) - L(7, 4) * L(7, 4);
    L(4, 3) = L(4, 3) - L(7, 4) * L(7, 3);
    L(4, 2) = L(4, 2) - L(7, 4) * L(7, 2);
    L(3, 3) = L(3, 3) - L(7, 3) * L(7, 3);
    L(3, 2) = L(3, 2) - L(7, 3) * L(7, 2);
    L(2, 2) = L(2, 2) - L(7, 2) * L(7, 2);
    
    // Joint leg_left_5_joint, index 6 :
    L(6, 6) = std::sqrt(L(6, 6));
    L(6, 5) = L(6, 5) / L(6, 6);
    L(6, 4) = L(6, 4) / L(6, 6);
    L(6, 3) = L(6, 3) / L(6, 6);
    L(6, 2) = L(6, 2) / L(6, 6);
    L(5, 5) = L(5, 5) - L(6, 5) * L(6, 5);
    L(5, 4) = L(5, 4) - L(6, 5) * L(6, 4);
    L(5, 3) = L(5, 3) - L(6, 5) * L(6, 3);
    L(5, 2) = L(5, 2) - L(6, 5) * L(6, 2);
    L(4, 4) = L(4, 4) - L(6, 4) * L(6, 4);
    L(4, 3) = L(4, 3) - L(6, 4) * L(6, 3);
    L(4, 2) = L(4, 2) - L(6, 4) * L(6, 2);
    L(3, 3) = L(3, 3) - L(6, 3) * L(6, 3);
    L(3, 2) = L(3, 2) - L(6, 3) * L(6, 2);
    L(2, 2) = L(2, 2) - L(6, 2) * L(6, 2);
    
    // Joint leg_left_4_joint, index 5 :
    L(5, 5) = std::sqrt(L(5, 5));
    L(5, 4) = L(5, 4) / L(5, 5);
    L(5, 3) = L(5, 3) / L(5, 5);
    L(5, 2) = L(5, 2) / L(5, 5);
    L(4, 4) = L(4, 4) - L(5, 4) * L(5, 4);
    L(4, 3) = L(4, 3) - L(5, 4) * L(5, 3);
    L(4, 2) = L(4, 2) - L(5, 4) * L(5, 2);
    L(3, 3) = L(3, 3) - L(5, 3) * L(5, 3);
    L(3, 2) = L(3, 2) - L(5, 3) * L(5, 2);
    L(2, 2) = L(2, 2) - L(5, 2) * L(5, 2);
    
    // Joint leg_left_3_joint, index 4 :
    L(4, 4) = std::sqrt(L(4, 4));
    L(4, 3) = L(4, 3) / L(4, 4);
    L(4, 2) = L(4, 2) / L(4, 4);
    L(3, 3) = L(3, 3) - L(4, 3) * L(4, 3);
    L(3, 2) = L(3, 2) - L(4, 3) * L(4, 2);
    L(2, 2) = L(2, 2) - L(4, 2) * L(4, 2);
    
    // Joint leg_left_2_joint, index 3 :
    L(3, 3) = std::sqrt(L(3, 3));
    L(3, 2) = L(3, 2) / L(3, 3);
    L(2, 2) = L(2, 2) - L(3, 2) * L(3, 2);
    
    // Joint leg_left_1_joint, index 2 :
    L(2, 2) = std::sqrt(L(2, 2));
    
}

template <typename TRAIT>
void iit::Talos::dyn::tpl::JSIM<TRAIT>::computeInverse() {
    computeLInverse();

    inverse(2, 2) =  + (Linv(2, 2) * Linv(2, 2));
    inverse(3, 3) =  + (Linv(3, 2) * Linv(3, 2)) + (Linv(3, 3) * Linv(3, 3));
    inverse(3, 2) =  + (Linv(3, 2) * Linv(2, 2));
    inverse(2, 3) = inverse(3, 2);
    inverse(4, 4) =  + (Linv(4, 2) * Linv(4, 2)) + (Linv(4, 3) * Linv(4, 3)) + (Linv(4, 4) * Linv(4, 4));
    inverse(4, 3) =  + (Linv(4, 2) * Linv(3, 2)) + (Linv(4, 3) * Linv(3, 3));
    inverse(3, 4) = inverse(4, 3);
    inverse(4, 2) =  + (Linv(4, 2) * Linv(2, 2));
    inverse(2, 4) = inverse(4, 2);
    inverse(5, 5) =  + (Linv(5, 2) * Linv(5, 2)) + (Linv(5, 3) * Linv(5, 3)) + (Linv(5, 4) * Linv(5, 4)) + (Linv(5, 5) * Linv(5, 5));
    inverse(5, 4) =  + (Linv(5, 2) * Linv(4, 2)) + (Linv(5, 3) * Linv(4, 3)) + (Linv(5, 4) * Linv(4, 4));
    inverse(4, 5) = inverse(5, 4);
    inverse(5, 3) =  + (Linv(5, 2) * Linv(3, 2)) + (Linv(5, 3) * Linv(3, 3));
    inverse(3, 5) = inverse(5, 3);
    inverse(5, 2) =  + (Linv(5, 2) * Linv(2, 2));
    inverse(2, 5) = inverse(5, 2);
    inverse(6, 6) =  + (Linv(6, 2) * Linv(6, 2)) + (Linv(6, 3) * Linv(6, 3)) + (Linv(6, 4) * Linv(6, 4)) + (Linv(6, 5) * Linv(6, 5)) + (Linv(6, 6) * Linv(6, 6));
    inverse(6, 5) =  + (Linv(6, 2) * Linv(5, 2)) + (Linv(6, 3) * Linv(5, 3)) + (Linv(6, 4) * Linv(5, 4)) + (Linv(6, 5) * Linv(5, 5));
    inverse(5, 6) = inverse(6, 5);
    inverse(6, 4) =  + (Linv(6, 2) * Linv(4, 2)) + (Linv(6, 3) * Linv(4, 3)) + (Linv(6, 4) * Linv(4, 4));
    inverse(4, 6) = inverse(6, 4);
    inverse(6, 3) =  + (Linv(6, 2) * Linv(3, 2)) + (Linv(6, 3) * Linv(3, 3));
    inverse(3, 6) = inverse(6, 3);
    inverse(6, 2) =  + (Linv(6, 2) * Linv(2, 2));
    inverse(2, 6) = inverse(6, 2);
    inverse(7, 7) =  + (Linv(7, 2) * Linv(7, 2)) + (Linv(7, 3) * Linv(7, 3)) + (Linv(7, 4) * Linv(7, 4)) + (Linv(7, 5) * Linv(7, 5)) + (Linv(7, 6) * Linv(7, 6)) + (Linv(7, 7) * Linv(7, 7));
    inverse(7, 6) =  + (Linv(7, 2) * Linv(6, 2)) + (Linv(7, 3) * Linv(6, 3)) + (Linv(7, 4) * Linv(6, 4)) + (Linv(7, 5) * Linv(6, 5)) + (Linv(7, 6) * Linv(6, 6));
    inverse(6, 7) = inverse(7, 6);
    inverse(7, 5) =  + (Linv(7, 2) * Linv(5, 2)) + (Linv(7, 3) * Linv(5, 3)) + (Linv(7, 4) * Linv(5, 4)) + (Linv(7, 5) * Linv(5, 5));
    inverse(5, 7) = inverse(7, 5);
    inverse(7, 4) =  + (Linv(7, 2) * Linv(4, 2)) + (Linv(7, 3) * Linv(4, 3)) + (Linv(7, 4) * Linv(4, 4));
    inverse(4, 7) = inverse(7, 4);
    inverse(7, 3) =  + (Linv(7, 2) * Linv(3, 2)) + (Linv(7, 3) * Linv(3, 3));
    inverse(3, 7) = inverse(7, 3);
    inverse(7, 2) =  + (Linv(7, 2) * Linv(2, 2));
    inverse(2, 7) = inverse(7, 2);
    inverse(8, 8) =  + (Linv(8, 8) * Linv(8, 8));
    inverse(9, 9) =  + (Linv(9, 8) * Linv(9, 8)) + (Linv(9, 9) * Linv(9, 9));
    inverse(9, 8) =  + (Linv(9, 8) * Linv(8, 8));
    inverse(8, 9) = inverse(9, 8);
    inverse(10, 10) =  + (Linv(10, 8) * Linv(10, 8)) + (Linv(10, 9) * Linv(10, 9)) + (Linv(10, 10) * Linv(10, 10));
    inverse(10, 9) =  + (Linv(10, 8) * Linv(9, 8)) + (Linv(10, 9) * Linv(9, 9));
    inverse(9, 10) = inverse(10, 9);
    inverse(10, 8) =  + (Linv(10, 8) * Linv(8, 8));
    inverse(8, 10) = inverse(10, 8);
    inverse(11, 11) =  + (Linv(11, 8) * Linv(11, 8)) + (Linv(11, 9) * Linv(11, 9)) + (Linv(11, 10) * Linv(11, 10)) + (Linv(11, 11) * Linv(11, 11));
    inverse(11, 10) =  + (Linv(11, 8) * Linv(10, 8)) + (Linv(11, 9) * Linv(10, 9)) + (Linv(11, 10) * Linv(10, 10));
    inverse(10, 11) = inverse(11, 10);
    inverse(11, 9) =  + (Linv(11, 8) * Linv(9, 8)) + (Linv(11, 9) * Linv(9, 9));
    inverse(9, 11) = inverse(11, 9);
    inverse(11, 8) =  + (Linv(11, 8) * Linv(8, 8));
    inverse(8, 11) = inverse(11, 8);
    inverse(12, 12) =  + (Linv(12, 8) * Linv(12, 8)) + (Linv(12, 9) * Linv(12, 9)) + (Linv(12, 10) * Linv(12, 10)) + (Linv(12, 11) * Linv(12, 11)) + (Linv(12, 12) * Linv(12, 12));
    inverse(12, 11) =  + (Linv(12, 8) * Linv(11, 8)) + (Linv(12, 9) * Linv(11, 9)) + (Linv(12, 10) * Linv(11, 10)) + (Linv(12, 11) * Linv(11, 11));
    inverse(11, 12) = inverse(12, 11);
    inverse(12, 10) =  + (Linv(12, 8) * Linv(10, 8)) + (Linv(12, 9) * Linv(10, 9)) + (Linv(12, 10) * Linv(10, 10));
    inverse(10, 12) = inverse(12, 10);
    inverse(12, 9) =  + (Linv(12, 8) * Linv(9, 8)) + (Linv(12, 9) * Linv(9, 9));
    inverse(9, 12) = inverse(12, 9);
    inverse(12, 8) =  + (Linv(12, 8) * Linv(8, 8));
    inverse(8, 12) = inverse(12, 8);
    inverse(13, 13) =  + (Linv(13, 8) * Linv(13, 8)) + (Linv(13, 9) * Linv(13, 9)) + (Linv(13, 10) * Linv(13, 10)) + (Linv(13, 11) * Linv(13, 11)) + (Linv(13, 12) * Linv(13, 12)) + (Linv(13, 13) * Linv(13, 13));
    inverse(13, 12) =  + (Linv(13, 8) * Linv(12, 8)) + (Linv(13, 9) * Linv(12, 9)) + (Linv(13, 10) * Linv(12, 10)) + (Linv(13, 11) * Linv(12, 11)) + (Linv(13, 12) * Linv(12, 12));
    inverse(12, 13) = inverse(13, 12);
    inverse(13, 11) =  + (Linv(13, 8) * Linv(11, 8)) + (Linv(13, 9) * Linv(11, 9)) + (Linv(13, 10) * Linv(11, 10)) + (Linv(13, 11) * Linv(11, 11));
    inverse(11, 13) = inverse(13, 11);
    inverse(13, 10) =  + (Linv(13, 8) * Linv(10, 8)) + (Linv(13, 9) * Linv(10, 9)) + (Linv(13, 10) * Linv(10, 10));
    inverse(10, 13) = inverse(13, 10);
    inverse(13, 9) =  + (Linv(13, 8) * Linv(9, 8)) + (Linv(13, 9) * Linv(9, 9));
    inverse(9, 13) = inverse(13, 9);
    inverse(13, 8) =  + (Linv(13, 8) * Linv(8, 8));
    inverse(8, 13) = inverse(13, 8);
}

template <typename TRAIT>
void iit::Talos::dyn::tpl::JSIM<TRAIT>::computeLInverse() {
    //assumes L has been computed already
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
    Linv(12, 12) = 1 / L(12, 12);
    Linv(13, 13) = 1 / L(13, 13);
    Linv(3, 2) = - Linv(2, 2) * ((Linv(3, 3) * L(3, 2)) + 0);
    Linv(4, 3) = - Linv(3, 3) * ((Linv(4, 4) * L(4, 3)) + 0);
    Linv(4, 2) = - Linv(2, 2) * ((Linv(4, 3) * L(3, 2)) + (Linv(4, 4) * L(4, 2)) + 0);
    Linv(5, 4) = - Linv(4, 4) * ((Linv(5, 5) * L(5, 4)) + 0);
    Linv(5, 3) = - Linv(3, 3) * ((Linv(5, 4) * L(4, 3)) + (Linv(5, 5) * L(5, 3)) + 0);
    Linv(5, 2) = - Linv(2, 2) * ((Linv(5, 3) * L(3, 2)) + (Linv(5, 4) * L(4, 2)) + (Linv(5, 5) * L(5, 2)) + 0);
    Linv(6, 5) = - Linv(5, 5) * ((Linv(6, 6) * L(6, 5)) + 0);
    Linv(6, 4) = - Linv(4, 4) * ((Linv(6, 5) * L(5, 4)) + (Linv(6, 6) * L(6, 4)) + 0);
    Linv(6, 3) = - Linv(3, 3) * ((Linv(6, 4) * L(4, 3)) + (Linv(6, 5) * L(5, 3)) + (Linv(6, 6) * L(6, 3)) + 0);
    Linv(6, 2) = - Linv(2, 2) * ((Linv(6, 3) * L(3, 2)) + (Linv(6, 4) * L(4, 2)) + (Linv(6, 5) * L(5, 2)) + (Linv(6, 6) * L(6, 2)) + 0);
    Linv(7, 6) = - Linv(6, 6) * ((Linv(7, 7) * L(7, 6)) + 0);
    Linv(7, 5) = - Linv(5, 5) * ((Linv(7, 6) * L(6, 5)) + (Linv(7, 7) * L(7, 5)) + 0);
    Linv(7, 4) = - Linv(4, 4) * ((Linv(7, 5) * L(5, 4)) + (Linv(7, 6) * L(6, 4)) + (Linv(7, 7) * L(7, 4)) + 0);
    Linv(7, 3) = - Linv(3, 3) * ((Linv(7, 4) * L(4, 3)) + (Linv(7, 5) * L(5, 3)) + (Linv(7, 6) * L(6, 3)) + (Linv(7, 7) * L(7, 3)) + 0);
    Linv(7, 2) = - Linv(2, 2) * ((Linv(7, 3) * L(3, 2)) + (Linv(7, 4) * L(4, 2)) + (Linv(7, 5) * L(5, 2)) + (Linv(7, 6) * L(6, 2)) + (Linv(7, 7) * L(7, 2)) + 0);
    Linv(9, 8) = - Linv(8, 8) * ((Linv(9, 9) * L(9, 8)) + 0);
    Linv(10, 9) = - Linv(9, 9) * ((Linv(10, 10) * L(10, 9)) + 0);
    Linv(10, 8) = - Linv(8, 8) * ((Linv(10, 9) * L(9, 8)) + (Linv(10, 10) * L(10, 8)) + 0);
    Linv(11, 10) = - Linv(10, 10) * ((Linv(11, 11) * L(11, 10)) + 0);
    Linv(11, 9) = - Linv(9, 9) * ((Linv(11, 10) * L(10, 9)) + (Linv(11, 11) * L(11, 9)) + 0);
    Linv(11, 8) = - Linv(8, 8) * ((Linv(11, 9) * L(9, 8)) + (Linv(11, 10) * L(10, 8)) + (Linv(11, 11) * L(11, 8)) + 0);
    Linv(12, 11) = - Linv(11, 11) * ((Linv(12, 12) * L(12, 11)) + 0);
    Linv(12, 10) = - Linv(10, 10) * ((Linv(12, 11) * L(11, 10)) + (Linv(12, 12) * L(12, 10)) + 0);
    Linv(12, 9) = - Linv(9, 9) * ((Linv(12, 10) * L(10, 9)) + (Linv(12, 11) * L(11, 9)) + (Linv(12, 12) * L(12, 9)) + 0);
    Linv(12, 8) = - Linv(8, 8) * ((Linv(12, 9) * L(9, 8)) + (Linv(12, 10) * L(10, 8)) + (Linv(12, 11) * L(11, 8)) + (Linv(12, 12) * L(12, 8)) + 0);
    Linv(13, 12) = - Linv(12, 12) * ((Linv(13, 13) * L(13, 12)) + 0);
    Linv(13, 11) = - Linv(11, 11) * ((Linv(13, 12) * L(12, 11)) + (Linv(13, 13) * L(13, 11)) + 0);
    Linv(13, 10) = - Linv(10, 10) * ((Linv(13, 11) * L(11, 10)) + (Linv(13, 12) * L(12, 10)) + (Linv(13, 13) * L(13, 10)) + 0);
    Linv(13, 9) = - Linv(9, 9) * ((Linv(13, 10) * L(10, 9)) + (Linv(13, 11) * L(11, 9)) + (Linv(13, 12) * L(12, 9)) + (Linv(13, 13) * L(13, 9)) + 0);
    Linv(13, 8) = - Linv(8, 8) * ((Linv(13, 9) * L(9, 8)) + (Linv(13, 10) * L(10, 8)) + (Linv(13, 11) * L(11, 8)) + (Linv(13, 12) * L(12, 8)) + (Linv(13, 13) * L(13, 8)) + 0);
}

