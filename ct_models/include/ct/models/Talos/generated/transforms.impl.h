
// Constructors
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::MotionTransforms
    ()
     :
    fr_base_link_X_fr_leg_left_1_link(),
    fr_leg_left_1_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_left_2_link(),
    fr_leg_left_2_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_left_3_link(),
    fr_leg_left_3_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_left_4_link(),
    fr_leg_left_4_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_left_5_link(),
    fr_leg_left_5_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_left_6_link(),
    fr_leg_left_6_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_right_1_link(),
    fr_leg_right_1_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_right_2_link(),
    fr_leg_right_2_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_right_3_link(),
    fr_leg_right_3_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_right_4_link(),
    fr_leg_right_4_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_right_5_link(),
    fr_leg_right_5_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_right_6_link(),
    fr_leg_right_6_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_left_1_joint(),
    fr_base_link_X_fr_leg_left_2_joint(),
    fr_base_link_X_fr_leg_left_3_joint(),
    fr_base_link_X_fr_leg_left_4_joint(),
    fr_base_link_X_fr_leg_left_5_joint(),
    fr_base_link_X_fr_leg_left_6_joint(),
    fr_base_link_X_fr_leg_right_1_joint(),
    fr_base_link_X_fr_leg_right_2_joint(),
    fr_base_link_X_fr_leg_right_3_joint(),
    fr_base_link_X_fr_leg_right_4_joint(),
    fr_base_link_X_fr_leg_right_5_joint(),
    fr_base_link_X_fr_leg_right_6_joint(),
    fr_leg_left_2_link_X_fr_leg_left_1_link(),
    fr_leg_left_1_link_X_fr_leg_left_2_link(),
    fr_leg_left_3_link_X_fr_leg_left_2_link(),
    fr_leg_left_2_link_X_fr_leg_left_3_link(),
    fr_leg_left_4_link_X_fr_leg_left_3_link(),
    fr_leg_left_3_link_X_fr_leg_left_4_link(),
    fr_leg_left_5_link_X_fr_leg_left_4_link(),
    fr_leg_left_4_link_X_fr_leg_left_5_link(),
    fr_leg_left_6_link_X_fr_leg_left_5_link(),
    fr_leg_left_5_link_X_fr_leg_left_6_link(),
    fr_leg_right_2_link_X_fr_leg_right_1_link(),
    fr_leg_right_1_link_X_fr_leg_right_2_link(),
    fr_leg_right_3_link_X_fr_leg_right_2_link(),
    fr_leg_right_2_link_X_fr_leg_right_3_link(),
    fr_leg_right_4_link_X_fr_leg_right_3_link(),
    fr_leg_right_3_link_X_fr_leg_right_4_link(),
    fr_leg_right_5_link_X_fr_leg_right_4_link(),
    fr_leg_right_4_link_X_fr_leg_right_5_link(),
    fr_leg_right_6_link_X_fr_leg_right_5_link(),
    fr_leg_right_5_link_X_fr_leg_right_6_link()
{
    updateParameters();
}
template <typename TRAIT>
void iit::Talos::tpl::MotionTransforms<TRAIT>::updateParameters() {
}

template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::ForceTransforms
    ()
     :
    fr_base_link_X_fr_leg_left_1_link(),
    fr_leg_left_1_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_left_2_link(),
    fr_leg_left_2_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_left_3_link(),
    fr_leg_left_3_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_left_4_link(),
    fr_leg_left_4_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_left_5_link(),
    fr_leg_left_5_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_left_6_link(),
    fr_leg_left_6_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_right_1_link(),
    fr_leg_right_1_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_right_2_link(),
    fr_leg_right_2_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_right_3_link(),
    fr_leg_right_3_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_right_4_link(),
    fr_leg_right_4_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_right_5_link(),
    fr_leg_right_5_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_right_6_link(),
    fr_leg_right_6_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_left_1_joint(),
    fr_base_link_X_fr_leg_left_2_joint(),
    fr_base_link_X_fr_leg_left_3_joint(),
    fr_base_link_X_fr_leg_left_4_joint(),
    fr_base_link_X_fr_leg_left_5_joint(),
    fr_base_link_X_fr_leg_left_6_joint(),
    fr_base_link_X_fr_leg_right_1_joint(),
    fr_base_link_X_fr_leg_right_2_joint(),
    fr_base_link_X_fr_leg_right_3_joint(),
    fr_base_link_X_fr_leg_right_4_joint(),
    fr_base_link_X_fr_leg_right_5_joint(),
    fr_base_link_X_fr_leg_right_6_joint(),
    fr_leg_left_2_link_X_fr_leg_left_1_link(),
    fr_leg_left_1_link_X_fr_leg_left_2_link(),
    fr_leg_left_3_link_X_fr_leg_left_2_link(),
    fr_leg_left_2_link_X_fr_leg_left_3_link(),
    fr_leg_left_4_link_X_fr_leg_left_3_link(),
    fr_leg_left_3_link_X_fr_leg_left_4_link(),
    fr_leg_left_5_link_X_fr_leg_left_4_link(),
    fr_leg_left_4_link_X_fr_leg_left_5_link(),
    fr_leg_left_6_link_X_fr_leg_left_5_link(),
    fr_leg_left_5_link_X_fr_leg_left_6_link(),
    fr_leg_right_2_link_X_fr_leg_right_1_link(),
    fr_leg_right_1_link_X_fr_leg_right_2_link(),
    fr_leg_right_3_link_X_fr_leg_right_2_link(),
    fr_leg_right_2_link_X_fr_leg_right_3_link(),
    fr_leg_right_4_link_X_fr_leg_right_3_link(),
    fr_leg_right_3_link_X_fr_leg_right_4_link(),
    fr_leg_right_5_link_X_fr_leg_right_4_link(),
    fr_leg_right_4_link_X_fr_leg_right_5_link(),
    fr_leg_right_6_link_X_fr_leg_right_5_link(),
    fr_leg_right_5_link_X_fr_leg_right_6_link()
{
    updateParameters();
}
template <typename TRAIT>
void iit::Talos::tpl::ForceTransforms<TRAIT>::updateParameters() {
}

template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::HomogeneousTransforms
    ()
     :
    fr_base_link_X_fr_leg_left_1_link(),
    fr_leg_left_1_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_left_2_link(),
    fr_leg_left_2_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_left_3_link(),
    fr_leg_left_3_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_left_4_link(),
    fr_leg_left_4_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_left_5_link(),
    fr_leg_left_5_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_left_6_link(),
    fr_leg_left_6_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_right_1_link(),
    fr_leg_right_1_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_right_2_link(),
    fr_leg_right_2_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_right_3_link(),
    fr_leg_right_3_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_right_4_link(),
    fr_leg_right_4_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_right_5_link(),
    fr_leg_right_5_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_right_6_link(),
    fr_leg_right_6_link_X_fr_base_link(),
    fr_base_link_X_fr_leg_left_1_joint(),
    fr_base_link_X_fr_leg_left_2_joint(),
    fr_base_link_X_fr_leg_left_3_joint(),
    fr_base_link_X_fr_leg_left_4_joint(),
    fr_base_link_X_fr_leg_left_5_joint(),
    fr_base_link_X_fr_leg_left_6_joint(),
    fr_base_link_X_fr_leg_right_1_joint(),
    fr_base_link_X_fr_leg_right_2_joint(),
    fr_base_link_X_fr_leg_right_3_joint(),
    fr_base_link_X_fr_leg_right_4_joint(),
    fr_base_link_X_fr_leg_right_5_joint(),
    fr_base_link_X_fr_leg_right_6_joint(),
    fr_leg_left_2_link_X_fr_leg_left_1_link(),
    fr_leg_left_1_link_X_fr_leg_left_2_link(),
    fr_leg_left_3_link_X_fr_leg_left_2_link(),
    fr_leg_left_2_link_X_fr_leg_left_3_link(),
    fr_leg_left_4_link_X_fr_leg_left_3_link(),
    fr_leg_left_3_link_X_fr_leg_left_4_link(),
    fr_leg_left_5_link_X_fr_leg_left_4_link(),
    fr_leg_left_4_link_X_fr_leg_left_5_link(),
    fr_leg_left_6_link_X_fr_leg_left_5_link(),
    fr_leg_left_5_link_X_fr_leg_left_6_link(),
    fr_leg_right_2_link_X_fr_leg_right_1_link(),
    fr_leg_right_1_link_X_fr_leg_right_2_link(),
    fr_leg_right_3_link_X_fr_leg_right_2_link(),
    fr_leg_right_2_link_X_fr_leg_right_3_link(),
    fr_leg_right_4_link_X_fr_leg_right_3_link(),
    fr_leg_right_3_link_X_fr_leg_right_4_link(),
    fr_leg_right_5_link_X_fr_leg_right_4_link(),
    fr_leg_right_4_link_X_fr_leg_right_5_link(),
    fr_leg_right_6_link_X_fr_leg_right_5_link(),
    fr_leg_right_5_link_X_fr_leg_right_6_link()
{
    updateParameters();
}
template <typename TRAIT>
void iit::Talos::tpl::HomogeneousTransforms<TRAIT>::updateParameters() {
}

