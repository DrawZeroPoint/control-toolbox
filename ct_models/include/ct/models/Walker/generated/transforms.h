#ifndef WALKER_TRANSFORMS_H_
#define WALKER_TRANSFORMS_H_

#include <Eigen/Dense>
#include <iit/rbd/TransformsBase.h>
#include "declarations.h"
#include <iit/rbd/traits/DoubleTrait.h>
#include "kinematics_parameters.h"

namespace iit {
namespace Walker {

template<typename SCALAR, class M>
class TransformMotion : public iit::rbd::SpatialTransformBase<tpl::JointState<SCALAR>, M> {
public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
};

template<typename SCALAR, class M>
class TransformForce : public iit::rbd::SpatialTransformBase<tpl::JointState<SCALAR>, M> {
public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
};

template<typename SCALAR, class M>
class TransformHomogeneous : public iit::rbd::HomogeneousTransformBase<tpl::JointState<SCALAR>, M> {
public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
};

namespace tpl {


/**
 * The class for the 6-by-6 coordinates transformation matrices for
 * spatial motion vectors.
 */
template <typename TRAIT>
class MotionTransforms {
public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
    typedef typename TRAIT::Scalar Scalar;

    typedef JointState<Scalar> JState;
    class Dummy {};
    typedef typename TransformMotion<Scalar, Dummy>::MatrixType MatrixType;
public:
    class Type_fr_torso_X_fr_left_leg_l1 : public TransformMotion<Scalar, Type_fr_torso_X_fr_left_leg_l1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_l1();
        const Type_fr_torso_X_fr_left_leg_l1& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l1_X_fr_torso : public TransformMotion<Scalar, Type_fr_left_leg_l1_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l1_X_fr_torso();
        const Type_fr_left_leg_l1_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_l2 : public TransformMotion<Scalar, Type_fr_torso_X_fr_left_leg_l2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_l2();
        const Type_fr_torso_X_fr_left_leg_l2& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l2_X_fr_torso : public TransformMotion<Scalar, Type_fr_left_leg_l2_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l2_X_fr_torso();
        const Type_fr_left_leg_l2_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_l3 : public TransformMotion<Scalar, Type_fr_torso_X_fr_left_leg_l3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_l3();
        const Type_fr_torso_X_fr_left_leg_l3& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l3_X_fr_torso : public TransformMotion<Scalar, Type_fr_left_leg_l3_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l3_X_fr_torso();
        const Type_fr_left_leg_l3_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_l4 : public TransformMotion<Scalar, Type_fr_torso_X_fr_left_leg_l4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_l4();
        const Type_fr_torso_X_fr_left_leg_l4& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l4_X_fr_torso : public TransformMotion<Scalar, Type_fr_left_leg_l4_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l4_X_fr_torso();
        const Type_fr_left_leg_l4_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_l5 : public TransformMotion<Scalar, Type_fr_torso_X_fr_left_leg_l5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_l5();
        const Type_fr_torso_X_fr_left_leg_l5& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l5_X_fr_torso : public TransformMotion<Scalar, Type_fr_left_leg_l5_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l5_X_fr_torso();
        const Type_fr_left_leg_l5_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_l6 : public TransformMotion<Scalar, Type_fr_torso_X_fr_left_leg_l6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_l6();
        const Type_fr_torso_X_fr_left_leg_l6& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l6_X_fr_torso : public TransformMotion<Scalar, Type_fr_left_leg_l6_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l6_X_fr_torso();
        const Type_fr_left_leg_l6_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_l1 : public TransformMotion<Scalar, Type_fr_torso_X_fr_right_leg_l1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_l1();
        const Type_fr_torso_X_fr_right_leg_l1& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l1_X_fr_torso : public TransformMotion<Scalar, Type_fr_right_leg_l1_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l1_X_fr_torso();
        const Type_fr_right_leg_l1_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_l2 : public TransformMotion<Scalar, Type_fr_torso_X_fr_right_leg_l2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_l2();
        const Type_fr_torso_X_fr_right_leg_l2& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l2_X_fr_torso : public TransformMotion<Scalar, Type_fr_right_leg_l2_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l2_X_fr_torso();
        const Type_fr_right_leg_l2_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_l3 : public TransformMotion<Scalar, Type_fr_torso_X_fr_right_leg_l3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_l3();
        const Type_fr_torso_X_fr_right_leg_l3& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l3_X_fr_torso : public TransformMotion<Scalar, Type_fr_right_leg_l3_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l3_X_fr_torso();
        const Type_fr_right_leg_l3_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_l4 : public TransformMotion<Scalar, Type_fr_torso_X_fr_right_leg_l4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_l4();
        const Type_fr_torso_X_fr_right_leg_l4& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l4_X_fr_torso : public TransformMotion<Scalar, Type_fr_right_leg_l4_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l4_X_fr_torso();
        const Type_fr_right_leg_l4_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_l5 : public TransformMotion<Scalar, Type_fr_torso_X_fr_right_leg_l5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_l5();
        const Type_fr_torso_X_fr_right_leg_l5& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l5_X_fr_torso : public TransformMotion<Scalar, Type_fr_right_leg_l5_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l5_X_fr_torso();
        const Type_fr_right_leg_l5_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_l6 : public TransformMotion<Scalar, Type_fr_torso_X_fr_right_leg_l6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_l6();
        const Type_fr_torso_X_fr_right_leg_l6& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l6_X_fr_torso : public TransformMotion<Scalar, Type_fr_right_leg_l6_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l6_X_fr_torso();
        const Type_fr_right_leg_l6_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_j1 : public TransformMotion<Scalar, Type_fr_torso_X_fr_left_leg_j1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_j1();
        const Type_fr_torso_X_fr_left_leg_j1& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_j2 : public TransformMotion<Scalar, Type_fr_torso_X_fr_left_leg_j2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_j2();
        const Type_fr_torso_X_fr_left_leg_j2& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_j3 : public TransformMotion<Scalar, Type_fr_torso_X_fr_left_leg_j3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_j3();
        const Type_fr_torso_X_fr_left_leg_j3& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_j4 : public TransformMotion<Scalar, Type_fr_torso_X_fr_left_leg_j4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_j4();
        const Type_fr_torso_X_fr_left_leg_j4& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_j5 : public TransformMotion<Scalar, Type_fr_torso_X_fr_left_leg_j5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_j5();
        const Type_fr_torso_X_fr_left_leg_j5& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_j6 : public TransformMotion<Scalar, Type_fr_torso_X_fr_left_leg_j6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_j6();
        const Type_fr_torso_X_fr_left_leg_j6& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_j1 : public TransformMotion<Scalar, Type_fr_torso_X_fr_right_leg_j1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_j1();
        const Type_fr_torso_X_fr_right_leg_j1& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_j2 : public TransformMotion<Scalar, Type_fr_torso_X_fr_right_leg_j2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_j2();
        const Type_fr_torso_X_fr_right_leg_j2& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_j3 : public TransformMotion<Scalar, Type_fr_torso_X_fr_right_leg_j3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_j3();
        const Type_fr_torso_X_fr_right_leg_j3& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_j4 : public TransformMotion<Scalar, Type_fr_torso_X_fr_right_leg_j4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_j4();
        const Type_fr_torso_X_fr_right_leg_j4& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_j5 : public TransformMotion<Scalar, Type_fr_torso_X_fr_right_leg_j5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_j5();
        const Type_fr_torso_X_fr_right_leg_j5& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_j6 : public TransformMotion<Scalar, Type_fr_torso_X_fr_right_leg_j6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_j6();
        const Type_fr_torso_X_fr_right_leg_j6& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l2_X_fr_right_leg_l1 : public TransformMotion<Scalar, Type_fr_right_leg_l2_X_fr_right_leg_l1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l2_X_fr_right_leg_l1();
        const Type_fr_right_leg_l2_X_fr_right_leg_l1& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l1_X_fr_right_leg_l2 : public TransformMotion<Scalar, Type_fr_right_leg_l1_X_fr_right_leg_l2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l1_X_fr_right_leg_l2();
        const Type_fr_right_leg_l1_X_fr_right_leg_l2& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l3_X_fr_right_leg_l2 : public TransformMotion<Scalar, Type_fr_right_leg_l3_X_fr_right_leg_l2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l3_X_fr_right_leg_l2();
        const Type_fr_right_leg_l3_X_fr_right_leg_l2& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l2_X_fr_right_leg_l3 : public TransformMotion<Scalar, Type_fr_right_leg_l2_X_fr_right_leg_l3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l2_X_fr_right_leg_l3();
        const Type_fr_right_leg_l2_X_fr_right_leg_l3& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l4_X_fr_right_leg_l3 : public TransformMotion<Scalar, Type_fr_right_leg_l4_X_fr_right_leg_l3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l4_X_fr_right_leg_l3();
        const Type_fr_right_leg_l4_X_fr_right_leg_l3& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l3_X_fr_right_leg_l4 : public TransformMotion<Scalar, Type_fr_right_leg_l3_X_fr_right_leg_l4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l3_X_fr_right_leg_l4();
        const Type_fr_right_leg_l3_X_fr_right_leg_l4& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l5_X_fr_right_leg_l4 : public TransformMotion<Scalar, Type_fr_right_leg_l5_X_fr_right_leg_l4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l5_X_fr_right_leg_l4();
        const Type_fr_right_leg_l5_X_fr_right_leg_l4& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l4_X_fr_right_leg_l5 : public TransformMotion<Scalar, Type_fr_right_leg_l4_X_fr_right_leg_l5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l4_X_fr_right_leg_l5();
        const Type_fr_right_leg_l4_X_fr_right_leg_l5& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l6_X_fr_right_leg_l5 : public TransformMotion<Scalar, Type_fr_right_leg_l6_X_fr_right_leg_l5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l6_X_fr_right_leg_l5();
        const Type_fr_right_leg_l6_X_fr_right_leg_l5& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l5_X_fr_right_leg_l6 : public TransformMotion<Scalar, Type_fr_right_leg_l5_X_fr_right_leg_l6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l5_X_fr_right_leg_l6();
        const Type_fr_right_leg_l5_X_fr_right_leg_l6& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l2_X_fr_left_leg_l1 : public TransformMotion<Scalar, Type_fr_left_leg_l2_X_fr_left_leg_l1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l2_X_fr_left_leg_l1();
        const Type_fr_left_leg_l2_X_fr_left_leg_l1& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l1_X_fr_left_leg_l2 : public TransformMotion<Scalar, Type_fr_left_leg_l1_X_fr_left_leg_l2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l1_X_fr_left_leg_l2();
        const Type_fr_left_leg_l1_X_fr_left_leg_l2& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l3_X_fr_left_leg_l2 : public TransformMotion<Scalar, Type_fr_left_leg_l3_X_fr_left_leg_l2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l3_X_fr_left_leg_l2();
        const Type_fr_left_leg_l3_X_fr_left_leg_l2& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l2_X_fr_left_leg_l3 : public TransformMotion<Scalar, Type_fr_left_leg_l2_X_fr_left_leg_l3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l2_X_fr_left_leg_l3();
        const Type_fr_left_leg_l2_X_fr_left_leg_l3& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l4_X_fr_left_leg_l3 : public TransformMotion<Scalar, Type_fr_left_leg_l4_X_fr_left_leg_l3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l4_X_fr_left_leg_l3();
        const Type_fr_left_leg_l4_X_fr_left_leg_l3& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l3_X_fr_left_leg_l4 : public TransformMotion<Scalar, Type_fr_left_leg_l3_X_fr_left_leg_l4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l3_X_fr_left_leg_l4();
        const Type_fr_left_leg_l3_X_fr_left_leg_l4& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l5_X_fr_left_leg_l4 : public TransformMotion<Scalar, Type_fr_left_leg_l5_X_fr_left_leg_l4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l5_X_fr_left_leg_l4();
        const Type_fr_left_leg_l5_X_fr_left_leg_l4& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l4_X_fr_left_leg_l5 : public TransformMotion<Scalar, Type_fr_left_leg_l4_X_fr_left_leg_l5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l4_X_fr_left_leg_l5();
        const Type_fr_left_leg_l4_X_fr_left_leg_l5& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l6_X_fr_left_leg_l5 : public TransformMotion<Scalar, Type_fr_left_leg_l6_X_fr_left_leg_l5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l6_X_fr_left_leg_l5();
        const Type_fr_left_leg_l6_X_fr_left_leg_l5& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l5_X_fr_left_leg_l6 : public TransformMotion<Scalar, Type_fr_left_leg_l5_X_fr_left_leg_l6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l5_X_fr_left_leg_l6();
        const Type_fr_left_leg_l5_X_fr_left_leg_l6& update(const JState&);
    protected:
    };
    
public:
    MotionTransforms();
    void updateParameters();
    Type_fr_torso_X_fr_left_leg_l1 fr_torso_X_fr_left_leg_l1;
    Type_fr_left_leg_l1_X_fr_torso fr_left_leg_l1_X_fr_torso;
    Type_fr_torso_X_fr_left_leg_l2 fr_torso_X_fr_left_leg_l2;
    Type_fr_left_leg_l2_X_fr_torso fr_left_leg_l2_X_fr_torso;
    Type_fr_torso_X_fr_left_leg_l3 fr_torso_X_fr_left_leg_l3;
    Type_fr_left_leg_l3_X_fr_torso fr_left_leg_l3_X_fr_torso;
    Type_fr_torso_X_fr_left_leg_l4 fr_torso_X_fr_left_leg_l4;
    Type_fr_left_leg_l4_X_fr_torso fr_left_leg_l4_X_fr_torso;
    Type_fr_torso_X_fr_left_leg_l5 fr_torso_X_fr_left_leg_l5;
    Type_fr_left_leg_l5_X_fr_torso fr_left_leg_l5_X_fr_torso;
    Type_fr_torso_X_fr_left_leg_l6 fr_torso_X_fr_left_leg_l6;
    Type_fr_left_leg_l6_X_fr_torso fr_left_leg_l6_X_fr_torso;
    Type_fr_torso_X_fr_right_leg_l1 fr_torso_X_fr_right_leg_l1;
    Type_fr_right_leg_l1_X_fr_torso fr_right_leg_l1_X_fr_torso;
    Type_fr_torso_X_fr_right_leg_l2 fr_torso_X_fr_right_leg_l2;
    Type_fr_right_leg_l2_X_fr_torso fr_right_leg_l2_X_fr_torso;
    Type_fr_torso_X_fr_right_leg_l3 fr_torso_X_fr_right_leg_l3;
    Type_fr_right_leg_l3_X_fr_torso fr_right_leg_l3_X_fr_torso;
    Type_fr_torso_X_fr_right_leg_l4 fr_torso_X_fr_right_leg_l4;
    Type_fr_right_leg_l4_X_fr_torso fr_right_leg_l4_X_fr_torso;
    Type_fr_torso_X_fr_right_leg_l5 fr_torso_X_fr_right_leg_l5;
    Type_fr_right_leg_l5_X_fr_torso fr_right_leg_l5_X_fr_torso;
    Type_fr_torso_X_fr_right_leg_l6 fr_torso_X_fr_right_leg_l6;
    Type_fr_right_leg_l6_X_fr_torso fr_right_leg_l6_X_fr_torso;
    Type_fr_torso_X_fr_left_leg_j1 fr_torso_X_fr_left_leg_j1;
    Type_fr_torso_X_fr_left_leg_j2 fr_torso_X_fr_left_leg_j2;
    Type_fr_torso_X_fr_left_leg_j3 fr_torso_X_fr_left_leg_j3;
    Type_fr_torso_X_fr_left_leg_j4 fr_torso_X_fr_left_leg_j4;
    Type_fr_torso_X_fr_left_leg_j5 fr_torso_X_fr_left_leg_j5;
    Type_fr_torso_X_fr_left_leg_j6 fr_torso_X_fr_left_leg_j6;
    Type_fr_torso_X_fr_right_leg_j1 fr_torso_X_fr_right_leg_j1;
    Type_fr_torso_X_fr_right_leg_j2 fr_torso_X_fr_right_leg_j2;
    Type_fr_torso_X_fr_right_leg_j3 fr_torso_X_fr_right_leg_j3;
    Type_fr_torso_X_fr_right_leg_j4 fr_torso_X_fr_right_leg_j4;
    Type_fr_torso_X_fr_right_leg_j5 fr_torso_X_fr_right_leg_j5;
    Type_fr_torso_X_fr_right_leg_j6 fr_torso_X_fr_right_leg_j6;
    Type_fr_right_leg_l2_X_fr_right_leg_l1 fr_right_leg_l2_X_fr_right_leg_l1;
    Type_fr_right_leg_l1_X_fr_right_leg_l2 fr_right_leg_l1_X_fr_right_leg_l2;
    Type_fr_right_leg_l3_X_fr_right_leg_l2 fr_right_leg_l3_X_fr_right_leg_l2;
    Type_fr_right_leg_l2_X_fr_right_leg_l3 fr_right_leg_l2_X_fr_right_leg_l3;
    Type_fr_right_leg_l4_X_fr_right_leg_l3 fr_right_leg_l4_X_fr_right_leg_l3;
    Type_fr_right_leg_l3_X_fr_right_leg_l4 fr_right_leg_l3_X_fr_right_leg_l4;
    Type_fr_right_leg_l5_X_fr_right_leg_l4 fr_right_leg_l5_X_fr_right_leg_l4;
    Type_fr_right_leg_l4_X_fr_right_leg_l5 fr_right_leg_l4_X_fr_right_leg_l5;
    Type_fr_right_leg_l6_X_fr_right_leg_l5 fr_right_leg_l6_X_fr_right_leg_l5;
    Type_fr_right_leg_l5_X_fr_right_leg_l6 fr_right_leg_l5_X_fr_right_leg_l6;
    Type_fr_left_leg_l2_X_fr_left_leg_l1 fr_left_leg_l2_X_fr_left_leg_l1;
    Type_fr_left_leg_l1_X_fr_left_leg_l2 fr_left_leg_l1_X_fr_left_leg_l2;
    Type_fr_left_leg_l3_X_fr_left_leg_l2 fr_left_leg_l3_X_fr_left_leg_l2;
    Type_fr_left_leg_l2_X_fr_left_leg_l3 fr_left_leg_l2_X_fr_left_leg_l3;
    Type_fr_left_leg_l4_X_fr_left_leg_l3 fr_left_leg_l4_X_fr_left_leg_l3;
    Type_fr_left_leg_l3_X_fr_left_leg_l4 fr_left_leg_l3_X_fr_left_leg_l4;
    Type_fr_left_leg_l5_X_fr_left_leg_l4 fr_left_leg_l5_X_fr_left_leg_l4;
    Type_fr_left_leg_l4_X_fr_left_leg_l5 fr_left_leg_l4_X_fr_left_leg_l5;
    Type_fr_left_leg_l6_X_fr_left_leg_l5 fr_left_leg_l6_X_fr_left_leg_l5;
    Type_fr_left_leg_l5_X_fr_left_leg_l6 fr_left_leg_l5_X_fr_left_leg_l6;

protected:

}; //class 'MotionTransforms'

/**
 * The class for the 6-by-6 coordinates transformation matrices for
 * spatial force vectors.
 */
template <typename TRAIT>
class ForceTransforms {
public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
    typedef typename TRAIT::Scalar Scalar;

