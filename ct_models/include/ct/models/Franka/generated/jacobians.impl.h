
template <typename TRAIT>
iit::Franka::tpl::Jacobians<TRAIT>::Jacobians
    ()
    :
    fr_table_J_fr_panda_link1(),
    fr_table_J_fr_panda_link2(),
    fr_table_J_fr_panda_link3(),
    fr_table_J_fr_panda_link4(),
    fr_table_J_fr_panda_link5(),
    fr_table_J_fr_panda_link6(),
    fr_table_J_fr_panda_link7(),
    fr_table_J_fr_panda_link1_COM(),
    fr_table_J_fr_panda_link2_COM(),
    fr_table_J_fr_panda_link3_COM(),
    fr_table_J_fr_panda_link4_COM(),
    fr_table_J_fr_panda_link5_COM(),
    fr_table_J_fr_panda_link6_COM(),
    fr_table_J_fr_panda_link7_COM()
{
  updateParameters();
}

template <typename TRAIT>
void iit::Franka::tpl::Jacobians<TRAIT>::updateParameters() {
}


template <typename TRAIT>
iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link1::Type_fr_table_J_fr_panda_link1()
{
  (*this)(0,0) = 0;
  (*this)(1,0) = 0;
  (*this)(2,0) = 1.0;
  (*this)(3,0) = 0;
  (*this)(4,0) = 0;
  (*this)(5,0) = 0;
}

template <typename TRAIT>
const typename iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link1& iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link1::update(const JState& jState) {
  return *this;
}
template <typename TRAIT>
iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link2::Type_fr_table_J_fr_panda_link2()
{
  (*this)(0,0) = 0;
  (*this)(1,0) = 0;
  (*this)(2,0) = 1.0;
  (*this)(2,1) = 0;
  (*this)(3,0) = 0;
  (*this)(3,1) = 0;
  (*this)(4,0) = 0;
  (*this)(4,1) = 0;
  (*this)(5,0) = 0;
  (*this)(5,1) = 0;
}

template <typename TRAIT>
const typename iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link2& iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link2::update(const JState& jState) {
  Scalar s_q_panda_joint1_;
  Scalar c_q_panda_joint1_;

  s_q_panda_joint1_ = TRAIT::sin( jState(PANDA_JOINT1));
  c_q_panda_joint1_ = TRAIT::cos( jState(PANDA_JOINT1));

  (*this)(0,1) = - s_q_panda_joint1_;
  (*this)(1,1) =  c_q_panda_joint1_;
  return *this;
}

template <typename TRAIT>
iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link3::Type_fr_table_J_fr_panda_link3()
{
  (*this)(0,0) = 0;
  (*this)(1,0) = 0;
  (*this)(2,0) = 1.0;
  (*this)(2,1) = 0;
  (*this)(3,2) = 0;
  (*this)(4,2) = 0;
  (*this)(5,0) = 0;
  (*this)(5,2) = 0;
}

template <typename TRAIT>
const typename iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link3& iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link3::update(const JState& jState) {
  Scalar s_q_panda_joint1_;
  Scalar s_q_panda_joint2_;
  Scalar c_q_panda_joint1_;
  Scalar c_q_panda_joint2_;

  s_q_panda_joint1_ = TRAIT::sin( jState(PANDA_JOINT1));
  s_q_panda_joint2_ = TRAIT::sin( jState(PANDA_JOINT2));
  c_q_panda_joint1_ = TRAIT::cos( jState(PANDA_JOINT1));
  c_q_panda_joint2_ = TRAIT::cos( jState(PANDA_JOINT2));

  (*this)(0,1) = - s_q_panda_joint1_;
  (*this)(0,2) = ( c_q_panda_joint1_ *  s_q_panda_joint2_);
  (*this)(1,1) =  c_q_panda_joint1_;
  (*this)(1,2) = ( s_q_panda_joint1_ *  s_q_panda_joint2_);
  (*this)(2,2) =  c_q_panda_joint2_;
  (*this)(3,0) = ((- 0.316 *  s_q_panda_joint1_) *  s_q_panda_joint2_);
  (*this)(3,1) = (( 0.316 *  c_q_panda_joint1_) *  c_q_panda_joint2_);
  (*this)(4,0) = (( 0.316 *  c_q_panda_joint1_) *  s_q_panda_joint2_);
  (*this)(4,1) = (( 0.316 *  s_q_panda_joint1_) *  c_q_panda_joint2_);
  (*this)(5,1) = (- 0.316 *  s_q_panda_joint2_);
  return *this;
}
template <typename TRAIT>
iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link4::Type_fr_table_J_fr_panda_link4()
{
  (*this)(0,0) = 0;
  (*this)(1,0) = 0;
  (*this)(2,0) = 1.0;
  (*this)(2,1) = 0;
  (*this)(3,3) = 0;
  (*this)(4,3) = 0;
  (*this)(5,0) = 0;
  (*this)(5,3) = 0;
}

