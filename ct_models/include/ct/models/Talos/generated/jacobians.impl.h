
template <typename TRAIT>
iit::Talos::tpl::Jacobians<TRAIT>::Jacobians
    ()
     : 
    fr_base_link_J_fr_leg_left_6_link(), 
    fr_base_link_J_fr_leg_right_6_link()
{
    updateParameters();
}

template <typename TRAIT>
void iit::Talos::tpl::Jacobians<TRAIT>::updateParameters() {
}


template <typename TRAIT>
iit::Talos::tpl::Jacobians<TRAIT>::Type_fr_base_link_J_fr_leg_left_6_link::Type_fr_base_link_J_fr_leg_left_6_link()
{
    (*this)(0,0) = 0;
    (*this)(1,0) = 0;
    (*this)(2,0) = 1.0;
    (*this)(2,1) = 0;
    (*this)(3,4) = 0;
    (*this)(3,5) = 0;
    (*this)(4,4) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 0;
}

template <typename TRAIT>
const typename iit::Talos::tpl::Jacobians<TRAIT>::Type_fr_base_link_J_fr_leg_left_6_link& iit::Talos::tpl::Jacobians<TRAIT>::Type_fr_base_link_J_fr_leg_left_6_link::update(const JState& jState) {
    Scalar s_q_leg_left_1_joint_;
    Scalar s_q_leg_left_2_joint_;
    Scalar s_q_leg_left_3_joint_;
    Scalar s_q_leg_left_4_joint_;
    Scalar s_q_leg_left_5_joint_;
    Scalar c_q_leg_left_1_joint_;
    Scalar c_q_leg_left_2_joint_;
    Scalar c_q_leg_left_3_joint_;
    Scalar c_q_leg_left_4_joint_;
    Scalar c_q_leg_left_5_joint_;
    
    s_q_leg_left_1_joint_ = TRAIT::sin( jState(LEG_LEFT_1_JOINT));
    s_q_leg_left_2_joint_ = TRAIT::sin( jState(LEG_LEFT_2_JOINT));
    s_q_leg_left_3_joint_ = TRAIT::sin( jState(LEG_LEFT_3_JOINT));
    s_q_leg_left_4_joint_ = TRAIT::sin( jState(LEG_LEFT_4_JOINT));
    s_q_leg_left_5_joint_ = TRAIT::sin( jState(LEG_LEFT_5_JOINT));
    c_q_leg_left_1_joint_ = TRAIT::cos( jState(LEG_LEFT_1_JOINT));
    c_q_leg_left_2_joint_ = TRAIT::cos( jState(LEG_LEFT_2_JOINT));
    c_q_leg_left_3_joint_ = TRAIT::cos( jState(LEG_LEFT_3_JOINT));
    c_q_leg_left_4_joint_ = TRAIT::cos( jState(LEG_LEFT_4_JOINT));
    c_q_leg_left_5_joint_ = TRAIT::cos( jState(LEG_LEFT_5_JOINT));
    
    (*this)(0,1) =  c_q_leg_left_1_joint_;
    (*this)(0,2) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(0,3) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(0,4) = (- s_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(0,5) = ((((((( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((- c_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((( c_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_) - (( s_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(1,1) =  s_q_leg_left_1_joint_;
    (*this)(1,2) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,3) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,4) = ( c_q_leg_left_1_joint_ *  c_q_leg_left_2_joint_);
    (*this)(1,5) = (((((((- c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + (((((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) - ( s_q_leg_left_1_joint_ *  s_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( c_q_leg_left_1_joint_ *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + ( s_q_leg_left_1_joint_ *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(2,2) =  s_q_leg_left_2_joint_;
    (*this)(2,3) =  s_q_leg_left_2_joint_;
    (*this)(2,4) =  s_q_leg_left_2_joint_;
    (*this)(2,5) = ((((( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  s_q_leg_left_5_joint_) + ((((- c_q_leg_left_2_joint_ *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (( c_q_leg_left_2_joint_ *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) *  c_q_leg_left_5_joint_));
    (*this)(3,0) = (((((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) + (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) + (( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) - ((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(3,1) = (((((( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) - (((( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) - ((( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(3,2) = ((((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) + ((( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_));
    (*this)(3,3) = ((((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) + ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(4,0) = (((((((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - (( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + ((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - (( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_)) - ((( 0.38 *  s_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(4,1) = ((((((- 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + (((( 0.325 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) + ((( 0.38 *  c_q_leg_left_1_joint_) *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(4,2) = ((((((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_)) - ((( 0.38 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_)) - (( 0.38 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_));
    (*this)(4,3) = ((((( 0.325 *  s_q_leg_left_1_joint_) *  s_q_leg_left_3_joint_) - ((( 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_)) *  s_q_leg_left_4_joint_) + (((((- 0.325 *  c_q_leg_left_1_joint_) *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) - (( 0.325 *  s_q_leg_left_1_joint_) *  c_q_leg_left_3_joint_)) *  c_q_leg_left_4_joint_));
    (*this)(5,1) = (((((- 0.325 *  s_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + ((( 0.325 *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) + (( 0.38 *  s_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_));
    (*this)(5,2) = ((((( 0.325 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + ((( 0.325 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_)) + (( 0.38 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_));
    (*this)(5,3) = (((( 0.325 *  c_q_leg_left_2_joint_) *  c_q_leg_left_3_joint_) *  s_q_leg_left_4_joint_) + ((( 0.325 *  c_q_leg_left_2_joint_) *  s_q_leg_left_3_joint_) *  c_q_leg_left_4_joint_));
    return *this;
}
template <typename TRAIT>
iit::Talos::tpl::Jacobians<TRAIT>::Type_fr_base_link_J_fr_leg_right_6_link::Type_fr_base_link_J_fr_leg_right_6_link()
{
    (*this)(0,0) = 0;
    (*this)(1,0) = 0;
    (*this)(2,0) = 1.0;
    (*this)(2,1) = 0;
    (*this)(3,4) = 0;
    (*this)(3,5) = 0;
    (*this)(4,4) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 0;
}

template <typename TRAIT>
const typename iit::Talos::tpl::Jacobians<TRAIT>::Type_fr_base_link_J_fr_leg_right_6_link& iit::Talos::tpl::Jacobians<TRAIT>::Type_fr_base_link_J_fr_leg_right_6_link::update(const JState& jState) {
    Scalar s_q_leg_right_1_joint_;
    Scalar s_q_leg_right_2_joint_;
    Scalar s_q_leg_right_3_joint_;
    Scalar s_q_leg_right_4_joint_;
    Scalar s_q_leg_right_5_joint_;
    Scalar c_q_leg_right_1_joint_;
    Scalar c_q_leg_right_2_joint_;
    Scalar c_q_leg_right_3_joint_;
    Scalar c_q_leg_right_4_joint_;
    Scalar c_q_leg_right_5_joint_;
    
    s_q_leg_right_1_joint_ = TRAIT::sin( jState(LEG_RIGHT_1_JOINT));
    s_q_leg_right_2_joint_ = TRAIT::sin( jState(LEG_RIGHT_2_JOINT));
    s_q_leg_right_3_joint_ = TRAIT::sin( jState(LEG_RIGHT_3_JOINT));
    s_q_leg_right_4_joint_ = TRAIT::sin( jState(LEG_RIGHT_4_JOINT));
    s_q_leg_right_5_joint_ = TRAIT::sin( jState(LEG_RIGHT_5_JOINT));
    c_q_leg_right_1_joint_ = TRAIT::cos( jState(LEG_RIGHT_1_JOINT));
    c_q_leg_right_2_joint_ = TRAIT::cos( jState(LEG_RIGHT_2_JOINT));
    c_q_leg_right_3_joint_ = TRAIT::cos( jState(LEG_RIGHT_3_JOINT));
    c_q_leg_right_4_joint_ = TRAIT::cos( jState(LEG_RIGHT_4_JOINT));
    c_q_leg_right_5_joint_ = TRAIT::cos( jState(LEG_RIGHT_5_JOINT));
    
    (*this)(0,1) =  c_q_leg_right_1_joint_;
    (*this)(0,2) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(0,3) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(0,4) = (- s_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(0,5) = ((((((( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((- c_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((( c_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_) - (( s_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(1,1) =  s_q_leg_right_1_joint_;
    (*this)(1,2) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,3) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,4) = ( c_q_leg_right_1_joint_ *  c_q_leg_right_2_joint_);
    (*this)(1,5) = (((((((- c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + (((((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) - ( s_q_leg_right_1_joint_ *  s_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( c_q_leg_right_1_joint_ *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + ( s_q_leg_right_1_joint_ *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(2,2) =  s_q_leg_right_2_joint_;
    (*this)(2,3) =  s_q_leg_right_2_joint_;
    (*this)(2,4) =  s_q_leg_right_2_joint_;
    (*this)(2,5) = ((((( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  s_q_leg_right_5_joint_) + ((((- c_q_leg_right_2_joint_ *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (( c_q_leg_right_2_joint_ *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) *  c_q_leg_right_5_joint_));
    (*this)(3,0) = (((((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) + (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) + (( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) - ((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(3,1) = (((((( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) - (((( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) - ((( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(3,2) = ((((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) + ((( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_));
    (*this)(3,3) = ((((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) + ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(4,0) = (((((((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - (( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + ((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - (( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_)) - ((( 0.38 *  s_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(4,1) = ((((((- 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + (((( 0.325 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) + ((( 0.38 *  c_q_leg_right_1_joint_) *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(4,2) = ((((((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_)) - ((( 0.38 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_)) - (( 0.38 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_));
    (*this)(4,3) = ((((( 0.325 *  s_q_leg_right_1_joint_) *  s_q_leg_right_3_joint_) - ((( 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_)) *  s_q_leg_right_4_joint_) + (((((- 0.325 *  c_q_leg_right_1_joint_) *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) - (( 0.325 *  s_q_leg_right_1_joint_) *  c_q_leg_right_3_joint_)) *  c_q_leg_right_4_joint_));
    (*this)(5,1) = (((((- 0.325 *  s_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + ((( 0.325 *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) + (( 0.38 *  s_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_));
    (*this)(5,2) = ((((( 0.325 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + ((( 0.325 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_)) + (( 0.38 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_));
    (*this)(5,3) = (((( 0.325 *  c_q_leg_right_2_joint_) *  c_q_leg_right_3_joint_) *  s_q_leg_right_4_joint_) + ((( 0.325 *  c_q_leg_right_2_joint_) *  s_q_leg_right_3_joint_) *  c_q_leg_right_4_joint_));
    return *this;
}