    typedef JointState<Scalar> JState;
    class Dummy {};
    typedef typename TransformForce<Scalar, Dummy>::MatrixType MatrixType;
public:
    class Type_fr_torso_X_fr_left_leg_l1 : public TransformForce<Scalar, Type_fr_torso_X_fr_left_leg_l1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_l1();
        const Type_fr_torso_X_fr_left_leg_l1& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l1_X_fr_torso : public TransformForce<Scalar, Type_fr_left_leg_l1_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l1_X_fr_torso();
        const Type_fr_left_leg_l1_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_l2 : public TransformForce<Scalar, Type_fr_torso_X_fr_left_leg_l2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_l2();
        const Type_fr_torso_X_fr_left_leg_l2& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l2_X_fr_torso : public TransformForce<Scalar, Type_fr_left_leg_l2_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l2_X_fr_torso();
        const Type_fr_left_leg_l2_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_l3 : public TransformForce<Scalar, Type_fr_torso_X_fr_left_leg_l3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_l3();
        const Type_fr_torso_X_fr_left_leg_l3& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l3_X_fr_torso : public TransformForce<Scalar, Type_fr_left_leg_l3_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l3_X_fr_torso();
        const Type_fr_left_leg_l3_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_l4 : public TransformForce<Scalar, Type_fr_torso_X_fr_left_leg_l4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_l4();
        const Type_fr_torso_X_fr_left_leg_l4& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l4_X_fr_torso : public TransformForce<Scalar, Type_fr_left_leg_l4_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l4_X_fr_torso();
        const Type_fr_left_leg_l4_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_l5 : public TransformForce<Scalar, Type_fr_torso_X_fr_left_leg_l5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_l5();
        const Type_fr_torso_X_fr_left_leg_l5& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l5_X_fr_torso : public TransformForce<Scalar, Type_fr_left_leg_l5_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l5_X_fr_torso();
        const Type_fr_left_leg_l5_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_l6 : public TransformForce<Scalar, Type_fr_torso_X_fr_left_leg_l6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_l6();
        const Type_fr_torso_X_fr_left_leg_l6& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l6_X_fr_torso : public TransformForce<Scalar, Type_fr_left_leg_l6_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l6_X_fr_torso();
        const Type_fr_left_leg_l6_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_l1 : public TransformForce<Scalar, Type_fr_torso_X_fr_right_leg_l1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_l1();
        const Type_fr_torso_X_fr_right_leg_l1& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l1_X_fr_torso : public TransformForce<Scalar, Type_fr_right_leg_l1_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l1_X_fr_torso();
        const Type_fr_right_leg_l1_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_l2 : public TransformForce<Scalar, Type_fr_torso_X_fr_right_leg_l2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_l2();
        const Type_fr_torso_X_fr_right_leg_l2& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l2_X_fr_torso : public TransformForce<Scalar, Type_fr_right_leg_l2_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l2_X_fr_torso();
        const Type_fr_right_leg_l2_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_l3 : public TransformForce<Scalar, Type_fr_torso_X_fr_right_leg_l3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_l3();
        const Type_fr_torso_X_fr_right_leg_l3& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l3_X_fr_torso : public TransformForce<Scalar, Type_fr_right_leg_l3_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l3_X_fr_torso();
        const Type_fr_right_leg_l3_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_l4 : public TransformForce<Scalar, Type_fr_torso_X_fr_right_leg_l4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_l4();
        const Type_fr_torso_X_fr_right_leg_l4& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l4_X_fr_torso : public TransformForce<Scalar, Type_fr_right_leg_l4_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l4_X_fr_torso();
        const Type_fr_right_leg_l4_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_l5 : public TransformForce<Scalar, Type_fr_torso_X_fr_right_leg_l5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_l5();
        const Type_fr_torso_X_fr_right_leg_l5& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l5_X_fr_torso : public TransformForce<Scalar, Type_fr_right_leg_l5_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l5_X_fr_torso();
        const Type_fr_right_leg_l5_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_l6 : public TransformForce<Scalar, Type_fr_torso_X_fr_right_leg_l6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_l6();
        const Type_fr_torso_X_fr_right_leg_l6& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l6_X_fr_torso : public TransformForce<Scalar, Type_fr_right_leg_l6_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l6_X_fr_torso();
        const Type_fr_right_leg_l6_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_j1 : public TransformForce<Scalar, Type_fr_torso_X_fr_left_leg_j1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_j1();
        const Type_fr_torso_X_fr_left_leg_j1& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_j2 : public TransformForce<Scalar, Type_fr_torso_X_fr_left_leg_j2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_j2();
        const Type_fr_torso_X_fr_left_leg_j2& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_j3 : public TransformForce<Scalar, Type_fr_torso_X_fr_left_leg_j3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_j3();
        const Type_fr_torso_X_fr_left_leg_j3& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_j4 : public TransformForce<Scalar, Type_fr_torso_X_fr_left_leg_j4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_j4();
        const Type_fr_torso_X_fr_left_leg_j4& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_j5 : public TransformForce<Scalar, Type_fr_torso_X_fr_left_leg_j5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_j5();
        const Type_fr_torso_X_fr_left_leg_j5& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_j6 : public TransformForce<Scalar, Type_fr_torso_X_fr_left_leg_j6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_j6();
        const Type_fr_torso_X_fr_left_leg_j6& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_j1 : public TransformForce<Scalar, Type_fr_torso_X_fr_right_leg_j1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_j1();
        const Type_fr_torso_X_fr_right_leg_j1& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_j2 : public TransformForce<Scalar, Type_fr_torso_X_fr_right_leg_j2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_j2();
        const Type_fr_torso_X_fr_right_leg_j2& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_j3 : public TransformForce<Scalar, Type_fr_torso_X_fr_right_leg_j3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_j3();
        const Type_fr_torso_X_fr_right_leg_j3& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_j4 : public TransformForce<Scalar, Type_fr_torso_X_fr_right_leg_j4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_j4();
        const Type_fr_torso_X_fr_right_leg_j4& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_j5 : public TransformForce<Scalar, Type_fr_torso_X_fr_right_leg_j5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_j5();
        const Type_fr_torso_X_fr_right_leg_j5& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_j6 : public TransformForce<Scalar, Type_fr_torso_X_fr_right_leg_j6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_j6();
        const Type_fr_torso_X_fr_right_leg_j6& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l2_X_fr_right_leg_l1 : public TransformForce<Scalar, Type_fr_right_leg_l2_X_fr_right_leg_l1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l2_X_fr_right_leg_l1();
        const Type_fr_right_leg_l2_X_fr_right_leg_l1& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l1_X_fr_right_leg_l2 : public TransformForce<Scalar, Type_fr_right_leg_l1_X_fr_right_leg_l2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l1_X_fr_right_leg_l2();
        const Type_fr_right_leg_l1_X_fr_right_leg_l2& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l3_X_fr_right_leg_l2 : public TransformForce<Scalar, Type_fr_right_leg_l3_X_fr_right_leg_l2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l3_X_fr_right_leg_l2();
        const Type_fr_right_leg_l3_X_fr_right_leg_l2& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l2_X_fr_right_leg_l3 : public TransformForce<Scalar, Type_fr_right_leg_l2_X_fr_right_leg_l3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l2_X_fr_right_leg_l3();
        const Type_fr_right_leg_l2_X_fr_right_leg_l3& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l4_X_fr_right_leg_l3 : public TransformForce<Scalar, Type_fr_right_leg_l4_X_fr_right_leg_l3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l4_X_fr_right_leg_l3();
        const Type_fr_right_leg_l4_X_fr_right_leg_l3& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l3_X_fr_right_leg_l4 : public TransformForce<Scalar, Type_fr_right_leg_l3_X_fr_right_leg_l4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l3_X_fr_right_leg_l4();
        const Type_fr_right_leg_l3_X_fr_right_leg_l4& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l5_X_fr_right_leg_l4 : public TransformForce<Scalar, Type_fr_right_leg_l5_X_fr_right_leg_l4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l5_X_fr_right_leg_l4();
        const Type_fr_right_leg_l5_X_fr_right_leg_l4& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l4_X_fr_right_leg_l5 : public TransformForce<Scalar, Type_fr_right_leg_l4_X_fr_right_leg_l5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l4_X_fr_right_leg_l5();
        const Type_fr_right_leg_l4_X_fr_right_leg_l5& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l6_X_fr_right_leg_l5 : public TransformForce<Scalar, Type_fr_right_leg_l6_X_fr_right_leg_l5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l6_X_fr_right_leg_l5();
        const Type_fr_right_leg_l6_X_fr_right_leg_l5& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l5_X_fr_right_leg_l6 : public TransformForce<Scalar, Type_fr_right_leg_l5_X_fr_right_leg_l6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l5_X_fr_right_leg_l6();
        const Type_fr_right_leg_l5_X_fr_right_leg_l6& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l2_X_fr_left_leg_l1 : public TransformForce<Scalar, Type_fr_left_leg_l2_X_fr_left_leg_l1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l2_X_fr_left_leg_l1();
        const Type_fr_left_leg_l2_X_fr_left_leg_l1& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l1_X_fr_left_leg_l2 : public TransformForce<Scalar, Type_fr_left_leg_l1_X_fr_left_leg_l2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l1_X_fr_left_leg_l2();
        const Type_fr_left_leg_l1_X_fr_left_leg_l2& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l3_X_fr_left_leg_l2 : public TransformForce<Scalar, Type_fr_left_leg_l3_X_fr_left_leg_l2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l3_X_fr_left_leg_l2();
        const Type_fr_left_leg_l3_X_fr_left_leg_l2& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l2_X_fr_left_leg_l3 : public TransformForce<Scalar, Type_fr_left_leg_l2_X_fr_left_leg_l3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l2_X_fr_left_leg_l3();
        const Type_fr_left_leg_l2_X_fr_left_leg_l3& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l4_X_fr_left_leg_l3 : public TransformForce<Scalar, Type_fr_left_leg_l4_X_fr_left_leg_l3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l4_X_fr_left_leg_l3();
        const Type_fr_left_leg_l4_X_fr_left_leg_l3& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l3_X_fr_left_leg_l4 : public TransformForce<Scalar, Type_fr_left_leg_l3_X_fr_left_leg_l4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l3_X_fr_left_leg_l4();
        const Type_fr_left_leg_l3_X_fr_left_leg_l4& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l5_X_fr_left_leg_l4 : public TransformForce<Scalar, Type_fr_left_leg_l5_X_fr_left_leg_l4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l5_X_fr_left_leg_l4();
        const Type_fr_left_leg_l5_X_fr_left_leg_l4& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l4_X_fr_left_leg_l5 : public TransformForce<Scalar, Type_fr_left_leg_l4_X_fr_left_leg_l5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l4_X_fr_left_leg_l5();
        const Type_fr_left_leg_l4_X_fr_left_leg_l5& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l6_X_fr_left_leg_l5 : public TransformForce<Scalar, Type_fr_left_leg_l6_X_fr_left_leg_l5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l6_X_fr_left_leg_l5();
        const Type_fr_left_leg_l6_X_fr_left_leg_l5& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l5_X_fr_left_leg_l6 : public TransformForce<Scalar, Type_fr_left_leg_l5_X_fr_left_leg_l6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l5_X_fr_left_leg_l6();
        const Type_fr_left_leg_l5_X_fr_left_leg_l6& update(const JState&);
    protected:
    };
    
public:
    ForceTransforms();
    void updateParameters();
    Type_fr_torso_X_fr_left_leg_l1 fr_torso_X_fr_left_leg_l1;
    Type_fr_left_leg_l1_X_fr_torso fr_left_leg_l1_X_fr_torso;
    Type_fr_torso_X_fr_left_leg_l2 fr_torso_X_fr_left_leg_l2;
    Type_fr_left_leg_l2_X_fr_torso fr_left_leg_l2_X_fr_torso;
    Type_fr_torso_X_fr_left_leg_l3 fr_torso_X_fr_left_leg_l3;
    Type_fr_left_leg_l3_X_fr_torso fr_left_leg_l3_X_fr_torso;
    Type_fr_torso_X_fr_left_leg_l4 fr_torso_X_fr_left_leg_l4;
    Type_fr_left_leg_l4_X_fr_torso fr_left_leg_l4_X_fr_torso;
    Type_fr_torso_X_fr_left_leg_l5 fr_torso_X_fr_left_leg_l5;
    Type_fr_left_leg_l5_X_fr_torso fr_left_leg_l5_X_fr_torso;
    Type_fr_torso_X_fr_left_leg_l6 fr_torso_X_fr_left_leg_l6;
    Type_fr_left_leg_l6_X_fr_torso fr_left_leg_l6_X_fr_torso;
    Type_fr_torso_X_fr_right_leg_l1 fr_torso_X_fr_right_leg_l1;
    Type_fr_right_leg_l1_X_fr_torso fr_right_leg_l1_X_fr_torso;
    Type_fr_torso_X_fr_right_leg_l2 fr_torso_X_fr_right_leg_l2;
    Type_fr_right_leg_l2_X_fr_torso fr_right_leg_l2_X_fr_torso;
    Type_fr_torso_X_fr_right_leg_l3 fr_torso_X_fr_right_leg_l3;
    Type_fr_right_leg_l3_X_fr_torso fr_right_leg_l3_X_fr_torso;
    Type_fr_torso_X_fr_right_leg_l4 fr_torso_X_fr_right_leg_l4;
    Type_fr_right_leg_l4_X_fr_torso fr_right_leg_l4_X_fr_torso;
    Type_fr_torso_X_fr_right_leg_l5 fr_torso_X_fr_right_leg_l5;
    Type_fr_right_leg_l5_X_fr_torso fr_right_leg_l5_X_fr_torso;
    Type_fr_torso_X_fr_right_leg_l6 fr_torso_X_fr_right_leg_l6;
    Type_fr_right_leg_l6_X_fr_torso fr_right_leg_l6_X_fr_torso;
    Type_fr_torso_X_fr_left_leg_j1 fr_torso_X_fr_left_leg_j1;
    Type_fr_torso_X_fr_left_leg_j2 fr_torso_X_fr_left_leg_j2;
    Type_fr_torso_X_fr_left_leg_j3 fr_torso_X_fr_left_leg_j3;
    Type_fr_torso_X_fr_left_leg_j4 fr_torso_X_fr_left_leg_j4;
    Type_fr_torso_X_fr_left_leg_j5 fr_torso_X_fr_left_leg_j5;
    Type_fr_torso_X_fr_left_leg_j6 fr_torso_X_fr_left_leg_j6;
    Type_fr_torso_X_fr_right_leg_j1 fr_torso_X_fr_right_leg_j1;
    Type_fr_torso_X_fr_right_leg_j2 fr_torso_X_fr_right_leg_j2;
    Type_fr_torso_X_fr_right_leg_j3 fr_torso_X_fr_right_leg_j3;
    Type_fr_torso_X_fr_right_leg_j4 fr_torso_X_fr_right_leg_j4;
    Type_fr_torso_X_fr_right_leg_j5 fr_torso_X_fr_right_leg_j5;
    Type_fr_torso_X_fr_right_leg_j6 fr_torso_X_fr_right_leg_j6;
    Type_fr_right_leg_l2_X_fr_right_leg_l1 fr_right_leg_l2_X_fr_right_leg_l1;
    Type_fr_right_leg_l1_X_fr_right_leg_l2 fr_right_leg_l1_X_fr_right_leg_l2;
    Type_fr_right_leg_l3_X_fr_right_leg_l2 fr_right_leg_l3_X_fr_right_leg_l2;
    Type_fr_right_leg_l2_X_fr_right_leg_l3 fr_right_leg_l2_X_fr_right_leg_l3;
    Type_fr_right_leg_l4_X_fr_right_leg_l3 fr_right_leg_l4_X_fr_right_leg_l3;
    Type_fr_right_leg_l3_X_fr_right_leg_l4 fr_right_leg_l3_X_fr_right_leg_l4;
    Type_fr_right_leg_l5_X_fr_right_leg_l4 fr_right_leg_l5_X_fr_right_leg_l4;
    Type_fr_right_leg_l4_X_fr_right_leg_l5 fr_right_leg_l4_X_fr_right_leg_l5;
    Type_fr_right_leg_l6_X_fr_right_leg_l5 fr_right_leg_l6_X_fr_right_leg_l5;
    Type_fr_right_leg_l5_X_fr_right_leg_l6 fr_right_leg_l5_X_fr_right_leg_l6;
    Type_fr_left_leg_l2_X_fr_left_leg_l1 fr_left_leg_l2_X_fr_left_leg_l1;
    Type_fr_left_leg_l1_X_fr_left_leg_l2 fr_left_leg_l1_X_fr_left_leg_l2;
    Type_fr_left_leg_l3_X_fr_left_leg_l2 fr_left_leg_l3_X_fr_left_leg_l2;
    Type_fr_left_leg_l2_X_fr_left_leg_l3 fr_left_leg_l2_X_fr_left_leg_l3;
    Type_fr_left_leg_l4_X_fr_left_leg_l3 fr_left_leg_l4_X_fr_left_leg_l3;
    Type_fr_left_leg_l3_X_fr_left_leg_l4 fr_left_leg_l3_X_fr_left_leg_l4;
    Type_fr_left_leg_l5_X_fr_left_leg_l4 fr_left_leg_l5_X_fr_left_leg_l4;
    Type_fr_left_leg_l4_X_fr_left_leg_l5 fr_left_leg_l4_X_fr_left_leg_l5;
    Type_fr_left_leg_l6_X_fr_left_leg_l5 fr_left_leg_l6_X_fr_left_leg_l5;
    Type_fr_left_leg_l5_X_fr_left_leg_l6 fr_left_leg_l5_X_fr_left_leg_l6;

protected:

}; //class 'ForceTransforms'

/**
 * The class with the homogeneous (4x4) coordinates transformation
 * matrices.
 */
template <typename TRAIT>
class HomogeneousTransforms {
public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
    typedef typename TRAIT::Scalar Scalar;