template <typename TRAIT>
const typename iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link4& iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link4::update(const JState& jState) {
  Scalar s_q_panda_joint1_;
  Scalar s_q_panda_joint2_;
  Scalar s_q_panda_joint3_;
  Scalar c_q_panda_joint1_;
  Scalar c_q_panda_joint2_;
  Scalar c_q_panda_joint3_;

  s_q_panda_joint1_ = TRAIT::sin( jState(PANDA_JOINT1));
  s_q_panda_joint2_ = TRAIT::sin( jState(PANDA_JOINT2));
  s_q_panda_joint3_ = TRAIT::sin( jState(PANDA_JOINT3));
  c_q_panda_joint1_ = TRAIT::cos( jState(PANDA_JOINT1));
  c_q_panda_joint2_ = TRAIT::cos( jState(PANDA_JOINT2));
  c_q_panda_joint3_ = TRAIT::cos( jState(PANDA_JOINT3));

  (*this)(0,1) = - s_q_panda_joint1_;
  (*this)(0,2) = ( c_q_panda_joint1_ *  s_q_panda_joint2_);
  (*this)(0,3) = ((( c_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) + ( s_q_panda_joint1_ *  c_q_panda_joint3_));
  (*this)(1,1) =  c_q_panda_joint1_;
  (*this)(1,2) = ( s_q_panda_joint1_ *  s_q_panda_joint2_);
  (*this)(1,3) = ((( s_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) - ( c_q_panda_joint1_ *  c_q_panda_joint3_));
  (*this)(2,2) =  c_q_panda_joint2_;
  (*this)(2,3) = (- s_q_panda_joint2_ *  s_q_panda_joint3_);
  (*this)(3,0) = ((((- 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.316 *  s_q_panda_joint1_) *  s_q_panda_joint2_));
  (*this)(3,1) = ((( 0.316 *  c_q_panda_joint1_) *  c_q_panda_joint2_) - ((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_));
  (*this)(3,2) = ((((- 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint3_));
  (*this)(4,0) = ((((- 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.316 *  c_q_panda_joint1_) *  s_q_panda_joint2_));
  (*this)(4,1) = ((( 0.316 *  s_q_panda_joint1_) *  c_q_panda_joint2_) - ((( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_));
  (*this)(4,2) = ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint3_) - ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_));
  (*this)(5,1) = (((- 0.0825 *  c_q_panda_joint2_) *  c_q_panda_joint3_) - ( 0.316 *  s_q_panda_joint2_));
  (*this)(5,2) = (( 0.0825 *  s_q_panda_joint2_) *  s_q_panda_joint3_);
  return *this;
}
template <typename TRAIT>
iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link5::Type_fr_table_J_fr_panda_link5()
{
  (*this)(0,0) = 0;
  (*this)(1,0) = 0;
  (*this)(2,0) = 1.0;
  (*this)(2,1) = 0;
  (*this)(3,4) = 0;
  (*this)(4,4) = 0;
  (*this)(5,0) = 0;
  (*this)(5,4) = 0;
}

template <typename TRAIT>
const typename iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link5& iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link5::update(const JState& jState) {
  Scalar s_q_panda_joint1_;
  Scalar s_q_panda_joint2_;
  Scalar s_q_panda_joint3_;
  Scalar s_q_panda_joint4_;
  Scalar c_q_panda_joint1_;
  Scalar c_q_panda_joint2_;
  Scalar c_q_panda_joint3_;
  Scalar c_q_panda_joint4_;

  s_q_panda_joint1_ = TRAIT::sin( jState(PANDA_JOINT1));
  s_q_panda_joint2_ = TRAIT::sin( jState(PANDA_JOINT2));
  s_q_panda_joint3_ = TRAIT::sin( jState(PANDA_JOINT3));
  s_q_panda_joint4_ = TRAIT::sin( jState(PANDA_JOINT4));
  c_q_panda_joint1_ = TRAIT::cos( jState(PANDA_JOINT1));
  c_q_panda_joint2_ = TRAIT::cos( jState(PANDA_JOINT2));
  c_q_panda_joint3_ = TRAIT::cos( jState(PANDA_JOINT3));
  c_q_panda_joint4_ = TRAIT::cos( jState(PANDA_JOINT4));

  (*this)(0,1) = - s_q_panda_joint1_;
  (*this)(0,2) = ( c_q_panda_joint1_ *  s_q_panda_joint2_);
  (*this)(0,3) = ((( c_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) + ( s_q_panda_joint1_ *  c_q_panda_joint3_));
  (*this)(0,4) = (((( s_q_panda_joint1_ *  s_q_panda_joint3_) - (( c_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + (( c_q_panda_joint1_ *  s_q_panda_joint2_) *  c_q_panda_joint4_));
  (*this)(1,1) =  c_q_panda_joint1_;
  (*this)(1,2) = ( s_q_panda_joint1_ *  s_q_panda_joint2_);
  (*this)(1,3) = ((( s_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) - ( c_q_panda_joint1_ *  c_q_panda_joint3_));
  (*this)(1,4) = ((((- c_q_panda_joint1_ *  s_q_panda_joint3_) - (( s_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + (( s_q_panda_joint1_ *  s_q_panda_joint2_) *  c_q_panda_joint4_));
  (*this)(2,2) =  c_q_panda_joint2_;
  (*this)(2,3) = (- s_q_panda_joint2_ *  s_q_panda_joint3_);
  (*this)(2,4) = ((( s_q_panda_joint2_ *  c_q_panda_joint3_) *  s_q_panda_joint4_) + ( c_q_panda_joint2_ *  c_q_panda_joint4_));
  (*this)(3,0) = ((((((((( 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_) + ((((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_)) - (( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint3_)) - ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.316 *  s_q_panda_joint1_) *  s_q_panda_joint2_));
  (*this)(3,1) = (((((((( 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_)) *  s_q_panda_joint4_) + ((((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) + (( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint2_)) *  c_q_panda_joint4_)) - ((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.316 *  c_q_panda_joint1_) *  c_q_panda_joint2_));
  (*this)(3,2) = (((((((( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + ((((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) - ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) - (( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint3_));
  (*this)(3,3) = ((((((- 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_) + ((((( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_));
  (*this)(4,0) = ((((((((( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_) + ((((( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_)) - (( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint3_)) + ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.316 *  c_q_panda_joint1_) *  s_q_panda_joint2_));
  (*this)(4,1) = (((((((( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_)) *  s_q_panda_joint4_) + ((((( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) + (( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint2_)) *  c_q_panda_joint4_)) - ((( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.316 *  s_q_panda_joint1_) *  c_q_panda_joint2_));
  (*this)(4,2) = (((((((( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + ((((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) - ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) + (( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint3_));
  (*this)(4,3) = (((((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_) + (((((- 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_));
  (*this)(5,1) = ((((((( 0.384 *  c_q_panda_joint2_) *  c_q_panda_joint3_) + ( 0.0825 *  s_q_panda_joint2_)) *  s_q_panda_joint4_) + (((( 0.0825 *  c_q_panda_joint2_) *  c_q_panda_joint3_) - ( 0.384 *  s_q_panda_joint2_)) *  c_q_panda_joint4_)) - (( 0.0825 *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - ( 0.316 *  s_q_panda_joint2_));
  (*this)(5,2) = (((((- 0.384 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint4_) - ((( 0.0825 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  c_q_panda_joint4_)) + (( 0.0825 *  s_q_panda_joint2_) *  s_q_panda_joint3_));
  (*this)(5,3) = (((((- 0.0825 *  s_q_panda_joint2_) *  c_q_panda_joint3_) - ( 0.384 *  c_q_panda_joint2_)) *  s_q_panda_joint4_) + (((( 0.384 *  s_q_panda_joint2_) *  c_q_panda_joint3_) - ( 0.0825 *  c_q_panda_joint2_)) *  c_q_panda_joint4_));
  return *this;
}
template <typename TRAIT>
iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link6::Type_fr_table_J_fr_panda_link6()
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
const typename iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link6& iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link6::update(const JState& jState) {
  Scalar s_q_panda_joint1_;
  Scalar s_q_panda_joint2_;
  Scalar s_q_panda_joint3_;
  Scalar s_q_panda_joint4_;
  Scalar s_q_panda_joint5_;
  Scalar c_q_panda_joint1_;
  Scalar c_q_panda_joint2_;
  Scalar c_q_panda_joint3_;
  Scalar c_q_panda_joint4_;
  Scalar c_q_panda_joint5_;

  s_q_panda_joint1_ = TRAIT::sin( jState(PANDA_JOINT1));
  s_q_panda_joint2_ = TRAIT::sin( jState(PANDA_JOINT2));
  s_q_panda_joint3_ = TRAIT::sin( jState(PANDA_JOINT3));
  s_q_panda_joint4_ = TRAIT::sin( jState(PANDA_JOINT4));
  s_q_panda_joint5_ = TRAIT::sin( jState(PANDA_JOINT5));
  c_q_panda_joint1_ = TRAIT::cos( jState(PANDA_JOINT1));
  c_q_panda_joint2_ = TRAIT::cos( jState(PANDA_JOINT2));
  c_q_panda_joint3_ = TRAIT::cos( jState(PANDA_JOINT3));
  c_q_panda_joint4_ = TRAIT::cos( jState(PANDA_JOINT4));
  c_q_panda_joint5_ = TRAIT::cos( jState(PANDA_JOINT5));

  (*this)(0,1) = - s_q_panda_joint1_;
  (*this)(0,2) = ( c_q_panda_joint1_ *  s_q_panda_joint2_);
  (*this)(0,3) = ((( c_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) + ( s_q_panda_joint1_ *  c_q_panda_joint3_));
  (*this)(0,4) = (((( s_q_panda_joint1_ *  s_q_panda_joint3_) - (( c_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + (( c_q_panda_joint1_ *  s_q_panda_joint2_) *  c_q_panda_joint4_));
  (*this)(0,5) = ((((( c_q_panda_joint1_ *  s_q_panda_joint2_) *  s_q_panda_joint4_) + (((( c_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_) - ( s_q_panda_joint1_ *  s_q_panda_joint3_)) *  c_q_panda_joint4_)) *  s_q_panda_joint5_) + (((( c_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) + ( s_q_panda_joint1_ *  c_q_panda_joint3_)) *  c_q_panda_joint5_));
  (*this)(1,1) =  c_q_panda_joint1_;
  (*this)(1,2) = ( s_q_panda_joint1_ *  s_q_panda_joint2_);
  (*this)(1,3) = ((( s_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) - ( c_q_panda_joint1_ *  c_q_panda_joint3_));
  (*this)(1,4) = ((((- c_q_panda_joint1_ *  s_q_panda_joint3_) - (( s_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + (( s_q_panda_joint1_ *  s_q_panda_joint2_) *  c_q_panda_joint4_));
  (*this)(1,5) = ((((( s_q_panda_joint1_ *  s_q_panda_joint2_) *  s_q_panda_joint4_) + ((( c_q_panda_joint1_ *  s_q_panda_joint3_) + (( s_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) *  s_q_panda_joint5_) + (((( s_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) - ( c_q_panda_joint1_ *  c_q_panda_joint3_)) *  c_q_panda_joint5_));
  (*this)(2,2) =  c_q_panda_joint2_;
  (*this)(2,3) = (- s_q_panda_joint2_ *  s_q_panda_joint3_);
  (*this)(2,4) = ((( s_q_panda_joint2_ *  c_q_panda_joint3_) *  s_q_panda_joint4_) + ( c_q_panda_joint2_ *  c_q_panda_joint4_));
  (*this)(2,5) = (((( c_q_panda_joint2_ *  s_q_panda_joint4_) - (( s_q_panda_joint2_ *  c_q_panda_joint3_) *  c_q_panda_joint4_)) *  s_q_panda_joint5_) - (( s_q_panda_joint2_ *  s_q_panda_joint3_) *  c_q_panda_joint5_));
  (*this)(3,0) = ((((((((( 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_) + ((((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_)) - (( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint3_)) - ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.316 *  s_q_panda_joint1_) *  s_q_panda_joint2_));
  (*this)(3,1) = (((((((( 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_)) *  s_q_panda_joint4_) + ((((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) + (( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint2_)) *  c_q_panda_joint4_)) - ((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.316 *  c_q_panda_joint1_) *  c_q_panda_joint2_));
  (*this)(3,2) = (((((((( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + ((((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) - ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) - (( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint3_));
  (*this)(3,3) = ((((((- 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_) + ((((( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_));
  (*this)(4,0) = ((((((((( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_) + ((((( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_)) - (( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint3_)) + ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.316 *  c_q_panda_joint1_) *  s_q_panda_joint2_));
  (*this)(4,1) = (((((((( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_)) *  s_q_panda_joint4_) + ((((( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) + (( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint2_)) *  c_q_panda_joint4_)) - ((( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.316 *  s_q_panda_joint1_) *  c_q_panda_joint2_));
  (*this)(4,2) = (((((((( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + ((((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) - ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) + (( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint3_));
  (*this)(4,3) = (((((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_) + (((((- 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_));
  (*this)(5,1) = ((((((( 0.384 *  c_q_panda_joint2_) *  c_q_panda_joint3_) + ( 0.0825 *  s_q_panda_joint2_)) *  s_q_panda_joint4_) + (((( 0.0825 *  c_q_panda_joint2_) *  c_q_panda_joint3_) - ( 0.384 *  s_q_panda_joint2_)) *  c_q_panda_joint4_)) - (( 0.0825 *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - ( 0.316 *  s_q_panda_joint2_));
  (*this)(5,2) = (((((- 0.384 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint4_) - ((( 0.0825 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  c_q_panda_joint4_)) + (( 0.0825 *  s_q_panda_joint2_) *  s_q_panda_joint3_));
  (*this)(5,3) = (((((- 0.0825 *  s_q_panda_joint2_) *  c_q_panda_joint3_) - ( 0.384 *  c_q_panda_joint2_)) *  s_q_panda_joint4_) + (((( 0.384 *  s_q_panda_joint2_) *  c_q_panda_joint3_) - ( 0.0825 *  c_q_panda_joint2_)) *  c_q_panda_joint4_));
  return *this;
}

template <typename TRAIT>
iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link7::Type_fr_table_J_fr_panda_link7()
{
  (*this)(0,0) = 0;
  (*this)(1,0) = 0;
  (*this)(2,0) = 1.0;
  (*this)(2,1) = 0;
  (*this)(3,6) = 0;
  (*this)(4,6) = 0;
  (*this)(5,0) = 0;
  (*this)(5,6) = 0;
}

template <typename TRAIT>
const typename iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link7& iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link7::update(const JState& jState) {
  Scalar s_q_panda_joint1_;
  Scalar s_q_panda_joint2_;
  Scalar s_q_panda_joint3_;
  Scalar s_q_panda_joint4_;
  Scalar s_q_panda_joint5_;
  Scalar s_q_panda_joint6_;
  Scalar c_q_panda_joint1_;
  Scalar c_q_panda_joint2_;
  Scalar c_q_panda_joint3_;
  Scalar c_q_panda_joint4_;
  Scalar c_q_panda_joint5_;
  Scalar c_q_panda_joint6_;

  s_q_panda_joint1_ = TRAIT::sin( jState(PANDA_JOINT1));
  s_q_panda_joint2_ = TRAIT::sin( jState(PANDA_JOINT2));
  s_q_panda_joint3_ = TRAIT::sin( jState(PANDA_JOINT3));
  s_q_panda_joint4_ = TRAIT::sin( jState(PANDA_JOINT4));
  s_q_panda_joint5_ = TRAIT::sin( jState(PANDA_JOINT5));
  s_q_panda_joint6_ = TRAIT::sin( jState(PANDA_JOINT6));
  c_q_panda_joint1_ = TRAIT::cos( jState(PANDA_JOINT1));
  c_q_panda_joint2_ = TRAIT::cos( jState(PANDA_JOINT2));
  c_q_panda_joint3_ = TRAIT::cos( jState(PANDA_JOINT3));
  c_q_panda_joint4_ = TRAIT::cos( jState(PANDA_JOINT4));
  c_q_panda_joint5_ = TRAIT::cos( jState(PANDA_JOINT5));
  c_q_panda_joint6_ = TRAIT::cos( jState(PANDA_JOINT6));

  (*this)(0,1) = - s_q_panda_joint1_;
  (*this)(0,2) = ( c_q_panda_joint1_ *  s_q_panda_joint2_);
  (*this)(0,3) = ((( c_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) + ( s_q_panda_joint1_ *  c_q_panda_joint3_));
  (*this)(0,4) = (((( s_q_panda_joint1_ *  s_q_panda_joint3_) - (( c_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + (( c_q_panda_joint1_ *  s_q_panda_joint2_) *  c_q_panda_joint4_));
  (*this)(0,5) = ((((( c_q_panda_joint1_ *  s_q_panda_joint2_) *  s_q_panda_joint4_) + (((( c_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_) - ( s_q_panda_joint1_ *  s_q_panda_joint3_)) *  c_q_panda_joint4_)) *  s_q_panda_joint5_) + (((( c_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) + ( s_q_panda_joint1_ *  c_q_panda_joint3_)) *  c_q_panda_joint5_));
  (*this)(0,6) = (((((((- c_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) - ( s_q_panda_joint1_ *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + (((( c_q_panda_joint1_ *  s_q_panda_joint2_) *  s_q_panda_joint4_) + (((( c_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_) - ( s_q_panda_joint1_ *  s_q_panda_joint3_)) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) *  s_q_panda_joint6_) + (((((( c_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_) - ( s_q_panda_joint1_ *  s_q_panda_joint3_)) *  s_q_panda_joint4_) - (( c_q_panda_joint1_ *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint6_));
  (*this)(1,1) =  c_q_panda_joint1_;
  (*this)(1,2) = ( s_q_panda_joint1_ *  s_q_panda_joint2_);
  (*this)(1,3) = ((( s_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) - ( c_q_panda_joint1_ *  c_q_panda_joint3_));
  (*this)(1,4) = ((((- c_q_panda_joint1_ *  s_q_panda_joint3_) - (( s_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + (( s_q_panda_joint1_ *  s_q_panda_joint2_) *  c_q_panda_joint4_));
  (*this)(1,5) = ((((( s_q_panda_joint1_ *  s_q_panda_joint2_) *  s_q_panda_joint4_) + ((( c_q_panda_joint1_ *  s_q_panda_joint3_) + (( s_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) *  s_q_panda_joint5_) + (((( s_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) - ( c_q_panda_joint1_ *  c_q_panda_joint3_)) *  c_q_panda_joint5_));
  (*this)(1,6) = (((((( c_q_panda_joint1_ *  c_q_panda_joint3_) - (( s_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_)) *  s_q_panda_joint5_) + (((( s_q_panda_joint1_ *  s_q_panda_joint2_) *  s_q_panda_joint4_) + ((( c_q_panda_joint1_ *  s_q_panda_joint3_) + (( s_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) *  s_q_panda_joint6_) + ((((( c_q_panda_joint1_ *  s_q_panda_joint3_) + (( s_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) - (( s_q_panda_joint1_ *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint6_));
  (*this)(2,2) =  c_q_panda_joint2_;
  (*this)(2,3) = (- s_q_panda_joint2_ *  s_q_panda_joint3_);
  (*this)(2,4) = ((( s_q_panda_joint2_ *  c_q_panda_joint3_) *  s_q_panda_joint4_) + ( c_q_panda_joint2_ *  c_q_panda_joint4_));
  (*this)(2,5) = (((( c_q_panda_joint2_ *  s_q_panda_joint4_) - (( s_q_panda_joint2_ *  c_q_panda_joint3_) *  c_q_panda_joint4_)) *  s_q_panda_joint5_) - (( s_q_panda_joint2_ *  s_q_panda_joint3_) *  c_q_panda_joint5_));
  (*this)(2,6) = ((((( s_q_panda_joint2_ *  s_q_panda_joint3_) *  s_q_panda_joint5_) + ((( c_q_panda_joint2_ *  s_q_panda_joint4_) - (( s_q_panda_joint2_ *  c_q_panda_joint3_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) *  s_q_panda_joint6_) + ((((- s_q_panda_joint2_ *  c_q_panda_joint3_) *  s_q_panda_joint4_) - ( c_q_panda_joint2_ *  c_q_panda_joint4_)) *  c_q_panda_joint6_));
  (*this)(3,0) = (((((((((((( 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) - ((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  s_q_panda_joint6_) + ((((((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((((- 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  c_q_panda_joint5_)) *  c_q_panda_joint6_)) + ((((( 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_)) + ((((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_)) - (( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint3_)) - ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.316 *  s_q_panda_joint1_) *  s_q_panda_joint2_));
  (*this)(3,1) = ((((((((((( 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint4_) + ((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint4_)) *  s_q_panda_joint6_) + (((((( 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint5_) + ((((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint4_) - (((( 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) *  c_q_panda_joint6_)) + ((((( 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_)) *  s_q_panda_joint4_)) + ((((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) + (( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint2_)) *  c_q_panda_joint4_)) - ((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.316 *  c_q_panda_joint1_) *  c_q_panda_joint2_));
  (*this)(3,2) = ((((((((((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) *  s_q_panda_joint6_) + (((((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((((- 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) *  c_q_panda_joint5_)) *  c_q_panda_joint6_)) + ((((( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_)) + ((((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) - ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) - (( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint3_));
  (*this)(3,3) = ((((((((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  s_q_panda_joint6_) + ((((((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + ((( 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_) *  c_q_panda_joint6_)) + (((((- 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_)) + ((((( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_));
  (*this)(3,4) = (((((((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  s_q_panda_joint5_) + (((((- 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint5_)) *  c_q_panda_joint6_);
  (*this)(3,5) = (((((((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + (((((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  c_q_panda_joint5_)) *  s_q_panda_joint6_) + (((((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + ((( 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint6_));
  (*this)(4,0) = (((((((((((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + ((( 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  s_q_panda_joint6_) + (((((((- 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((( 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_) + ((((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint3_)) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) *  c_q_panda_joint6_)) + ((((( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_)) + ((((( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_)) - (( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint3_)) + ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.316 *  c_q_panda_joint1_) *  s_q_panda_joint2_));
  (*this)(4,1) = ((((((((((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint4_) + ((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint4_)) *  s_q_panda_joint6_) + (((((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint5_) + ((((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint4_) - (((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) *  c_q_panda_joint6_)) + ((((( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_)) *  s_q_panda_joint4_)) + ((((( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) + (( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint2_)) *  c_q_panda_joint4_)) - ((( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.316 *  s_q_panda_joint1_) *  c_q_panda_joint2_));
  (*this)(4,2) = ((((((((((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) *  s_q_panda_joint6_) + ((((((- 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint3_) - ((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) *  c_q_panda_joint4_) *  c_q_panda_joint5_)) *  c_q_panda_joint6_)) + ((((( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_)) + ((((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) - ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) + (( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint3_));
  (*this)(4,3) = (((((((((- 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  s_q_panda_joint6_) + (((((((- 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + ((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_) *  c_q_panda_joint6_)) + ((((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_)) + (((((- 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_));
  (*this)(4,4) = ((((((((- 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  s_q_panda_joint5_) + (((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint3_) - ((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) *  c_q_panda_joint5_)) *  c_q_panda_joint6_);
  (*this)(4,5) = (((((((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((((- 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  c_q_panda_joint5_)) *  s_q_panda_joint6_) + ((((((- 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + ((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint6_));
  (*this)(5,1) = (((((((((( 0.088 *  c_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint4_) - (( 0.088 *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  s_q_panda_joint6_) + ((((( 0.088 *  c_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint5_) + ((((- 0.088 *  s_q_panda_joint2_) *  s_q_panda_joint4_) - ((( 0.088 *  c_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) *  c_q_panda_joint6_)) + (((( 0.384 *  c_q_panda_joint2_) *  c_q_panda_joint3_) + ( 0.0825 *  s_q_panda_joint2_)) *  s_q_panda_joint4_)) + (((( 0.0825 *  c_q_panda_joint2_) *  c_q_panda_joint3_) - ( 0.384 *  s_q_panda_joint2_)) *  c_q_panda_joint4_)) - (( 0.0825 *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - ( 0.316 *  s_q_panda_joint2_));
  (*this)(5,2) = ((((((((- 0.088 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint4_) *  s_q_panda_joint6_) + ((((( 0.088 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint5_) + (((( 0.088 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  c_q_panda_joint4_) *  c_q_panda_joint5_)) *  c_q_panda_joint6_)) - ((( 0.384 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint4_)) - ((( 0.0825 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  c_q_panda_joint4_)) + (( 0.0825 *  s_q_panda_joint2_) *  s_q_panda_joint3_));
  (*this)(5,3) = (((((((( 0.088 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_) - (( 0.088 *  c_q_panda_joint2_) *  s_q_panda_joint4_)) *  s_q_panda_joint6_) + (((((( 0.088 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint4_) + (( 0.088 *  c_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_) *  c_q_panda_joint6_)) + ((((- 0.0825 *  s_q_panda_joint2_) *  c_q_panda_joint3_) - ( 0.384 *  c_q_panda_joint2_)) *  s_q_panda_joint4_)) + (((( 0.384 *  s_q_panda_joint2_) *  c_q_panda_joint3_) - ( 0.0825 *  c_q_panda_joint2_)) *  c_q_panda_joint4_));
  (*this)(5,4) = ((((((( 0.088 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_) - (( 0.088 *  c_q_panda_joint2_) *  s_q_panda_joint4_)) *  s_q_panda_joint5_) + ((( 0.088 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  c_q_panda_joint5_)) *  c_q_panda_joint6_);
  (*this)(5,5) = (((((((( 0.088 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_) - (( 0.088 *  c_q_panda_joint2_) *  s_q_panda_joint4_)) *  c_q_panda_joint5_) - ((( 0.088 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint5_)) *  s_q_panda_joint6_) + ((((( 0.088 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint4_) + (( 0.088 *  c_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint6_));
  return *this;
}


template <typename TRAIT>
iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link1_COM::Type_fr_table_J_fr_panda_link1_COM()
{
  (*this)(0,0) = 0;
  (*this)(1,0) = 0;
  (*this)(2,0) = 1.0;
  (*this)(5,0) = 0;
}

template <typename TRAIT>
const typename iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link1_COM& iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link1_COM::update(const JState& jState) {
  Scalar s_q_panda_joint1_;
  Scalar c_q_panda_joint1_;

  s_q_panda_joint1_ = TRAIT::sin( jState(PANDA_JOINT1));
  c_q_panda_joint1_ = TRAIT::cos( jState(PANDA_JOINT1));

  (*this)(3,0) = ((- 0.00387 *  s_q_panda_joint1_) - ( 0.00208 *  c_q_panda_joint1_));
  (*this)(4,0) = (( 0.00387 *  c_q_panda_joint1_) - ( 0.00208 *  s_q_panda_joint1_));
  return *this;
}
template <typename TRAIT>
iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link2_COM::Type_fr_table_J_fr_panda_link2_COM()
{
  (*this)(0,0) = 0;
  (*this)(1,0) = 0;
  (*this)(2,0) = 1.0;
  (*this)(2,1) = 0;
  (*this)(5,0) = 0;
}

template <typename TRAIT>
const typename iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link2_COM& iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link2_COM::update(const JState& jState) {
  Scalar s_q_panda_joint1_;
  Scalar s_q_panda_joint2_;
  Scalar c_q_panda_joint1_;
  Scalar c_q_panda_joint2_;

  s_q_panda_joint1_ = TRAIT::sin( jState(PANDA_JOINT1));
  s_q_panda_joint2_ = TRAIT::sin( jState(PANDA_JOINT2));
  c_q_panda_joint1_ = TRAIT::cos( jState(PANDA_JOINT1));
  c_q_panda_joint2_ = TRAIT::cos( jState(PANDA_JOINT2));

  (*this)(0,1) = - s_q_panda_joint1_;
  (*this)(1,1) =  c_q_panda_joint1_;
  (*this)(3,0) = ((((- 0.02872 *  s_q_panda_joint1_) *  s_q_panda_joint2_) + (( 0.00314 *  s_q_panda_joint1_) *  c_q_panda_joint2_)) - ( 0.0035 *  c_q_panda_joint1_));
  (*this)(3,1) = ((( 0.00314 *  c_q_panda_joint1_) *  s_q_panda_joint2_) + (( 0.02872 *  c_q_panda_joint1_) *  c_q_panda_joint2_));
  (*this)(4,0) = (((( 0.02872 *  c_q_panda_joint1_) *  s_q_panda_joint2_) - (( 0.00314 *  c_q_panda_joint1_) *  c_q_panda_joint2_)) - ( 0.0035 *  s_q_panda_joint1_));
  (*this)(4,1) = ((( 0.00314 *  s_q_panda_joint1_) *  s_q_panda_joint2_) + (( 0.02872 *  s_q_panda_joint1_) *  c_q_panda_joint2_));
  (*this)(5,1) = (( 0.00314 *  c_q_panda_joint2_) - ( 0.02872 *  s_q_panda_joint2_));
  return *this;
}
template <typename TRAIT>
iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link3_COM::Type_fr_table_J_fr_panda_link3_COM()
{
  (*this)(0,0) = 0;
  (*this)(1,0) = 0;
  (*this)(2,0) = 1.0;
  (*this)(2,1) = 0;
  (*this)(5,0) = 0;
}

template <typename TRAIT>
const typename iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link3_COM& iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link3_COM::update(const JState& jState) {
  Scalar s_q_panda_joint1_;
  Scalar s_q_panda_joint2_;
  Scalar s_q_panda_joint3_;
  Scalar c_q_panda_joint1_;
  Scalar c_q_panda_joint2_;
  Scalar c_q_panda_joint3_;

  s_q_panda_joint1_ = TRAIT::sin( jState(PANDA_JOINT1));
  s_q_panda_joint2_ = TRAIT::sin( jState(PANDA_JOINT2));
  s_q_panda_joint3_ = TRAIT::sin( jState(PANDA_JOINT3));
  c_q_panda_joint1_ = TRAIT::cos( jState(PANDA_JOINT1));
  c_q_panda_joint2_ = TRAIT::cos( jState(PANDA_JOINT2));
  c_q_panda_joint3_ = TRAIT::cos( jState(PANDA_JOINT3));

  (*this)(0,1) = - s_q_panda_joint1_;
  (*this)(0,2) = ( c_q_panda_joint1_ *  s_q_panda_joint2_);
  (*this)(1,1) =  c_q_panda_joint1_;
  (*this)(1,2) = ( s_q_panda_joint1_ *  s_q_panda_joint2_);
  (*this)(2,2) =  c_q_panda_joint2_;
  (*this)(3,0) = (((((( 0.03925 *  s_q_panda_joint1_) *  c_q_panda_joint2_) - ( 0.02752 *  c_q_panda_joint1_)) *  s_q_panda_joint3_) + ((((- 0.02752 *  s_q_panda_joint1_) *  c_q_panda_joint2_) - ( 0.03925 *  c_q_panda_joint1_)) *  c_q_panda_joint3_)) - (( 0.2495 *  s_q_panda_joint1_) *  s_q_panda_joint2_));
  (*this)(3,1) = ((((( 0.03925 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint3_) - ((( 0.02752 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.2495 *  c_q_panda_joint1_) *  c_q_panda_joint2_));
  (*this)(3,2) = (((( 0.03925 *  s_q_panda_joint1_) - (( 0.02752 *  c_q_panda_joint1_) *  c_q_panda_joint2_)) *  s_q_panda_joint3_) + ((((- 0.03925 *  c_q_panda_joint1_) *  c_q_panda_joint2_) - ( 0.02752 *  s_q_panda_joint1_)) *  c_q_panda_joint3_));
  (*this)(4,0) = ((((((- 0.03925 *  c_q_panda_joint1_) *  c_q_panda_joint2_) - ( 0.02752 *  s_q_panda_joint1_)) *  s_q_panda_joint3_) + (((( 0.02752 *  c_q_panda_joint1_) *  c_q_panda_joint2_) - ( 0.03925 *  s_q_panda_joint1_)) *  c_q_panda_joint3_)) + (( 0.2495 *  c_q_panda_joint1_) *  s_q_panda_joint2_));
  (*this)(4,1) = ((((( 0.03925 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint3_) - ((( 0.02752 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.2495 *  s_q_panda_joint1_) *  c_q_panda_joint2_));
  (*this)(4,2) = (((((- 0.02752 *  s_q_panda_joint1_) *  c_q_panda_joint2_) - ( 0.03925 *  c_q_panda_joint1_)) *  s_q_panda_joint3_) + ((( 0.02752 *  c_q_panda_joint1_) - (( 0.03925 *  s_q_panda_joint1_) *  c_q_panda_joint2_)) *  c_q_panda_joint3_));
  (*this)(5,1) = (((( 0.03925 *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.02752 *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - ( 0.2495 *  s_q_panda_joint2_));
  (*this)(5,2) = ((( 0.02752 *  s_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.03925 *  s_q_panda_joint2_) *  c_q_panda_joint3_));
  return *this;
}
template <typename TRAIT>
iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link4_COM::Type_fr_table_J_fr_panda_link4_COM()
{
  (*this)(0,0) = 0;
  (*this)(1,0) = 0;
  (*this)(2,0) = 1.0;
  (*this)(2,1) = 0;
  (*this)(5,0) = 0;
}

template <typename TRAIT>
const typename iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link4_COM& iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link4_COM::update(const JState& jState) {
  Scalar s_q_panda_joint1_;
  Scalar s_q_panda_joint2_;
  Scalar s_q_panda_joint3_;
  Scalar s_q_panda_joint4_;
  Scalar c_q_panda_joint1_;
  Scalar c_q_panda_joint2_;
  Scalar c_q_panda_joint3_;
  Scalar c_q_panda_joint4_;

  s_q_panda_joint1_ = TRAIT::sin( jState(PANDA_JOINT1));
  s_q_panda_joint2_ = TRAIT::sin( jState(PANDA_JOINT2));
  s_q_panda_joint3_ = TRAIT::sin( jState(PANDA_JOINT3));
  s_q_panda_joint4_ = TRAIT::sin( jState(PANDA_JOINT4));
  c_q_panda_joint1_ = TRAIT::cos( jState(PANDA_JOINT1));
  c_q_panda_joint2_ = TRAIT::cos( jState(PANDA_JOINT2));
  c_q_panda_joint3_ = TRAIT::cos( jState(PANDA_JOINT3));
  c_q_panda_joint4_ = TRAIT::cos( jState(PANDA_JOINT4));

  (*this)(0,1) = - s_q_panda_joint1_;
  (*this)(0,2) = ( c_q_panda_joint1_ *  s_q_panda_joint2_);
  (*this)(0,3) = ((( c_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) + ( s_q_panda_joint1_ *  c_q_panda_joint3_));
  (*this)(1,1) =  c_q_panda_joint1_;
  (*this)(1,2) = ( s_q_panda_joint1_ *  s_q_panda_joint2_);
  (*this)(1,3) = ((( s_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) - ( c_q_panda_joint1_ *  c_q_panda_joint3_));
  (*this)(2,2) =  c_q_panda_joint2_;
  (*this)(2,3) = (- s_q_panda_joint2_ *  s_q_panda_joint3_);
  (*this)(3,0) = ((((((((( 0.10442 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.10442 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.05317 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_) + ((((( 0.05317 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.05317 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.10442 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_)) + ((((- 0.02745 *  s_q_panda_joint1_) *  c_q_panda_joint2_) - ( 0.0825 *  c_q_panda_joint1_)) *  s_q_panda_joint3_)) + ((( 0.02745 *  c_q_panda_joint1_) - (( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_)) *  c_q_panda_joint3_)) - (( 0.316 *  s_q_panda_joint1_) *  s_q_panda_joint2_));
  (*this)(3,1) = ((((((((( 0.10442 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.05317 *  c_q_panda_joint1_) *  c_q_panda_joint2_)) *  s_q_panda_joint4_) + ((((( 0.05317 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) + (( 0.10442 *  c_q_panda_joint1_) *  c_q_panda_joint2_)) *  c_q_panda_joint4_)) - ((( 0.02745 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint3_)) - ((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.316 *  c_q_panda_joint1_) *  c_q_panda_joint2_));
  (*this)(3,2) = (((((((( 0.10442 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.10442 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + ((((( 0.05317 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.05317 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) + ((((- 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) - ( 0.02745 *  s_q_panda_joint1_)) *  s_q_panda_joint3_)) + (((( 0.02745 *  c_q_panda_joint1_) *  c_q_panda_joint2_) - ( 0.0825 *  s_q_panda_joint1_)) *  c_q_panda_joint3_));
  (*this)(3,3) = ((((((- 0.05317 *  s_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.05317 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.10442 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_) + ((((( 0.10442 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.10442 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.05317 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_));
  (*this)(4,0) = ((((((((( 0.10442 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.10442 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.05317 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_) + ((((( 0.05317 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.05317 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.10442 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_)) + (((( 0.02745 *  c_q_panda_joint1_) *  c_q_panda_joint2_) - ( 0.0825 *  s_q_panda_joint1_)) *  s_q_panda_joint3_)) + (((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) + ( 0.02745 *  s_q_panda_joint1_)) *  c_q_panda_joint3_)) + (( 0.316 *  c_q_panda_joint1_) *  s_q_panda_joint2_));
  (*this)(4,1) = ((((((((( 0.10442 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.05317 *  s_q_panda_joint1_) *  c_q_panda_joint2_)) *  s_q_panda_joint4_) + ((((( 0.05317 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) + (( 0.10442 *  s_q_panda_joint1_) *  c_q_panda_joint2_)) *  c_q_panda_joint4_)) - ((( 0.02745 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint3_)) - ((( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.316 *  s_q_panda_joint1_) *  c_q_panda_joint2_));
  (*this)(4,2) = (((((((( 0.10442 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.10442 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + ((((( 0.05317 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.05317 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) + ((( 0.02745 *  c_q_panda_joint1_) - (( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_)) *  s_q_panda_joint3_)) + (((( 0.02745 *  s_q_panda_joint1_) *  c_q_panda_joint2_) + ( 0.0825 *  c_q_panda_joint1_)) *  c_q_panda_joint3_));
  (*this)(4,3) = (((((( 0.05317 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.05317 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.10442 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_) + (((((- 0.10442 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.10442 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.05317 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_));
  (*this)(5,1) = (((((((( 0.10442 *  c_q_panda_joint2_) *  c_q_panda_joint3_) + ( 0.05317 *  s_q_panda_joint2_)) *  s_q_panda_joint4_) + (((( 0.05317 *  c_q_panda_joint2_) *  c_q_panda_joint3_) - ( 0.10442 *  s_q_panda_joint2_)) *  c_q_panda_joint4_)) - (( 0.02745 *  c_q_panda_joint2_) *  s_q_panda_joint3_)) - (( 0.0825 *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - ( 0.316 *  s_q_panda_joint2_));
  (*this)(5,2) = ((((((- 0.10442 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint4_) - ((( 0.05317 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  c_q_panda_joint4_)) + (( 0.0825 *  s_q_panda_joint2_) *  s_q_panda_joint3_)) - (( 0.02745 *  s_q_panda_joint2_) *  c_q_panda_joint3_));
  (*this)(5,3) = (((((- 0.05317 *  s_q_panda_joint2_) *  c_q_panda_joint3_) - ( 0.10442 *  c_q_panda_joint2_)) *  s_q_panda_joint4_) + (((( 0.10442 *  s_q_panda_joint2_) *  c_q_panda_joint3_) - ( 0.05317 *  c_q_panda_joint2_)) *  c_q_panda_joint4_));
  return *this;
}
template <typename TRAIT>
iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link5_COM::Type_fr_table_J_fr_panda_link5_COM()
{
  (*this)(0,0) = 0;
  (*this)(1,0) = 0;
  (*this)(2,0) = 1.0;
  (*this)(2,1) = 0;
  (*this)(5,0) = 0;
}

template <typename TRAIT>
const typename iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link5_COM& iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link5_COM::update(const JState& jState) {
  Scalar s_q_panda_joint1_;
  Scalar s_q_panda_joint2_;
  Scalar s_q_panda_joint3_;
  Scalar s_q_panda_joint4_;
  Scalar s_q_panda_joint5_;
  Scalar c_q_panda_joint1_;
  Scalar c_q_panda_joint2_;
  Scalar c_q_panda_joint3_;
  Scalar c_q_panda_joint4_;
  Scalar c_q_panda_joint5_;

  s_q_panda_joint1_ = TRAIT::sin( jState(PANDA_JOINT1));
  s_q_panda_joint2_ = TRAIT::sin( jState(PANDA_JOINT2));
  s_q_panda_joint3_ = TRAIT::sin( jState(PANDA_JOINT3));
  s_q_panda_joint4_ = TRAIT::sin( jState(PANDA_JOINT4));
  s_q_panda_joint5_ = TRAIT::sin( jState(PANDA_JOINT5));
  c_q_panda_joint1_ = TRAIT::cos( jState(PANDA_JOINT1));
  c_q_panda_joint2_ = TRAIT::cos( jState(PANDA_JOINT2));
  c_q_panda_joint3_ = TRAIT::cos( jState(PANDA_JOINT3));
  c_q_panda_joint4_ = TRAIT::cos( jState(PANDA_JOINT4));
  c_q_panda_joint5_ = TRAIT::cos( jState(PANDA_JOINT5));

  (*this)(0,1) = - s_q_panda_joint1_;
  (*this)(0,2) = ( c_q_panda_joint1_ *  s_q_panda_joint2_);
  (*this)(0,3) = ((( c_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) + ( s_q_panda_joint1_ *  c_q_panda_joint3_));
  (*this)(0,4) = (((( s_q_panda_joint1_ *  s_q_panda_joint3_) - (( c_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + (( c_q_panda_joint1_ *  s_q_panda_joint2_) *  c_q_panda_joint4_));
  (*this)(1,1) =  c_q_panda_joint1_;
  (*this)(1,2) = ( s_q_panda_joint1_ *  s_q_panda_joint2_);
  (*this)(1,3) = ((( s_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) - ( c_q_panda_joint1_ *  c_q_panda_joint3_));
  (*this)(1,4) = ((((- c_q_panda_joint1_ *  s_q_panda_joint3_) - (( s_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + (( s_q_panda_joint1_ *  s_q_panda_joint2_) *  c_q_panda_joint4_));
  (*this)(2,2) =  c_q_panda_joint2_;
  (*this)(2,3) = (- s_q_panda_joint2_ *  s_q_panda_joint3_);
  (*this)(2,4) = ((( s_q_panda_joint2_ *  c_q_panda_joint3_) *  s_q_panda_joint4_) + ( c_q_panda_joint2_ *  c_q_panda_joint4_));
  (*this)(3,0) = ((((((((((((( 0.04106 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_) + (((( 0.04106 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.04106 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) - ((( 0.01195 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) + (( 0.01195 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((((( 0.01195 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_) + (((( 0.01195 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.01195 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) + ((( 0.04106 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) - (( 0.04106 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint5_)) + ((((( 0.34556 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.34556 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_)) + ((((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.34556 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_)) - (( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint3_)) - ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.316 *  s_q_panda_joint1_) *  s_q_panda_joint2_));
  (*this)(3,1) = (((((((((((- 0.04106 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint4_) + (((( 0.04106 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_)) - ((( 0.01195 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((((- 0.01195 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint4_) + (((( 0.01195 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_)) + ((( 0.04106 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint3_)) *  c_q_panda_joint5_)) + ((((( 0.34556 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_)) *  s_q_panda_joint4_)) + ((((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) + (( 0.34556 *  c_q_panda_joint1_) *  c_q_panda_joint2_)) *  c_q_panda_joint4_)) - ((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.316 *  c_q_panda_joint1_) *  c_q_panda_joint2_));
  (*this)(3,2) = ((((((((((((( 0.04106 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.04106 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - (( 0.01195 *  s_q_panda_joint1_) *  s_q_panda_joint3_)) + ((( 0.01195 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + (((((((( 0.01195 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.01195 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) + (( 0.04106 *  s_q_panda_joint1_) *  s_q_panda_joint3_)) - ((( 0.04106 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint5_)) + ((((( 0.34556 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.34556 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_)) + ((((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) - ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) - (( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint3_));
  (*this)(3,3) = (((((((((( 0.04106 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.04106 *  s_q_panda_joint1_) *  s_q_panda_joint3_)) *  s_q_panda_joint4_) - ((( 0.04106 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  s_q_panda_joint5_) + ((((((( 0.01195 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.01195 *  s_q_panda_joint1_) *  s_q_panda_joint3_)) *  s_q_panda_joint4_) - ((( 0.01195 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) + (((((- 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.34556 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_)) + ((((( 0.34556 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.34556 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_));
  (*this)(3,4) = (((((((( 0.01195 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_) + ((((( 0.01195 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.01195 *  s_q_panda_joint1_) *  s_q_panda_joint3_)) *  c_q_panda_joint4_)) + ((( 0.04106 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) + (( 0.04106 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + (((((((- 0.04106 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_) + (((( 0.04106 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.04106 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) + ((( 0.01195 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) + (( 0.01195 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint5_));
  (*this)(4,0) = (((((((((((((- 0.04106 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_) + (((( 0.04106 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.04106 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) + ((( 0.01195 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) + (( 0.01195 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + (((((((- 0.01195 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_) + (((( 0.01195 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.01195 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) - ((( 0.04106 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) - (( 0.04106 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint5_)) + ((((( 0.34556 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.34556 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_)) + ((((( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.34556 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_)) - (( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint3_)) + ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.316 *  c_q_panda_joint1_) *  s_q_panda_joint2_));
  (*this)(4,1) = (((((((((((- 0.04106 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint4_) + (((( 0.04106 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_)) - ((( 0.01195 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((((- 0.01195 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint4_) + (((( 0.01195 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_)) + ((( 0.04106 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint3_)) *  c_q_panda_joint5_)) + ((((( 0.34556 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_)) *  s_q_panda_joint4_)) + ((((( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) + (( 0.34556 *  s_q_panda_joint1_) *  c_q_panda_joint2_)) *  c_q_panda_joint4_)) - ((( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.316 *  s_q_panda_joint1_) *  c_q_panda_joint2_));
  (*this)(4,2) = ((((((((((((( 0.04106 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.04106 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) + (( 0.01195 *  c_q_panda_joint1_) *  s_q_panda_joint3_)) + ((( 0.01195 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + (((((((( 0.01195 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.01195 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - (( 0.04106 *  c_q_panda_joint1_) *  s_q_panda_joint3_)) - ((( 0.04106 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint5_)) + ((((( 0.34556 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.34556 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_)) + ((((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) - ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) + (( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint3_));
  (*this)(4,3) = ((((((((( 0.04106 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.04106 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) - ((( 0.04106 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  s_q_panda_joint5_) + (((((( 0.01195 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.01195 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) - ((( 0.01195 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) + ((((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.34556 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_)) + (((((- 0.34556 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.34556 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_));
  (*this)(4,4) = (((((((( 0.01195 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_) + (((( 0.01195 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.01195 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) + ((( 0.04106 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) - (( 0.04106 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + (((((((- 0.04106 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_) + ((((- 0.04106 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.04106 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) + ((( 0.01195 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) - (( 0.01195 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint5_));
  (*this)(5,1) = (((((((((( 0.04106 *  s_q_panda_joint2_) *  s_q_panda_joint4_) + ((( 0.04106 *  c_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_)) - (( 0.01195 *  c_q_panda_joint2_) *  s_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((( 0.01195 *  s_q_panda_joint2_) *  s_q_panda_joint4_) + ((( 0.01195 *  c_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_)) + (( 0.04106 *  c_q_panda_joint2_) *  s_q_panda_joint3_)) *  c_q_panda_joint5_)) + (((( 0.34556 *  c_q_panda_joint2_) *  c_q_panda_joint3_) + ( 0.0825 *  s_q_panda_joint2_)) *  s_q_panda_joint4_)) + (((( 0.0825 *  c_q_panda_joint2_) *  c_q_panda_joint3_) - ( 0.34556 *  s_q_panda_joint2_)) *  c_q_panda_joint4_)) - (( 0.0825 *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - ( 0.316 *  s_q_panda_joint2_));
  (*this)(5,2) = (((((((((- 0.04106 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  c_q_panda_joint4_) - (( 0.01195 *  s_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + (((( 0.04106 *  s_q_panda_joint2_) *  c_q_panda_joint3_) - ((( 0.01195 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) - ((( 0.34556 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint4_)) - ((( 0.0825 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  c_q_panda_joint4_)) + (( 0.0825 *  s_q_panda_joint2_) *  s_q_panda_joint3_));
  (*this)(5,3) = ((((((((- 0.04106 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint4_) - (( 0.04106 *  c_q_panda_joint2_) *  c_q_panda_joint4_)) *  s_q_panda_joint5_) + (((((- 0.01195 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint4_) - (( 0.01195 *  c_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) + ((((- 0.0825 *  s_q_panda_joint2_) *  c_q_panda_joint3_) - ( 0.34556 *  c_q_panda_joint2_)) *  s_q_panda_joint4_)) + (((( 0.34556 *  s_q_panda_joint2_) *  c_q_panda_joint3_) - ( 0.0825 *  c_q_panda_joint2_)) *  c_q_panda_joint4_));
  (*this)(5,4) = (((((( 0.01195 *  c_q_panda_joint2_) *  s_q_panda_joint4_) - ((( 0.01195 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_)) - (( 0.04106 *  s_q_panda_joint2_) *  s_q_panda_joint3_)) *  s_q_panda_joint5_) + (((((- 0.04106 *  c_q_panda_joint2_) *  s_q_panda_joint4_) + ((( 0.04106 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_)) - (( 0.01195 *  s_q_panda_joint2_) *  s_q_panda_joint3_)) *  c_q_panda_joint5_));
  return *this;
}
template <typename TRAIT>
iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link6_COM::Type_fr_table_J_fr_panda_link6_COM()
{
  (*this)(0,0) = 0;
  (*this)(1,0) = 0;
  (*this)(2,0) = 1.0;
  (*this)(2,1) = 0;
  (*this)(5,0) = 0;
}

template <typename TRAIT>
const typename iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link6_COM& iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link6_COM::update(const JState& jState) {
  Scalar s_q_panda_joint1_;
  Scalar s_q_panda_joint2_;
  Scalar s_q_panda_joint3_;
  Scalar s_q_panda_joint4_;
  Scalar s_q_panda_joint5_;
  Scalar s_q_panda_joint6_;
  Scalar c_q_panda_joint1_;
  Scalar c_q_panda_joint2_;
  Scalar c_q_panda_joint3_;
  Scalar c_q_panda_joint4_;
  Scalar c_q_panda_joint5_;
  Scalar c_q_panda_joint6_;

  s_q_panda_joint1_ = TRAIT::sin( jState(PANDA_JOINT1));
  s_q_panda_joint2_ = TRAIT::sin( jState(PANDA_JOINT2));
  s_q_panda_joint3_ = TRAIT::sin( jState(PANDA_JOINT3));
  s_q_panda_joint4_ = TRAIT::sin( jState(PANDA_JOINT4));
  s_q_panda_joint5_ = TRAIT::sin( jState(PANDA_JOINT5));
  s_q_panda_joint6_ = TRAIT::sin( jState(PANDA_JOINT6));
  c_q_panda_joint1_ = TRAIT::cos( jState(PANDA_JOINT1));
  c_q_panda_joint2_ = TRAIT::cos( jState(PANDA_JOINT2));
  c_q_panda_joint3_ = TRAIT::cos( jState(PANDA_JOINT3));
  c_q_panda_joint4_ = TRAIT::cos( jState(PANDA_JOINT4));
  c_q_panda_joint5_ = TRAIT::cos( jState(PANDA_JOINT5));
  c_q_panda_joint6_ = TRAIT::cos( jState(PANDA_JOINT6));

  (*this)(0,1) = - s_q_panda_joint1_;
  (*this)(0,2) = ( c_q_panda_joint1_ *  s_q_panda_joint2_);
  (*this)(0,3) = ((( c_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) + ( s_q_panda_joint1_ *  c_q_panda_joint3_));
  (*this)(0,4) = (((( s_q_panda_joint1_ *  s_q_panda_joint3_) - (( c_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + (( c_q_panda_joint1_ *  s_q_panda_joint2_) *  c_q_panda_joint4_));
  (*this)(0,5) = ((((( c_q_panda_joint1_ *  s_q_panda_joint2_) *  s_q_panda_joint4_) + (((( c_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_) - ( s_q_panda_joint1_ *  s_q_panda_joint3_)) *  c_q_panda_joint4_)) *  s_q_panda_joint5_) + (((( c_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) + ( s_q_panda_joint1_ *  c_q_panda_joint3_)) *  c_q_panda_joint5_));
  (*this)(1,1) =  c_q_panda_joint1_;
  (*this)(1,2) = ( s_q_panda_joint1_ *  s_q_panda_joint2_);
  (*this)(1,3) = ((( s_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) - ( c_q_panda_joint1_ *  c_q_panda_joint3_));
  (*this)(1,4) = ((((- c_q_panda_joint1_ *  s_q_panda_joint3_) - (( s_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + (( s_q_panda_joint1_ *  s_q_panda_joint2_) *  c_q_panda_joint4_));
  (*this)(1,5) = ((((( s_q_panda_joint1_ *  s_q_panda_joint2_) *  s_q_panda_joint4_) + ((( c_q_panda_joint1_ *  s_q_panda_joint3_) + (( s_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) *  s_q_panda_joint5_) + (((( s_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) - ( c_q_panda_joint1_ *  c_q_panda_joint3_)) *  c_q_panda_joint5_));
  (*this)(2,2) =  c_q_panda_joint2_;
  (*this)(2,3) = (- s_q_panda_joint2_ *  s_q_panda_joint3_);
  (*this)(2,4) = ((( s_q_panda_joint2_ *  c_q_panda_joint3_) *  s_q_panda_joint4_) + ( c_q_panda_joint2_ *  c_q_panda_joint4_));
  (*this)(2,5) = (((( c_q_panda_joint2_ *  s_q_panda_joint4_) - (( s_q_panda_joint2_ *  c_q_panda_joint3_) *  c_q_panda_joint4_)) *  s_q_panda_joint5_) - (( s_q_panda_joint2_ *  s_q_panda_joint3_) *  c_q_panda_joint5_));
  (*this)(3,0) = ((((((((((((((((( 0.01412 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.01412 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((((- 0.01412 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.01412 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.01412 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  c_q_panda_joint5_)) + (((( 0.06015 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.06015 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_)) - ((( 0.06015 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  s_q_panda_joint6_) + ((((((((( 0.06015 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.06015 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((((- 0.06015 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.06015 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.06015 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  c_q_panda_joint5_)) + ((((- 0.01412 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.01412 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_)) + ((( 0.01412 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint6_)) + ((((( 0.01052 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_) + (((( 0.01052 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.01052 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) *  s_q_panda_joint5_)) + ((((( 0.01052 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.01052 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint5_)) + ((((( 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_)) + ((((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_)) - (( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint3_)) - ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.316 *  s_q_panda_joint1_) *  s_q_panda_joint2_));
  (*this)(3,1) = ((((((((((((((( 0.01412 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint5_) + ((((( 0.01412 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint4_) - (((( 0.01412 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) + (((( 0.06015 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint4_)) + ((( 0.06015 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint4_)) *  s_q_panda_joint6_) + (((((((( 0.06015 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint5_) + ((((( 0.06015 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint4_) - (((( 0.06015 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) - (((( 0.01412 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint4_)) - ((( 0.01412 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint6_)) + (((((( 0.01052 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_) - ((( 0.01052 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint4_)) *  s_q_panda_joint5_)) + (((( 0.01052 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  c_q_panda_joint5_)) + ((((( 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_)) *  s_q_panda_joint4_)) + ((((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) + (( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint2_)) *  c_q_panda_joint4_)) - ((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.316 *  c_q_panda_joint1_) *  c_q_panda_joint2_));
  (*this)(3,2) = (((((((((((((( 0.01412 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.01412 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((((- 0.01412 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.01412 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) *  c_q_panda_joint5_)) + ((((( 0.06015 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.06015 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_)) *  s_q_panda_joint6_) + ((((((( 0.06015 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.06015 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((((- 0.06015 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.06015 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) *  c_q_panda_joint5_)) + (((((- 0.01412 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.01412 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_)) *  c_q_panda_joint6_)) + (((((( 0.01052 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.01052 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) *  s_q_panda_joint5_)) + (((( 0.01052 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.01052 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint5_)) + ((((( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_)) + ((((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) - ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) - (( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint3_));
  (*this)(3,3) = ((((((((((((( 0.01412 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.01412 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + ((( 0.01412 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_) - ((( 0.06015 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) + (((( 0.06015 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.06015 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) *  s_q_panda_joint6_) + ((((((((( 0.06015 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.06015 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + ((( 0.06015 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_) + ((( 0.01412 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) + ((((( 0.01412 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.01412 *  s_q_panda_joint1_) *  s_q_panda_joint3_)) *  c_q_panda_joint4_)) *  c_q_panda_joint6_)) + ((((((( 0.01052 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.01052 *  s_q_panda_joint1_) *  s_q_panda_joint3_)) *  s_q_panda_joint4_) - ((( 0.01052 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  s_q_panda_joint5_)) + (((((- 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_)) + ((((( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_));
  (*this)(3,4) = ((((((((((( 0.01412 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.01412 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.01412 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  s_q_panda_joint5_) + (((((- 0.01412 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.01412 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint5_)) *  s_q_panda_joint6_) + (((((((( 0.06015 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.06015 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.06015 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  s_q_panda_joint5_) + (((((- 0.06015 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.06015 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint5_)) *  c_q_panda_joint6_)) + ((((( 0.01052 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.01052 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_)) + (((((( 0.01052 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.01052 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.01052 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  c_q_panda_joint5_));
  (*this)(3,5) = (((((((((( 0.06015 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.06015 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + (((((( 0.06015 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.06015 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.06015 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  c_q_panda_joint5_)) + (((( 0.01412 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.01412 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_)) + ((( 0.01412 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  s_q_panda_joint6_) + (((((((((- 0.01412 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.01412 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((( 0.01412 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_) + ((((( 0.01412 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.01412 *  s_q_panda_joint1_) *  s_q_panda_joint3_)) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) + (((( 0.06015 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.06015 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_)) + ((( 0.06015 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint6_));
  (*this)(4,0) = (((((((((((((((((- 0.01412 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.01412 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((( 0.01412 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_) + ((((( 0.01412 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.01412 *  s_q_panda_joint1_) *  s_q_panda_joint3_)) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) + (((( 0.06015 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.06015 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_)) + ((( 0.06015 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  s_q_panda_joint6_) + (((((((((- 0.06015 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.06015 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((( 0.06015 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_) + ((((( 0.06015 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.06015 *  s_q_panda_joint1_) *  s_q_panda_joint3_)) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) + ((((( 0.01412 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.01412 *  s_q_panda_joint1_) *  s_q_panda_joint3_)) *  s_q_panda_joint4_)) - ((( 0.01412 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint6_)) + (((((( 0.01052 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.01052 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.01052 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  s_q_panda_joint5_)) + (((((- 0.01052 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.01052 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint5_)) + ((((( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_)) + ((((( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_)) - (( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint3_)) + ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.316 *  c_q_panda_joint1_) *  s_q_panda_joint2_));
  (*this)(4,1) = ((((((((((((((( 0.01412 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint5_) + ((((( 0.01412 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint4_) - (((( 0.01412 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) + (((( 0.06015 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint4_)) + ((( 0.06015 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint4_)) *  s_q_panda_joint6_) + (((((((( 0.06015 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint5_) + ((((( 0.06015 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint4_) - (((( 0.06015 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) - (((( 0.01412 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint4_)) - ((( 0.01412 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint6_)) + (((((( 0.01052 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_) - ((( 0.01052 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint4_)) *  s_q_panda_joint5_)) + (((( 0.01052 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  c_q_panda_joint5_)) + ((((( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_)) *  s_q_panda_joint4_)) + ((((( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) + (( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint2_)) *  c_q_panda_joint4_)) - ((( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.316 *  s_q_panda_joint1_) *  c_q_panda_joint2_));
  (*this)(4,2) = ((((((((((((((- 0.01412 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.01412 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((( 0.01412 *  c_q_panda_joint1_) *  c_q_panda_joint3_) - ((( 0.01412 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) *  c_q_panda_joint4_) *  c_q_panda_joint5_)) + ((((( 0.06015 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.06015 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_)) *  s_q_panda_joint6_) + (((((((- 0.06015 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.06015 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((( 0.06015 *  c_q_panda_joint1_) *  c_q_panda_joint3_) - ((( 0.06015 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) *  c_q_panda_joint4_) *  c_q_panda_joint5_)) + (((( 0.01412 *  c_q_panda_joint1_) *  c_q_panda_joint3_) - ((( 0.01412 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) *  s_q_panda_joint4_)) *  c_q_panda_joint6_)) + (((((( 0.01052 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.01052 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) *  s_q_panda_joint5_)) + ((((- 0.01052 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.01052 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint5_)) + ((((( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_)) + ((((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) - ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) + (( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint3_));
  (*this)(4,3) = (((((((((((((- 0.01412 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.01412 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + ((( 0.01412 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_) - ((( 0.06015 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) + ((((- 0.06015 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.06015 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) *  s_q_panda_joint6_) + (((((((((- 0.06015 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.06015 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + ((( 0.06015 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_) + ((( 0.01412 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) + (((( 0.01412 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.01412 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) *  c_q_panda_joint6_)) + (((((( 0.01052 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.01052 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) - ((( 0.01052 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  s_q_panda_joint5_)) + ((((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_)) + (((((- 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_));
  (*this)(4,4) = (((((((((((- 0.01412 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.01412 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.01412 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  s_q_panda_joint5_) + (((( 0.01412 *  c_q_panda_joint1_) *  c_q_panda_joint3_) - ((( 0.01412 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) *  c_q_panda_joint5_)) *  s_q_panda_joint6_) + ((((((((- 0.06015 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.06015 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.06015 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  s_q_panda_joint5_) + (((( 0.06015 *  c_q_panda_joint1_) *  c_q_panda_joint3_) - ((( 0.06015 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) *  c_q_panda_joint5_)) *  c_q_panda_joint6_)) + ((((( 0.01052 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.01052 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_)) + ((((((- 0.01052 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.01052 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.01052 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  c_q_panda_joint5_));
  (*this)(4,5) = (((((((((( 0.06015 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.06015 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((((- 0.06015 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.06015 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.06015 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  c_q_panda_joint5_)) + ((((- 0.01412 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.01412 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_)) + ((( 0.01412 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  s_q_panda_joint6_) + (((((((( 0.01412 *  c_q_panda_joint1_) *  c_q_panda_joint3_) - ((( 0.01412 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((( 0.01412 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_) + (((( 0.01412 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.01412 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) + ((((- 0.06015 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.06015 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_)) + ((( 0.06015 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint6_));
  (*this)(5,1) = (((((((((((((( 0.01412 *  c_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint5_) + ((((- 0.01412 *  s_q_panda_joint2_) *  s_q_panda_joint4_) - ((( 0.01412 *  c_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) + ((( 0.06015 *  c_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint4_)) - (( 0.06015 *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  s_q_panda_joint6_) + ((((((( 0.06015 *  c_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint5_) + ((((- 0.06015 *  s_q_panda_joint2_) *  s_q_panda_joint4_) - ((( 0.06015 *  c_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) - ((( 0.01412 *  c_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint4_)) + (( 0.01412 *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint6_)) + (((( 0.01052 *  s_q_panda_joint2_) *  s_q_panda_joint4_) + ((( 0.01052 *  c_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_)) *  s_q_panda_joint5_)) + ((( 0.01052 *  c_q_panda_joint2_) *  s_q_panda_joint3_) *  c_q_panda_joint5_)) + (((( 0.384 *  c_q_panda_joint2_) *  c_q_panda_joint3_) + ( 0.0825 *  s_q_panda_joint2_)) *  s_q_panda_joint4_)) + (((( 0.0825 *  c_q_panda_joint2_) *  c_q_panda_joint3_) - ( 0.384 *  s_q_panda_joint2_)) *  c_q_panda_joint4_)) - (( 0.0825 *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - ( 0.316 *  s_q_panda_joint2_));
  (*this)(5,2) = (((((((((((( 0.01412 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint5_) + (((( 0.01412 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  c_q_panda_joint4_) *  c_q_panda_joint5_)) - ((( 0.06015 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint4_)) *  s_q_panda_joint6_) + (((((( 0.06015 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint5_) + (((( 0.06015 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  c_q_panda_joint4_) *  c_q_panda_joint5_)) + ((( 0.01412 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint4_)) *  c_q_panda_joint6_)) - (((( 0.01052 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  c_q_panda_joint4_) *  s_q_panda_joint5_)) + ((( 0.01052 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint5_)) - ((( 0.384 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint4_)) - ((( 0.0825 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  c_q_panda_joint4_)) + (( 0.0825 *  s_q_panda_joint2_) *  s_q_panda_joint3_));
  (*this)(5,3) = (((((((((((( 0.01412 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint4_) + (( 0.01412 *  c_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_) - (( 0.06015 *  c_q_panda_joint2_) *  s_q_panda_joint4_)) + ((( 0.06015 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_)) *  s_q_panda_joint6_) + (((((((( 0.06015 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint4_) + (( 0.06015 *  c_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_) + (( 0.01412 *  c_q_panda_joint2_) *  s_q_panda_joint4_)) - ((( 0.01412 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_)) *  c_q_panda_joint6_)) + (((((- 0.01052 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint4_) - (( 0.01052 *  c_q_panda_joint2_) *  c_q_panda_joint4_)) *  s_q_panda_joint5_)) + ((((- 0.0825 *  s_q_panda_joint2_) *  c_q_panda_joint3_) - ( 0.384 *  c_q_panda_joint2_)) *  s_q_panda_joint4_)) + (((( 0.384 *  s_q_panda_joint2_) *  c_q_panda_joint3_) - ( 0.0825 *  c_q_panda_joint2_)) *  c_q_panda_joint4_));
  (*this)(5,4) = (((((((((( 0.01412 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_) - (( 0.01412 *  c_q_panda_joint2_) *  s_q_panda_joint4_)) *  s_q_panda_joint5_) + ((( 0.01412 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  c_q_panda_joint5_)) *  s_q_panda_joint6_) + ((((((( 0.06015 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_) - (( 0.06015 *  c_q_panda_joint2_) *  s_q_panda_joint4_)) *  s_q_panda_joint5_) + ((( 0.06015 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  c_q_panda_joint5_)) *  c_q_panda_joint6_)) - ((( 0.01052 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint5_)) + ((((( 0.01052 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_) - (( 0.01052 *  c_q_panda_joint2_) *  s_q_panda_joint4_)) *  c_q_panda_joint5_));
  (*this)(5,5) = ((((((((- 0.06015 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint5_) + ((((( 0.06015 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_) - (( 0.06015 *  c_q_panda_joint2_) *  s_q_panda_joint4_)) *  c_q_panda_joint5_)) + ((( 0.01412 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint4_)) + (( 0.01412 *  c_q_panda_joint2_) *  c_q_panda_joint4_)) *  s_q_panda_joint6_) + ((((((( 0.01412 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint5_) + (((( 0.01412 *  c_q_panda_joint2_) *  s_q_panda_joint4_) - ((( 0.01412 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) + ((( 0.06015 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint4_)) + (( 0.06015 *  c_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint6_));
  return *this;
}

template <typename TRAIT>
iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link7_COM::Type_fr_table_J_fr_panda_link7_COM()
{
  (*this)(0,0) = 0;
  (*this)(1,0) = 0;
  (*this)(2,0) = 1.0;
  (*this)(2,1) = 0;
  (*this)(3,6) = 0;
  (*this)(4,6) = 0;
  (*this)(5,0) = 0;
  (*this)(5,6) = 0;
}

template <typename TRAIT>
const typename iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link7_COM& iit::Franka::tpl::Jacobians<TRAIT>::Type_fr_table_J_fr_panda_link7_COM::update(const JState& jState) {
  Scalar s_q_panda_joint1_;
  Scalar s_q_panda_joint2_;
  Scalar s_q_panda_joint3_;
  Scalar s_q_panda_joint4_;
  Scalar s_q_panda_joint5_;
  Scalar s_q_panda_joint6_;
  Scalar c_q_panda_joint1_;
  Scalar c_q_panda_joint2_;
  Scalar c_q_panda_joint3_;
  Scalar c_q_panda_joint4_;
  Scalar c_q_panda_joint5_;
  Scalar c_q_panda_joint6_;

  s_q_panda_joint1_ = TRAIT::sin( jState(PANDA_JOINT1));
  s_q_panda_joint2_ = TRAIT::sin( jState(PANDA_JOINT2));
  s_q_panda_joint3_ = TRAIT::sin( jState(PANDA_JOINT3));
  s_q_panda_joint4_ = TRAIT::sin( jState(PANDA_JOINT4));
  s_q_panda_joint5_ = TRAIT::sin( jState(PANDA_JOINT5));
  s_q_panda_joint6_ = TRAIT::sin( jState(PANDA_JOINT6));
  c_q_panda_joint1_ = TRAIT::cos( jState(PANDA_JOINT1));
  c_q_panda_joint2_ = TRAIT::cos( jState(PANDA_JOINT2));
  c_q_panda_joint3_ = TRAIT::cos( jState(PANDA_JOINT3));
  c_q_panda_joint4_ = TRAIT::cos( jState(PANDA_JOINT4));
  c_q_panda_joint5_ = TRAIT::cos( jState(PANDA_JOINT5));
  c_q_panda_joint6_ = TRAIT::cos( jState(PANDA_JOINT6));

  (*this)(0,1) = - s_q_panda_joint1_;
  (*this)(0,2) = ( c_q_panda_joint1_ *  s_q_panda_joint2_);
  (*this)(0,3) = ((( c_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) + ( s_q_panda_joint1_ *  c_q_panda_joint3_));
  (*this)(0,4) = (((( s_q_panda_joint1_ *  s_q_panda_joint3_) - (( c_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + (( c_q_panda_joint1_ *  s_q_panda_joint2_) *  c_q_panda_joint4_));
  (*this)(0,5) = ((((( c_q_panda_joint1_ *  s_q_panda_joint2_) *  s_q_panda_joint4_) + (((( c_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_) - ( s_q_panda_joint1_ *  s_q_panda_joint3_)) *  c_q_panda_joint4_)) *  s_q_panda_joint5_) + (((( c_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) + ( s_q_panda_joint1_ *  c_q_panda_joint3_)) *  c_q_panda_joint5_));
  (*this)(0,6) = (((((((- c_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) - ( s_q_panda_joint1_ *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + (((( c_q_panda_joint1_ *  s_q_panda_joint2_) *  s_q_panda_joint4_) + (((( c_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_) - ( s_q_panda_joint1_ *  s_q_panda_joint3_)) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) *  s_q_panda_joint6_) + (((((( c_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_) - ( s_q_panda_joint1_ *  s_q_panda_joint3_)) *  s_q_panda_joint4_) - (( c_q_panda_joint1_ *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint6_));
  (*this)(1,1) =  c_q_panda_joint1_;
  (*this)(1,2) = ( s_q_panda_joint1_ *  s_q_panda_joint2_);
  (*this)(1,3) = ((( s_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) - ( c_q_panda_joint1_ *  c_q_panda_joint3_));
  (*this)(1,4) = ((((- c_q_panda_joint1_ *  s_q_panda_joint3_) - (( s_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + (( s_q_panda_joint1_ *  s_q_panda_joint2_) *  c_q_panda_joint4_));
  (*this)(1,5) = ((((( s_q_panda_joint1_ *  s_q_panda_joint2_) *  s_q_panda_joint4_) + ((( c_q_panda_joint1_ *  s_q_panda_joint3_) + (( s_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) *  s_q_panda_joint5_) + (((( s_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_) - ( c_q_panda_joint1_ *  c_q_panda_joint3_)) *  c_q_panda_joint5_));
  (*this)(1,6) = (((((( c_q_panda_joint1_ *  c_q_panda_joint3_) - (( s_q_panda_joint1_ *  c_q_panda_joint2_) *  s_q_panda_joint3_)) *  s_q_panda_joint5_) + (((( s_q_panda_joint1_ *  s_q_panda_joint2_) *  s_q_panda_joint4_) + ((( c_q_panda_joint1_ *  s_q_panda_joint3_) + (( s_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) *  s_q_panda_joint6_) + ((((( c_q_panda_joint1_ *  s_q_panda_joint3_) + (( s_q_panda_joint1_ *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) - (( s_q_panda_joint1_ *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint6_));
  (*this)(2,2) =  c_q_panda_joint2_;
  (*this)(2,3) = (- s_q_panda_joint2_ *  s_q_panda_joint3_);
  (*this)(2,4) = ((( s_q_panda_joint2_ *  c_q_panda_joint3_) *  s_q_panda_joint4_) + ( c_q_panda_joint2_ *  c_q_panda_joint4_));
  (*this)(2,5) = (((( c_q_panda_joint2_ *  s_q_panda_joint4_) - (( s_q_panda_joint2_ *  c_q_panda_joint3_) *  c_q_panda_joint4_)) *  s_q_panda_joint5_) - (( s_q_panda_joint2_ *  s_q_panda_joint3_) *  c_q_panda_joint5_));
  (*this)(2,6) = ((((( s_q_panda_joint2_ *  s_q_panda_joint3_) *  s_q_panda_joint5_) + ((( c_q_panda_joint2_ *  s_q_panda_joint4_) - (( s_q_panda_joint2_ *  c_q_panda_joint3_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) *  s_q_panda_joint6_) + ((((- s_q_panda_joint2_ *  c_q_panda_joint3_) *  s_q_panda_joint4_) - ( c_q_panda_joint2_ *  c_q_panda_joint4_)) *  c_q_panda_joint6_));
  (*this)(3,0) = (((((((((((( 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) - ((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  s_q_panda_joint6_) + ((((((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((((- 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  c_q_panda_joint5_)) *  c_q_panda_joint6_)) + ((((( 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_)) + ((((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_)) - (( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint3_)) - ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.316 *  s_q_panda_joint1_) *  s_q_panda_joint2_));
  (*this)(3,1) = ((((((((((( 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint4_) + ((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint4_)) *  s_q_panda_joint6_) + (((((( 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint5_) + ((((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint4_) - (((( 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) *  c_q_panda_joint6_)) + ((((( 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_)) *  s_q_panda_joint4_)) + ((((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) + (( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint2_)) *  c_q_panda_joint4_)) - ((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.316 *  c_q_panda_joint1_) *  c_q_panda_joint2_));
  (*this)(3,2) = ((((((((((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) *  s_q_panda_joint6_) + (((((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((((- 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) *  c_q_panda_joint5_)) *  c_q_panda_joint6_)) + ((((( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_)) + ((((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) - ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) - (( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint3_));
  (*this)(3,3) = ((((((((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  s_q_panda_joint6_) + ((((((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + ((( 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_) *  c_q_panda_joint6_)) + (((((- 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_)) + ((((( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_));
  (*this)(3,4) = (((((((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  s_q_panda_joint5_) + (((((- 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint5_)) *  c_q_panda_joint6_);
  (*this)(3,5) = (((((((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) + (( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + (((((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  c_q_panda_joint5_)) *  s_q_panda_joint6_) + (((((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + ((( 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint6_));
  (*this)(4,0) = (((((((((((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + ((( 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  s_q_panda_joint6_) + (((((((- 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((( 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_) + ((((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint3_)) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) *  c_q_panda_joint6_)) + ((((( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_)) + ((((( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_)) - (( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint3_)) + ((( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.316 *  c_q_panda_joint1_) *  s_q_panda_joint2_));
  (*this)(4,1) = ((((((((((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint4_) + ((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint4_)) *  s_q_panda_joint6_) + (((((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint5_) + ((((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint4_) - (((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) *  c_q_panda_joint6_)) + ((((( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) - (( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_)) *  s_q_panda_joint4_)) + ((((( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_) + (( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint2_)) *  c_q_panda_joint4_)) - ((( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint3_)) + (( 0.316 *  s_q_panda_joint1_) *  c_q_panda_joint2_));
  (*this)(4,2) = ((((((((((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) *  s_q_panda_joint6_) + ((((((- 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint3_) - ((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) *  c_q_panda_joint4_) *  c_q_panda_joint5_)) *  c_q_panda_joint6_)) + ((((( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.384 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_)) + ((((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_)) - ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) + (( 0.0825 *  c_q_panda_joint1_) *  c_q_panda_joint3_));
  (*this)(4,3) = (((((((((- 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  s_q_panda_joint6_) + (((((((- 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + ((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_) *  c_q_panda_joint6_)) + ((((( 0.0825 *  c_q_panda_joint1_) *  s_q_panda_joint3_) + ((( 0.0825 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.384 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  s_q_panda_joint4_)) + (((((- 0.384 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.384 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - (( 0.0825 *  s_q_panda_joint1_) *  s_q_panda_joint2_)) *  c_q_panda_joint4_));
  (*this)(4,4) = ((((((((- 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  s_q_panda_joint5_) + (((( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint3_) - ((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_)) *  c_q_panda_joint5_)) *  c_q_panda_joint6_);
  (*this)(4,5) = (((((((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  s_q_panda_joint3_) - (( 0.088 *  c_q_panda_joint1_) *  c_q_panda_joint3_)) *  s_q_panda_joint5_) + ((((((- 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  c_q_panda_joint4_) - ((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  s_q_panda_joint4_)) *  c_q_panda_joint5_)) *  s_q_panda_joint6_) + ((((((- 0.088 *  c_q_panda_joint1_) *  s_q_panda_joint3_) - ((( 0.088 *  s_q_panda_joint1_) *  c_q_panda_joint2_) *  c_q_panda_joint3_)) *  s_q_panda_joint4_) + ((( 0.088 *  s_q_panda_joint1_) *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint6_));
  (*this)(5,1) = (((((((((( 0.088 *  c_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint4_) - (( 0.088 *  s_q_panda_joint2_) *  c_q_panda_joint4_)) *  s_q_panda_joint6_) + ((((( 0.088 *  c_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint5_) + ((((- 0.088 *  s_q_panda_joint2_) *  s_q_panda_joint4_) - ((( 0.088 *  c_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_)) *  c_q_panda_joint6_)) + (((( 0.384 *  c_q_panda_joint2_) *  c_q_panda_joint3_) + ( 0.0825 *  s_q_panda_joint2_)) *  s_q_panda_joint4_)) + (((( 0.0825 *  c_q_panda_joint2_) *  c_q_panda_joint3_) - ( 0.384 *  s_q_panda_joint2_)) *  c_q_panda_joint4_)) - (( 0.0825 *  c_q_panda_joint2_) *  c_q_panda_joint3_)) - ( 0.316 *  s_q_panda_joint2_));
  (*this)(5,2) = ((((((((- 0.088 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint4_) *  s_q_panda_joint6_) + ((((( 0.088 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint5_) + (((( 0.088 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  c_q_panda_joint4_) *  c_q_panda_joint5_)) *  c_q_panda_joint6_)) - ((( 0.384 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint4_)) - ((( 0.0825 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  c_q_panda_joint4_)) + (( 0.0825 *  s_q_panda_joint2_) *  s_q_panda_joint3_));
  (*this)(5,3) = (((((((( 0.088 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_) - (( 0.088 *  c_q_panda_joint2_) *  s_q_panda_joint4_)) *  s_q_panda_joint6_) + (((((( 0.088 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint4_) + (( 0.088 *  c_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint5_) *  c_q_panda_joint6_)) + ((((- 0.0825 *  s_q_panda_joint2_) *  c_q_panda_joint3_) - ( 0.384 *  c_q_panda_joint2_)) *  s_q_panda_joint4_)) + (((( 0.384 *  s_q_panda_joint2_) *  c_q_panda_joint3_) - ( 0.0825 *  c_q_panda_joint2_)) *  c_q_panda_joint4_));
  (*this)(5,4) = ((((((( 0.088 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_) - (( 0.088 *  c_q_panda_joint2_) *  s_q_panda_joint4_)) *  s_q_panda_joint5_) + ((( 0.088 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  c_q_panda_joint5_)) *  c_q_panda_joint6_);
  (*this)(5,5) = (((((((( 0.088 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  c_q_panda_joint4_) - (( 0.088 *  c_q_panda_joint2_) *  s_q_panda_joint4_)) *  c_q_panda_joint5_) - ((( 0.088 *  s_q_panda_joint2_) *  s_q_panda_joint3_) *  s_q_panda_joint5_)) *  s_q_panda_joint6_) + ((((( 0.088 *  s_q_panda_joint2_) *  c_q_panda_joint3_) *  s_q_panda_joint4_) + (( 0.088 *  c_q_panda_joint2_) *  c_q_panda_joint4_)) *  c_q_panda_joint6_));
  return *this;
}