template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_1_link::Type_fr_base_link_X_fr_leg_left_1_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,2) = 0.085;
    (*this)(3,5) = 0;
    (*this)(4,2) = 0.02;
    (*this)(4,5) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_1_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_1_link::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar c_q_leg_left_1_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    
    (*this)(0,0) =  c_q_leg_left_1_joint_;
    (*this)(0,1) = - s_q_leg_left_1_joint_;
    (*this)(1,0) =  s_q_leg_left_1_joint_;
    (*this)(1,1) =  c_q_leg_left_1_joint_;
    (*this)(3,0) = ( 0.27105 *  s_q_leg_left_1_joint_);
    (*this)(3,1) = ( 0.27105 *  c_q_leg_left_1_joint_);
    (*this)(3,3) =  c_q_leg_left_1_joint_;
    (*this)(3,4) = - s_q_leg_left_1_joint_;
    (*this)(4,0) = (- 0.27105 *  c_q_leg_left_1_joint_);
    (*this)(4,1) = ( 0.27105 *  s_q_leg_left_1_joint_);
    (*this)(4,3) =  s_q_leg_left_1_joint_;
    (*this)(4,4) =  c_q_leg_left_1_joint_;
    (*this)(5,0) = ((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_));
    (*this)(5,1) = (( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_1_link_X_fr_base_link::Type_fr_leg_left_1_link_X_fr_base_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,5) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0.085;
    (*this)(5,1) = 0.02;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_1_link_X_fr_base_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_1_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar c_q_leg_left_1_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    
    (*this)(0,0) =  c_q_leg_left_1_joint_;
    (*this)(0,1) =  s_q_leg_left_1_joint_;
    (*this)(1,0) = - s_q_leg_left_1_joint_;
    (*this)(1,1) =  c_q_leg_left_1_joint_;
    (*this)(3,0) = ( 0.27105 *  s_q_leg_left_1_joint_);
    (*this)(3,1) = (- 0.27105 *  c_q_leg_left_1_joint_);
    (*this)(3,2) = ((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_));
    (*this)(3,3) =  c_q_leg_left_1_joint_;
    (*this)(3,4) =  s_q_leg_left_1_joint_;
    (*this)(4,0) = ( 0.27105 *  c_q_leg_left_1_joint_);
    (*this)(4,1) = ( 0.27105 *  s_q_leg_left_1_joint_);
    (*this)(4,2) = (( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_));
    (*this)(4,3) = - s_q_leg_left_1_joint_;
    (*this)(4,4) =  c_q_leg_left_1_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_2_link::Type_fr_base_link_X_fr_leg_left_2_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_2_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_2_link::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar c_q_leg_left_2_joint_;
    Scalar c_q_leg_left_1_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    
    (*this)(0,0) = (- s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(0,1) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(0,2) =  c_q_leg_left_1_joint_;
    (*this)(1,0) = ( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(1,1) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,2) =  s_q_leg_left_1_joint_;
    (*this)(2,0) = - c_q_leg_left_2_joint_;
    (*this)(2,1) =  s_q_leg_left_2_joint_;
    (*this)(3,0) = ((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_));
    (*this)(3,1) = (( 0.085 *  s_q_leg_left_2_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(3,2) = ( 0.27105 *  s_q_leg_left_1_joint_);
    (*this)(3,3) = (- s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(3,4) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(3,5) =  c_q_leg_left_1_joint_;
    (*this)(4,0) = ((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_));
    (*this)(4,1) = (( 0.02 *  s_q_leg_left_2_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(4,2) = (- 0.27105 *  c_q_leg_left_1_joint_);
    (*this)(4,3) = ( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(4,4) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(4,5) =  s_q_leg_left_1_joint_;
    (*this)(5,0) = ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_);
    (*this)(5,1) = ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_);
    (*this)(5,2) = ((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_));
    (*this)(5,3) = - c_q_leg_left_2_joint_;
    (*this)(5,4) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_base_link::Type_fr_leg_left_2_link_X_fr_base_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_base_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = (- s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(0,1) = ( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(0,2) = - c_q_leg_left_2_joint_;
    (*this)(1,0) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,1) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,2) =  s_q_leg_left_2_joint_;
    (*this)(2,0) =  c_q_leg_left_1_joint_;
    (*this)(2,1) =  s_q_leg_left_1_joint_;
    (*this)(3,0) = ((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_));
    (*this)(3,1) = ((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_));
    (*this)(3,2) = ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_);
    (*this)(3,3) = (- s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(3,4) = ( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(3,5) = - c_q_leg_left_2_joint_;
    (*this)(4,0) = (( 0.085 *  s_q_leg_left_2_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(4,1) = (( 0.02 *  s_q_leg_left_2_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(4,2) = ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_);
    (*this)(4,3) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(4,4) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(4,5) =  s_q_leg_left_2_joint_;
    (*this)(5,0) = ( 0.27105 *  s_q_leg_left_1_joint_);
    (*this)(5,1) = (- 0.27105 *  c_q_leg_left_1_joint_);
    (*this)(5,2) = ((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_));
    (*this)(5,3) =  c_q_leg_left_1_joint_;
    (*this)(5,4) =  s_q_leg_left_1_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_3_link::Type_fr_base_link_X_fr_leg_left_3_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_3_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_3_link::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_3_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = (( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_));
    (*this)(0,1) = ((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(0,2) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,0) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_));
    (*this)(1,1) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_));
    (*this)(1,2) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,0) = (- c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_);
    (*this)(2,1) = (- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_);
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(3,0) = ((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_));
    (*this)(3,1) = ((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_));
    (*this)(3,2) = (( 0.085 *  s_q_leg_left_2_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(3,3) = (( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_));
    (*this)(3,4) = ((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(3,5) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(4,0) = ((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_));
    (*this)(4,1) = ((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_));
    (*this)(4,2) = (( 0.02 *  s_q_leg_left_2_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(4,3) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_));
    (*this)(4,4) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_));
    (*this)(4,5) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(5,0) = ((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_));
    (*this)(5,1) = (((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(5,2) = ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_);
    (*this)(5,3) = (- c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_);
    (*this)(5,4) = (- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_);
    (*this)(5,5) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_base_link::Type_fr_leg_left_3_link_X_fr_base_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_base_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_3_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = (( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_));
    (*this)(0,1) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_));
    (*this)(0,2) = (- c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_);
    (*this)(1,0) = ((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(1,1) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_));
    (*this)(1,2) = (- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_);
    (*this)(2,0) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,1) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(3,0) = ((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_));
    (*this)(3,1) = ((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_));
    (*this)(3,2) = ((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_));
    (*this)(3,3) = (( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_));
    (*this)(3,4) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_));
    (*this)(3,5) = (- c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_);
    (*this)(4,0) = ((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_));
    (*this)(4,1) = ((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_));
    (*this)(4,2) = (((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(4,3) = ((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(4,4) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_));
    (*this)(4,5) = (- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_);
    (*this)(5,0) = (( 0.085 *  s_q_leg_left_2_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(5,1) = (( 0.02 *  s_q_leg_left_2_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(5,2) = ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_);
    (*this)(5,3) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(5,4) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(5,5) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_4_link::Type_fr_base_link_X_fr_leg_left_4_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_4_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_4_link::update(const JState& q) {
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(0,1) = ((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(0,2) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,0) = ((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,1) = (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,2) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,0) = (((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(2,1) = ((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(3,0) = ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(3,1) = ((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(3,2) = ((((((- 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.085 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(3,3) = ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(3,4) = ((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(3,5) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(4,0) = ((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(4,1) = ((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(4,2) = (((((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.02 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(4,3) = ((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(4,4) = (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(4,5) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(5,0) = (((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(5,1) = (((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(5,2) = (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_) - (( 0.38 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_));
    (*this)(5,3) = (((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(5,4) = ((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(5,5) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_base_link::Type_fr_leg_left_4_link_X_fr_base_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_base_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(0,1) = (((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(0,2) = (((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(1,0) = (((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,1) = (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,2) = ((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(2,0) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,1) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(3,0) = ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(3,1) = ((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(3,2) = (((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(3,3) = ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(3,4) = (((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(3,5) = (((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(4,0) = ((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(4,1) = ((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(4,2) = (((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(4,3) = (((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(4,4) = (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(4,5) = ((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(5,0) = ((((((- 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.085 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(5,1) = (((((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.02 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(5,2) = (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_) - (( 0.38 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_));
    (*this)(5,3) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(5,4) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(5,5) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_5_link::Type_fr_base_link_X_fr_leg_left_5_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_5_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_5_link::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar s_q_leg_left_5_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_5_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    s_q_leg_left_5_joint_ = TRAIT::sin( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_5_joint_ = TRAIT::cos( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = ((((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,1) = (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,2) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,0) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,1) = (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,2) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,0) = ((((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,1) = ((((( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(3,0) = ((((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,1) = (((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + ((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,2) = (((((((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - ((( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.085 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(3,3) = ((((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,4) = (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,5) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(4,0) = ((((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(4,1) = ((((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(4,2) = (((((((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) + ((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.02 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(4,3) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(4,4) = (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(4,5) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(5,0) = (((((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - ( 0.325 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(5,1) = (((((((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + ( 0.325 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(5,2) = ((((((- 0.325 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - ((( 0.325 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_));
    (*this)(5,3) = ((((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(5,4) = ((((( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(5,5) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_base_link::Type_fr_leg_left_5_link_X_fr_base_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_base_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar s_q_leg_left_5_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_5_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    s_q_leg_left_5_joint_ = TRAIT::sin( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_5_joint_ = TRAIT::cos( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = (((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,1) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,2) = (((((( 1.0 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,0) = ((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,1) = ((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,2) = (((((( 1.0 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((( 1.0 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,0) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,1) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(3,0) = ((((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,1) = ((((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,2) = (((((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - ( 0.325 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,3) = (((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,4) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,5) = (((((( 1.0 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(4,0) = (((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + ((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(4,1) = ((((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(4,2) = (((((((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + ( 0.325 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(4,3) = ((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(4,4) = ((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(4,5) = (((((( 1.0 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((( 1.0 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(5,0) = (((((((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - ((( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.085 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(5,1) = (((((((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) + ((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.02 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(5,2) = ((((((- 0.325 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - ((( 0.325 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_));
    (*this)(5,3) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(5,4) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(5,5) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_6_link::Type_fr_base_link_X_fr_leg_left_6_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_6_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_6_link::update(const JState& q) {
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar s_q_leg_left_5_joint_;
    Scalar s_q_leg_left_6_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_5_joint_;
    Scalar c_q_leg_left_6_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    s_q_leg_left_5_joint_ = TRAIT::sin( q(LEG_LEFT_5_JOINT));
    s_q_leg_left_6_joint_ = TRAIT::sin( q(LEG_LEFT_6_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_5_joint_ = TRAIT::cos( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_6_joint_ = TRAIT::cos( q(LEG_LEFT_6_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = (((((((( c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_) - (( s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  s_q_leg_left_6_joint_));
    (*this)(0,1) = ((((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) - (( s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  c_q_leg_left_6_joint_));
    (*this)(0,2) = ((((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,0) = ((( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  s_q_leg_left_6_joint_) + ((((((( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(1,1) = ((((((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + (( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  c_q_leg_left_6_joint_));
    (*this)(1,2) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,0) = (( s_q_leg_left_2_joint_ *  s_q_leg_left_6_joint_) + (((((( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(2,1) = (((((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + ( s_q_leg_left_2_joint_ *  c_q_leg_left_6_joint_));
    (*this)(2,2) = ((((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,0) = (((((((((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - ((( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.085 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_6_joint_) + ((((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + ((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(3,1) = (((((((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + ((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + ((((((((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - ((( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.085 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(3,2) = ((((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,3) = (((((((( c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_) - (( s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  s_q_leg_left_6_joint_));
    (*this)(3,4) = ((((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) - (( s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  c_q_leg_left_6_joint_));
    (*this)(3,5) = ((((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(4,0) = (((((((((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) + ((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.02 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_6_joint_) + (((((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(4,1) = (((((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + ((((((((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) + ((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.02 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(4,2) = ((((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(4,3) = ((( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  s_q_leg_left_6_joint_) + ((((((( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(4,4) = ((((((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + (( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  c_q_leg_left_6_joint_));
    (*this)(4,5) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(5,0) = ((((((((- 0.325 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - ((( 0.325 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_6_joint_) + ((((((((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + ( 0.325 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(5,1) = ((((((((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - ( 0.325 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + (((((((- 0.325 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - ((( 0.325 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(5,2) = (((((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - ( 0.325 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(5,3) = (( s_q_leg_left_2_joint_ *  s_q_leg_left_6_joint_) + (((((( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(5,4) = (((((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + ( s_q_leg_left_2_joint_ *  c_q_leg_left_6_joint_));
    (*this)(5,5) = ((((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_6_link_X_fr_base_link::Type_fr_leg_left_6_link_X_fr_base_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_6_link_X_fr_base_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_6_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar s_q_leg_left_5_joint_;
    Scalar s_q_leg_left_6_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_5_joint_;
    Scalar c_q_leg_left_6_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    s_q_leg_left_5_joint_ = TRAIT::sin( q(LEG_LEFT_5_JOINT));
    s_q_leg_left_6_joint_ = TRAIT::sin( q(LEG_LEFT_6_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_5_joint_ = TRAIT::cos( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_6_joint_ = TRAIT::cos( q(LEG_LEFT_6_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = ((((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_) - (( s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  s_q_leg_left_6_joint_));
    (*this)(0,1) = ((( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  s_q_leg_left_6_joint_) + (((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(0,2) = (( s_q_leg_left_2_joint_ *  s_q_leg_left_6_joint_) + ((((((( 1.0 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((( 1.0 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(1,0) = ((((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) - (( s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  c_q_leg_left_6_joint_));
    (*this)(1,1) = (((((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + (( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  c_q_leg_left_6_joint_));
    (*this)(1,2) = (((((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((( 1.0 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + ( s_q_leg_left_2_joint_ *  c_q_leg_left_6_joint_));
    (*this)(2,0) = (((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,1) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,2) = (((((( 1.0 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,0) = (((((((((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - ((( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.085 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_6_joint_) + ((((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + ((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(3,1) = (((((((((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) + ((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.02 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_6_joint_) + (((((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(3,2) = ((((((((- 0.325 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - ((( 0.325 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_6_joint_) + ((((((((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + ( 0.325 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(3,3) = ((((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_) - (( s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  s_q_leg_left_6_joint_));
    (*this)(3,4) = ((( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  s_q_leg_left_6_joint_) + (((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(3,5) = (( s_q_leg_left_2_joint_ *  s_q_leg_left_6_joint_) + ((((((( 1.0 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((( 1.0 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(4,0) = (((((((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + ((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + ((((((((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - ((( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.085 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(4,1) = (((((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + ((((((((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) + ((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.02 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(4,2) = ((((((((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - ( 0.325 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + (((((((- 0.325 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - ((( 0.325 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(4,3) = ((((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) - (( s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  c_q_leg_left_6_joint_));
    (*this)(4,4) = (((((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + (( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  c_q_leg_left_6_joint_));
    (*this)(4,5) = (((((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((( 1.0 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + ( s_q_leg_left_2_joint_ *  c_q_leg_left_6_joint_));
    (*this)(5,0) = ((((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(5,1) = ((((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(5,2) = (((((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - ( 0.325 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(5,3) = (((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(5,4) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(5,5) = (((((( 1.0 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_1_link::Type_fr_base_link_X_fr_leg_right_1_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,2) = - 0.085;
    (*this)(3,5) = 0;
    (*this)(4,2) = 0.02;
    (*this)(4,5) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_1_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_1_link::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar c_q_leg_right_1_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    
    (*this)(0,0) =  c_q_leg_right_1_joint_;
    (*this)(0,1) = - s_q_leg_right_1_joint_;
    (*this)(1,0) =  s_q_leg_right_1_joint_;
    (*this)(1,1) =  c_q_leg_right_1_joint_;
    (*this)(3,0) = ( 0.27105 *  s_q_leg_right_1_joint_);
    (*this)(3,1) = ( 0.27105 *  c_q_leg_right_1_joint_);
    (*this)(3,3) =  c_q_leg_right_1_joint_;
    (*this)(3,4) = - s_q_leg_right_1_joint_;
    (*this)(4,0) = (- 0.27105 *  c_q_leg_right_1_joint_);
    (*this)(4,1) = ( 0.27105 *  s_q_leg_right_1_joint_);
    (*this)(4,3) =  s_q_leg_right_1_joint_;
    (*this)(4,4) =  c_q_leg_right_1_joint_;
    (*this)(5,0) = (( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_));
    (*this)(5,1) = ((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_1_link_X_fr_base_link::Type_fr_leg_right_1_link_X_fr_base_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,5) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = - 0.085;
    (*this)(5,1) = 0.02;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_1_link_X_fr_base_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_1_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar c_q_leg_right_1_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    
    (*this)(0,0) =  c_q_leg_right_1_joint_;
    (*this)(0,1) =  s_q_leg_right_1_joint_;
    (*this)(1,0) = - s_q_leg_right_1_joint_;
    (*this)(1,1) =  c_q_leg_right_1_joint_;
    (*this)(3,0) = ( 0.27105 *  s_q_leg_right_1_joint_);
    (*this)(3,1) = (- 0.27105 *  c_q_leg_right_1_joint_);
    (*this)(3,2) = (( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_));
    (*this)(3,3) =  c_q_leg_right_1_joint_;
    (*this)(3,4) =  s_q_leg_right_1_joint_;
    (*this)(4,0) = ( 0.27105 *  c_q_leg_right_1_joint_);
    (*this)(4,1) = ( 0.27105 *  s_q_leg_right_1_joint_);
    (*this)(4,2) = ((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_));
    (*this)(4,3) = - s_q_leg_right_1_joint_;
    (*this)(4,4) =  c_q_leg_right_1_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_2_link::Type_fr_base_link_X_fr_leg_right_2_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_2_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_2_link::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar c_q_leg_right_2_joint_;
    Scalar c_q_leg_right_1_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    
    (*this)(0,0) = (- s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(0,1) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(0,2) =  c_q_leg_right_1_joint_;
    (*this)(1,0) = ( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(1,1) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,2) =  s_q_leg_right_1_joint_;
    (*this)(2,0) = - c_q_leg_right_2_joint_;
    (*this)(2,1) =  s_q_leg_right_2_joint_;
    (*this)(3,0) = ((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_));
    (*this)(3,1) = ((( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_) - ( 0.085 *  s_q_leg_right_2_joint_));
    (*this)(3,2) = ( 0.27105 *  s_q_leg_right_1_joint_);
    (*this)(3,3) = (- s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(3,4) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(3,5) =  c_q_leg_right_1_joint_;
    (*this)(4,0) = ((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_));
    (*this)(4,1) = (( 0.02 *  s_q_leg_right_2_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(4,2) = (- 0.27105 *  c_q_leg_right_1_joint_);
    (*this)(4,3) = ( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(4,4) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(4,5) =  s_q_leg_right_1_joint_;
    (*this)(5,0) = (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_);
    (*this)(5,1) = (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_);
    (*this)(5,2) = (( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_));
    (*this)(5,3) = - c_q_leg_right_2_joint_;
    (*this)(5,4) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_base_link::Type_fr_leg_right_2_link_X_fr_base_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_base_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = (- s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(0,1) = ( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(0,2) = - c_q_leg_right_2_joint_;
    (*this)(1,0) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,1) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,2) =  s_q_leg_right_2_joint_;
    (*this)(2,0) =  c_q_leg_right_1_joint_;
    (*this)(2,1) =  s_q_leg_right_1_joint_;
    (*this)(3,0) = ((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_));
    (*this)(3,1) = ((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_));
    (*this)(3,2) = (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_);
    (*this)(3,3) = (- s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(3,4) = ( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(3,5) = - c_q_leg_right_2_joint_;
    (*this)(4,0) = ((( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_) - ( 0.085 *  s_q_leg_right_2_joint_));
    (*this)(4,1) = (( 0.02 *  s_q_leg_right_2_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(4,2) = (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_);
    (*this)(4,3) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(4,4) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(4,5) =  s_q_leg_right_2_joint_;
    (*this)(5,0) = ( 0.27105 *  s_q_leg_right_1_joint_);
    (*this)(5,1) = (- 0.27105 *  c_q_leg_right_1_joint_);
    (*this)(5,2) = (( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_));
    (*this)(5,3) =  c_q_leg_right_1_joint_;
    (*this)(5,4) =  s_q_leg_right_1_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_3_link::Type_fr_base_link_X_fr_leg_right_3_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_3_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_3_link::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_3_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = (( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_));
    (*this)(0,1) = ((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(0,2) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,0) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_));
    (*this)(1,1) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_));
    (*this)(1,2) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,0) = (- c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_);
    (*this)(2,1) = (- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_);
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(3,0) = ((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_));
    (*this)(3,1) = ((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_));
    (*this)(3,2) = ((( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_) - ( 0.085 *  s_q_leg_right_2_joint_));
    (*this)(3,3) = (( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_));
    (*this)(3,4) = ((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(3,5) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(4,0) = ((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_));
    (*this)(4,1) = ((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_));
    (*this)(4,2) = (( 0.02 *  s_q_leg_right_2_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(4,3) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_));
    (*this)(4,4) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_));
    (*this)(4,5) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(5,0) = (((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_));
    (*this)(5,1) = (((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(5,2) = (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_);
    (*this)(5,3) = (- c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_);
    (*this)(5,4) = (- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_);
    (*this)(5,5) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_base_link::Type_fr_leg_right_3_link_X_fr_base_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_base_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_3_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = (( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_));
    (*this)(0,1) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_));
    (*this)(0,2) = (- c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_);
    (*this)(1,0) = ((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(1,1) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_));
    (*this)(1,2) = (- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_);
    (*this)(2,0) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,1) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(3,0) = ((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_));
    (*this)(3,1) = ((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_));
    (*this)(3,2) = (((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_));
    (*this)(3,3) = (( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_));
    (*this)(3,4) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_));
    (*this)(3,5) = (- c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_);
    (*this)(4,0) = ((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_));
    (*this)(4,1) = ((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_));
    (*this)(4,2) = (((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(4,3) = ((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(4,4) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_));
    (*this)(4,5) = (- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_);
    (*this)(5,0) = ((( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_) - ( 0.085 *  s_q_leg_right_2_joint_));
    (*this)(5,1) = (( 0.02 *  s_q_leg_right_2_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(5,2) = (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_);
    (*this)(5,3) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(5,4) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(5,5) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_4_link::Type_fr_base_link_X_fr_leg_right_4_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_4_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_4_link::update(const JState& q) {
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(0,1) = ((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(0,2) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,0) = ((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,1) = (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,2) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,0) = (((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(2,1) = ((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(3,0) = ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(3,1) = ((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(3,2) = ((((((- 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - ( 0.085 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(3,3) = ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(3,4) = ((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(3,5) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(4,0) = ((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(4,1) = ((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(4,2) = (((((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + ( 0.02 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(4,3) = ((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(4,4) = (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(4,5) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(5,0) = (((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(5,1) = (((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(5,2) = ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_) - (( 0.38 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_));
    (*this)(5,3) = (((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(5,4) = ((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(5,5) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_base_link::Type_fr_leg_right_4_link_X_fr_base_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_base_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(0,1) = (((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(0,2) = (((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(1,0) = (((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,1) = (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,2) = ((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(2,0) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,1) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(3,0) = ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(3,1) = ((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(3,2) = (((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(3,3) = ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(3,4) = (((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(3,5) = (((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(4,0) = ((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(4,1) = ((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(4,2) = (((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(4,3) = (((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(4,4) = (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(4,5) = ((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(5,0) = ((((((- 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - ( 0.085 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(5,1) = (((((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + ( 0.02 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(5,2) = ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_) - (( 0.38 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_));
    (*this)(5,3) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(5,4) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(5,5) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_5_link::Type_fr_base_link_X_fr_leg_right_5_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_5_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_5_link::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar s_q_leg_right_5_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_5_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    s_q_leg_right_5_joint_ = TRAIT::sin( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_5_joint_ = TRAIT::cos( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = ((((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,1) = (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,2) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,0) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,1) = (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,2) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,0) = ((((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,1) = ((((( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(3,0) = ((((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,1) = (((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + ((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + (((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,2) = (((((((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - ((( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - ( 0.085 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(3,3) = ((((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,4) = (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,5) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(4,0) = ((((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(4,1) = ((((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + (((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(4,2) = (((((((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) + ((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + ( 0.02 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(4,3) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(4,4) = (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(4,5) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(5,0) = (((((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - ( 0.325 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(5,1) = ((((((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + (((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + ( 0.325 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(5,2) = ((((((- 0.325 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - ((( 0.325 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_));
    (*this)(5,3) = ((((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(5,4) = ((((( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(5,5) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_base_link::Type_fr_leg_right_5_link_X_fr_base_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_base_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar s_q_leg_right_5_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_5_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    s_q_leg_right_5_joint_ = TRAIT::sin( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_5_joint_ = TRAIT::cos( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = (((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,1) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,2) = (((((( 1.0 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,0) = ((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,1) = ((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,2) = (((((( 1.0 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((( 1.0 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,0) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,1) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(3,0) = ((((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,1) = ((((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,2) = (((((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - ( 0.325 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,3) = (((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,4) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,5) = (((((( 1.0 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(4,0) = (((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + ((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + (((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(4,1) = ((((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + (((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(4,2) = ((((((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + (((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + ( 0.325 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(4,3) = ((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(4,4) = ((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(4,5) = (((((( 1.0 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((( 1.0 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(5,0) = (((((((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - ((( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - ( 0.085 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(5,1) = (((((((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) + ((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + ( 0.02 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(5,2) = ((((((- 0.325 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - ((( 0.325 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_));
    (*this)(5,3) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(5,4) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(5,5) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_6_link::Type_fr_base_link_X_fr_leg_right_6_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_6_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_6_link::update(const JState& q) {
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar s_q_leg_right_5_joint_;
    Scalar s_q_leg_right_6_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_5_joint_;
    Scalar c_q_leg_right_6_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    s_q_leg_right_5_joint_ = TRAIT::sin( q(LEG_RIGHT_5_JOINT));
    s_q_leg_right_6_joint_ = TRAIT::sin( q(LEG_RIGHT_6_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_5_joint_ = TRAIT::cos( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_6_joint_ = TRAIT::cos( q(LEG_RIGHT_6_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = (((((((( c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_) - (( s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  s_q_leg_right_6_joint_));
    (*this)(0,1) = ((((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) - (( s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  c_q_leg_right_6_joint_));
    (*this)(0,2) = ((((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,0) = ((( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  s_q_leg_right_6_joint_) + ((((((( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(1,1) = ((((((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + (( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  c_q_leg_right_6_joint_));
    (*this)(1,2) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,0) = (( s_q_leg_right_2_joint_ *  s_q_leg_right_6_joint_) + (((((( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(2,1) = (((((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + ( s_q_leg_right_2_joint_ *  c_q_leg_right_6_joint_));
    (*this)(2,2) = ((((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,0) = (((((((((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - ((( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - ( 0.085 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_6_joint_) + ((((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + ((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + (((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(3,1) = (((((((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + ((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + ((((((((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - ((( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - ( 0.085 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(3,2) = ((((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,3) = (((((((( c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_) - (( s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  s_q_leg_right_6_joint_));
    (*this)(3,4) = ((((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) - (( s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  c_q_leg_right_6_joint_));
    (*this)(3,5) = ((((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(4,0) = (((((((((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) + ((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + ( 0.02 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_6_joint_) + (((((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + (((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(4,1) = (((((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + ((((((((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) + ((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + ( 0.02 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(4,2) = ((((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(4,3) = ((( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  s_q_leg_right_6_joint_) + ((((((( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(4,4) = ((((((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + (( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  c_q_leg_right_6_joint_));
    (*this)(4,5) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(5,0) = ((((((((- 0.325 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - ((( 0.325 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_6_joint_) + (((((((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + (((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + ( 0.325 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(5,1) = ((((((((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - ( 0.325 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + (((((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + (((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + (((((((- 0.325 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - ((( 0.325 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(5,2) = (((((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - ( 0.325 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(5,3) = (( s_q_leg_right_2_joint_ *  s_q_leg_right_6_joint_) + (((((( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(5,4) = (((((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + ( s_q_leg_right_2_joint_ *  c_q_leg_right_6_joint_));
    (*this)(5,5) = ((((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_6_link_X_fr_base_link::Type_fr_leg_right_6_link_X_fr_base_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_6_link_X_fr_base_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_6_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar s_q_leg_right_5_joint_;
    Scalar s_q_leg_right_6_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_5_joint_;
    Scalar c_q_leg_right_6_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    s_q_leg_right_5_joint_ = TRAIT::sin( q(LEG_RIGHT_5_JOINT));
    s_q_leg_right_6_joint_ = TRAIT::sin( q(LEG_RIGHT_6_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_5_joint_ = TRAIT::cos( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_6_joint_ = TRAIT::cos( q(LEG_RIGHT_6_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = ((((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_) - (( s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  s_q_leg_right_6_joint_));
    (*this)(0,1) = ((( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  s_q_leg_right_6_joint_) + (((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(0,2) = (( s_q_leg_right_2_joint_ *  s_q_leg_right_6_joint_) + ((((((( 1.0 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((( 1.0 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(1,0) = ((((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) - (( s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  c_q_leg_right_6_joint_));
    (*this)(1,1) = (((((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + (( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  c_q_leg_right_6_joint_));
    (*this)(1,2) = (((((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((( 1.0 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + ( s_q_leg_right_2_joint_ *  c_q_leg_right_6_joint_));
    (*this)(2,0) = (((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,1) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,2) = (((((( 1.0 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,0) = (((((((((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - ((( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - ( 0.085 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_6_joint_) + ((((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + ((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + (((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(3,1) = (((((((((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) + ((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + ( 0.02 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_6_joint_) + (((((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + (((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(3,2) = ((((((((- 0.325 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - ((( 0.325 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_6_joint_) + (((((((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + (((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + ( 0.325 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(3,3) = ((((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_) - (( s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  s_q_leg_right_6_joint_));
    (*this)(3,4) = ((( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  s_q_leg_right_6_joint_) + (((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(3,5) = (( s_q_leg_right_2_joint_ *  s_q_leg_right_6_joint_) + ((((((( 1.0 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((( 1.0 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(4,0) = (((((((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + ((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + ((((((((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - ((( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - ( 0.085 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(4,1) = (((((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + ((((((((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) + ((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + ( 0.02 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(4,2) = ((((((((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - ( 0.325 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + (((((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + (((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + (((((((- 0.325 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - ((( 0.325 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(4,3) = ((((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) - (( s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  c_q_leg_right_6_joint_));
    (*this)(4,4) = (((((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + (( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  c_q_leg_right_6_joint_));
    (*this)(4,5) = (((((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((( 1.0 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + ( s_q_leg_right_2_joint_ *  c_q_leg_right_6_joint_));
    (*this)(5,0) = ((((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(5,1) = ((((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(5,2) = (((((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - ( 0.325 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(5,3) = (((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(5,4) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(5,5) = (((((( 1.0 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_1_joint::Type_fr_base_link_X_fr_leg_left_1_joint()
{
    (*this)(0,0) = 1.0;
    (*this)(0,1) = 0;
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,0) = 0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0.27105;
    (*this)(3,2) = 0.085;
    (*this)(3,3) = 1.0;
    (*this)(3,4) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = - 0.27105;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0.02;
    (*this)(4,3) = 0;
    (*this)(4,4) = 1.0;
    (*this)(4,5) = 0;
    (*this)(5,0) = - 0.085;
    (*this)(5,1) = - 0.02;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_1_joint& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_1_joint::update(const JState& q) {
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_2_joint::Type_fr_base_link_X_fr_leg_left_2_joint()
{
    (*this)(0,0) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,0) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = - 1.0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = - 0.085;
    (*this)(3,3) = 0;
    (*this)(4,0) = - 0.02;
    (*this)(4,3) = 0;
    (*this)(5,0) = 0;
    (*this)(5,3) = - 1.0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_2_joint& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_2_joint::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar c_q_leg_left_1_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    
    (*this)(0,1) = - s_q_leg_left_1_joint_;
    (*this)(0,2) =  c_q_leg_left_1_joint_;
    (*this)(1,1) =  c_q_leg_left_1_joint_;
    (*this)(1,2) =  s_q_leg_left_1_joint_;
    (*this)(3,1) = ( 0.27105 *  c_q_leg_left_1_joint_);
    (*this)(3,2) = ( 0.27105 *  s_q_leg_left_1_joint_);
    (*this)(3,4) = - s_q_leg_left_1_joint_;
    (*this)(3,5) =  c_q_leg_left_1_joint_;
    (*this)(4,1) = ( 0.27105 *  s_q_leg_left_1_joint_);
    (*this)(4,2) = (- 0.27105 *  c_q_leg_left_1_joint_);
    (*this)(4,4) =  c_q_leg_left_1_joint_;
    (*this)(4,5) =  s_q_leg_left_1_joint_;
    (*this)(5,1) = (( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_));
    (*this)(5,2) = ((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_3_joint::Type_fr_base_link_X_fr_leg_left_3_joint()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(5,3) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_3_joint& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_3_joint::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) =  c_q_leg_left_1_joint_;
    (*this)(0,1) = (- s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(0,2) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,0) =  s_q_leg_left_1_joint_;
    (*this)(1,1) = ( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(1,2) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,1) = - c_q_leg_left_2_joint_;
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(3,0) = ( 0.27105 *  s_q_leg_left_1_joint_);
    (*this)(3,1) = ((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_));
    (*this)(3,2) = (( 0.085 *  s_q_leg_left_2_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(3,3) =  c_q_leg_left_1_joint_;
    (*this)(3,4) = (- s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(3,5) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(4,0) = (- 0.27105 *  c_q_leg_left_1_joint_);
    (*this)(4,1) = ((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_));
    (*this)(4,2) = (( 0.02 *  s_q_leg_left_2_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(4,3) =  s_q_leg_left_1_joint_;
    (*this)(4,4) = ( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(4,5) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(5,0) = ((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_));
    (*this)(5,1) = ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_);
    (*this)(5,2) = ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_);
    (*this)(5,4) = - c_q_leg_left_2_joint_;
    (*this)(5,5) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_4_joint::Type_fr_base_link_X_fr_leg_left_4_joint()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_4_joint& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_4_joint::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_3_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = (( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_));
    (*this)(0,1) = ((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(0,2) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,0) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_));
    (*this)(1,1) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_));
    (*this)(1,2) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,0) = (- c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_);
    (*this)(2,1) = (- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_);
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(3,0) = (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(3,1) = ((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_));
    (*this)(3,2) = ((((((- 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.085 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(3,3) = (( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_));
    (*this)(3,4) = ((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(3,5) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(4,0) = (((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(4,1) = ((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_));
    (*this)(4,2) = (((((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.02 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(4,3) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_));
    (*this)(4,4) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_));
    (*this)(4,5) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(5,0) = (((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_));
    (*this)(5,1) = (((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(5,2) = (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_) - (( 0.38 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_));
    (*this)(5,3) = (- c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_);
    (*this)(5,4) = (- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_);
    (*this)(5,5) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_5_joint::Type_fr_base_link_X_fr_leg_left_5_joint()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_5_joint& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_5_joint::update(const JState& q) {
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(0,1) = ((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(0,2) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,0) = ((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,1) = (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,2) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,0) = (((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(2,1) = ((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(3,0) = (((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(3,1) = ((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(3,2) = (((((((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - ((( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.085 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(3,3) = ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(3,4) = ((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(3,5) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(4,0) = (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(4,1) = ((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(4,2) = (((((((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) + ((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.02 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(4,3) = ((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(4,4) = (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(4,5) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(5,0) = ((((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - ( 0.325 *  s_q_leg_left_2_joint_));
    (*this)(5,1) = (((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(5,2) = ((((((- 0.325 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - ((( 0.325 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_));
    (*this)(5,3) = (((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(5,4) = ((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(5,5) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_6_joint::Type_fr_base_link_X_fr_leg_left_6_joint()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_6_joint& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_6_joint::update(const JState& q) {
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar s_q_leg_left_5_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_5_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    s_q_leg_left_5_joint_ = TRAIT::sin( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_5_joint_ = TRAIT::cos( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,1) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(0,2) = ((((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,0) = (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,1) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,2) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,0) = ((((( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,1) =  s_q_leg_left_2_joint_;
    (*this)(2,2) = ((((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,0) = (((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + ((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,1) = (((((((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - ((( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.085 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(3,2) = ((((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,3) = (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,4) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(3,5) = ((((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(4,0) = ((((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(4,1) = (((((((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) + ((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.02 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(4,2) = ((((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(4,3) = (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(4,4) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(4,5) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(5,0) = (((((((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + ( 0.325 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(5,1) = ((((((- 0.325 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - ((( 0.325 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_));
    (*this)(5,2) = (((((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - ( 0.325 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(5,3) = ((((( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(5,4) =  s_q_leg_left_2_joint_;
    (*this)(5,5) = ((((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_1_joint::Type_fr_base_link_X_fr_leg_right_1_joint()
{
    (*this)(0,0) = 1.0;
    (*this)(0,1) = 0;
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,0) = 0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0.27105;
    (*this)(3,2) = - 0.085;
    (*this)(3,3) = 1.0;
    (*this)(3,4) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = - 0.27105;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0.02;
    (*this)(4,3) = 0;
    (*this)(4,4) = 1.0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0.085;
    (*this)(5,1) = - 0.02;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_1_joint& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_1_joint::update(const JState& q) {
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_2_joint::Type_fr_base_link_X_fr_leg_right_2_joint()
{
    (*this)(0,0) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,0) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = - 1.0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0.085;
    (*this)(3,3) = 0;
    (*this)(4,0) = - 0.02;
    (*this)(4,3) = 0;
    (*this)(5,0) = 0;
    (*this)(5,3) = - 1.0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_2_joint& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_2_joint::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar c_q_leg_right_1_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    
    (*this)(0,1) = - s_q_leg_right_1_joint_;
    (*this)(0,2) =  c_q_leg_right_1_joint_;
    (*this)(1,1) =  c_q_leg_right_1_joint_;
    (*this)(1,2) =  s_q_leg_right_1_joint_;
    (*this)(3,1) = ( 0.27105 *  c_q_leg_right_1_joint_);
    (*this)(3,2) = ( 0.27105 *  s_q_leg_right_1_joint_);
    (*this)(3,4) = - s_q_leg_right_1_joint_;
    (*this)(3,5) =  c_q_leg_right_1_joint_;
    (*this)(4,1) = ( 0.27105 *  s_q_leg_right_1_joint_);
    (*this)(4,2) = (- 0.27105 *  c_q_leg_right_1_joint_);
    (*this)(4,4) =  c_q_leg_right_1_joint_;
    (*this)(4,5) =  s_q_leg_right_1_joint_;
    (*this)(5,1) = ((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_));
    (*this)(5,2) = (( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_3_joint::Type_fr_base_link_X_fr_leg_right_3_joint()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(5,3) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_3_joint& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_3_joint::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) =  c_q_leg_right_1_joint_;
    (*this)(0,1) = (- s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(0,2) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,0) =  s_q_leg_right_1_joint_;
    (*this)(1,1) = ( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(1,2) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,1) = - c_q_leg_right_2_joint_;
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(3,0) = ( 0.27105 *  s_q_leg_right_1_joint_);
    (*this)(3,1) = ((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_));
    (*this)(3,2) = ((( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_) - ( 0.085 *  s_q_leg_right_2_joint_));
    (*this)(3,3) =  c_q_leg_right_1_joint_;
    (*this)(3,4) = (- s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(3,5) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(4,0) = (- 0.27105 *  c_q_leg_right_1_joint_);
    (*this)(4,1) = ((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_));
    (*this)(4,2) = (( 0.02 *  s_q_leg_right_2_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(4,3) =  s_q_leg_right_1_joint_;
    (*this)(4,4) = ( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(4,5) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(5,0) = (( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_));
    (*this)(5,1) = (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_);
    (*this)(5,2) = (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_);
    (*this)(5,4) = - c_q_leg_right_2_joint_;
    (*this)(5,5) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_4_joint::Type_fr_base_link_X_fr_leg_right_4_joint()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_4_joint& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_4_joint::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_3_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = (( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_));
    (*this)(0,1) = ((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(0,2) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,0) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_));
    (*this)(1,1) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_));
    (*this)(1,2) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,0) = (- c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_);
    (*this)(2,1) = (- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_);
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(3,0) = (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(3,1) = ((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_));
    (*this)(3,2) = ((((((- 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - ( 0.085 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(3,3) = (( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_));
    (*this)(3,4) = ((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(3,5) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(4,0) = (((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(4,1) = ((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_));
    (*this)(4,2) = (((((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + ( 0.02 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(4,3) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_));
    (*this)(4,4) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_));
    (*this)(4,5) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(5,0) = ((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_));
    (*this)(5,1) = (((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(5,2) = ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_) - (( 0.38 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_));
    (*this)(5,3) = (- c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_);
    (*this)(5,4) = (- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_);
    (*this)(5,5) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_5_joint::Type_fr_base_link_X_fr_leg_right_5_joint()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_5_joint& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_5_joint::update(const JState& q) {
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(0,1) = ((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(0,2) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,0) = ((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,1) = (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,2) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,0) = (((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(2,1) = ((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(3,0) = (((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(3,1) = ((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(3,2) = (((((((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - ((( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - ( 0.085 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(3,3) = ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(3,4) = ((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(3,5) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(4,0) = (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(4,1) = ((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(4,2) = (((((((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) + ((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + ( 0.02 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(4,3) = ((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(4,4) = (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(4,5) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(5,0) = ((((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - ( 0.325 *  s_q_leg_right_2_joint_));
    (*this)(5,1) = (((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(5,2) = ((((((- 0.325 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - ((( 0.325 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_));
    (*this)(5,3) = (((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(5,4) = ((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(5,5) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_6_joint::Type_fr_base_link_X_fr_leg_right_6_joint()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_6_joint& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_6_joint::update(const JState& q) {
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar s_q_leg_right_5_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_5_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    s_q_leg_right_5_joint_ = TRAIT::sin( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_5_joint_ = TRAIT::cos( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,1) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(0,2) = ((((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,0) = (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,1) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,2) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,0) = ((((( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,1) =  s_q_leg_right_2_joint_;
    (*this)(2,2) = ((((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,0) = (((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + ((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + (((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,1) = (((((((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - ((( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - ( 0.085 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(3,2) = ((((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,3) = (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,4) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(3,5) = ((((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(4,0) = ((((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + (((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(4,1) = (((((((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) + ((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + ( 0.02 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(4,2) = ((((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(4,3) = (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(4,4) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(4,5) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(5,0) = ((((((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + (((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + ( 0.325 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(5,1) = ((((((- 0.325 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - ((( 0.325 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_));
    (*this)(5,2) = (((((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - ( 0.325 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(5,3) = ((((( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(5,4) =  s_q_leg_right_2_joint_;
    (*this)(5,5) = ((((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_leg_left_1_link::Type_fr_leg_left_2_link_X_fr_leg_left_1_link()
{
    (*this)(0,0) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,0) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 1;
    (*this)(2,1) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,3) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 1;
    (*this)(5,4) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_leg_left_1_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_leg_left_1_link::update(const JState& q) {
    Scalar s_q_leg_left_2_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,1) =  s_q_leg_left_2_joint_;
    (*this)(0,2) = - c_q_leg_left_2_joint_;
    (*this)(1,1) =  c_q_leg_left_2_joint_;
    (*this)(1,2) =  s_q_leg_left_2_joint_;
    (*this)(3,4) =  s_q_leg_left_2_joint_;
    (*this)(3,5) = - c_q_leg_left_2_joint_;
    (*this)(4,4) =  c_q_leg_left_2_joint_;
    (*this)(4,5) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_1_link_X_fr_leg_left_2_link::Type_fr_leg_left_1_link_X_fr_leg_left_2_link()
{
    (*this)(0,0) = 0;
    (*this)(0,1) = 0;
    (*this)(0,2) = 1;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 0;
    (*this)(3,4) = 0;
    (*this)(3,5) = 1;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_1_link_X_fr_leg_left_2_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_1_link_X_fr_leg_left_2_link::update(const JState& q) {
    Scalar s_q_leg_left_2_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(1,0) =  s_q_leg_left_2_joint_;
    (*this)(1,1) =  c_q_leg_left_2_joint_;
    (*this)(2,0) = - c_q_leg_left_2_joint_;
    (*this)(2,1) =  s_q_leg_left_2_joint_;
    (*this)(4,3) =  s_q_leg_left_2_joint_;
    (*this)(4,4) =  c_q_leg_left_2_joint_;
    (*this)(5,3) = - c_q_leg_left_2_joint_;
    (*this)(5,4) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_leg_left_2_link::Type_fr_leg_left_3_link_X_fr_leg_left_2_link()
{
    (*this)(0,1) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,1) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 1;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,4) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,4) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 1;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_leg_left_2_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_leg_left_2_link::update(const JState& q) {
    Scalar s_q_leg_left_3_joint_;
    Scalar c_q_leg_left_3_joint_;
    
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    
    (*this)(0,0) =  s_q_leg_left_3_joint_;
    (*this)(0,2) =  c_q_leg_left_3_joint_;
    (*this)(1,0) =  c_q_leg_left_3_joint_;
    (*this)(1,2) = - s_q_leg_left_3_joint_;
    (*this)(3,3) =  s_q_leg_left_3_joint_;
    (*this)(3,5) =  c_q_leg_left_3_joint_;
    (*this)(4,3) =  c_q_leg_left_3_joint_;
    (*this)(4,5) = - s_q_leg_left_3_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_leg_left_3_link::Type_fr_leg_left_2_link_X_fr_leg_left_3_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,0) = 0;
    (*this)(1,1) = 0;
    (*this)(1,2) = 1;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,3) = 0;
    (*this)(4,4) = 0;
    (*this)(4,5) = 1;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_leg_left_3_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_leg_left_3_link::update(const JState& q) {
    Scalar s_q_leg_left_3_joint_;
    Scalar c_q_leg_left_3_joint_;
    
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    
    (*this)(0,0) =  s_q_leg_left_3_joint_;
    (*this)(0,1) =  c_q_leg_left_3_joint_;
    (*this)(2,0) =  c_q_leg_left_3_joint_;
    (*this)(2,1) = - s_q_leg_left_3_joint_;
    (*this)(3,3) =  s_q_leg_left_3_joint_;
    (*this)(3,4) =  c_q_leg_left_3_joint_;
    (*this)(5,3) =  c_q_leg_left_3_joint_;
    (*this)(5,4) = - s_q_leg_left_3_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_leg_left_3_link::Type_fr_leg_left_4_link_X_fr_leg_left_3_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0.38;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_leg_left_3_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_leg_left_3_link::update(const JState& q) {
    Scalar s_q_leg_left_4_joint_;
    Scalar c_q_leg_left_4_joint_;
    
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    
    (*this)(0,0) =  c_q_leg_left_4_joint_;
    (*this)(0,1) =  s_q_leg_left_4_joint_;
    (*this)(1,0) = - s_q_leg_left_4_joint_;
    (*this)(1,1) =  c_q_leg_left_4_joint_;
    (*this)(3,2) = (- 0.38 *  c_q_leg_left_4_joint_);
    (*this)(3,3) =  c_q_leg_left_4_joint_;
    (*this)(3,4) =  s_q_leg_left_4_joint_;
    (*this)(4,2) = ( 0.38 *  s_q_leg_left_4_joint_);
    (*this)(4,3) = - s_q_leg_left_4_joint_;
    (*this)(4,4) =  c_q_leg_left_4_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_leg_left_4_link::Type_fr_leg_left_3_link_X_fr_leg_left_4_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0.38;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_leg_left_4_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_leg_left_4_link::update(const JState& q) {
    Scalar s_q_leg_left_4_joint_;
    Scalar c_q_leg_left_4_joint_;
    
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    
    (*this)(0,0) =  c_q_leg_left_4_joint_;
    (*this)(0,1) = - s_q_leg_left_4_joint_;
    (*this)(1,0) =  s_q_leg_left_4_joint_;
    (*this)(1,1) =  c_q_leg_left_4_joint_;
    (*this)(3,3) =  c_q_leg_left_4_joint_;
    (*this)(3,4) = - s_q_leg_left_4_joint_;
    (*this)(4,3) =  s_q_leg_left_4_joint_;
    (*this)(4,4) =  c_q_leg_left_4_joint_;
    (*this)(5,0) = (- 0.38 *  c_q_leg_left_4_joint_);
    (*this)(5,1) = ( 0.38 *  s_q_leg_left_4_joint_);
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_leg_left_4_link::Type_fr_leg_left_5_link_X_fr_leg_left_4_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0.325;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_leg_left_4_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_leg_left_4_link::update(const JState& q) {
    Scalar s_q_leg_left_5_joint_;
    Scalar c_q_leg_left_5_joint_;
    
    s_q_leg_left_5_joint_ = TRAIT::sin( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_5_joint_ = TRAIT::cos( q(LEG_LEFT_5_JOINT));
    
    (*this)(0,0) =  c_q_leg_left_5_joint_;
    (*this)(0,1) =  s_q_leg_left_5_joint_;
    (*this)(1,0) = - s_q_leg_left_5_joint_;
    (*this)(1,1) =  c_q_leg_left_5_joint_;
    (*this)(3,2) = (- 0.325 *  c_q_leg_left_5_joint_);
    (*this)(3,3) =  c_q_leg_left_5_joint_;
    (*this)(3,4) =  s_q_leg_left_5_joint_;
    (*this)(4,2) = ( 0.325 *  s_q_leg_left_5_joint_);
    (*this)(4,3) = - s_q_leg_left_5_joint_;
    (*this)(4,4) =  c_q_leg_left_5_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_leg_left_5_link::Type_fr_leg_left_4_link_X_fr_leg_left_5_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0.325;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_leg_left_5_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_leg_left_5_link::update(const JState& q) {
    Scalar s_q_leg_left_5_joint_;
    Scalar c_q_leg_left_5_joint_;
    
    s_q_leg_left_5_joint_ = TRAIT::sin( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_5_joint_ = TRAIT::cos( q(LEG_LEFT_5_JOINT));
    
    (*this)(0,0) =  c_q_leg_left_5_joint_;
    (*this)(0,1) = - s_q_leg_left_5_joint_;
    (*this)(1,0) =  s_q_leg_left_5_joint_;
    (*this)(1,1) =  c_q_leg_left_5_joint_;
    (*this)(3,3) =  c_q_leg_left_5_joint_;
    (*this)(3,4) = - s_q_leg_left_5_joint_;
    (*this)(4,3) =  s_q_leg_left_5_joint_;
    (*this)(4,4) =  c_q_leg_left_5_joint_;
    (*this)(5,0) = (- 0.325 *  c_q_leg_left_5_joint_);
    (*this)(5,1) = ( 0.325 *  s_q_leg_left_5_joint_);
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_6_link_X_fr_leg_left_5_link::Type_fr_leg_left_6_link_X_fr_leg_left_5_link()
{
    (*this)(0,0) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,0) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 1;
    (*this)(2,1) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,3) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 1;
    (*this)(5,4) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_6_link_X_fr_leg_left_5_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_6_link_X_fr_leg_left_5_link::update(const JState& q) {
    Scalar s_q_leg_left_6_joint_;
    Scalar c_q_leg_left_6_joint_;
    
    s_q_leg_left_6_joint_ = TRAIT::sin( q(LEG_LEFT_6_JOINT));
    c_q_leg_left_6_joint_ = TRAIT::cos( q(LEG_LEFT_6_JOINT));
    
    (*this)(0,1) =  c_q_leg_left_6_joint_;
    (*this)(0,2) =  s_q_leg_left_6_joint_;
    (*this)(1,1) = - s_q_leg_left_6_joint_;
    (*this)(1,2) =  c_q_leg_left_6_joint_;
    (*this)(3,4) =  c_q_leg_left_6_joint_;
    (*this)(3,5) =  s_q_leg_left_6_joint_;
    (*this)(4,4) = - s_q_leg_left_6_joint_;
    (*this)(4,5) =  c_q_leg_left_6_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_leg_left_6_link::Type_fr_leg_left_5_link_X_fr_leg_left_6_link()
{
    (*this)(0,0) = 0;
    (*this)(0,1) = 0;
    (*this)(0,2) = 1;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 0;
    (*this)(3,4) = 0;
    (*this)(3,5) = 1;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_leg_left_6_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_leg_left_6_link::update(const JState& q) {
    Scalar s_q_leg_left_6_joint_;
    Scalar c_q_leg_left_6_joint_;
    
    s_q_leg_left_6_joint_ = TRAIT::sin( q(LEG_LEFT_6_JOINT));
    c_q_leg_left_6_joint_ = TRAIT::cos( q(LEG_LEFT_6_JOINT));
    
    (*this)(1,0) =  c_q_leg_left_6_joint_;
    (*this)(1,1) = - s_q_leg_left_6_joint_;
    (*this)(2,0) =  s_q_leg_left_6_joint_;
    (*this)(2,1) =  c_q_leg_left_6_joint_;
    (*this)(4,3) =  c_q_leg_left_6_joint_;
    (*this)(4,4) = - s_q_leg_left_6_joint_;
    (*this)(5,3) =  s_q_leg_left_6_joint_;
    (*this)(5,4) =  c_q_leg_left_6_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_leg_right_1_link::Type_fr_leg_right_2_link_X_fr_leg_right_1_link()
{
    (*this)(0,0) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,0) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 1;
    (*this)(2,1) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,3) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 1;
    (*this)(5,4) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_leg_right_1_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_leg_right_1_link::update(const JState& q) {
    Scalar s_q_leg_right_2_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,1) =  s_q_leg_right_2_joint_;
    (*this)(0,2) = - c_q_leg_right_2_joint_;
    (*this)(1,1) =  c_q_leg_right_2_joint_;
    (*this)(1,2) =  s_q_leg_right_2_joint_;
    (*this)(3,4) =  s_q_leg_right_2_joint_;
    (*this)(3,5) = - c_q_leg_right_2_joint_;
    (*this)(4,4) =  c_q_leg_right_2_joint_;
    (*this)(4,5) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_1_link_X_fr_leg_right_2_link::Type_fr_leg_right_1_link_X_fr_leg_right_2_link()
{
    (*this)(0,0) = 0;
    (*this)(0,1) = 0;
    (*this)(0,2) = 1;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 0;
    (*this)(3,4) = 0;
    (*this)(3,5) = 1;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_1_link_X_fr_leg_right_2_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_1_link_X_fr_leg_right_2_link::update(const JState& q) {
    Scalar s_q_leg_right_2_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(1,0) =  s_q_leg_right_2_joint_;
    (*this)(1,1) =  c_q_leg_right_2_joint_;
    (*this)(2,0) = - c_q_leg_right_2_joint_;
    (*this)(2,1) =  s_q_leg_right_2_joint_;
    (*this)(4,3) =  s_q_leg_right_2_joint_;
    (*this)(4,4) =  c_q_leg_right_2_joint_;
    (*this)(5,3) = - c_q_leg_right_2_joint_;
    (*this)(5,4) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_leg_right_2_link::Type_fr_leg_right_3_link_X_fr_leg_right_2_link()
{
    (*this)(0,1) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,1) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 1;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,4) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,4) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 1;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_leg_right_2_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_leg_right_2_link::update(const JState& q) {
    Scalar s_q_leg_right_3_joint_;
    Scalar c_q_leg_right_3_joint_;
    
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    
    (*this)(0,0) =  s_q_leg_right_3_joint_;
    (*this)(0,2) =  c_q_leg_right_3_joint_;
    (*this)(1,0) =  c_q_leg_right_3_joint_;
    (*this)(1,2) = - s_q_leg_right_3_joint_;
    (*this)(3,3) =  s_q_leg_right_3_joint_;
    (*this)(3,5) =  c_q_leg_right_3_joint_;
    (*this)(4,3) =  c_q_leg_right_3_joint_;
    (*this)(4,5) = - s_q_leg_right_3_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_leg_right_3_link::Type_fr_leg_right_2_link_X_fr_leg_right_3_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,0) = 0;
    (*this)(1,1) = 0;
    (*this)(1,2) = 1;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,3) = 0;
    (*this)(4,4) = 0;
    (*this)(4,5) = 1;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_leg_right_3_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_leg_right_3_link::update(const JState& q) {
    Scalar s_q_leg_right_3_joint_;
    Scalar c_q_leg_right_3_joint_;
    
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    
    (*this)(0,0) =  s_q_leg_right_3_joint_;
    (*this)(0,1) =  c_q_leg_right_3_joint_;
    (*this)(2,0) =  c_q_leg_right_3_joint_;
    (*this)(2,1) = - s_q_leg_right_3_joint_;
    (*this)(3,3) =  s_q_leg_right_3_joint_;
    (*this)(3,4) =  c_q_leg_right_3_joint_;
    (*this)(5,3) =  c_q_leg_right_3_joint_;
    (*this)(5,4) = - s_q_leg_right_3_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_leg_right_3_link::Type_fr_leg_right_4_link_X_fr_leg_right_3_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0.38;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_leg_right_3_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_leg_right_3_link::update(const JState& q) {
    Scalar s_q_leg_right_4_joint_;
    Scalar c_q_leg_right_4_joint_;
    
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    
    (*this)(0,0) =  c_q_leg_right_4_joint_;
    (*this)(0,1) =  s_q_leg_right_4_joint_;
    (*this)(1,0) = - s_q_leg_right_4_joint_;
    (*this)(1,1) =  c_q_leg_right_4_joint_;
    (*this)(3,2) = (- 0.38 *  c_q_leg_right_4_joint_);
    (*this)(3,3) =  c_q_leg_right_4_joint_;
    (*this)(3,4) =  s_q_leg_right_4_joint_;
    (*this)(4,2) = ( 0.38 *  s_q_leg_right_4_joint_);
    (*this)(4,3) = - s_q_leg_right_4_joint_;
    (*this)(4,4) =  c_q_leg_right_4_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_leg_right_4_link::Type_fr_leg_right_3_link_X_fr_leg_right_4_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0.38;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_leg_right_4_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_leg_right_4_link::update(const JState& q) {
    Scalar s_q_leg_right_4_joint_;
    Scalar c_q_leg_right_4_joint_;
    
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    
    (*this)(0,0) =  c_q_leg_right_4_joint_;
    (*this)(0,1) = - s_q_leg_right_4_joint_;
    (*this)(1,0) =  s_q_leg_right_4_joint_;
    (*this)(1,1) =  c_q_leg_right_4_joint_;
    (*this)(3,3) =  c_q_leg_right_4_joint_;
    (*this)(3,4) = - s_q_leg_right_4_joint_;
    (*this)(4,3) =  s_q_leg_right_4_joint_;
    (*this)(4,4) =  c_q_leg_right_4_joint_;
    (*this)(5,0) = (- 0.38 *  c_q_leg_right_4_joint_);
    (*this)(5,1) = ( 0.38 *  s_q_leg_right_4_joint_);
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_leg_right_4_link::Type_fr_leg_right_5_link_X_fr_leg_right_4_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0.325;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_leg_right_4_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_leg_right_4_link::update(const JState& q) {
    Scalar s_q_leg_right_5_joint_;
    Scalar c_q_leg_right_5_joint_;
    
    s_q_leg_right_5_joint_ = TRAIT::sin( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_5_joint_ = TRAIT::cos( q(LEG_RIGHT_5_JOINT));
    
    (*this)(0,0) =  c_q_leg_right_5_joint_;
    (*this)(0,1) =  s_q_leg_right_5_joint_;
    (*this)(1,0) = - s_q_leg_right_5_joint_;
    (*this)(1,1) =  c_q_leg_right_5_joint_;
    (*this)(3,2) = (- 0.325 *  c_q_leg_right_5_joint_);
    (*this)(3,3) =  c_q_leg_right_5_joint_;
    (*this)(3,4) =  s_q_leg_right_5_joint_;
    (*this)(4,2) = ( 0.325 *  s_q_leg_right_5_joint_);
    (*this)(4,3) = - s_q_leg_right_5_joint_;
    (*this)(4,4) =  c_q_leg_right_5_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_leg_right_5_link::Type_fr_leg_right_4_link_X_fr_leg_right_5_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0.325;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_leg_right_5_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_leg_right_5_link::update(const JState& q) {
    Scalar s_q_leg_right_5_joint_;
    Scalar c_q_leg_right_5_joint_;
    
    s_q_leg_right_5_joint_ = TRAIT::sin( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_5_joint_ = TRAIT::cos( q(LEG_RIGHT_5_JOINT));
    
    (*this)(0,0) =  c_q_leg_right_5_joint_;
    (*this)(0,1) = - s_q_leg_right_5_joint_;
    (*this)(1,0) =  s_q_leg_right_5_joint_;
    (*this)(1,1) =  c_q_leg_right_5_joint_;
    (*this)(3,3) =  c_q_leg_right_5_joint_;
    (*this)(3,4) = - s_q_leg_right_5_joint_;
    (*this)(4,3) =  s_q_leg_right_5_joint_;
    (*this)(4,4) =  c_q_leg_right_5_joint_;
    (*this)(5,0) = (- 0.325 *  c_q_leg_right_5_joint_);
    (*this)(5,1) = ( 0.325 *  s_q_leg_right_5_joint_);
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_6_link_X_fr_leg_right_5_link::Type_fr_leg_right_6_link_X_fr_leg_right_5_link()
{
    (*this)(0,0) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,0) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 1;
    (*this)(2,1) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,3) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 1;
    (*this)(5,4) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_6_link_X_fr_leg_right_5_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_6_link_X_fr_leg_right_5_link::update(const JState& q) {
    Scalar s_q_leg_right_6_joint_;
    Scalar c_q_leg_right_6_joint_;
    
    s_q_leg_right_6_joint_ = TRAIT::sin( q(LEG_RIGHT_6_JOINT));
    c_q_leg_right_6_joint_ = TRAIT::cos( q(LEG_RIGHT_6_JOINT));
    
    (*this)(0,1) =  c_q_leg_right_6_joint_;
    (*this)(0,2) =  s_q_leg_right_6_joint_;
    (*this)(1,1) = - s_q_leg_right_6_joint_;
    (*this)(1,2) =  c_q_leg_right_6_joint_;
    (*this)(3,4) =  c_q_leg_right_6_joint_;
    (*this)(3,5) =  s_q_leg_right_6_joint_;
    (*this)(4,4) = - s_q_leg_right_6_joint_;
    (*this)(4,5) =  c_q_leg_right_6_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_leg_right_6_link::Type_fr_leg_right_5_link_X_fr_leg_right_6_link()
{
    (*this)(0,0) = 0;
    (*this)(0,1) = 0;
    (*this)(0,2) = 1;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 0;
    (*this)(3,4) = 0;
    (*this)(3,5) = 1;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_leg_right_6_link& iit::Talos::tpl::MotionTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_leg_right_6_link::update(const JState& q) {
    Scalar s_q_leg_right_6_joint_;
    Scalar c_q_leg_right_6_joint_;
    
    s_q_leg_right_6_joint_ = TRAIT::sin( q(LEG_RIGHT_6_JOINT));
    c_q_leg_right_6_joint_ = TRAIT::cos( q(LEG_RIGHT_6_JOINT));
    
    (*this)(1,0) =  c_q_leg_right_6_joint_;
    (*this)(1,1) = - s_q_leg_right_6_joint_;
    (*this)(2,0) =  s_q_leg_right_6_joint_;
    (*this)(2,1) =  c_q_leg_right_6_joint_;
    (*this)(4,3) =  c_q_leg_right_6_joint_;
    (*this)(4,4) = - s_q_leg_right_6_joint_;
    (*this)(5,3) =  s_q_leg_right_6_joint_;
    (*this)(5,4) =  c_q_leg_right_6_joint_;
    return *this;
}

template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_1_link::Type_fr_base_link_X_fr_leg_left_1_link()
{
    (*this)(0,2) = 0;
    (*this)(0,5) = 0.085;
    (*this)(1,2) = 0;
    (*this)(1,5) = 0.02;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_1_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_1_link::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar c_q_leg_left_1_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    
    (*this)(0,0) =  c_q_leg_left_1_joint_;
    (*this)(0,1) = - s_q_leg_left_1_joint_;
    (*this)(0,3) = ( 0.27105 *  s_q_leg_left_1_joint_);
    (*this)(0,4) = ( 0.27105 *  c_q_leg_left_1_joint_);
    (*this)(1,0) =  s_q_leg_left_1_joint_;
    (*this)(1,1) =  c_q_leg_left_1_joint_;
    (*this)(1,3) = (- 0.27105 *  c_q_leg_left_1_joint_);
    (*this)(1,4) = ( 0.27105 *  s_q_leg_left_1_joint_);
    (*this)(2,3) = ((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_));
    (*this)(2,4) = (( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_));
    (*this)(3,3) =  c_q_leg_left_1_joint_;
    (*this)(3,4) = - s_q_leg_left_1_joint_;
    (*this)(4,3) =  s_q_leg_left_1_joint_;
    (*this)(4,4) =  c_q_leg_left_1_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_1_link_X_fr_base_link::Type_fr_leg_left_1_link_X_fr_base_link()
{
    (*this)(0,2) = 0;
    (*this)(1,2) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.085;
    (*this)(2,4) = 0.02;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_1_link_X_fr_base_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_1_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar c_q_leg_left_1_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    
    (*this)(0,0) =  c_q_leg_left_1_joint_;
    (*this)(0,1) =  s_q_leg_left_1_joint_;
    (*this)(0,3) = ( 0.27105 *  s_q_leg_left_1_joint_);
    (*this)(0,4) = (- 0.27105 *  c_q_leg_left_1_joint_);
    (*this)(0,5) = ((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_));
    (*this)(1,0) = - s_q_leg_left_1_joint_;
    (*this)(1,1) =  c_q_leg_left_1_joint_;
    (*this)(1,3) = ( 0.27105 *  c_q_leg_left_1_joint_);
    (*this)(1,4) = ( 0.27105 *  s_q_leg_left_1_joint_);
    (*this)(1,5) = (( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_));
    (*this)(3,3) =  c_q_leg_left_1_joint_;
    (*this)(3,4) =  s_q_leg_left_1_joint_;
    (*this)(4,3) = - s_q_leg_left_1_joint_;
    (*this)(4,4) =  c_q_leg_left_1_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_2_link::Type_fr_base_link_X_fr_leg_left_2_link()
{
    (*this)(2,2) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_2_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_2_link::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar c_q_leg_left_2_joint_;
    Scalar c_q_leg_left_1_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    
    (*this)(0,0) = (- s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(0,1) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(0,2) =  c_q_leg_left_1_joint_;
    (*this)(0,3) = ((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_));
    (*this)(0,4) = (( 0.085 *  s_q_leg_left_2_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(0,5) = ( 0.27105 *  s_q_leg_left_1_joint_);
    (*this)(1,0) = ( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(1,1) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,2) =  s_q_leg_left_1_joint_;
    (*this)(1,3) = ((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_));
    (*this)(1,4) = (( 0.02 *  s_q_leg_left_2_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(1,5) = (- 0.27105 *  c_q_leg_left_1_joint_);
    (*this)(2,0) = - c_q_leg_left_2_joint_;
    (*this)(2,1) =  s_q_leg_left_2_joint_;
    (*this)(2,3) = ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_);
    (*this)(2,4) = ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_);
    (*this)(2,5) = ((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_));
    (*this)(3,3) = (- s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(3,4) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(3,5) =  c_q_leg_left_1_joint_;
    (*this)(4,3) = ( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(4,4) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(4,5) =  s_q_leg_left_1_joint_;
    (*this)(5,3) = - c_q_leg_left_2_joint_;
    (*this)(5,4) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_base_link::Type_fr_leg_left_2_link_X_fr_base_link()
{
    (*this)(2,2) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_base_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = (- s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(0,1) = ( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(0,2) = - c_q_leg_left_2_joint_;
    (*this)(0,3) = ((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_));
    (*this)(0,4) = ((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_));
    (*this)(0,5) = ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_);
    (*this)(1,0) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,1) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,2) =  s_q_leg_left_2_joint_;
    (*this)(1,3) = (( 0.085 *  s_q_leg_left_2_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(1,4) = (( 0.02 *  s_q_leg_left_2_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(1,5) = ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_);
    (*this)(2,0) =  c_q_leg_left_1_joint_;
    (*this)(2,1) =  s_q_leg_left_1_joint_;
    (*this)(2,3) = ( 0.27105 *  s_q_leg_left_1_joint_);
    (*this)(2,4) = (- 0.27105 *  c_q_leg_left_1_joint_);
    (*this)(2,5) = ((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_));
    (*this)(3,3) = (- s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(3,4) = ( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(3,5) = - c_q_leg_left_2_joint_;
    (*this)(4,3) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(4,4) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(4,5) =  s_q_leg_left_2_joint_;
    (*this)(5,3) =  c_q_leg_left_1_joint_;
    (*this)(5,4) =  s_q_leg_left_1_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_3_link::Type_fr_base_link_X_fr_leg_left_3_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_3_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_3_link::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_3_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = (( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_));
    (*this)(0,1) = ((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(0,2) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(0,3) = ((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_));
    (*this)(0,4) = ((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_));
    (*this)(0,5) = (( 0.085 *  s_q_leg_left_2_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(1,0) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_));
    (*this)(1,1) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_));
    (*this)(1,2) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,3) = ((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_));
    (*this)(1,4) = ((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_));
    (*this)(1,5) = (( 0.02 *  s_q_leg_left_2_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(2,0) = (- c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_);
    (*this)(2,1) = (- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_);
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(2,3) = ((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_));
    (*this)(2,4) = (((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(2,5) = ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_);
    (*this)(3,3) = (( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_));
    (*this)(3,4) = ((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(3,5) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(4,3) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_));
    (*this)(4,4) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_));
    (*this)(4,5) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(5,3) = (- c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_);
    (*this)(5,4) = (- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_);
    (*this)(5,5) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_base_link::Type_fr_leg_left_3_link_X_fr_base_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_base_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_3_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = (( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_));
    (*this)(0,1) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_));
    (*this)(0,2) = (- c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_);
    (*this)(0,3) = ((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_));
    (*this)(0,4) = ((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_));
    (*this)(0,5) = ((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_));
    (*this)(1,0) = ((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(1,1) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_));
    (*this)(1,2) = (- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_);
    (*this)(1,3) = ((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_));
    (*this)(1,4) = ((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_));
    (*this)(1,5) = (((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(2,0) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,1) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(2,3) = (( 0.085 *  s_q_leg_left_2_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(2,4) = (( 0.02 *  s_q_leg_left_2_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(2,5) = ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_);
    (*this)(3,3) = (( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_));
    (*this)(3,4) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_));
    (*this)(3,5) = (- c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_);
    (*this)(4,3) = ((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(4,4) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_));
    (*this)(4,5) = (- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_);
    (*this)(5,3) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(5,4) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(5,5) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_4_link::Type_fr_base_link_X_fr_leg_left_4_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_4_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_4_link::update(const JState& q) {
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(0,1) = ((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(0,2) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(0,3) = ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(0,4) = ((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(0,5) = ((((((- 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.085 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(1,0) = ((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,1) = (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,2) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,3) = ((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,4) = ((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,5) = (((((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.02 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(2,0) = (((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(2,1) = ((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(2,3) = (((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(2,4) = (((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(2,5) = (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_) - (( 0.38 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_));
    (*this)(3,3) = ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(3,4) = ((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(3,5) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(4,3) = ((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(4,4) = (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(4,5) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(5,3) = (((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(5,4) = ((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(5,5) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_base_link::Type_fr_leg_left_4_link_X_fr_base_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_base_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(0,1) = (((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(0,2) = (((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(0,3) = ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(0,4) = ((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(0,5) = (((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,0) = (((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,1) = (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,2) = ((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(1,3) = ((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,4) = ((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,5) = (((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(2,0) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,1) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(2,3) = ((((((- 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.085 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(2,4) = (((((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.02 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(2,5) = (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_) - (( 0.38 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_));
    (*this)(3,3) = ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(3,4) = (((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(3,5) = (((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(4,3) = (((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(4,4) = (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(4,5) = ((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(5,3) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(5,4) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(5,5) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_5_link::Type_fr_base_link_X_fr_leg_left_5_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_5_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_5_link::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar s_q_leg_left_5_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_5_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    s_q_leg_left_5_joint_ = TRAIT::sin( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_5_joint_ = TRAIT::cos( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = ((((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,1) = (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,2) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(0,3) = ((((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,4) = (((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + ((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,5) = (((((((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - ((( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.085 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(1,0) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,1) = (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,2) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,3) = ((((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,4) = ((((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,5) = (((((((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) + ((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.02 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(2,0) = ((((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,1) = ((((( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(2,3) = (((((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - ( 0.325 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,4) = (((((((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + ( 0.325 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,5) = ((((((- 0.325 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - ((( 0.325 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_));
    (*this)(3,3) = ((((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,4) = (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,5) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(4,3) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(4,4) = (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(4,5) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(5,3) = ((((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(5,4) = ((((( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(5,5) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_base_link::Type_fr_leg_left_5_link_X_fr_base_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_base_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar s_q_leg_left_5_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_5_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    s_q_leg_left_5_joint_ = TRAIT::sin( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_5_joint_ = TRAIT::cos( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = (((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,1) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,2) = (((((( 1.0 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,3) = ((((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,4) = ((((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,5) = (((((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - ( 0.325 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,0) = ((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,1) = ((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,2) = (((((( 1.0 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((( 1.0 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,3) = (((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + ((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,4) = ((((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,5) = (((((((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + ( 0.325 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,0) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,1) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(2,3) = (((((((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - ((( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.085 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(2,4) = (((((((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) + ((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.02 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(2,5) = ((((((- 0.325 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - ((( 0.325 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_));
    (*this)(3,3) = (((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,4) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,5) = (((((( 1.0 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(4,3) = ((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(4,4) = ((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(4,5) = (((((( 1.0 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((( 1.0 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(5,3) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(5,4) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(5,5) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_6_link::Type_fr_base_link_X_fr_leg_left_6_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_6_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_6_link::update(const JState& q) {
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar s_q_leg_left_5_joint_;
    Scalar s_q_leg_left_6_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_5_joint_;
    Scalar c_q_leg_left_6_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    s_q_leg_left_5_joint_ = TRAIT::sin( q(LEG_LEFT_5_JOINT));
    s_q_leg_left_6_joint_ = TRAIT::sin( q(LEG_LEFT_6_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_5_joint_ = TRAIT::cos( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_6_joint_ = TRAIT::cos( q(LEG_LEFT_6_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = (((((((( c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_) - (( s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  s_q_leg_left_6_joint_));
    (*this)(0,1) = ((((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) - (( s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  c_q_leg_left_6_joint_));
    (*this)(0,2) = ((((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,3) = (((((((((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - ((( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.085 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_6_joint_) + ((((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + ((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(0,4) = (((((((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + ((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + ((((((((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - ((( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.085 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(0,5) = ((((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,0) = ((( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  s_q_leg_left_6_joint_) + ((((((( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(1,1) = ((((((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + (( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  c_q_leg_left_6_joint_));
    (*this)(1,2) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,3) = (((((((((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) + ((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.02 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_6_joint_) + (((((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(1,4) = (((((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + ((((((((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) + ((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.02 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(1,5) = ((((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,0) = (( s_q_leg_left_2_joint_ *  s_q_leg_left_6_joint_) + (((((( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(2,1) = (((((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + ( s_q_leg_left_2_joint_ *  c_q_leg_left_6_joint_));
    (*this)(2,2) = ((((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,3) = ((((((((- 0.325 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - ((( 0.325 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_6_joint_) + ((((((((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + ( 0.325 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(2,4) = ((((((((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - ( 0.325 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + (((((((- 0.325 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - ((( 0.325 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(2,5) = (((((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - ( 0.325 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,3) = (((((((( c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_) - (( s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  s_q_leg_left_6_joint_));
    (*this)(3,4) = ((((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) - (( s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  c_q_leg_left_6_joint_));
    (*this)(3,5) = ((((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(4,3) = ((( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  s_q_leg_left_6_joint_) + ((((((( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(4,4) = ((((((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + (( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  c_q_leg_left_6_joint_));
    (*this)(4,5) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(5,3) = (( s_q_leg_left_2_joint_ *  s_q_leg_left_6_joint_) + (((((( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(5,4) = (((((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + ( s_q_leg_left_2_joint_ *  c_q_leg_left_6_joint_));
    (*this)(5,5) = ((((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_6_link_X_fr_base_link::Type_fr_leg_left_6_link_X_fr_base_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_6_link_X_fr_base_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_6_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar s_q_leg_left_5_joint_;
    Scalar s_q_leg_left_6_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_5_joint_;
    Scalar c_q_leg_left_6_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    s_q_leg_left_5_joint_ = TRAIT::sin( q(LEG_LEFT_5_JOINT));
    s_q_leg_left_6_joint_ = TRAIT::sin( q(LEG_LEFT_6_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_5_joint_ = TRAIT::cos( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_6_joint_ = TRAIT::cos( q(LEG_LEFT_6_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = ((((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_) - (( s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  s_q_leg_left_6_joint_));
    (*this)(0,1) = ((( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  s_q_leg_left_6_joint_) + (((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(0,2) = (( s_q_leg_left_2_joint_ *  s_q_leg_left_6_joint_) + ((((((( 1.0 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((( 1.0 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(0,3) = (((((((((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - ((( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.085 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_6_joint_) + ((((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + ((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(0,4) = (((((((((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) + ((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.02 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_6_joint_) + (((((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(0,5) = ((((((((- 0.325 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - ((( 0.325 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_6_joint_) + ((((((((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + ( 0.325 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(1,0) = ((((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) - (( s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  c_q_leg_left_6_joint_));
    (*this)(1,1) = (((((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + (( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  c_q_leg_left_6_joint_));
    (*this)(1,2) = (((((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((( 1.0 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + ( s_q_leg_left_2_joint_ *  c_q_leg_left_6_joint_));
    (*this)(1,3) = (((((((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + ((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + ((((((((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - ((( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.085 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(1,4) = (((((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + ((((((((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) + ((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.02 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(1,5) = ((((((((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - ( 0.325 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + (((((((- 0.325 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - ((( 0.325 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(2,0) = (((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,1) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,2) = (((((( 1.0 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,3) = ((((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,4) = ((((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,5) = (((((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - ( 0.325 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,3) = ((((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_) - (( s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  s_q_leg_left_6_joint_));
    (*this)(3,4) = ((( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  s_q_leg_left_6_joint_) + (((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(3,5) = (( s_q_leg_left_2_joint_ *  s_q_leg_left_6_joint_) + ((((((( 1.0 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((( 1.0 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(4,3) = ((((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) - (( s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  c_q_leg_left_6_joint_));
    (*this)(4,4) = (((((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + (( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  c_q_leg_left_6_joint_));
    (*this)(4,5) = (((((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((( 1.0 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + ( s_q_leg_left_2_joint_ *  c_q_leg_left_6_joint_));
    (*this)(5,3) = (((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(5,4) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(5,5) = (((((( 1.0 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_1_link::Type_fr_base_link_X_fr_leg_right_1_link()
{
    (*this)(0,2) = 0;
    (*this)(0,5) = - 0.085;
    (*this)(1,2) = 0;
    (*this)(1,5) = 0.02;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_1_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_1_link::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar c_q_leg_right_1_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    
    (*this)(0,0) =  c_q_leg_right_1_joint_;
    (*this)(0,1) = - s_q_leg_right_1_joint_;
    (*this)(0,3) = ( 0.27105 *  s_q_leg_right_1_joint_);
    (*this)(0,4) = ( 0.27105 *  c_q_leg_right_1_joint_);
    (*this)(1,0) =  s_q_leg_right_1_joint_;
    (*this)(1,1) =  c_q_leg_right_1_joint_;
    (*this)(1,3) = (- 0.27105 *  c_q_leg_right_1_joint_);
    (*this)(1,4) = ( 0.27105 *  s_q_leg_right_1_joint_);
    (*this)(2,3) = (( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_));
    (*this)(2,4) = ((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_));
    (*this)(3,3) =  c_q_leg_right_1_joint_;
    (*this)(3,4) = - s_q_leg_right_1_joint_;
    (*this)(4,3) =  s_q_leg_right_1_joint_;
    (*this)(4,4) =  c_q_leg_right_1_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_1_link_X_fr_base_link::Type_fr_leg_right_1_link_X_fr_base_link()
{
    (*this)(0,2) = 0;
    (*this)(1,2) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = - 0.085;
    (*this)(2,4) = 0.02;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_1_link_X_fr_base_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_1_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar c_q_leg_right_1_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    
    (*this)(0,0) =  c_q_leg_right_1_joint_;
    (*this)(0,1) =  s_q_leg_right_1_joint_;
    (*this)(0,3) = ( 0.27105 *  s_q_leg_right_1_joint_);
    (*this)(0,4) = (- 0.27105 *  c_q_leg_right_1_joint_);
    (*this)(0,5) = (( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_));
    (*this)(1,0) = - s_q_leg_right_1_joint_;
    (*this)(1,1) =  c_q_leg_right_1_joint_;
    (*this)(1,3) = ( 0.27105 *  c_q_leg_right_1_joint_);
    (*this)(1,4) = ( 0.27105 *  s_q_leg_right_1_joint_);
    (*this)(1,5) = ((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_));
    (*this)(3,3) =  c_q_leg_right_1_joint_;
    (*this)(3,4) =  s_q_leg_right_1_joint_;
    (*this)(4,3) = - s_q_leg_right_1_joint_;
    (*this)(4,4) =  c_q_leg_right_1_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_2_link::Type_fr_base_link_X_fr_leg_right_2_link()
{
    (*this)(2,2) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_2_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_2_link::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar c_q_leg_right_2_joint_;
    Scalar c_q_leg_right_1_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    
    (*this)(0,0) = (- s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(0,1) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(0,2) =  c_q_leg_right_1_joint_;
    (*this)(0,3) = ((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_));
    (*this)(0,4) = ((( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_) - ( 0.085 *  s_q_leg_right_2_joint_));
    (*this)(0,5) = ( 0.27105 *  s_q_leg_right_1_joint_);
    (*this)(1,0) = ( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(1,1) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,2) =  s_q_leg_right_1_joint_;
    (*this)(1,3) = ((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_));
    (*this)(1,4) = (( 0.02 *  s_q_leg_right_2_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(1,5) = (- 0.27105 *  c_q_leg_right_1_joint_);
    (*this)(2,0) = - c_q_leg_right_2_joint_;
    (*this)(2,1) =  s_q_leg_right_2_joint_;
    (*this)(2,3) = (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_);
    (*this)(2,4) = (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_);
    (*this)(2,5) = (( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_));
    (*this)(3,3) = (- s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(3,4) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(3,5) =  c_q_leg_right_1_joint_;
    (*this)(4,3) = ( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(4,4) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(4,5) =  s_q_leg_right_1_joint_;
    (*this)(5,3) = - c_q_leg_right_2_joint_;
    (*this)(5,4) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_base_link::Type_fr_leg_right_2_link_X_fr_base_link()
{
    (*this)(2,2) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_base_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = (- s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(0,1) = ( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(0,2) = - c_q_leg_right_2_joint_;
    (*this)(0,3) = ((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_));
    (*this)(0,4) = ((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_));
    (*this)(0,5) = (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_);
    (*this)(1,0) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,1) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,2) =  s_q_leg_right_2_joint_;
    (*this)(1,3) = ((( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_) - ( 0.085 *  s_q_leg_right_2_joint_));
    (*this)(1,4) = (( 0.02 *  s_q_leg_right_2_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(1,5) = (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_);
    (*this)(2,0) =  c_q_leg_right_1_joint_;
    (*this)(2,1) =  s_q_leg_right_1_joint_;
    (*this)(2,3) = ( 0.27105 *  s_q_leg_right_1_joint_);
    (*this)(2,4) = (- 0.27105 *  c_q_leg_right_1_joint_);
    (*this)(2,5) = (( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_));
    (*this)(3,3) = (- s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(3,4) = ( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(3,5) = - c_q_leg_right_2_joint_;
    (*this)(4,3) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(4,4) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(4,5) =  s_q_leg_right_2_joint_;
    (*this)(5,3) =  c_q_leg_right_1_joint_;
    (*this)(5,4) =  s_q_leg_right_1_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_3_link::Type_fr_base_link_X_fr_leg_right_3_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_3_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_3_link::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_3_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = (( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_));
    (*this)(0,1) = ((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(0,2) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(0,3) = ((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_));
    (*this)(0,4) = ((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_));
    (*this)(0,5) = ((( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_) - ( 0.085 *  s_q_leg_right_2_joint_));
    (*this)(1,0) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_));
    (*this)(1,1) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_));
    (*this)(1,2) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,3) = ((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_));
    (*this)(1,4) = ((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_));
    (*this)(1,5) = (( 0.02 *  s_q_leg_right_2_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(2,0) = (- c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_);
    (*this)(2,1) = (- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_);
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(2,3) = (((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_));
    (*this)(2,4) = (((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(2,5) = (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_);
    (*this)(3,3) = (( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_));
    (*this)(3,4) = ((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(3,5) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(4,3) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_));
    (*this)(4,4) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_));
    (*this)(4,5) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(5,3) = (- c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_);
    (*this)(5,4) = (- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_);
    (*this)(5,5) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_base_link::Type_fr_leg_right_3_link_X_fr_base_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_base_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_3_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = (( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_));
    (*this)(0,1) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_));
    (*this)(0,2) = (- c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_);
    (*this)(0,3) = ((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_));
    (*this)(0,4) = ((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_));
    (*this)(0,5) = (((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_));
    (*this)(1,0) = ((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(1,1) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_));
    (*this)(1,2) = (- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_);
    (*this)(1,3) = ((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_));
    (*this)(1,4) = ((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_));
    (*this)(1,5) = (((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(2,0) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,1) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(2,3) = ((( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_) - ( 0.085 *  s_q_leg_right_2_joint_));
    (*this)(2,4) = (( 0.02 *  s_q_leg_right_2_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(2,5) = (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_);
    (*this)(3,3) = (( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_));
    (*this)(3,4) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_));
    (*this)(3,5) = (- c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_);
    (*this)(4,3) = ((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(4,4) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_));
    (*this)(4,5) = (- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_);
    (*this)(5,3) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(5,4) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(5,5) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_4_link::Type_fr_base_link_X_fr_leg_right_4_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_4_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_4_link::update(const JState& q) {
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(0,1) = ((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(0,2) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(0,3) = ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(0,4) = ((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(0,5) = ((((((- 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - ( 0.085 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(1,0) = ((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,1) = (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,2) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,3) = ((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,4) = ((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,5) = (((((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + ( 0.02 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(2,0) = (((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(2,1) = ((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(2,3) = (((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(2,4) = (((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(2,5) = ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_) - (( 0.38 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_));
    (*this)(3,3) = ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(3,4) = ((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(3,5) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(4,3) = ((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(4,4) = (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(4,5) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(5,3) = (((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(5,4) = ((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(5,5) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_base_link::Type_fr_leg_right_4_link_X_fr_base_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_base_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(0,1) = (((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(0,2) = (((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(0,3) = ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(0,4) = ((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(0,5) = (((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,0) = (((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,1) = (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,2) = ((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(1,3) = ((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,4) = ((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,5) = (((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(2,0) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,1) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(2,3) = ((((((- 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - ( 0.085 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(2,4) = (((((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + ( 0.02 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(2,5) = ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_) - (( 0.38 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_));
    (*this)(3,3) = ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(3,4) = (((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(3,5) = (((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(4,3) = (((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(4,4) = (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(4,5) = ((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(5,3) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(5,4) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(5,5) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_5_link::Type_fr_base_link_X_fr_leg_right_5_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_5_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_5_link::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar s_q_leg_right_5_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_5_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    s_q_leg_right_5_joint_ = TRAIT::sin( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_5_joint_ = TRAIT::cos( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = ((((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,1) = (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,2) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(0,3) = ((((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,4) = (((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + ((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + (((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,5) = (((((((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - ((( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - ( 0.085 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(1,0) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,1) = (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,2) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,3) = ((((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,4) = ((((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + (((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,5) = (((((((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) + ((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + ( 0.02 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(2,0) = ((((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,1) = ((((( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(2,3) = (((((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - ( 0.325 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,4) = ((((((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + (((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + ( 0.325 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,5) = ((((((- 0.325 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - ((( 0.325 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_));
    (*this)(3,3) = ((((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,4) = (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,5) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(4,3) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(4,4) = (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(4,5) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(5,3) = ((((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(5,4) = ((((( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(5,5) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_base_link::Type_fr_leg_right_5_link_X_fr_base_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_base_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar s_q_leg_right_5_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_5_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    s_q_leg_right_5_joint_ = TRAIT::sin( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_5_joint_ = TRAIT::cos( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = (((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,1) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,2) = (((((( 1.0 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,3) = ((((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,4) = ((((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,5) = (((((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - ( 0.325 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,0) = ((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,1) = ((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,2) = (((((( 1.0 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((( 1.0 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,3) = (((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + ((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + (((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,4) = ((((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + (((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,5) = ((((((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + (((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + ( 0.325 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,0) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,1) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(2,3) = (((((((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - ((( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - ( 0.085 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(2,4) = (((((((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) + ((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + ( 0.02 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(2,5) = ((((((- 0.325 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - ((( 0.325 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_));
    (*this)(3,3) = (((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,4) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,5) = (((((( 1.0 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(4,3) = ((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(4,4) = ((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(4,5) = (((((( 1.0 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((( 1.0 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(5,3) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(5,4) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(5,5) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_6_link::Type_fr_base_link_X_fr_leg_right_6_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_6_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_6_link::update(const JState& q) {
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar s_q_leg_right_5_joint_;
    Scalar s_q_leg_right_6_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_5_joint_;
    Scalar c_q_leg_right_6_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    s_q_leg_right_5_joint_ = TRAIT::sin( q(LEG_RIGHT_5_JOINT));
    s_q_leg_right_6_joint_ = TRAIT::sin( q(LEG_RIGHT_6_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_5_joint_ = TRAIT::cos( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_6_joint_ = TRAIT::cos( q(LEG_RIGHT_6_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = (((((((( c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_) - (( s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  s_q_leg_right_6_joint_));
    (*this)(0,1) = ((((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) - (( s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  c_q_leg_right_6_joint_));
    (*this)(0,2) = ((((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,3) = (((((((((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - ((( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - ( 0.085 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_6_joint_) + ((((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + ((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + (((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(0,4) = (((((((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + ((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + ((((((((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - ((( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - ( 0.085 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(0,5) = ((((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,0) = ((( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  s_q_leg_right_6_joint_) + ((((((( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(1,1) = ((((((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + (( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  c_q_leg_right_6_joint_));
    (*this)(1,2) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,3) = (((((((((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) + ((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + ( 0.02 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_6_joint_) + (((((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + (((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(1,4) = (((((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + ((((((((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) + ((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + ( 0.02 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(1,5) = ((((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,0) = (( s_q_leg_right_2_joint_ *  s_q_leg_right_6_joint_) + (((((( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(2,1) = (((((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + ( s_q_leg_right_2_joint_ *  c_q_leg_right_6_joint_));
    (*this)(2,2) = ((((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,3) = ((((((((- 0.325 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - ((( 0.325 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_6_joint_) + (((((((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + (((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + ( 0.325 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(2,4) = ((((((((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - ( 0.325 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + (((((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + (((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + (((((((- 0.325 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - ((( 0.325 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(2,5) = (((((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - ( 0.325 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,3) = (((((((( c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_) - (( s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  s_q_leg_right_6_joint_));
    (*this)(3,4) = ((((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) - (( s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  c_q_leg_right_6_joint_));
    (*this)(3,5) = ((((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(4,3) = ((( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  s_q_leg_right_6_joint_) + ((((((( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(4,4) = ((((((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + (( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  c_q_leg_right_6_joint_));
    (*this)(4,5) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(5,3) = (( s_q_leg_right_2_joint_ *  s_q_leg_right_6_joint_) + (((((( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(5,4) = (((((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + ( s_q_leg_right_2_joint_ *  c_q_leg_right_6_joint_));
    (*this)(5,5) = ((((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_6_link_X_fr_base_link::Type_fr_leg_right_6_link_X_fr_base_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_6_link_X_fr_base_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_6_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar s_q_leg_right_5_joint_;
    Scalar s_q_leg_right_6_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_5_joint_;
    Scalar c_q_leg_right_6_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    s_q_leg_right_5_joint_ = TRAIT::sin( q(LEG_RIGHT_5_JOINT));
    s_q_leg_right_6_joint_ = TRAIT::sin( q(LEG_RIGHT_6_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_5_joint_ = TRAIT::cos( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_6_joint_ = TRAIT::cos( q(LEG_RIGHT_6_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = ((((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_) - (( s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  s_q_leg_right_6_joint_));
    (*this)(0,1) = ((( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  s_q_leg_right_6_joint_) + (((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(0,2) = (( s_q_leg_right_2_joint_ *  s_q_leg_right_6_joint_) + ((((((( 1.0 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((( 1.0 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(0,3) = (((((((((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - ((( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - ( 0.085 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_6_joint_) + ((((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + ((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + (((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(0,4) = (((((((((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) + ((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + ( 0.02 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_6_joint_) + (((((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + (((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(0,5) = ((((((((- 0.325 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - ((( 0.325 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_6_joint_) + (((((((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + (((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + ( 0.325 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(1,0) = ((((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) - (( s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  c_q_leg_right_6_joint_));
    (*this)(1,1) = (((((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + (( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  c_q_leg_right_6_joint_));
    (*this)(1,2) = (((((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((( 1.0 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + ( s_q_leg_right_2_joint_ *  c_q_leg_right_6_joint_));
    (*this)(1,3) = (((((((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + ((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + ((((((((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - ((( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - ( 0.085 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(1,4) = (((((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + ((((((((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) + ((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + ( 0.02 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(1,5) = ((((((((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - ( 0.325 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + (((((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + (((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + (((((((- 0.325 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - ((( 0.325 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(2,0) = (((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,1) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,2) = (((((( 1.0 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,3) = ((((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,4) = ((((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,5) = (((((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - ( 0.325 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,3) = ((((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_) - (( s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  s_q_leg_right_6_joint_));
    (*this)(3,4) = ((( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  s_q_leg_right_6_joint_) + (((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(3,5) = (( s_q_leg_right_2_joint_ *  s_q_leg_right_6_joint_) + ((((((( 1.0 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((( 1.0 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(4,3) = ((((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) - (( s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  c_q_leg_right_6_joint_));
    (*this)(4,4) = (((((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + (( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  c_q_leg_right_6_joint_));
    (*this)(4,5) = (((((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((( 1.0 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + ( s_q_leg_right_2_joint_ *  c_q_leg_right_6_joint_));
    (*this)(5,3) = (((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(5,4) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(5,5) = (((((( 1.0 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_1_joint::Type_fr_base_link_X_fr_leg_left_1_joint()
{
    (*this)(0,0) = 1.0;
    (*this)(0,1) = 0;
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0.27105;
    (*this)(0,5) = 0.085;
    (*this)(1,0) = 0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0;
    (*this)(1,3) = - 0.27105;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0.02;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = - 0.085;
    (*this)(2,4) = - 0.02;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
    (*this)(3,4) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,3) = 0;
    (*this)(4,4) = 1.0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_1_joint& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_1_joint::update(const JState& q) {
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_2_joint::Type_fr_base_link_X_fr_leg_left_2_joint()
{
    (*this)(0,0) = 0;
    (*this)(0,3) = - 0.085;
    (*this)(1,0) = 0;
    (*this)(1,3) = - 0.02;
    (*this)(2,0) = - 1.0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,3) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = - 1.0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_2_joint& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_2_joint::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar c_q_leg_left_1_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    
    (*this)(0,1) = - s_q_leg_left_1_joint_;
    (*this)(0,2) =  c_q_leg_left_1_joint_;
    (*this)(0,4) = ( 0.27105 *  c_q_leg_left_1_joint_);
    (*this)(0,5) = ( 0.27105 *  s_q_leg_left_1_joint_);
    (*this)(1,1) =  c_q_leg_left_1_joint_;
    (*this)(1,2) =  s_q_leg_left_1_joint_;
    (*this)(1,4) = ( 0.27105 *  s_q_leg_left_1_joint_);
    (*this)(1,5) = (- 0.27105 *  c_q_leg_left_1_joint_);
    (*this)(2,4) = (( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_));
    (*this)(2,5) = ((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_));
    (*this)(3,4) = - s_q_leg_left_1_joint_;
    (*this)(3,5) =  c_q_leg_left_1_joint_;
    (*this)(4,4) =  c_q_leg_left_1_joint_;
    (*this)(4,5) =  s_q_leg_left_1_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_3_joint::Type_fr_base_link_X_fr_leg_left_3_joint()
{
    (*this)(2,0) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_3_joint& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_3_joint::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) =  c_q_leg_left_1_joint_;
    (*this)(0,1) = (- s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(0,2) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(0,3) = ( 0.27105 *  s_q_leg_left_1_joint_);
    (*this)(0,4) = ((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_));
    (*this)(0,5) = (( 0.085 *  s_q_leg_left_2_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(1,0) =  s_q_leg_left_1_joint_;
    (*this)(1,1) = ( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(1,2) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,3) = (- 0.27105 *  c_q_leg_left_1_joint_);
    (*this)(1,4) = ((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_));
    (*this)(1,5) = (( 0.02 *  s_q_leg_left_2_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(2,1) = - c_q_leg_left_2_joint_;
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(2,3) = ((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_));
    (*this)(2,4) = ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_);
    (*this)(2,5) = ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_);
    (*this)(3,3) =  c_q_leg_left_1_joint_;
    (*this)(3,4) = (- s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(3,5) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(4,3) =  s_q_leg_left_1_joint_;
    (*this)(4,4) = ( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(4,5) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(5,4) = - c_q_leg_left_2_joint_;
    (*this)(5,5) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_4_joint::Type_fr_base_link_X_fr_leg_left_4_joint()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_4_joint& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_4_joint::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_3_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = (( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_));
    (*this)(0,1) = ((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(0,2) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(0,3) = (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(0,4) = ((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_));
    (*this)(0,5) = ((((((- 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.085 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(1,0) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_));
    (*this)(1,1) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_));
    (*this)(1,2) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,3) = (((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(1,4) = ((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_));
    (*this)(1,5) = (((((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.02 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(2,0) = (- c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_);
    (*this)(2,1) = (- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_);
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(2,3) = (((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_));
    (*this)(2,4) = (((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(2,5) = (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_) - (( 0.38 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_));
    (*this)(3,3) = (( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_));
    (*this)(3,4) = ((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(3,5) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(4,3) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_));
    (*this)(4,4) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_));
    (*this)(4,5) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(5,3) = (- c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_);
    (*this)(5,4) = (- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_);
    (*this)(5,5) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_5_joint::Type_fr_base_link_X_fr_leg_left_5_joint()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_5_joint& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_5_joint::update(const JState& q) {
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(0,1) = ((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(0,2) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(0,3) = (((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(0,4) = ((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(0,5) = (((((((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - ((( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.085 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(1,0) = ((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,1) = (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,2) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,3) = (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(1,4) = ((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,5) = (((((((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) + ((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.02 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(2,0) = (((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(2,1) = ((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(2,3) = ((((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - ( 0.325 *  s_q_leg_left_2_joint_));
    (*this)(2,4) = (((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(2,5) = ((((((- 0.325 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - ((( 0.325 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_));
    (*this)(3,3) = ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(3,4) = ((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(3,5) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(4,3) = ((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(4,4) = (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(4,5) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(5,3) = (((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(5,4) = ((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(5,5) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_6_joint::Type_fr_base_link_X_fr_leg_left_6_joint()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_6_joint& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_6_joint::update(const JState& q) {
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar s_q_leg_left_5_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_5_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    s_q_leg_left_5_joint_ = TRAIT::sin( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_5_joint_ = TRAIT::cos( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,1) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(0,2) = ((((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,3) = (((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + ((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,4) = (((((((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - ((( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.085 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(0,5) = ((((((((( 0.085 *  c_q_leg_left_2_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.085 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,0) = (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,1) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,2) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,3) = ((((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,4) = (((((((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) + ((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + ( 0.02 *  s_q_leg_left_2_joint_)) + (( 0.27105 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_));
    (*this)(1,5) = ((((((((( 0.02 *  c_q_leg_left_2_joint_) - (( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) + (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 0.27105 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.27105 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) - ( 0.02 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) - (( 0.27105 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,0) = ((((( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,1) =  s_q_leg_left_2_joint_;
    (*this)(2,2) = ((((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,3) = (((((((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) + ( 0.325 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_5_joint_) + ((((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,4) = ((((((- 0.325 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - ((( 0.325 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) + ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_));
    (*this)(2,5) = (((((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) + ( 0.38 *  s_q_leg_left_2_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) - ( 0.38 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_4_joint_)) - ( 0.325 *  s_q_leg_left_2_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,3) = (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,4) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(3,5) = ((((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(4,3) = (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(4,4) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(4,5) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(5,3) = ((((( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(5,4) =  s_q_leg_left_2_joint_;
    (*this)(5,5) = ((((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_1_joint::Type_fr_base_link_X_fr_leg_right_1_joint()
{
    (*this)(0,0) = 1.0;
    (*this)(0,1) = 0;
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0.27105;
    (*this)(0,5) = - 0.085;
    (*this)(1,0) = 0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0;
    (*this)(1,3) = - 0.27105;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0.02;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.085;
    (*this)(2,4) = - 0.02;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
    (*this)(3,4) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,3) = 0;
    (*this)(4,4) = 1.0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_1_joint& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_1_joint::update(const JState& q) {
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_2_joint::Type_fr_base_link_X_fr_leg_right_2_joint()
{
    (*this)(0,0) = 0;
    (*this)(0,3) = 0.085;
    (*this)(1,0) = 0;
    (*this)(1,3) = - 0.02;
    (*this)(2,0) = - 1.0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,3) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = - 1.0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_2_joint& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_2_joint::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar c_q_leg_right_1_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    
    (*this)(0,1) = - s_q_leg_right_1_joint_;
    (*this)(0,2) =  c_q_leg_right_1_joint_;
    (*this)(0,4) = ( 0.27105 *  c_q_leg_right_1_joint_);
    (*this)(0,5) = ( 0.27105 *  s_q_leg_right_1_joint_);
    (*this)(1,1) =  c_q_leg_right_1_joint_;
    (*this)(1,2) =  s_q_leg_right_1_joint_;
    (*this)(1,4) = ( 0.27105 *  s_q_leg_right_1_joint_);
    (*this)(1,5) = (- 0.27105 *  c_q_leg_right_1_joint_);
    (*this)(2,4) = ((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_));
    (*this)(2,5) = (( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_));
    (*this)(3,4) = - s_q_leg_right_1_joint_;
    (*this)(3,5) =  c_q_leg_right_1_joint_;
    (*this)(4,4) =  c_q_leg_right_1_joint_;
    (*this)(4,5) =  s_q_leg_right_1_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_3_joint::Type_fr_base_link_X_fr_leg_right_3_joint()
{
    (*this)(2,0) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_3_joint& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_3_joint::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) =  c_q_leg_right_1_joint_;
    (*this)(0,1) = (- s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(0,2) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(0,3) = ( 0.27105 *  s_q_leg_right_1_joint_);
    (*this)(0,4) = ((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_));
    (*this)(0,5) = ((( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_) - ( 0.085 *  s_q_leg_right_2_joint_));
    (*this)(1,0) =  s_q_leg_right_1_joint_;
    (*this)(1,1) = ( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(1,2) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,3) = (- 0.27105 *  c_q_leg_right_1_joint_);
    (*this)(1,4) = ((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_));
    (*this)(1,5) = (( 0.02 *  s_q_leg_right_2_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(2,1) = - c_q_leg_right_2_joint_;
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(2,3) = (( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_));
    (*this)(2,4) = (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_);
    (*this)(2,5) = (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_);
    (*this)(3,3) =  c_q_leg_right_1_joint_;
    (*this)(3,4) = (- s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(3,5) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(4,3) =  s_q_leg_right_1_joint_;
    (*this)(4,4) = ( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(4,5) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(5,4) = - c_q_leg_right_2_joint_;
    (*this)(5,5) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_4_joint::Type_fr_base_link_X_fr_leg_right_4_joint()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_4_joint& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_4_joint::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_3_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = (( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_));
    (*this)(0,1) = ((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(0,2) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(0,3) = (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(0,4) = ((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_));
    (*this)(0,5) = ((((((- 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - ( 0.085 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(1,0) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_));
    (*this)(1,1) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_));
    (*this)(1,2) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,3) = (((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(1,4) = ((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_));
    (*this)(1,5) = (((((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + ( 0.02 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(2,0) = (- c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_);
    (*this)(2,1) = (- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_);
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(2,3) = ((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_));
    (*this)(2,4) = (((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(2,5) = ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_) - (( 0.38 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_));
    (*this)(3,3) = (( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_));
    (*this)(3,4) = ((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(3,5) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(4,3) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_));
    (*this)(4,4) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_));
    (*this)(4,5) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(5,3) = (- c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_);
    (*this)(5,4) = (- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_);
    (*this)(5,5) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_5_joint::Type_fr_base_link_X_fr_leg_right_5_joint()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_5_joint& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_5_joint::update(const JState& q) {
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(0,1) = ((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(0,2) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(0,3) = (((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(0,4) = ((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(0,5) = (((((((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - ((( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - ( 0.085 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(1,0) = ((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,1) = (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,2) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,3) = (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(1,4) = ((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,5) = (((((((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) + ((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + ( 0.02 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(2,0) = (((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(2,1) = ((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(2,3) = ((((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - ( 0.325 *  s_q_leg_right_2_joint_));
    (*this)(2,4) = (((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(2,5) = ((((((- 0.325 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - ((( 0.325 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_));
    (*this)(3,3) = ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(3,4) = ((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(3,5) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(4,3) = ((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(4,4) = (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(4,5) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(5,3) = (((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(5,4) = ((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(5,5) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_6_joint::Type_fr_base_link_X_fr_leg_right_6_joint()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_6_joint& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_6_joint::update(const JState& q) {
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar s_q_leg_right_5_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_5_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    s_q_leg_right_5_joint_ = TRAIT::sin( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_5_joint_ = TRAIT::cos( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,1) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(0,2) = ((((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,3) = (((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + ((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + (((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,4) = (((((((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - ((( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - ( 0.085 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(0,5) = ((((((((((- 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) + ( 0.085 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,0) = (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,1) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,2) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,3) = ((((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + (((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,4) = (((((((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) + ((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + ( 0.02 *  s_q_leg_right_2_joint_)) + (( 0.27105 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_));
    (*this)(1,5) = ((((((((( 0.02 *  c_q_leg_right_2_joint_) - (( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) + (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 0.27105 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.27105 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) - ( 0.02 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) - (( 0.27105 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,0) = ((((( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,1) =  s_q_leg_right_2_joint_;
    (*this)(2,2) = ((((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,3) = ((((((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + (((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) + ( 0.325 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_5_joint_) + ((((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,4) = ((((((- 0.325 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - ((( 0.325 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) + (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_));
    (*this)(2,5) = (((((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) + ( 0.38 *  s_q_leg_right_2_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) - ( 0.38 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_4_joint_)) - ( 0.325 *  s_q_leg_right_2_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,3) = (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,4) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(3,5) = ((((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(4,3) = (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(4,4) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(4,5) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(5,3) = ((((( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(5,4) =  s_q_leg_right_2_joint_;
    (*this)(5,5) = ((((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_leg_left_1_link::Type_fr_leg_left_2_link_X_fr_leg_left_1_link()
{
    (*this)(0,0) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,0) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 1;
    (*this)(2,1) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,3) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 1;
    (*this)(5,4) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_leg_left_1_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_leg_left_1_link::update(const JState& q) {
    Scalar s_q_leg_left_2_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,1) =  s_q_leg_left_2_joint_;
    (*this)(0,2) = - c_q_leg_left_2_joint_;
    (*this)(1,1) =  c_q_leg_left_2_joint_;
    (*this)(1,2) =  s_q_leg_left_2_joint_;
    (*this)(3,4) =  s_q_leg_left_2_joint_;
    (*this)(3,5) = - c_q_leg_left_2_joint_;
    (*this)(4,4) =  c_q_leg_left_2_joint_;
    (*this)(4,5) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_1_link_X_fr_leg_left_2_link::Type_fr_leg_left_1_link_X_fr_leg_left_2_link()
{
    (*this)(0,0) = 0;
    (*this)(0,1) = 0;
    (*this)(0,2) = 1;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 0;
    (*this)(3,4) = 0;
    (*this)(3,5) = 1;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_1_link_X_fr_leg_left_2_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_1_link_X_fr_leg_left_2_link::update(const JState& q) {
    Scalar s_q_leg_left_2_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(1,0) =  s_q_leg_left_2_joint_;
    (*this)(1,1) =  c_q_leg_left_2_joint_;
    (*this)(2,0) = - c_q_leg_left_2_joint_;
    (*this)(2,1) =  s_q_leg_left_2_joint_;
    (*this)(4,3) =  s_q_leg_left_2_joint_;
    (*this)(4,4) =  c_q_leg_left_2_joint_;
    (*this)(5,3) = - c_q_leg_left_2_joint_;
    (*this)(5,4) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_leg_left_2_link::Type_fr_leg_left_3_link_X_fr_leg_left_2_link()
{
    (*this)(0,1) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,1) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 1;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,4) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,4) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 1;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_leg_left_2_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_leg_left_2_link::update(const JState& q) {
    Scalar s_q_leg_left_3_joint_;
    Scalar c_q_leg_left_3_joint_;
    
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    
    (*this)(0,0) =  s_q_leg_left_3_joint_;
    (*this)(0,2) =  c_q_leg_left_3_joint_;
    (*this)(1,0) =  c_q_leg_left_3_joint_;
    (*this)(1,2) = - s_q_leg_left_3_joint_;
    (*this)(3,3) =  s_q_leg_left_3_joint_;
    (*this)(3,5) =  c_q_leg_left_3_joint_;
    (*this)(4,3) =  c_q_leg_left_3_joint_;
    (*this)(4,5) = - s_q_leg_left_3_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_leg_left_3_link::Type_fr_leg_left_2_link_X_fr_leg_left_3_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,0) = 0;
    (*this)(1,1) = 0;
    (*this)(1,2) = 1;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,3) = 0;
    (*this)(4,4) = 0;
    (*this)(4,5) = 1;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_leg_left_3_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_leg_left_3_link::update(const JState& q) {
    Scalar s_q_leg_left_3_joint_;
    Scalar c_q_leg_left_3_joint_;
    
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    
    (*this)(0,0) =  s_q_leg_left_3_joint_;
    (*this)(0,1) =  c_q_leg_left_3_joint_;
    (*this)(2,0) =  c_q_leg_left_3_joint_;
    (*this)(2,1) = - s_q_leg_left_3_joint_;
    (*this)(3,3) =  s_q_leg_left_3_joint_;
    (*this)(3,4) =  c_q_leg_left_3_joint_;
    (*this)(5,3) =  c_q_leg_left_3_joint_;
    (*this)(5,4) = - s_q_leg_left_3_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_leg_left_3_link::Type_fr_leg_left_4_link_X_fr_leg_left_3_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1;
    (*this)(2,3) = 0.38;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_leg_left_3_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_leg_left_3_link::update(const JState& q) {
    Scalar s_q_leg_left_4_joint_;
    Scalar c_q_leg_left_4_joint_;
    
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    
    (*this)(0,0) =  c_q_leg_left_4_joint_;
    (*this)(0,1) =  s_q_leg_left_4_joint_;
    (*this)(0,5) = (- 0.38 *  c_q_leg_left_4_joint_);
    (*this)(1,0) = - s_q_leg_left_4_joint_;
    (*this)(1,1) =  c_q_leg_left_4_joint_;
    (*this)(1,5) = ( 0.38 *  s_q_leg_left_4_joint_);
    (*this)(3,3) =  c_q_leg_left_4_joint_;
    (*this)(3,4) =  s_q_leg_left_4_joint_;
    (*this)(4,3) = - s_q_leg_left_4_joint_;
    (*this)(4,4) =  c_q_leg_left_4_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_leg_left_4_link::Type_fr_leg_left_3_link_X_fr_leg_left_4_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0.38;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_leg_left_4_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_leg_left_4_link::update(const JState& q) {
    Scalar s_q_leg_left_4_joint_;
    Scalar c_q_leg_left_4_joint_;
    
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    
    (*this)(0,0) =  c_q_leg_left_4_joint_;
    (*this)(0,1) = - s_q_leg_left_4_joint_;
    (*this)(1,0) =  s_q_leg_left_4_joint_;
    (*this)(1,1) =  c_q_leg_left_4_joint_;
    (*this)(2,3) = (- 0.38 *  c_q_leg_left_4_joint_);
    (*this)(2,4) = ( 0.38 *  s_q_leg_left_4_joint_);
    (*this)(3,3) =  c_q_leg_left_4_joint_;
    (*this)(3,4) = - s_q_leg_left_4_joint_;
    (*this)(4,3) =  s_q_leg_left_4_joint_;
    (*this)(4,4) =  c_q_leg_left_4_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_leg_left_4_link::Type_fr_leg_left_5_link_X_fr_leg_left_4_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1;
    (*this)(2,3) = 0.325;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_leg_left_4_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_leg_left_4_link::update(const JState& q) {
    Scalar s_q_leg_left_5_joint_;
    Scalar c_q_leg_left_5_joint_;
    
    s_q_leg_left_5_joint_ = TRAIT::sin( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_5_joint_ = TRAIT::cos( q(LEG_LEFT_5_JOINT));
    
    (*this)(0,0) =  c_q_leg_left_5_joint_;
    (*this)(0,1) =  s_q_leg_left_5_joint_;
    (*this)(0,5) = (- 0.325 *  c_q_leg_left_5_joint_);
    (*this)(1,0) = - s_q_leg_left_5_joint_;
    (*this)(1,1) =  c_q_leg_left_5_joint_;
    (*this)(1,5) = ( 0.325 *  s_q_leg_left_5_joint_);
    (*this)(3,3) =  c_q_leg_left_5_joint_;
    (*this)(3,4) =  s_q_leg_left_5_joint_;
    (*this)(4,3) = - s_q_leg_left_5_joint_;
    (*this)(4,4) =  c_q_leg_left_5_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_leg_left_5_link::Type_fr_leg_left_4_link_X_fr_leg_left_5_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0.325;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_leg_left_5_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_leg_left_5_link::update(const JState& q) {
    Scalar s_q_leg_left_5_joint_;
    Scalar c_q_leg_left_5_joint_;
    
    s_q_leg_left_5_joint_ = TRAIT::sin( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_5_joint_ = TRAIT::cos( q(LEG_LEFT_5_JOINT));
    
    (*this)(0,0) =  c_q_leg_left_5_joint_;
    (*this)(0,1) = - s_q_leg_left_5_joint_;
    (*this)(1,0) =  s_q_leg_left_5_joint_;
    (*this)(1,1) =  c_q_leg_left_5_joint_;
    (*this)(2,3) = (- 0.325 *  c_q_leg_left_5_joint_);
    (*this)(2,4) = ( 0.325 *  s_q_leg_left_5_joint_);
    (*this)(3,3) =  c_q_leg_left_5_joint_;
    (*this)(3,4) = - s_q_leg_left_5_joint_;
    (*this)(4,3) =  s_q_leg_left_5_joint_;
    (*this)(4,4) =  c_q_leg_left_5_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_6_link_X_fr_leg_left_5_link::Type_fr_leg_left_6_link_X_fr_leg_left_5_link()
{
    (*this)(0,0) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,0) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 1;
    (*this)(2,1) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,3) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 1;
    (*this)(5,4) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_6_link_X_fr_leg_left_5_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_6_link_X_fr_leg_left_5_link::update(const JState& q) {
    Scalar s_q_leg_left_6_joint_;
    Scalar c_q_leg_left_6_joint_;
    
    s_q_leg_left_6_joint_ = TRAIT::sin( q(LEG_LEFT_6_JOINT));
    c_q_leg_left_6_joint_ = TRAIT::cos( q(LEG_LEFT_6_JOINT));
    
    (*this)(0,1) =  c_q_leg_left_6_joint_;
    (*this)(0,2) =  s_q_leg_left_6_joint_;
    (*this)(1,1) = - s_q_leg_left_6_joint_;
    (*this)(1,2) =  c_q_leg_left_6_joint_;
    (*this)(3,4) =  c_q_leg_left_6_joint_;
    (*this)(3,5) =  s_q_leg_left_6_joint_;
    (*this)(4,4) = - s_q_leg_left_6_joint_;
    (*this)(4,5) =  c_q_leg_left_6_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_leg_left_6_link::Type_fr_leg_left_5_link_X_fr_leg_left_6_link()
{
    (*this)(0,0) = 0;
    (*this)(0,1) = 0;
    (*this)(0,2) = 1;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 0;
    (*this)(3,4) = 0;
    (*this)(3,5) = 1;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_leg_left_6_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_leg_left_6_link::update(const JState& q) {
    Scalar s_q_leg_left_6_joint_;
    Scalar c_q_leg_left_6_joint_;
    
    s_q_leg_left_6_joint_ = TRAIT::sin( q(LEG_LEFT_6_JOINT));
    c_q_leg_left_6_joint_ = TRAIT::cos( q(LEG_LEFT_6_JOINT));
    
    (*this)(1,0) =  c_q_leg_left_6_joint_;
    (*this)(1,1) = - s_q_leg_left_6_joint_;
    (*this)(2,0) =  s_q_leg_left_6_joint_;
    (*this)(2,1) =  c_q_leg_left_6_joint_;
    (*this)(4,3) =  c_q_leg_left_6_joint_;
    (*this)(4,4) = - s_q_leg_left_6_joint_;
    (*this)(5,3) =  s_q_leg_left_6_joint_;
    (*this)(5,4) =  c_q_leg_left_6_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_leg_right_1_link::Type_fr_leg_right_2_link_X_fr_leg_right_1_link()
{
    (*this)(0,0) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,0) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 1;
    (*this)(2,1) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,3) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 1;
    (*this)(5,4) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_leg_right_1_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_leg_right_1_link::update(const JState& q) {
    Scalar s_q_leg_right_2_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,1) =  s_q_leg_right_2_joint_;
    (*this)(0,2) = - c_q_leg_right_2_joint_;
    (*this)(1,1) =  c_q_leg_right_2_joint_;
    (*this)(1,2) =  s_q_leg_right_2_joint_;
    (*this)(3,4) =  s_q_leg_right_2_joint_;
    (*this)(3,5) = - c_q_leg_right_2_joint_;
    (*this)(4,4) =  c_q_leg_right_2_joint_;
    (*this)(4,5) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_1_link_X_fr_leg_right_2_link::Type_fr_leg_right_1_link_X_fr_leg_right_2_link()
{
    (*this)(0,0) = 0;
    (*this)(0,1) = 0;
    (*this)(0,2) = 1;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 0;
    (*this)(3,4) = 0;
    (*this)(3,5) = 1;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_1_link_X_fr_leg_right_2_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_1_link_X_fr_leg_right_2_link::update(const JState& q) {
    Scalar s_q_leg_right_2_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(1,0) =  s_q_leg_right_2_joint_;
    (*this)(1,1) =  c_q_leg_right_2_joint_;
    (*this)(2,0) = - c_q_leg_right_2_joint_;
    (*this)(2,1) =  s_q_leg_right_2_joint_;
    (*this)(4,3) =  s_q_leg_right_2_joint_;
    (*this)(4,4) =  c_q_leg_right_2_joint_;
    (*this)(5,3) = - c_q_leg_right_2_joint_;
    (*this)(5,4) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_leg_right_2_link::Type_fr_leg_right_3_link_X_fr_leg_right_2_link()
{
    (*this)(0,1) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,1) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 1;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,4) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,4) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 1;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_leg_right_2_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_leg_right_2_link::update(const JState& q) {
    Scalar s_q_leg_right_3_joint_;
    Scalar c_q_leg_right_3_joint_;
    
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    
    (*this)(0,0) =  s_q_leg_right_3_joint_;
    (*this)(0,2) =  c_q_leg_right_3_joint_;
    (*this)(1,0) =  c_q_leg_right_3_joint_;
    (*this)(1,2) = - s_q_leg_right_3_joint_;
    (*this)(3,3) =  s_q_leg_right_3_joint_;
    (*this)(3,5) =  c_q_leg_right_3_joint_;
    (*this)(4,3) =  c_q_leg_right_3_joint_;
    (*this)(4,5) = - s_q_leg_right_3_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_leg_right_3_link::Type_fr_leg_right_2_link_X_fr_leg_right_3_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,0) = 0;
    (*this)(1,1) = 0;
    (*this)(1,2) = 1;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,3) = 0;
    (*this)(4,4) = 0;
    (*this)(4,5) = 1;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_leg_right_3_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_leg_right_3_link::update(const JState& q) {
    Scalar s_q_leg_right_3_joint_;
    Scalar c_q_leg_right_3_joint_;
    
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    
    (*this)(0,0) =  s_q_leg_right_3_joint_;
    (*this)(0,1) =  c_q_leg_right_3_joint_;
    (*this)(2,0) =  c_q_leg_right_3_joint_;
    (*this)(2,1) = - s_q_leg_right_3_joint_;
    (*this)(3,3) =  s_q_leg_right_3_joint_;
    (*this)(3,4) =  c_q_leg_right_3_joint_;
    (*this)(5,3) =  c_q_leg_right_3_joint_;
    (*this)(5,4) = - s_q_leg_right_3_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_leg_right_3_link::Type_fr_leg_right_4_link_X_fr_leg_right_3_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1;
    (*this)(2,3) = 0.38;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_leg_right_3_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_leg_right_3_link::update(const JState& q) {
    Scalar s_q_leg_right_4_joint_;
    Scalar c_q_leg_right_4_joint_;
    
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    
    (*this)(0,0) =  c_q_leg_right_4_joint_;
    (*this)(0,1) =  s_q_leg_right_4_joint_;
    (*this)(0,5) = (- 0.38 *  c_q_leg_right_4_joint_);
    (*this)(1,0) = - s_q_leg_right_4_joint_;
    (*this)(1,1) =  c_q_leg_right_4_joint_;
    (*this)(1,5) = ( 0.38 *  s_q_leg_right_4_joint_);
    (*this)(3,3) =  c_q_leg_right_4_joint_;
    (*this)(3,4) =  s_q_leg_right_4_joint_;
    (*this)(4,3) = - s_q_leg_right_4_joint_;
    (*this)(4,4) =  c_q_leg_right_4_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_leg_right_4_link::Type_fr_leg_right_3_link_X_fr_leg_right_4_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0.38;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_leg_right_4_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_leg_right_4_link::update(const JState& q) {
    Scalar s_q_leg_right_4_joint_;
    Scalar c_q_leg_right_4_joint_;
    
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    
    (*this)(0,0) =  c_q_leg_right_4_joint_;
    (*this)(0,1) = - s_q_leg_right_4_joint_;
    (*this)(1,0) =  s_q_leg_right_4_joint_;
    (*this)(1,1) =  c_q_leg_right_4_joint_;
    (*this)(2,3) = (- 0.38 *  c_q_leg_right_4_joint_);
    (*this)(2,4) = ( 0.38 *  s_q_leg_right_4_joint_);
    (*this)(3,3) =  c_q_leg_right_4_joint_;
    (*this)(3,4) = - s_q_leg_right_4_joint_;
    (*this)(4,3) =  s_q_leg_right_4_joint_;
    (*this)(4,4) =  c_q_leg_right_4_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_leg_right_4_link::Type_fr_leg_right_5_link_X_fr_leg_right_4_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1;
    (*this)(2,3) = 0.325;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_leg_right_4_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_leg_right_4_link::update(const JState& q) {
    Scalar s_q_leg_right_5_joint_;
    Scalar c_q_leg_right_5_joint_;
    
    s_q_leg_right_5_joint_ = TRAIT::sin( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_5_joint_ = TRAIT::cos( q(LEG_RIGHT_5_JOINT));
    
    (*this)(0,0) =  c_q_leg_right_5_joint_;
    (*this)(0,1) =  s_q_leg_right_5_joint_;
    (*this)(0,5) = (- 0.325 *  c_q_leg_right_5_joint_);
    (*this)(1,0) = - s_q_leg_right_5_joint_;
    (*this)(1,1) =  c_q_leg_right_5_joint_;
    (*this)(1,5) = ( 0.325 *  s_q_leg_right_5_joint_);
    (*this)(3,3) =  c_q_leg_right_5_joint_;
    (*this)(3,4) =  s_q_leg_right_5_joint_;
    (*this)(4,3) = - s_q_leg_right_5_joint_;
    (*this)(4,4) =  c_q_leg_right_5_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_leg_right_5_link::Type_fr_leg_right_4_link_X_fr_leg_right_5_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0.325;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_leg_right_5_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_leg_right_5_link::update(const JState& q) {
    Scalar s_q_leg_right_5_joint_;
    Scalar c_q_leg_right_5_joint_;
    
    s_q_leg_right_5_joint_ = TRAIT::sin( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_5_joint_ = TRAIT::cos( q(LEG_RIGHT_5_JOINT));
    
    (*this)(0,0) =  c_q_leg_right_5_joint_;
    (*this)(0,1) = - s_q_leg_right_5_joint_;
    (*this)(1,0) =  s_q_leg_right_5_joint_;
    (*this)(1,1) =  c_q_leg_right_5_joint_;
    (*this)(2,3) = (- 0.325 *  c_q_leg_right_5_joint_);
    (*this)(2,4) = ( 0.325 *  s_q_leg_right_5_joint_);
    (*this)(3,3) =  c_q_leg_right_5_joint_;
    (*this)(3,4) = - s_q_leg_right_5_joint_;
    (*this)(4,3) =  s_q_leg_right_5_joint_;
    (*this)(4,4) =  c_q_leg_right_5_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_6_link_X_fr_leg_right_5_link::Type_fr_leg_right_6_link_X_fr_leg_right_5_link()
{
    (*this)(0,0) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,0) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 1;
    (*this)(2,1) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,3) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 1;
    (*this)(5,4) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_6_link_X_fr_leg_right_5_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_6_link_X_fr_leg_right_5_link::update(const JState& q) {
    Scalar s_q_leg_right_6_joint_;
    Scalar c_q_leg_right_6_joint_;
    
    s_q_leg_right_6_joint_ = TRAIT::sin( q(LEG_RIGHT_6_JOINT));
    c_q_leg_right_6_joint_ = TRAIT::cos( q(LEG_RIGHT_6_JOINT));
    
    (*this)(0,1) =  c_q_leg_right_6_joint_;
    (*this)(0,2) =  s_q_leg_right_6_joint_;
    (*this)(1,1) = - s_q_leg_right_6_joint_;
    (*this)(1,2) =  c_q_leg_right_6_joint_;
    (*this)(3,4) =  c_q_leg_right_6_joint_;
    (*this)(3,5) =  s_q_leg_right_6_joint_;
    (*this)(4,4) = - s_q_leg_right_6_joint_;
    (*this)(4,5) =  c_q_leg_right_6_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_leg_right_6_link::Type_fr_leg_right_5_link_X_fr_leg_right_6_link()
{
    (*this)(0,0) = 0;
    (*this)(0,1) = 0;
    (*this)(0,2) = 1;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 0;
    (*this)(3,4) = 0;
    (*this)(3,5) = 1;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_leg_right_6_link& iit::Talos::tpl::ForceTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_leg_right_6_link::update(const JState& q) {
    Scalar s_q_leg_right_6_joint_;
    Scalar c_q_leg_right_6_joint_;
    
    s_q_leg_right_6_joint_ = TRAIT::sin( q(LEG_RIGHT_6_JOINT));
    c_q_leg_right_6_joint_ = TRAIT::cos( q(LEG_RIGHT_6_JOINT));
    
    (*this)(1,0) =  c_q_leg_right_6_joint_;
    (*this)(1,1) = - s_q_leg_right_6_joint_;
    (*this)(2,0) =  s_q_leg_right_6_joint_;
    (*this)(2,1) =  c_q_leg_right_6_joint_;
    (*this)(4,3) =  c_q_leg_right_6_joint_;
    (*this)(4,4) = - s_q_leg_right_6_joint_;
    (*this)(5,3) =  s_q_leg_right_6_joint_;
    (*this)(5,4) =  c_q_leg_right_6_joint_;
    return *this;
}

template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_1_link::Type_fr_base_link_X_fr_leg_left_1_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = - 0.02;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0.085;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = - 0.27105;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_1_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_1_link::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar c_q_leg_left_1_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    
    (*this)(0,0) =  c_q_leg_left_1_joint_;
    (*this)(0,1) = - s_q_leg_left_1_joint_;
    (*this)(1,0) =  s_q_leg_left_1_joint_;
    (*this)(1,1) =  c_q_leg_left_1_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_1_link_X_fr_base_link::Type_fr_leg_left_1_link_X_fr_base_link()
{
    (*this)(0,2) = 0;
    (*this)(1,2) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.27105;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_1_link_X_fr_base_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_1_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar c_q_leg_left_1_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    
    (*this)(0,0) =  c_q_leg_left_1_joint_;
    (*this)(0,1) =  s_q_leg_left_1_joint_;
    (*this)(0,3) = (( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_));
    (*this)(1,0) = - s_q_leg_left_1_joint_;
    (*this)(1,1) =  c_q_leg_left_1_joint_;
    (*this)(1,3) = ((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_2_link::Type_fr_base_link_X_fr_leg_left_2_link()
{
    (*this)(0,3) = - 0.02;
    (*this)(1,3) = 0.085;
    (*this)(2,2) = 0;
    (*this)(2,3) = - 0.27105;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_2_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_2_link::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar c_q_leg_left_2_joint_;
    Scalar c_q_leg_left_1_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    
    (*this)(0,0) = (- s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(0,1) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(0,2) =  c_q_leg_left_1_joint_;
    (*this)(1,0) = ( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(1,1) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,2) =  s_q_leg_left_1_joint_;
    (*this)(2,0) = - c_q_leg_left_2_joint_;
    (*this)(2,1) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_base_link::Type_fr_leg_left_2_link_X_fr_base_link()
{
    (*this)(2,2) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_base_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = (- s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(0,1) = ( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(0,2) = - c_q_leg_left_2_joint_;
    (*this)(0,3) = ((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) - ( 0.27105 *  c_q_leg_left_2_joint_));
    (*this)(1,0) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,1) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,2) =  s_q_leg_left_2_joint_;
    (*this)(1,3) = (( 0.27105 *  s_q_leg_left_2_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_));
    (*this)(2,0) =  c_q_leg_left_1_joint_;
    (*this)(2,1) =  s_q_leg_left_1_joint_;
    (*this)(2,3) = (( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_3_link::Type_fr_base_link_X_fr_leg_left_3_link()
{
    (*this)(0,3) = - 0.02;
    (*this)(1,3) = 0.085;
    (*this)(2,3) = - 0.27105;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_3_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_3_link::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_3_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = (( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_));
    (*this)(0,1) = ((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(0,2) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,0) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_));
    (*this)(1,1) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_));
    (*this)(1,2) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,0) = (- c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_);
    (*this)(2,1) = (- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_);
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_base_link::Type_fr_leg_left_3_link_X_fr_base_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_base_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_3_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = (( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_));
    (*this)(0,1) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_));
    (*this)(0,2) = (- c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_);
    (*this)(0,3) = ((((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) - ( 0.27105 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + ((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_));
    (*this)(1,0) = ((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(1,1) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_));
    (*this)(1,2) = (- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_);
    (*this)(1,3) = (((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) - ( 0.27105 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_));
    (*this)(2,0) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,1) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(2,3) = (( 0.27105 *  s_q_leg_left_2_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_4_link::Type_fr_base_link_X_fr_leg_left_4_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_4_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_4_link::update(const JState& q) {
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(0,1) = ((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(0,2) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(0,3) = ((((- 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) -  0.02);
    (*this)(1,0) = ((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,1) = (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,2) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,3) = ((((- 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + ((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) +  0.085);
    (*this)(2,0) = (((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(2,1) = ((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(2,3) = (((- 0.38 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) -  0.27105);
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_base_link::Type_fr_leg_left_4_link_X_fr_base_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_base_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(0,1) = (((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(0,2) = (((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(0,3) = ((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) - ( 0.27105 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) -  0.38) *  s_q_leg_left_4_joint_) + (((((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) - ( 0.27105 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + ((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,0) = (((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,1) = (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,2) = ((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(1,3) = (((((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) + ( 0.27105 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) - ( 0.27105 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) -  0.38) *  c_q_leg_left_4_joint_));
    (*this)(2,0) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,1) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(2,3) = (( 0.27105 *  s_q_leg_left_2_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_5_link::Type_fr_base_link_X_fr_leg_left_5_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_5_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_5_link::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar s_q_leg_left_5_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_5_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    s_q_leg_left_5_joint_ = TRAIT::sin( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_5_joint_ = TRAIT::cos( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = ((((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,1) = (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,2) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(0,3) = ((((((((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) - ((( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) -  0.02);
    (*this)(1,0) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,1) = (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,2) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,3) = (((((((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) + ((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) +  0.085);
    (*this)(2,0) = ((((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,1) = ((((( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(2,3) = (((((( 0.325 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - ((( 0.325 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) -  0.27105);
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_base_link::Type_fr_leg_left_5_link_X_fr_base_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_base_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar s_q_leg_left_5_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_5_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    s_q_leg_left_5_joint_ = TRAIT::sin( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_5_joint_ = TRAIT::cos( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = (((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,1) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,2) = (((((( 1.0 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,3) = ((((((((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) + ( 0.27105 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) - ( 0.27105 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) -  0.38) *  c_q_leg_left_4_joint_)) -  0.325) *  s_q_leg_left_5_joint_) + (((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) - ( 0.27105 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) -  0.38) *  s_q_leg_left_4_joint_) + (((((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) - ( 0.27105 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + ((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,0) = ((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,1) = ((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,2) = (((((( 1.0 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((( 1.0 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,3) = ((((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) + ( 0.27105 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) +  0.38) *  s_q_leg_left_4_joint_) + ((((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) + ( 0.27105 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) + ( 0.27105 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) - ( 0.27105 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) -  0.38) *  c_q_leg_left_4_joint_)) -  0.325) *  c_q_leg_left_5_joint_));
    (*this)(2,0) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,1) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(2,3) = (( 0.27105 *  s_q_leg_left_2_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_6_link::Type_fr_base_link_X_fr_leg_left_6_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_6_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_6_link::update(const JState& q) {
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar s_q_leg_left_5_joint_;
    Scalar s_q_leg_left_6_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_5_joint_;
    Scalar c_q_leg_left_6_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    s_q_leg_left_5_joint_ = TRAIT::sin( q(LEG_LEFT_5_JOINT));
    s_q_leg_left_6_joint_ = TRAIT::sin( q(LEG_LEFT_6_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_5_joint_ = TRAIT::cos( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_6_joint_ = TRAIT::cos( q(LEG_LEFT_6_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = (((((((( c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_) - (( s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  s_q_leg_left_6_joint_));
    (*this)(0,1) = ((((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) - (( s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  c_q_leg_left_6_joint_));
    (*this)(0,2) = ((((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,3) = ((((((((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) - ((( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) -  0.02);
    (*this)(1,0) = ((( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  s_q_leg_left_6_joint_) + ((((((( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(1,1) = ((((((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + (( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  c_q_leg_left_6_joint_));
    (*this)(1,2) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,3) = (((((((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) + ((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) +  0.085);
    (*this)(2,0) = (( s_q_leg_left_2_joint_ *  s_q_leg_left_6_joint_) + (((((( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(2,1) = (((((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + ( s_q_leg_left_2_joint_ *  c_q_leg_left_6_joint_));
    (*this)(2,2) = ((((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,3) = (((((( 0.325 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - ((( 0.325 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) -  0.27105);
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_6_link_X_fr_base_link::Type_fr_leg_left_6_link_X_fr_base_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_6_link_X_fr_base_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_6_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar s_q_leg_left_5_joint_;
    Scalar s_q_leg_left_6_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_5_joint_;
    Scalar c_q_leg_left_6_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    s_q_leg_left_5_joint_ = TRAIT::sin( q(LEG_LEFT_5_JOINT));
    s_q_leg_left_6_joint_ = TRAIT::sin( q(LEG_LEFT_6_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_5_joint_ = TRAIT::cos( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_6_joint_ = TRAIT::cos( q(LEG_LEFT_6_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = ((((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_) - (( s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  s_q_leg_left_6_joint_));
    (*this)(0,1) = ((( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  s_q_leg_left_6_joint_) + (((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(0,2) = (( s_q_leg_left_2_joint_ *  s_q_leg_left_6_joint_) + ((((((( 1.0 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((( 1.0 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(0,3) = (((( 0.27105 *  s_q_leg_left_2_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_)) *  s_q_leg_left_6_joint_) + (((((((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) + ( 0.27105 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) +  0.38) *  s_q_leg_left_4_joint_) + ((((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) + ( 0.27105 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) + ( 0.27105 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) - ( 0.27105 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) -  0.38) *  c_q_leg_left_4_joint_)) -  0.325) *  c_q_leg_left_5_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(1,0) = ((((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) - (( s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  c_q_leg_left_6_joint_));
    (*this)(1,1) = (((((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + (( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_) *  c_q_leg_left_6_joint_));
    (*this)(1,2) = (((((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((( 1.0 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + ( s_q_leg_left_2_joint_ *  c_q_leg_left_6_joint_));
    (*this)(1,3) = ((((((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) - ( 0.27105 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) -  0.38) *  s_q_leg_left_4_joint_) + (((((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) - ( 0.27105 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + ((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) - ( 0.27105 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + ((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + ((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) + ( 0.27105 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) +  0.38) *  c_q_leg_left_4_joint_)) +  0.325) *  c_q_leg_left_5_joint_)) *  s_q_leg_left_6_joint_) + ((( 0.27105 *  s_q_leg_left_2_joint_) + (((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_2_joint_)) *  c_q_leg_left_6_joint_));
    (*this)(2,0) = (((((((( 1.0 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 1.0 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,1) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 1.0 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,2) = (((((( 1.0 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,3) = ((((((((((( 0.02 *  s_q_leg_left_1_joint_) + ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) + ( 0.27105 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + ((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) - ( 0.27105 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) -  0.38) *  c_q_leg_left_4_joint_)) -  0.325) *  s_q_leg_left_5_joint_) + (((((((( 0.085 *  s_q_leg_left_1_joint_) - ( 0.02 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_3_joint_) + (((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) - ( 0.27105 *  c_q_leg_left_2_joint_)) *  c_q_leg_left_3_joint_)) -  0.38) *  s_q_leg_left_4_joint_) + (((((((- 0.02 *  s_q_leg_left_1_joint_) - ( 0.085 *  c_q_leg_left_1_joint_)) *  s_q_leg_left_2_joint_) - ( 0.27105 *  c_q_leg_left_2_joint_)) *  s_q_leg_left_3_joint_) + ((( 0.02 *  c_q_leg_left_1_joint_) - ( 0.085 *  s_q_leg_left_1_joint_)) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_1_link::Type_fr_base_link_X_fr_leg_right_1_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = - 0.02;
    (*this)(1,2) = 0;
    (*this)(1,3) = - 0.085;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = - 0.27105;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_1_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_1_link::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar c_q_leg_right_1_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    
    (*this)(0,0) =  c_q_leg_right_1_joint_;
    (*this)(0,1) = - s_q_leg_right_1_joint_;
    (*this)(1,0) =  s_q_leg_right_1_joint_;
    (*this)(1,1) =  c_q_leg_right_1_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_1_link_X_fr_base_link::Type_fr_leg_right_1_link_X_fr_base_link()
{
    (*this)(0,2) = 0;
    (*this)(1,2) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.27105;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_1_link_X_fr_base_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_1_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar c_q_leg_right_1_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    
    (*this)(0,0) =  c_q_leg_right_1_joint_;
    (*this)(0,1) =  s_q_leg_right_1_joint_;
    (*this)(0,3) = (( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_));
    (*this)(1,0) = - s_q_leg_right_1_joint_;
    (*this)(1,1) =  c_q_leg_right_1_joint_;
    (*this)(1,3) = (( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_2_link::Type_fr_base_link_X_fr_leg_right_2_link()
{
    (*this)(0,3) = - 0.02;
    (*this)(1,3) = - 0.085;
    (*this)(2,2) = 0;
    (*this)(2,3) = - 0.27105;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_2_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_2_link::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar c_q_leg_right_2_joint_;
    Scalar c_q_leg_right_1_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    
    (*this)(0,0) = (- s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(0,1) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(0,2) =  c_q_leg_right_1_joint_;
    (*this)(1,0) = ( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(1,1) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,2) =  s_q_leg_right_1_joint_;
    (*this)(2,0) = - c_q_leg_right_2_joint_;
    (*this)(2,1) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_base_link::Type_fr_leg_right_2_link_X_fr_base_link()
{
    (*this)(2,2) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_base_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = (- s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(0,1) = ( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(0,2) = - c_q_leg_right_2_joint_;
    (*this)(0,3) = (((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) - ( 0.27105 *  c_q_leg_right_2_joint_));
    (*this)(1,0) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,1) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,2) =  s_q_leg_right_2_joint_;
    (*this)(1,3) = (( 0.27105 *  s_q_leg_right_2_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_));
    (*this)(2,0) =  c_q_leg_right_1_joint_;
    (*this)(2,1) =  s_q_leg_right_1_joint_;
    (*this)(2,3) = (( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_3_link::Type_fr_base_link_X_fr_leg_right_3_link()
{
    (*this)(0,3) = - 0.02;
    (*this)(1,3) = - 0.085;
    (*this)(2,3) = - 0.27105;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_3_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_3_link::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_3_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = (( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_));
    (*this)(0,1) = ((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(0,2) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,0) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_));
    (*this)(1,1) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_));
    (*this)(1,2) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,0) = (- c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_);
    (*this)(2,1) = (- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_);
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_base_link::Type_fr_leg_right_3_link_X_fr_base_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_base_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_3_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = (( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_));
    (*this)(0,1) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_));
    (*this)(0,2) = (- c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_);
    (*this)(0,3) = (((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) - ( 0.27105 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + ((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_));
    (*this)(1,0) = ((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(1,1) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_));
    (*this)(1,2) = (- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_);
    (*this)(1,3) = ((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) - ( 0.27105 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_));
    (*this)(2,0) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,1) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(2,3) = (( 0.27105 *  s_q_leg_right_2_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_4_link::Type_fr_base_link_X_fr_leg_right_4_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_4_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_4_link::update(const JState& q) {
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(0,1) = ((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(0,2) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(0,3) = ((((- 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) -  0.02);
    (*this)(1,0) = ((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,1) = (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,2) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,3) = ((((- 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + ((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) -  0.085);
    (*this)(2,0) = (((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(2,1) = ((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(2,3) = (((- 0.38 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) -  0.27105);
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_base_link::Type_fr_leg_right_4_link_X_fr_base_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_base_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(0,1) = (((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(0,2) = (((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(0,3) = (((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) - ( 0.27105 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) -  0.38) *  s_q_leg_right_4_joint_) + ((((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) - ( 0.27105 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + ((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,0) = (((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,1) = (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,2) = ((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(1,3) = (((((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) + ( 0.27105 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) - ( 0.27105 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) -  0.38) *  c_q_leg_right_4_joint_));
    (*this)(2,0) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,1) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(2,3) = (( 0.27105 *  s_q_leg_right_2_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_5_link::Type_fr_base_link_X_fr_leg_right_5_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_5_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_5_link::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar s_q_leg_right_5_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_5_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    s_q_leg_right_5_joint_ = TRAIT::sin( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_5_joint_ = TRAIT::cos( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = ((((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,1) = (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,2) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(0,3) = ((((((((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) - ((( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) -  0.02);
    (*this)(1,0) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,1) = (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,2) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,3) = (((((((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) + ((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) -  0.085);
    (*this)(2,0) = ((((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,1) = ((((( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(2,3) = (((((( 0.325 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - ((( 0.325 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) -  0.27105);
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_base_link::Type_fr_leg_right_5_link_X_fr_base_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_base_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar s_q_leg_right_5_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_5_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    s_q_leg_right_5_joint_ = TRAIT::sin( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_5_joint_ = TRAIT::cos( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = (((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,1) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,2) = (((((( 1.0 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,3) = ((((((((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) + ( 0.27105 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) - ( 0.27105 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) -  0.38) *  c_q_leg_right_4_joint_)) -  0.325) *  s_q_leg_right_5_joint_) + ((((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) - ( 0.27105 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) -  0.38) *  s_q_leg_right_4_joint_) + ((((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) - ( 0.27105 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + ((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,0) = ((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,1) = ((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,2) = (((((( 1.0 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((( 1.0 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,3) = ((((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) + ( 0.27105 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) +  0.38) *  s_q_leg_right_4_joint_) + ((((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) + ( 0.27105 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) + ( 0.27105 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) - ( 0.27105 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) -  0.38) *  c_q_leg_right_4_joint_)) -  0.325) *  c_q_leg_right_5_joint_));
    (*this)(2,0) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,1) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(2,3) = (( 0.27105 *  s_q_leg_right_2_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_6_link::Type_fr_base_link_X_fr_leg_right_6_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_6_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_6_link::update(const JState& q) {
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar s_q_leg_right_5_joint_;
    Scalar s_q_leg_right_6_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_5_joint_;
    Scalar c_q_leg_right_6_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    s_q_leg_right_5_joint_ = TRAIT::sin( q(LEG_RIGHT_5_JOINT));
    s_q_leg_right_6_joint_ = TRAIT::sin( q(LEG_RIGHT_6_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_5_joint_ = TRAIT::cos( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_6_joint_ = TRAIT::cos( q(LEG_RIGHT_6_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = (((((((( c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_) - (( s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  s_q_leg_right_6_joint_));
    (*this)(0,1) = ((((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) - (( s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  c_q_leg_right_6_joint_));
    (*this)(0,2) = ((((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,3) = ((((((((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) - ((( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) -  0.02);
    (*this)(1,0) = ((( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  s_q_leg_right_6_joint_) + ((((((( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(1,1) = ((((((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + (( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  c_q_leg_right_6_joint_));
    (*this)(1,2) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,3) = (((((((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) + ((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) -  0.085);
    (*this)(2,0) = (( s_q_leg_right_2_joint_ *  s_q_leg_right_6_joint_) + (((((( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(2,1) = (((((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + ( s_q_leg_right_2_joint_ *  c_q_leg_right_6_joint_));
    (*this)(2,2) = ((((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,3) = (((((( 0.325 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - ((( 0.325 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) -  0.27105);
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_6_link_X_fr_base_link::Type_fr_leg_right_6_link_X_fr_base_link()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_6_link_X_fr_base_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_6_link_X_fr_base_link::update(const JState& q) {
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar s_q_leg_right_5_joint_;
    Scalar s_q_leg_right_6_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_5_joint_;
    Scalar c_q_leg_right_6_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    s_q_leg_right_5_joint_ = TRAIT::sin( q(LEG_RIGHT_5_JOINT));
    s_q_leg_right_6_joint_ = TRAIT::sin( q(LEG_RIGHT_6_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_5_joint_ = TRAIT::cos( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_6_joint_ = TRAIT::cos( q(LEG_RIGHT_6_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = ((((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_) - (( s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  s_q_leg_right_6_joint_));
    (*this)(0,1) = ((( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  s_q_leg_right_6_joint_) + (((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(0,2) = (( s_q_leg_right_2_joint_ *  s_q_leg_right_6_joint_) + ((((((( 1.0 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((( 1.0 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(0,3) = (((( 0.27105 *  s_q_leg_right_2_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_)) *  s_q_leg_right_6_joint_) + (((((((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) + ( 0.27105 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) +  0.38) *  s_q_leg_right_4_joint_) + ((((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) + ( 0.27105 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) + ( 0.27105 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) - ( 0.27105 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) -  0.38) *  c_q_leg_right_4_joint_)) -  0.325) *  c_q_leg_right_5_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(1,0) = ((((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) - (( s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  c_q_leg_right_6_joint_));
    (*this)(1,1) = (((((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + (( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_) *  c_q_leg_right_6_joint_));
    (*this)(1,2) = (((((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((( 1.0 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + ( s_q_leg_right_2_joint_ *  c_q_leg_right_6_joint_));
    (*this)(1,3) = (((((((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) - ( 0.27105 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) -  0.38) *  s_q_leg_right_4_joint_) + ((((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) - ( 0.27105 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + ((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) - ( 0.27105 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + ((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) + ( 0.27105 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) +  0.38) *  c_q_leg_right_4_joint_)) +  0.325) *  c_q_leg_right_5_joint_)) *  s_q_leg_right_6_joint_) + ((( 0.27105 *  s_q_leg_right_2_joint_) + ((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  c_q_leg_right_2_joint_)) *  c_q_leg_right_6_joint_));
    (*this)(2,0) = (((((((( 1.0 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 1.0 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,1) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 1.0 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,2) = (((((( 1.0 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,3) = ((((((((((( 0.02 *  s_q_leg_right_1_joint_) - ( 0.085 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) + ( 0.27105 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + (((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) - ( 0.27105 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) -  0.38) *  c_q_leg_right_4_joint_)) -  0.325) *  s_q_leg_right_5_joint_) + ((((((((- 0.085 *  s_q_leg_right_1_joint_) - ( 0.02 *  c_q_leg_right_1_joint_)) *  s_q_leg_right_3_joint_) + ((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) - ( 0.27105 *  c_q_leg_right_2_joint_)) *  c_q_leg_right_3_joint_)) -  0.38) *  s_q_leg_right_4_joint_) + ((((((( 0.085 *  c_q_leg_right_1_joint_) - ( 0.02 *  s_q_leg_right_1_joint_)) *  s_q_leg_right_2_joint_) - ( 0.27105 *  c_q_leg_right_2_joint_)) *  s_q_leg_right_3_joint_) + ((( 0.085 *  s_q_leg_right_1_joint_) + ( 0.02 *  c_q_leg_right_1_joint_)) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_1_joint::Type_fr_base_link_X_fr_leg_left_1_joint()
{
    (*this)(0,0) = 1.0;
    (*this)(0,1) = 0;
    (*this)(0,2) = 0;
    (*this)(0,3) = - 0.02;
    (*this)(1,0) = 0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0.085;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = - 0.27105;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_1_joint& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_1_joint::update(const JState& q) {
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_2_joint::Type_fr_base_link_X_fr_leg_left_2_joint()
{
    (*this)(0,0) = 0;
    (*this)(0,3) = - 0.02;
    (*this)(1,0) = 0;
    (*this)(1,3) = 0.085;
    (*this)(2,0) = - 1.0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = - 0.27105;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_2_joint& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_2_joint::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar c_q_leg_left_1_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    
    (*this)(0,1) = - s_q_leg_left_1_joint_;
    (*this)(0,2) =  c_q_leg_left_1_joint_;
    (*this)(1,1) =  c_q_leg_left_1_joint_;
    (*this)(1,2) =  s_q_leg_left_1_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_3_joint::Type_fr_base_link_X_fr_leg_left_3_joint()
{
    (*this)(0,3) = - 0.02;
    (*this)(1,3) = 0.085;
    (*this)(2,0) = 0;
    (*this)(2,3) = - 0.27105;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_3_joint& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_3_joint::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) =  c_q_leg_left_1_joint_;
    (*this)(0,1) = (- s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(0,2) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,0) =  s_q_leg_left_1_joint_;
    (*this)(1,1) = ( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_);
    (*this)(1,2) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(2,1) = - c_q_leg_left_2_joint_;
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_4_joint::Type_fr_base_link_X_fr_leg_left_4_joint()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_4_joint& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_4_joint::update(const JState& q) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_3_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = (( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_));
    (*this)(0,1) = ((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(0,2) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(0,3) = ((((- 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) -  0.02);
    (*this)(1,0) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_));
    (*this)(1,1) = ((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_));
    (*this)(1,2) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,3) = ((((- 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + ((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) +  0.085);
    (*this)(2,0) = (- c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_);
    (*this)(2,1) = (- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_);
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(2,3) = (((- 0.38 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) -  0.27105);
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_5_joint::Type_fr_base_link_X_fr_leg_left_5_joint()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_5_joint& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_5_joint::update(const JState& q) {
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(0,1) = ((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(0,2) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(0,3) = ((((((((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) - ((( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) -  0.02);
    (*this)(1,0) = ((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,1) = (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(1,2) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,3) = (((((((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) + ((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) +  0.085);
    (*this)(2,0) = (((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(2,1) = ((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(2,3) = (((((( 0.325 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - ((( 0.325 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) -  0.27105);
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_6_joint::Type_fr_base_link_X_fr_leg_left_6_joint()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_6_joint& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_left_6_joint::update(const JState& q) {
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar s_q_leg_left_5_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_5_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    s_q_leg_left_1_joint_ = TRAIT::sin( q(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    s_q_leg_left_5_joint_ = TRAIT::sin( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( q(LEG_LEFT_1_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_5_joint_ = TRAIT::cos( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,0) = (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) + (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,1) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(0,2) = ((((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(0,3) = ((((((((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) - ((( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) -  0.02);
    (*this)(1,0) = (((((( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,1) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,2) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,3) = (((((((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) + ((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) +  0.085);
    (*this)(2,0) = ((((( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,1) =  s_q_leg_left_2_joint_;
    (*this)(2,2) = ((((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,3) = (((((( 0.325 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - ((( 0.325 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) -  0.27105);
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_1_joint::Type_fr_base_link_X_fr_leg_right_1_joint()
{
    (*this)(0,0) = 1.0;
    (*this)(0,1) = 0;
    (*this)(0,2) = 0;
    (*this)(0,3) = - 0.02;
    (*this)(1,0) = 0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0;
    (*this)(1,3) = - 0.085;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = - 0.27105;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_1_joint& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_1_joint::update(const JState& q) {
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_2_joint::Type_fr_base_link_X_fr_leg_right_2_joint()
{
    (*this)(0,0) = 0;
    (*this)(0,3) = - 0.02;
    (*this)(1,0) = 0;
    (*this)(1,3) = - 0.085;
    (*this)(2,0) = - 1.0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = - 0.27105;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_2_joint& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_2_joint::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar c_q_leg_right_1_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    
    (*this)(0,1) = - s_q_leg_right_1_joint_;
    (*this)(0,2) =  c_q_leg_right_1_joint_;
    (*this)(1,1) =  c_q_leg_right_1_joint_;
    (*this)(1,2) =  s_q_leg_right_1_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_3_joint::Type_fr_base_link_X_fr_leg_right_3_joint()
{
    (*this)(0,3) = - 0.02;
    (*this)(1,3) = - 0.085;
    (*this)(2,0) = 0;
    (*this)(2,3) = - 0.27105;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_3_joint& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_3_joint::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) =  c_q_leg_right_1_joint_;
    (*this)(0,1) = (- s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(0,2) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,0) =  s_q_leg_right_1_joint_;
    (*this)(1,1) = ( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_);
    (*this)(1,2) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(2,1) = - c_q_leg_right_2_joint_;
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_4_joint::Type_fr_base_link_X_fr_leg_right_4_joint()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_4_joint& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_4_joint::update(const JState& q) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_3_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = (( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_));
    (*this)(0,1) = ((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(0,2) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(0,3) = ((((- 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) -  0.02);
    (*this)(1,0) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_));
    (*this)(1,1) = ((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_));
    (*this)(1,2) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,3) = ((((- 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + ((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) -  0.085);
    (*this)(2,0) = (- c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_);
    (*this)(2,1) = (- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_);
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(2,3) = (((- 0.38 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) -  0.27105);
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_5_joint::Type_fr_base_link_X_fr_leg_right_5_joint()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_5_joint& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_5_joint::update(const JState& q) {
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(0,1) = ((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(0,2) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(0,3) = ((((((((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) - ((( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) -  0.02);
    (*this)(1,0) = ((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,1) = (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(1,2) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,3) = (((((((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) + ((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) -  0.085);
    (*this)(2,0) = (((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(2,1) = ((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(2,3) = (((((( 0.325 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - ((( 0.325 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) -  0.27105);
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_6_joint::Type_fr_base_link_X_fr_leg_right_6_joint()
{
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_6_joint& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_base_link_X_fr_leg_right_6_joint::update(const JState& q) {
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar s_q_leg_right_5_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_5_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    s_q_leg_right_1_joint_ = TRAIT::sin( q(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    s_q_leg_right_5_joint_ = TRAIT::sin( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( q(LEG_RIGHT_1_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_5_joint_ = TRAIT::cos( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,0) = (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) + (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,1) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(0,2) = ((((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(0,3) = ((((((((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) - ((( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) -  0.02);
    (*this)(1,0) = (((((( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,1) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,2) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,3) = (((((((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) + ((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) -  0.085);
    (*this)(2,0) = ((((( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,1) =  s_q_leg_right_2_joint_;
    (*this)(2,2) = ((((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,3) = (((((( 0.325 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - ((( 0.325 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) -  0.27105);
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_leg_left_1_link::Type_fr_leg_left_2_link_X_fr_leg_left_1_link()
{
    (*this)(0,0) = 0;
    (*this)(0,3) = 0;
    (*this)(1,0) = 0;
    (*this)(1,3) = 0;
    (*this)(2,0) = 1;
    (*this)(2,1) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_leg_left_1_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_leg_left_1_link::update(const JState& q) {
    Scalar s_q_leg_left_2_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(0,1) =  s_q_leg_left_2_joint_;
    (*this)(0,2) = - c_q_leg_left_2_joint_;
    (*this)(1,1) =  c_q_leg_left_2_joint_;
    (*this)(1,2) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_1_link_X_fr_leg_left_2_link::Type_fr_leg_left_1_link_X_fr_leg_left_2_link()
{
    (*this)(0,0) = 0;
    (*this)(0,1) = 0;
    (*this)(0,2) = 1;
    (*this)(0,3) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_1_link_X_fr_leg_left_2_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_1_link_X_fr_leg_left_2_link::update(const JState& q) {
    Scalar s_q_leg_left_2_joint_;
    Scalar c_q_leg_left_2_joint_;
    
    s_q_leg_left_2_joint_ = TRAIT::sin( q(LEG_LEFT_2_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( q(LEG_LEFT_2_JOINT));
    
    (*this)(1,0) =  s_q_leg_left_2_joint_;
    (*this)(1,1) =  c_q_leg_left_2_joint_;
    (*this)(2,0) = - c_q_leg_left_2_joint_;
    (*this)(2,1) =  s_q_leg_left_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_leg_left_2_link::Type_fr_leg_left_3_link_X_fr_leg_left_2_link()
{
    (*this)(0,1) = 0;
    (*this)(0,3) = 0;
    (*this)(1,1) = 0;
    (*this)(1,3) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 1;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_leg_left_2_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_leg_left_2_link::update(const JState& q) {
    Scalar s_q_leg_left_3_joint_;
    Scalar c_q_leg_left_3_joint_;
    
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    
    (*this)(0,0) =  s_q_leg_left_3_joint_;
    (*this)(0,2) =  c_q_leg_left_3_joint_;
    (*this)(1,0) =  c_q_leg_left_3_joint_;
    (*this)(1,2) = - s_q_leg_left_3_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_leg_left_3_link::Type_fr_leg_left_2_link_X_fr_leg_left_3_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(1,0) = 0;
    (*this)(1,1) = 0;
    (*this)(1,2) = 1;
    (*this)(1,3) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_leg_left_3_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_2_link_X_fr_leg_left_3_link::update(const JState& q) {
    Scalar s_q_leg_left_3_joint_;
    Scalar c_q_leg_left_3_joint_;
    
    s_q_leg_left_3_joint_ = TRAIT::sin( q(LEG_LEFT_3_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( q(LEG_LEFT_3_JOINT));
    
    (*this)(0,0) =  s_q_leg_left_3_joint_;
    (*this)(0,1) =  c_q_leg_left_3_joint_;
    (*this)(2,0) =  c_q_leg_left_3_joint_;
    (*this)(2,1) = - s_q_leg_left_3_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_leg_left_3_link::Type_fr_leg_left_4_link_X_fr_leg_left_3_link()
{
    (*this)(0,2) = 0;
    (*this)(1,2) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_leg_left_3_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_leg_left_3_link::update(const JState& q) {
    Scalar s_q_leg_left_4_joint_;
    Scalar c_q_leg_left_4_joint_;
    
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    
    (*this)(0,0) =  c_q_leg_left_4_joint_;
    (*this)(0,1) =  s_q_leg_left_4_joint_;
    (*this)(0,3) = (- 0.38 *  s_q_leg_left_4_joint_);
    (*this)(1,0) = - s_q_leg_left_4_joint_;
    (*this)(1,1) =  c_q_leg_left_4_joint_;
    (*this)(1,3) = (- 0.38 *  c_q_leg_left_4_joint_);
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_leg_left_4_link::Type_fr_leg_left_3_link_X_fr_leg_left_4_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0.38;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_leg_left_4_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_3_link_X_fr_leg_left_4_link::update(const JState& q) {
    Scalar s_q_leg_left_4_joint_;
    Scalar c_q_leg_left_4_joint_;
    
    s_q_leg_left_4_joint_ = TRAIT::sin( q(LEG_LEFT_4_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( q(LEG_LEFT_4_JOINT));
    
    (*this)(0,0) =  c_q_leg_left_4_joint_;
    (*this)(0,1) = - s_q_leg_left_4_joint_;
    (*this)(1,0) =  s_q_leg_left_4_joint_;
    (*this)(1,1) =  c_q_leg_left_4_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_leg_left_4_link::Type_fr_leg_left_5_link_X_fr_leg_left_4_link()
{
    (*this)(0,2) = 0;
    (*this)(1,2) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_leg_left_4_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_leg_left_4_link::update(const JState& q) {
    Scalar s_q_leg_left_5_joint_;
    Scalar c_q_leg_left_5_joint_;
    
    s_q_leg_left_5_joint_ = TRAIT::sin( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_5_joint_ = TRAIT::cos( q(LEG_LEFT_5_JOINT));
    
    (*this)(0,0) =  c_q_leg_left_5_joint_;
    (*this)(0,1) =  s_q_leg_left_5_joint_;
    (*this)(0,3) = (- 0.325 *  s_q_leg_left_5_joint_);
    (*this)(1,0) = - s_q_leg_left_5_joint_;
    (*this)(1,1) =  c_q_leg_left_5_joint_;
    (*this)(1,3) = (- 0.325 *  c_q_leg_left_5_joint_);
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_leg_left_5_link::Type_fr_leg_left_4_link_X_fr_leg_left_5_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0.325;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_leg_left_5_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_4_link_X_fr_leg_left_5_link::update(const JState& q) {
    Scalar s_q_leg_left_5_joint_;
    Scalar c_q_leg_left_5_joint_;
    
    s_q_leg_left_5_joint_ = TRAIT::sin( q(LEG_LEFT_5_JOINT));
    c_q_leg_left_5_joint_ = TRAIT::cos( q(LEG_LEFT_5_JOINT));
    
    (*this)(0,0) =  c_q_leg_left_5_joint_;
    (*this)(0,1) = - s_q_leg_left_5_joint_;
    (*this)(1,0) =  s_q_leg_left_5_joint_;
    (*this)(1,1) =  c_q_leg_left_5_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_6_link_X_fr_leg_left_5_link::Type_fr_leg_left_6_link_X_fr_leg_left_5_link()
{
    (*this)(0,0) = 0;
    (*this)(0,3) = 0;
    (*this)(1,0) = 0;
    (*this)(1,3) = 0;
    (*this)(2,0) = 1;
    (*this)(2,1) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_6_link_X_fr_leg_left_5_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_6_link_X_fr_leg_left_5_link::update(const JState& q) {
    Scalar s_q_leg_left_6_joint_;
    Scalar c_q_leg_left_6_joint_;
    
    s_q_leg_left_6_joint_ = TRAIT::sin( q(LEG_LEFT_6_JOINT));
    c_q_leg_left_6_joint_ = TRAIT::cos( q(LEG_LEFT_6_JOINT));
    
    (*this)(0,1) =  c_q_leg_left_6_joint_;
    (*this)(0,2) =  s_q_leg_left_6_joint_;
    (*this)(1,1) = - s_q_leg_left_6_joint_;
    (*this)(1,2) =  c_q_leg_left_6_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_leg_left_6_link::Type_fr_leg_left_5_link_X_fr_leg_left_6_link()
{
    (*this)(0,0) = 0;
    (*this)(0,1) = 0;
    (*this)(0,2) = 1;
    (*this)(0,3) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_leg_left_6_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_left_5_link_X_fr_leg_left_6_link::update(const JState& q) {
    Scalar s_q_leg_left_6_joint_;
    Scalar c_q_leg_left_6_joint_;
    
    s_q_leg_left_6_joint_ = TRAIT::sin( q(LEG_LEFT_6_JOINT));
    c_q_leg_left_6_joint_ = TRAIT::cos( q(LEG_LEFT_6_JOINT));
    
    (*this)(1,0) =  c_q_leg_left_6_joint_;
    (*this)(1,1) = - s_q_leg_left_6_joint_;
    (*this)(2,0) =  s_q_leg_left_6_joint_;
    (*this)(2,1) =  c_q_leg_left_6_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_leg_right_1_link::Type_fr_leg_right_2_link_X_fr_leg_right_1_link()
{
    (*this)(0,0) = 0;
    (*this)(0,3) = 0;
    (*this)(1,0) = 0;
    (*this)(1,3) = 0;
    (*this)(2,0) = 1;
    (*this)(2,1) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_leg_right_1_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_leg_right_1_link::update(const JState& q) {
    Scalar s_q_leg_right_2_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(0,1) =  s_q_leg_right_2_joint_;
    (*this)(0,2) = - c_q_leg_right_2_joint_;
    (*this)(1,1) =  c_q_leg_right_2_joint_;
    (*this)(1,2) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_1_link_X_fr_leg_right_2_link::Type_fr_leg_right_1_link_X_fr_leg_right_2_link()
{
    (*this)(0,0) = 0;
    (*this)(0,1) = 0;
    (*this)(0,2) = 1;
    (*this)(0,3) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_1_link_X_fr_leg_right_2_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_1_link_X_fr_leg_right_2_link::update(const JState& q) {
    Scalar s_q_leg_right_2_joint_;
    Scalar c_q_leg_right_2_joint_;
    
    s_q_leg_right_2_joint_ = TRAIT::sin( q(LEG_RIGHT_2_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( q(LEG_RIGHT_2_JOINT));
    
    (*this)(1,0) =  s_q_leg_right_2_joint_;
    (*this)(1,1) =  c_q_leg_right_2_joint_;
    (*this)(2,0) = - c_q_leg_right_2_joint_;
    (*this)(2,1) =  s_q_leg_right_2_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_leg_right_2_link::Type_fr_leg_right_3_link_X_fr_leg_right_2_link()
{
    (*this)(0,1) = 0;
    (*this)(0,3) = 0;
    (*this)(1,1) = 0;
    (*this)(1,3) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 1;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_leg_right_2_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_leg_right_2_link::update(const JState& q) {
    Scalar s_q_leg_right_3_joint_;
    Scalar c_q_leg_right_3_joint_;
    
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    
    (*this)(0,0) =  s_q_leg_right_3_joint_;
    (*this)(0,2) =  c_q_leg_right_3_joint_;
    (*this)(1,0) =  c_q_leg_right_3_joint_;
    (*this)(1,2) = - s_q_leg_right_3_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_leg_right_3_link::Type_fr_leg_right_2_link_X_fr_leg_right_3_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(1,0) = 0;
    (*this)(1,1) = 0;
    (*this)(1,2) = 1;
    (*this)(1,3) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_leg_right_3_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_2_link_X_fr_leg_right_3_link::update(const JState& q) {
    Scalar s_q_leg_right_3_joint_;
    Scalar c_q_leg_right_3_joint_;
    
    s_q_leg_right_3_joint_ = TRAIT::sin( q(LEG_RIGHT_3_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( q(LEG_RIGHT_3_JOINT));
    
    (*this)(0,0) =  s_q_leg_right_3_joint_;
    (*this)(0,1) =  c_q_leg_right_3_joint_;
    (*this)(2,0) =  c_q_leg_right_3_joint_;
    (*this)(2,1) = - s_q_leg_right_3_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_leg_right_3_link::Type_fr_leg_right_4_link_X_fr_leg_right_3_link()
{
    (*this)(0,2) = 0;
    (*this)(1,2) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_leg_right_3_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_leg_right_3_link::update(const JState& q) {
    Scalar s_q_leg_right_4_joint_;
    Scalar c_q_leg_right_4_joint_;
    
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    
    (*this)(0,0) =  c_q_leg_right_4_joint_;
    (*this)(0,1) =  s_q_leg_right_4_joint_;
    (*this)(0,3) = (- 0.38 *  s_q_leg_right_4_joint_);
    (*this)(1,0) = - s_q_leg_right_4_joint_;
    (*this)(1,1) =  c_q_leg_right_4_joint_;
    (*this)(1,3) = (- 0.38 *  c_q_leg_right_4_joint_);
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_leg_right_4_link::Type_fr_leg_right_3_link_X_fr_leg_right_4_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0.38;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_leg_right_4_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_3_link_X_fr_leg_right_4_link::update(const JState& q) {
    Scalar s_q_leg_right_4_joint_;
    Scalar c_q_leg_right_4_joint_;
    
    s_q_leg_right_4_joint_ = TRAIT::sin( q(LEG_RIGHT_4_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( q(LEG_RIGHT_4_JOINT));
    
    (*this)(0,0) =  c_q_leg_right_4_joint_;
    (*this)(0,1) = - s_q_leg_right_4_joint_;
    (*this)(1,0) =  s_q_leg_right_4_joint_;
    (*this)(1,1) =  c_q_leg_right_4_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_leg_right_4_link::Type_fr_leg_right_5_link_X_fr_leg_right_4_link()
{
    (*this)(0,2) = 0;
    (*this)(1,2) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_leg_right_4_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_leg_right_4_link::update(const JState& q) {
    Scalar s_q_leg_right_5_joint_;
    Scalar c_q_leg_right_5_joint_;
    
    s_q_leg_right_5_joint_ = TRAIT::sin( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_5_joint_ = TRAIT::cos( q(LEG_RIGHT_5_JOINT));
    
    (*this)(0,0) =  c_q_leg_right_5_joint_;
    (*this)(0,1) =  s_q_leg_right_5_joint_;
    (*this)(0,3) = (- 0.325 *  s_q_leg_right_5_joint_);
    (*this)(1,0) = - s_q_leg_right_5_joint_;
    (*this)(1,1) =  c_q_leg_right_5_joint_;
    (*this)(1,3) = (- 0.325 *  c_q_leg_right_5_joint_);
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_leg_right_5_link::Type_fr_leg_right_4_link_X_fr_leg_right_5_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0.325;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_leg_right_5_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_4_link_X_fr_leg_right_5_link::update(const JState& q) {
    Scalar s_q_leg_right_5_joint_;
    Scalar c_q_leg_right_5_joint_;
    
    s_q_leg_right_5_joint_ = TRAIT::sin( q(LEG_RIGHT_5_JOINT));
    c_q_leg_right_5_joint_ = TRAIT::cos( q(LEG_RIGHT_5_JOINT));
    
    (*this)(0,0) =  c_q_leg_right_5_joint_;
    (*this)(0,1) = - s_q_leg_right_5_joint_;
    (*this)(1,0) =  s_q_leg_right_5_joint_;
    (*this)(1,1) =  c_q_leg_right_5_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_6_link_X_fr_leg_right_5_link::Type_fr_leg_right_6_link_X_fr_leg_right_5_link()
{
    (*this)(0,0) = 0;
    (*this)(0,3) = 0;
    (*this)(1,0) = 0;
    (*this)(1,3) = 0;
    (*this)(2,0) = 1;
    (*this)(2,1) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_6_link_X_fr_leg_right_5_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_6_link_X_fr_leg_right_5_link::update(const JState& q) {
    Scalar s_q_leg_right_6_joint_;
    Scalar c_q_leg_right_6_joint_;
    
    s_q_leg_right_6_joint_ = TRAIT::sin( q(LEG_RIGHT_6_JOINT));
    c_q_leg_right_6_joint_ = TRAIT::cos( q(LEG_RIGHT_6_JOINT));
    
    (*this)(0,1) =  c_q_leg_right_6_joint_;
    (*this)(0,2) =  s_q_leg_right_6_joint_;
    (*this)(1,1) = - s_q_leg_right_6_joint_;
    (*this)(1,2) =  c_q_leg_right_6_joint_;
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_leg_right_6_link::Type_fr_leg_right_5_link_X_fr_leg_right_6_link()
{
    (*this)(0,0) = 0;
    (*this)(0,1) = 0;
    (*this)(0,2) = 1;
    (*this)(0,3) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1;
}
template <typename TRAIT>
const typename iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_leg_right_6_link& iit::Talos::tpl::HomogeneousTransforms<TRAIT>::Type_fr_leg_right_5_link_X_fr_leg_right_6_link::update(const JState& q) {
    Scalar s_q_leg_right_6_joint_;
    Scalar c_q_leg_right_6_joint_;
    
    s_q_leg_right_6_joint_ = TRAIT::sin( q(LEG_RIGHT_6_JOINT));
    c_q_leg_right_6_joint_ = TRAIT::cos( q(LEG_RIGHT_6_JOINT));
    
    (*this)(1,0) =  c_q_leg_right_6_joint_;
    (*this)(1,1) = - s_q_leg_right_6_joint_;
    (*this)(2,0) =  s_q_leg_right_6_joint_;
    (*this)(2,1) =  c_q_leg_right_6_joint_;
    return *this;
}