    typedef JointState<Scalar> JState;
    class Dummy {};
    typedef typename TransformHomogeneous<Scalar, Dummy>::MatrixType MatrixType;
public:
    class Type_fr_torso_X_fr_left_leg_l1 : public TransformHomogeneous<Scalar, Type_fr_torso_X_fr_left_leg_l1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_l1();
        const Type_fr_torso_X_fr_left_leg_l1& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l1_X_fr_torso : public TransformHomogeneous<Scalar, Type_fr_left_leg_l1_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l1_X_fr_torso();
        const Type_fr_left_leg_l1_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_l2 : public TransformHomogeneous<Scalar, Type_fr_torso_X_fr_left_leg_l2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_l2();
        const Type_fr_torso_X_fr_left_leg_l2& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l2_X_fr_torso : public TransformHomogeneous<Scalar, Type_fr_left_leg_l2_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l2_X_fr_torso();
        const Type_fr_left_leg_l2_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_l3 : public TransformHomogeneous<Scalar, Type_fr_torso_X_fr_left_leg_l3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_l3();
        const Type_fr_torso_X_fr_left_leg_l3& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l3_X_fr_torso : public TransformHomogeneous<Scalar, Type_fr_left_leg_l3_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l3_X_fr_torso();
        const Type_fr_left_leg_l3_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_l4 : public TransformHomogeneous<Scalar, Type_fr_torso_X_fr_left_leg_l4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_l4();
        const Type_fr_torso_X_fr_left_leg_l4& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l4_X_fr_torso : public TransformHomogeneous<Scalar, Type_fr_left_leg_l4_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l4_X_fr_torso();
        const Type_fr_left_leg_l4_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_l5 : public TransformHomogeneous<Scalar, Type_fr_torso_X_fr_left_leg_l5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_l5();
        const Type_fr_torso_X_fr_left_leg_l5& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l5_X_fr_torso : public TransformHomogeneous<Scalar, Type_fr_left_leg_l5_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l5_X_fr_torso();
        const Type_fr_left_leg_l5_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_l6 : public TransformHomogeneous<Scalar, Type_fr_torso_X_fr_left_leg_l6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_l6();
        const Type_fr_torso_X_fr_left_leg_l6& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l6_X_fr_torso : public TransformHomogeneous<Scalar, Type_fr_left_leg_l6_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l6_X_fr_torso();
        const Type_fr_left_leg_l6_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_l1 : public TransformHomogeneous<Scalar, Type_fr_torso_X_fr_right_leg_l1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_l1();
        const Type_fr_torso_X_fr_right_leg_l1& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l1_X_fr_torso : public TransformHomogeneous<Scalar, Type_fr_right_leg_l1_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l1_X_fr_torso();
        const Type_fr_right_leg_l1_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_l2 : public TransformHomogeneous<Scalar, Type_fr_torso_X_fr_right_leg_l2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_l2();
        const Type_fr_torso_X_fr_right_leg_l2& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l2_X_fr_torso : public TransformHomogeneous<Scalar, Type_fr_right_leg_l2_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l2_X_fr_torso();
        const Type_fr_right_leg_l2_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_l3 : public TransformHomogeneous<Scalar, Type_fr_torso_X_fr_right_leg_l3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_l3();
        const Type_fr_torso_X_fr_right_leg_l3& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l3_X_fr_torso : public TransformHomogeneous<Scalar, Type_fr_right_leg_l3_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l3_X_fr_torso();
        const Type_fr_right_leg_l3_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_l4 : public TransformHomogeneous<Scalar, Type_fr_torso_X_fr_right_leg_l4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_l4();
        const Type_fr_torso_X_fr_right_leg_l4& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l4_X_fr_torso : public TransformHomogeneous<Scalar, Type_fr_right_leg_l4_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l4_X_fr_torso();
        const Type_fr_right_leg_l4_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_l5 : public TransformHomogeneous<Scalar, Type_fr_torso_X_fr_right_leg_l5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_l5();
        const Type_fr_torso_X_fr_right_leg_l5& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l5_X_fr_torso : public TransformHomogeneous<Scalar, Type_fr_right_leg_l5_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l5_X_fr_torso();
        const Type_fr_right_leg_l5_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_l6 : public TransformHomogeneous<Scalar, Type_fr_torso_X_fr_right_leg_l6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_l6();
        const Type_fr_torso_X_fr_right_leg_l6& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l6_X_fr_torso : public TransformHomogeneous<Scalar, Type_fr_right_leg_l6_X_fr_torso>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l6_X_fr_torso();
        const Type_fr_right_leg_l6_X_fr_torso& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_j1 : public TransformHomogeneous<Scalar, Type_fr_torso_X_fr_left_leg_j1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_j1();
        const Type_fr_torso_X_fr_left_leg_j1& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_j2 : public TransformHomogeneous<Scalar, Type_fr_torso_X_fr_left_leg_j2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_j2();
        const Type_fr_torso_X_fr_left_leg_j2& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_j3 : public TransformHomogeneous<Scalar, Type_fr_torso_X_fr_left_leg_j3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_j3();
        const Type_fr_torso_X_fr_left_leg_j3& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_j4 : public TransformHomogeneous<Scalar, Type_fr_torso_X_fr_left_leg_j4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_j4();
        const Type_fr_torso_X_fr_left_leg_j4& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_j5 : public TransformHomogeneous<Scalar, Type_fr_torso_X_fr_left_leg_j5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_j5();
        const Type_fr_torso_X_fr_left_leg_j5& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_left_leg_j6 : public TransformHomogeneous<Scalar, Type_fr_torso_X_fr_left_leg_j6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_left_leg_j6();
        const Type_fr_torso_X_fr_left_leg_j6& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_j1 : public TransformHomogeneous<Scalar, Type_fr_torso_X_fr_right_leg_j1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_j1();
        const Type_fr_torso_X_fr_right_leg_j1& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_j2 : public TransformHomogeneous<Scalar, Type_fr_torso_X_fr_right_leg_j2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_j2();
        const Type_fr_torso_X_fr_right_leg_j2& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_j3 : public TransformHomogeneous<Scalar, Type_fr_torso_X_fr_right_leg_j3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_j3();
        const Type_fr_torso_X_fr_right_leg_j3& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_j4 : public TransformHomogeneous<Scalar, Type_fr_torso_X_fr_right_leg_j4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_j4();
        const Type_fr_torso_X_fr_right_leg_j4& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_j5 : public TransformHomogeneous<Scalar, Type_fr_torso_X_fr_right_leg_j5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_j5();
        const Type_fr_torso_X_fr_right_leg_j5& update(const JState&);
    protected:
    };
    
    class Type_fr_torso_X_fr_right_leg_j6 : public TransformHomogeneous<Scalar, Type_fr_torso_X_fr_right_leg_j6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_torso_X_fr_right_leg_j6();
        const Type_fr_torso_X_fr_right_leg_j6& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l2_X_fr_right_leg_l1 : public TransformHomogeneous<Scalar, Type_fr_right_leg_l2_X_fr_right_leg_l1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l2_X_fr_right_leg_l1();
        const Type_fr_right_leg_l2_X_fr_right_leg_l1& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l1_X_fr_right_leg_l2 : public TransformHomogeneous<Scalar, Type_fr_right_leg_l1_X_fr_right_leg_l2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l1_X_fr_right_leg_l2();
        const Type_fr_right_leg_l1_X_fr_right_leg_l2& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l3_X_fr_right_leg_l2 : public TransformHomogeneous<Scalar, Type_fr_right_leg_l3_X_fr_right_leg_l2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l3_X_fr_right_leg_l2();
        const Type_fr_right_leg_l3_X_fr_right_leg_l2& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l2_X_fr_right_leg_l3 : public TransformHomogeneous<Scalar, Type_fr_right_leg_l2_X_fr_right_leg_l3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l2_X_fr_right_leg_l3();
        const Type_fr_right_leg_l2_X_fr_right_leg_l3& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l4_X_fr_right_leg_l3 : public TransformHomogeneous<Scalar, Type_fr_right_leg_l4_X_fr_right_leg_l3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l4_X_fr_right_leg_l3();
        const Type_fr_right_leg_l4_X_fr_right_leg_l3& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l3_X_fr_right_leg_l4 : public TransformHomogeneous<Scalar, Type_fr_right_leg_l3_X_fr_right_leg_l4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l3_X_fr_right_leg_l4();
        const Type_fr_right_leg_l3_X_fr_right_leg_l4& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l5_X_fr_right_leg_l4 : public TransformHomogeneous<Scalar, Type_fr_right_leg_l5_X_fr_right_leg_l4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l5_X_fr_right_leg_l4();
        const Type_fr_right_leg_l5_X_fr_right_leg_l4& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l4_X_fr_right_leg_l5 : public TransformHomogeneous<Scalar, Type_fr_right_leg_l4_X_fr_right_leg_l5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l4_X_fr_right_leg_l5();
        const Type_fr_right_leg_l4_X_fr_right_leg_l5& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l6_X_fr_right_leg_l5 : public TransformHomogeneous<Scalar, Type_fr_right_leg_l6_X_fr_right_leg_l5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l6_X_fr_right_leg_l5();
        const Type_fr_right_leg_l6_X_fr_right_leg_l5& update(const JState&);
    protected:
    };
    
    class Type_fr_right_leg_l5_X_fr_right_leg_l6 : public TransformHomogeneous<Scalar, Type_fr_right_leg_l5_X_fr_right_leg_l6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_right_leg_l5_X_fr_right_leg_l6();
        const Type_fr_right_leg_l5_X_fr_right_leg_l6& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l2_X_fr_left_leg_l1 : public TransformHomogeneous<Scalar, Type_fr_left_leg_l2_X_fr_left_leg_l1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l2_X_fr_left_leg_l1();
        const Type_fr_left_leg_l2_X_fr_left_leg_l1& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l1_X_fr_left_leg_l2 : public TransformHomogeneous<Scalar, Type_fr_left_leg_l1_X_fr_left_leg_l2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l1_X_fr_left_leg_l2();
        const Type_fr_left_leg_l1_X_fr_left_leg_l2& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l3_X_fr_left_leg_l2 : public TransformHomogeneous<Scalar, Type_fr_left_leg_l3_X_fr_left_leg_l2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l3_X_fr_left_leg_l2();
        const Type_fr_left_leg_l3_X_fr_left_leg_l2& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l2_X_fr_left_leg_l3 : public TransformHomogeneous<Scalar, Type_fr_left_leg_l2_X_fr_left_leg_l3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l2_X_fr_left_leg_l3();
        const Type_fr_left_leg_l2_X_fr_left_leg_l3& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l4_X_fr_left_leg_l3 : public TransformHomogeneous<Scalar, Type_fr_left_leg_l4_X_fr_left_leg_l3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l4_X_fr_left_leg_l3();
        const Type_fr_left_leg_l4_X_fr_left_leg_l3& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l3_X_fr_left_leg_l4 : public TransformHomogeneous<Scalar, Type_fr_left_leg_l3_X_fr_left_leg_l4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l3_X_fr_left_leg_l4();
        const Type_fr_left_leg_l3_X_fr_left_leg_l4& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l5_X_fr_left_leg_l4 : public TransformHomogeneous<Scalar, Type_fr_left_leg_l5_X_fr_left_leg_l4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l5_X_fr_left_leg_l4();
        const Type_fr_left_leg_l5_X_fr_left_leg_l4& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l4_X_fr_left_leg_l5 : public TransformHomogeneous<Scalar, Type_fr_left_leg_l4_X_fr_left_leg_l5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l4_X_fr_left_leg_l5();
        const Type_fr_left_leg_l4_X_fr_left_leg_l5& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l6_X_fr_left_leg_l5 : public TransformHomogeneous<Scalar, Type_fr_left_leg_l6_X_fr_left_leg_l5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l6_X_fr_left_leg_l5();
        const Type_fr_left_leg_l6_X_fr_left_leg_l5& update(const JState&);
    protected:
    };
    
    class Type_fr_left_leg_l5_X_fr_left_leg_l6 : public TransformHomogeneous<Scalar, Type_fr_left_leg_l5_X_fr_left_leg_l6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_left_leg_l5_X_fr_left_leg_l6();
        const Type_fr_left_leg_l5_X_fr_left_leg_l6& update(const JState&);
    protected:
    };
    
public:
    HomogeneousTransforms();
    void updateParameters();
    Type_fr_torso_X_fr_left_leg_l1 fr_torso_X_fr_left_leg_l1;
    Type_fr_left_leg_l1_X_fr_torso fr_left_leg_l1_X_fr_torso;
    Type_fr_torso_X_fr_left_leg_l2 fr_torso_X_fr_left_leg_l2;
    Type_fr_left_leg_l2_X_fr_torso fr_left_leg_l2_X_fr_torso;
    Type_fr_torso_X_fr_left_leg_l3 fr_torso_X_fr_left_leg_l3;
    Type_fr_left_leg_l3_X_fr_torso fr_left_leg_l3_X_fr_torso;
    Type_fr_torso_X_fr_left_leg_l4 fr_torso_X_fr_left_leg_l4;
    Type_fr_left_leg_l4_X_fr_torso fr_left_leg_l4_X_fr_torso;
    Type_fr_torso_X_fr_left_leg_l5 fr_torso_X_fr_left_leg_l5;
    Type_fr_left_leg_l5_X_fr_torso fr_left_leg_l5_X_fr_torso;
    Type_fr_torso_X_fr_left_leg_l6 fr_torso_X_fr_left_leg_l6;
    Type_fr_left_leg_l6_X_fr_torso fr_left_leg_l6_X_fr_torso;
    Type_fr_torso_X_fr_right_leg_l1 fr_torso_X_fr_right_leg_l1;
    Type_fr_right_leg_l1_X_fr_torso fr_right_leg_l1_X_fr_torso;
    Type_fr_torso_X_fr_right_leg_l2 fr_torso_X_fr_right_leg_l2;
    Type_fr_right_leg_l2_X_fr_torso fr_right_leg_l2_X_fr_torso;
    Type_fr_torso_X_fr_right_leg_l3 fr_torso_X_fr_right_leg_l3;
    Type_fr_right_leg_l3_X_fr_torso fr_right_leg_l3_X_fr_torso;
    Type_fr_torso_X_fr_right_leg_l4 fr_torso_X_fr_right_leg_l4;
    Type_fr_right_leg_l4_X_fr_torso fr_right_leg_l4_X_fr_torso;
    Type_fr_torso_X_fr_right_leg_l5 fr_torso_X_fr_right_leg_l5;
    Type_fr_right_leg_l5_X_fr_torso fr_right_leg_l5_X_fr_torso;
    Type_fr_torso_X_fr_right_leg_l6 fr_torso_X_fr_right_leg_l6;
    Type_fr_right_leg_l6_X_fr_torso fr_right_leg_l6_X_fr_torso;
    Type_fr_torso_X_fr_left_leg_j1 fr_torso_X_fr_left_leg_j1;
    Type_fr_torso_X_fr_left_leg_j2 fr_torso_X_fr_left_leg_j2;
    Type_fr_torso_X_fr_left_leg_j3 fr_torso_X_fr_left_leg_j3;
    Type_fr_torso_X_fr_left_leg_j4 fr_torso_X_fr_left_leg_j4;
    Type_fr_torso_X_fr_left_leg_j5 fr_torso_X_fr_left_leg_j5;
    Type_fr_torso_X_fr_left_leg_j6 fr_torso_X_fr_left_leg_j6;
    Type_fr_torso_X_fr_right_leg_j1 fr_torso_X_fr_right_leg_j1;
    Type_fr_torso_X_fr_right_leg_j2 fr_torso_X_fr_right_leg_j2;
    Type_fr_torso_X_fr_right_leg_j3 fr_torso_X_fr_right_leg_j3;
    Type_fr_torso_X_fr_right_leg_j4 fr_torso_X_fr_right_leg_j4;
    Type_fr_torso_X_fr_right_leg_j5 fr_torso_X_fr_right_leg_j5;
    Type_fr_torso_X_fr_right_leg_j6 fr_torso_X_fr_right_leg_j6;
    Type_fr_right_leg_l2_X_fr_right_leg_l1 fr_right_leg_l2_X_fr_right_leg_l1;
    Type_fr_right_leg_l1_X_fr_right_leg_l2 fr_right_leg_l1_X_fr_right_leg_l2;
    Type_fr_right_leg_l3_X_fr_right_leg_l2 fr_right_leg_l3_X_fr_right_leg_l2;
    Type_fr_right_leg_l2_X_fr_right_leg_l3 fr_right_leg_l2_X_fr_right_leg_l3;
    Type_fr_right_leg_l4_X_fr_right_leg_l3 fr_right_leg_l4_X_fr_right_leg_l3;
    Type_fr_right_leg_l3_X_fr_right_leg_l4 fr_right_leg_l3_X_fr_right_leg_l4;
    Type_fr_right_leg_l5_X_fr_right_leg_l4 fr_right_leg_l5_X_fr_right_leg_l4;
    Type_fr_right_leg_l4_X_fr_right_leg_l5 fr_right_leg_l4_X_fr_right_leg_l5;
    Type_fr_right_leg_l6_X_fr_right_leg_l5 fr_right_leg_l6_X_fr_right_leg_l5;
    Type_fr_right_leg_l5_X_fr_right_leg_l6 fr_right_leg_l5_X_fr_right_leg_l6;
    Type_fr_left_leg_l2_X_fr_left_leg_l1 fr_left_leg_l2_X_fr_left_leg_l1;
    Type_fr_left_leg_l1_X_fr_left_leg_l2 fr_left_leg_l1_X_fr_left_leg_l2;
    Type_fr_left_leg_l3_X_fr_left_leg_l2 fr_left_leg_l3_X_fr_left_leg_l2;
    Type_fr_left_leg_l2_X_fr_left_leg_l3 fr_left_leg_l2_X_fr_left_leg_l3;
    Type_fr_left_leg_l4_X_fr_left_leg_l3 fr_left_leg_l4_X_fr_left_leg_l3;
    Type_fr_left_leg_l3_X_fr_left_leg_l4 fr_left_leg_l3_X_fr_left_leg_l4;
    Type_fr_left_leg_l5_X_fr_left_leg_l4 fr_left_leg_l5_X_fr_left_leg_l4;
    Type_fr_left_leg_l4_X_fr_left_leg_l5 fr_left_leg_l4_X_fr_left_leg_l5;
    Type_fr_left_leg_l6_X_fr_left_leg_l5 fr_left_leg_l6_X_fr_left_leg_l5;
    Type_fr_left_leg_l5_X_fr_left_leg_l6 fr_left_leg_l5_X_fr_left_leg_l6;

protected:

}; //class 'HomogeneousTransforms'

}

using MotionTransforms = tpl::MotionTransforms<rbd::DoubleTrait>;
using ForceTransforms = tpl::ForceTransforms<rbd::DoubleTrait>;
using HomogeneousTransforms = tpl::HomogeneousTransforms<rbd::DoubleTrait>;

}
}

#include "transforms.impl.h"

#endif
