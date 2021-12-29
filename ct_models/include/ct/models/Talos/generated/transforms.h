#ifndef TALOS_TRANSFORMS_H_
#define TALOS_TRANSFORMS_H_

#include <Eigen/Dense>
#include <iit/rbd/TransformsBase.h>
#include "declarations.h"
#include <iit/rbd/traits/DoubleTrait.h>
#include "kinematics_parameters.h"

namespace iit {
namespace Talos {

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
    class Type_fr_base_link_X_fr_leg_left_1_link : public TransformMotion<Scalar, Type_fr_base_link_X_fr_leg_left_1_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_1_link();
        const Type_fr_base_link_X_fr_leg_left_1_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_1_link_X_fr_base_link : public TransformMotion<Scalar, Type_fr_leg_left_1_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_1_link_X_fr_base_link();
        const Type_fr_leg_left_1_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_2_link : public TransformMotion<Scalar, Type_fr_base_link_X_fr_leg_left_2_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_2_link();
        const Type_fr_base_link_X_fr_leg_left_2_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_2_link_X_fr_base_link : public TransformMotion<Scalar, Type_fr_leg_left_2_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_2_link_X_fr_base_link();
        const Type_fr_leg_left_2_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_3_link : public TransformMotion<Scalar, Type_fr_base_link_X_fr_leg_left_3_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_3_link();
        const Type_fr_base_link_X_fr_leg_left_3_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_3_link_X_fr_base_link : public TransformMotion<Scalar, Type_fr_leg_left_3_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_3_link_X_fr_base_link();
        const Type_fr_leg_left_3_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_4_link : public TransformMotion<Scalar, Type_fr_base_link_X_fr_leg_left_4_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_4_link();
        const Type_fr_base_link_X_fr_leg_left_4_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_4_link_X_fr_base_link : public TransformMotion<Scalar, Type_fr_leg_left_4_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_4_link_X_fr_base_link();
        const Type_fr_leg_left_4_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_5_link : public TransformMotion<Scalar, Type_fr_base_link_X_fr_leg_left_5_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_5_link();
        const Type_fr_base_link_X_fr_leg_left_5_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_5_link_X_fr_base_link : public TransformMotion<Scalar, Type_fr_leg_left_5_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_5_link_X_fr_base_link();
        const Type_fr_leg_left_5_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_6_link : public TransformMotion<Scalar, Type_fr_base_link_X_fr_leg_left_6_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_6_link();
        const Type_fr_base_link_X_fr_leg_left_6_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_6_link_X_fr_base_link : public TransformMotion<Scalar, Type_fr_leg_left_6_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_6_link_X_fr_base_link();
        const Type_fr_leg_left_6_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_1_link : public TransformMotion<Scalar, Type_fr_base_link_X_fr_leg_right_1_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_1_link();
        const Type_fr_base_link_X_fr_leg_right_1_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_1_link_X_fr_base_link : public TransformMotion<Scalar, Type_fr_leg_right_1_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_1_link_X_fr_base_link();
        const Type_fr_leg_right_1_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_2_link : public TransformMotion<Scalar, Type_fr_base_link_X_fr_leg_right_2_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_2_link();
        const Type_fr_base_link_X_fr_leg_right_2_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_2_link_X_fr_base_link : public TransformMotion<Scalar, Type_fr_leg_right_2_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_2_link_X_fr_base_link();
        const Type_fr_leg_right_2_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_3_link : public TransformMotion<Scalar, Type_fr_base_link_X_fr_leg_right_3_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_3_link();
        const Type_fr_base_link_X_fr_leg_right_3_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_3_link_X_fr_base_link : public TransformMotion<Scalar, Type_fr_leg_right_3_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_3_link_X_fr_base_link();
        const Type_fr_leg_right_3_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_4_link : public TransformMotion<Scalar, Type_fr_base_link_X_fr_leg_right_4_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_4_link();
        const Type_fr_base_link_X_fr_leg_right_4_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_4_link_X_fr_base_link : public TransformMotion<Scalar, Type_fr_leg_right_4_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_4_link_X_fr_base_link();
        const Type_fr_leg_right_4_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_5_link : public TransformMotion<Scalar, Type_fr_base_link_X_fr_leg_right_5_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_5_link();
        const Type_fr_base_link_X_fr_leg_right_5_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_5_link_X_fr_base_link : public TransformMotion<Scalar, Type_fr_leg_right_5_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_5_link_X_fr_base_link();
        const Type_fr_leg_right_5_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_6_link : public TransformMotion<Scalar, Type_fr_base_link_X_fr_leg_right_6_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_6_link();
        const Type_fr_base_link_X_fr_leg_right_6_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_6_link_X_fr_base_link : public TransformMotion<Scalar, Type_fr_leg_right_6_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_6_link_X_fr_base_link();
        const Type_fr_leg_right_6_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_1_joint : public TransformMotion<Scalar, Type_fr_base_link_X_fr_leg_left_1_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_1_joint();
        const Type_fr_base_link_X_fr_leg_left_1_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_2_joint : public TransformMotion<Scalar, Type_fr_base_link_X_fr_leg_left_2_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_2_joint();
        const Type_fr_base_link_X_fr_leg_left_2_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_3_joint : public TransformMotion<Scalar, Type_fr_base_link_X_fr_leg_left_3_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_3_joint();
        const Type_fr_base_link_X_fr_leg_left_3_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_4_joint : public TransformMotion<Scalar, Type_fr_base_link_X_fr_leg_left_4_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_4_joint();
        const Type_fr_base_link_X_fr_leg_left_4_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_5_joint : public TransformMotion<Scalar, Type_fr_base_link_X_fr_leg_left_5_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_5_joint();
        const Type_fr_base_link_X_fr_leg_left_5_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_6_joint : public TransformMotion<Scalar, Type_fr_base_link_X_fr_leg_left_6_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_6_joint();
        const Type_fr_base_link_X_fr_leg_left_6_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_1_joint : public TransformMotion<Scalar, Type_fr_base_link_X_fr_leg_right_1_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_1_joint();
        const Type_fr_base_link_X_fr_leg_right_1_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_2_joint : public TransformMotion<Scalar, Type_fr_base_link_X_fr_leg_right_2_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_2_joint();
        const Type_fr_base_link_X_fr_leg_right_2_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_3_joint : public TransformMotion<Scalar, Type_fr_base_link_X_fr_leg_right_3_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_3_joint();
        const Type_fr_base_link_X_fr_leg_right_3_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_4_joint : public TransformMotion<Scalar, Type_fr_base_link_X_fr_leg_right_4_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_4_joint();
        const Type_fr_base_link_X_fr_leg_right_4_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_5_joint : public TransformMotion<Scalar, Type_fr_base_link_X_fr_leg_right_5_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_5_joint();
        const Type_fr_base_link_X_fr_leg_right_5_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_6_joint : public TransformMotion<Scalar, Type_fr_base_link_X_fr_leg_right_6_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_6_joint();
        const Type_fr_base_link_X_fr_leg_right_6_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_2_link_X_fr_leg_left_1_link : public TransformMotion<Scalar, Type_fr_leg_left_2_link_X_fr_leg_left_1_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_2_link_X_fr_leg_left_1_link();
        const Type_fr_leg_left_2_link_X_fr_leg_left_1_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_1_link_X_fr_leg_left_2_link : public TransformMotion<Scalar, Type_fr_leg_left_1_link_X_fr_leg_left_2_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_1_link_X_fr_leg_left_2_link();
        const Type_fr_leg_left_1_link_X_fr_leg_left_2_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_3_link_X_fr_leg_left_2_link : public TransformMotion<Scalar, Type_fr_leg_left_3_link_X_fr_leg_left_2_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_3_link_X_fr_leg_left_2_link();
        const Type_fr_leg_left_3_link_X_fr_leg_left_2_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_2_link_X_fr_leg_left_3_link : public TransformMotion<Scalar, Type_fr_leg_left_2_link_X_fr_leg_left_3_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_2_link_X_fr_leg_left_3_link();
        const Type_fr_leg_left_2_link_X_fr_leg_left_3_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_4_link_X_fr_leg_left_3_link : public TransformMotion<Scalar, Type_fr_leg_left_4_link_X_fr_leg_left_3_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_4_link_X_fr_leg_left_3_link();
        const Type_fr_leg_left_4_link_X_fr_leg_left_3_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_3_link_X_fr_leg_left_4_link : public TransformMotion<Scalar, Type_fr_leg_left_3_link_X_fr_leg_left_4_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_3_link_X_fr_leg_left_4_link();
        const Type_fr_leg_left_3_link_X_fr_leg_left_4_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_5_link_X_fr_leg_left_4_link : public TransformMotion<Scalar, Type_fr_leg_left_5_link_X_fr_leg_left_4_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_5_link_X_fr_leg_left_4_link();
        const Type_fr_leg_left_5_link_X_fr_leg_left_4_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_4_link_X_fr_leg_left_5_link : public TransformMotion<Scalar, Type_fr_leg_left_4_link_X_fr_leg_left_5_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_4_link_X_fr_leg_left_5_link();
        const Type_fr_leg_left_4_link_X_fr_leg_left_5_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_6_link_X_fr_leg_left_5_link : public TransformMotion<Scalar, Type_fr_leg_left_6_link_X_fr_leg_left_5_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_6_link_X_fr_leg_left_5_link();
        const Type_fr_leg_left_6_link_X_fr_leg_left_5_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_5_link_X_fr_leg_left_6_link : public TransformMotion<Scalar, Type_fr_leg_left_5_link_X_fr_leg_left_6_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_5_link_X_fr_leg_left_6_link();
        const Type_fr_leg_left_5_link_X_fr_leg_left_6_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_2_link_X_fr_leg_right_1_link : public TransformMotion<Scalar, Type_fr_leg_right_2_link_X_fr_leg_right_1_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_2_link_X_fr_leg_right_1_link();
        const Type_fr_leg_right_2_link_X_fr_leg_right_1_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_1_link_X_fr_leg_right_2_link : public TransformMotion<Scalar, Type_fr_leg_right_1_link_X_fr_leg_right_2_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_1_link_X_fr_leg_right_2_link();
        const Type_fr_leg_right_1_link_X_fr_leg_right_2_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_3_link_X_fr_leg_right_2_link : public TransformMotion<Scalar, Type_fr_leg_right_3_link_X_fr_leg_right_2_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_3_link_X_fr_leg_right_2_link();
        const Type_fr_leg_right_3_link_X_fr_leg_right_2_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_2_link_X_fr_leg_right_3_link : public TransformMotion<Scalar, Type_fr_leg_right_2_link_X_fr_leg_right_3_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_2_link_X_fr_leg_right_3_link();
        const Type_fr_leg_right_2_link_X_fr_leg_right_3_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_4_link_X_fr_leg_right_3_link : public TransformMotion<Scalar, Type_fr_leg_right_4_link_X_fr_leg_right_3_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_4_link_X_fr_leg_right_3_link();
        const Type_fr_leg_right_4_link_X_fr_leg_right_3_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_3_link_X_fr_leg_right_4_link : public TransformMotion<Scalar, Type_fr_leg_right_3_link_X_fr_leg_right_4_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_3_link_X_fr_leg_right_4_link();
        const Type_fr_leg_right_3_link_X_fr_leg_right_4_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_5_link_X_fr_leg_right_4_link : public TransformMotion<Scalar, Type_fr_leg_right_5_link_X_fr_leg_right_4_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_5_link_X_fr_leg_right_4_link();
        const Type_fr_leg_right_5_link_X_fr_leg_right_4_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_4_link_X_fr_leg_right_5_link : public TransformMotion<Scalar, Type_fr_leg_right_4_link_X_fr_leg_right_5_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_4_link_X_fr_leg_right_5_link();
        const Type_fr_leg_right_4_link_X_fr_leg_right_5_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_6_link_X_fr_leg_right_5_link : public TransformMotion<Scalar, Type_fr_leg_right_6_link_X_fr_leg_right_5_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_6_link_X_fr_leg_right_5_link();
        const Type_fr_leg_right_6_link_X_fr_leg_right_5_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_5_link_X_fr_leg_right_6_link : public TransformMotion<Scalar, Type_fr_leg_right_5_link_X_fr_leg_right_6_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_5_link_X_fr_leg_right_6_link();
        const Type_fr_leg_right_5_link_X_fr_leg_right_6_link& update(const JState&);
    protected:
    };
    
public:
    MotionTransforms();
    void updateParameters();
    Type_fr_base_link_X_fr_leg_left_1_link fr_base_link_X_fr_leg_left_1_link;
    Type_fr_leg_left_1_link_X_fr_base_link fr_leg_left_1_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_left_2_link fr_base_link_X_fr_leg_left_2_link;
    Type_fr_leg_left_2_link_X_fr_base_link fr_leg_left_2_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_left_3_link fr_base_link_X_fr_leg_left_3_link;
    Type_fr_leg_left_3_link_X_fr_base_link fr_leg_left_3_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_left_4_link fr_base_link_X_fr_leg_left_4_link;
    Type_fr_leg_left_4_link_X_fr_base_link fr_leg_left_4_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_left_5_link fr_base_link_X_fr_leg_left_5_link;
    Type_fr_leg_left_5_link_X_fr_base_link fr_leg_left_5_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_left_6_link fr_base_link_X_fr_leg_left_6_link;
    Type_fr_leg_left_6_link_X_fr_base_link fr_leg_left_6_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_right_1_link fr_base_link_X_fr_leg_right_1_link;
    Type_fr_leg_right_1_link_X_fr_base_link fr_leg_right_1_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_right_2_link fr_base_link_X_fr_leg_right_2_link;
    Type_fr_leg_right_2_link_X_fr_base_link fr_leg_right_2_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_right_3_link fr_base_link_X_fr_leg_right_3_link;
    Type_fr_leg_right_3_link_X_fr_base_link fr_leg_right_3_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_right_4_link fr_base_link_X_fr_leg_right_4_link;
    Type_fr_leg_right_4_link_X_fr_base_link fr_leg_right_4_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_right_5_link fr_base_link_X_fr_leg_right_5_link;
    Type_fr_leg_right_5_link_X_fr_base_link fr_leg_right_5_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_right_6_link fr_base_link_X_fr_leg_right_6_link;
    Type_fr_leg_right_6_link_X_fr_base_link fr_leg_right_6_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_left_1_joint fr_base_link_X_fr_leg_left_1_joint;
    Type_fr_base_link_X_fr_leg_left_2_joint fr_base_link_X_fr_leg_left_2_joint;
    Type_fr_base_link_X_fr_leg_left_3_joint fr_base_link_X_fr_leg_left_3_joint;
    Type_fr_base_link_X_fr_leg_left_4_joint fr_base_link_X_fr_leg_left_4_joint;
    Type_fr_base_link_X_fr_leg_left_5_joint fr_base_link_X_fr_leg_left_5_joint;
    Type_fr_base_link_X_fr_leg_left_6_joint fr_base_link_X_fr_leg_left_6_joint;
    Type_fr_base_link_X_fr_leg_right_1_joint fr_base_link_X_fr_leg_right_1_joint;
    Type_fr_base_link_X_fr_leg_right_2_joint fr_base_link_X_fr_leg_right_2_joint;
    Type_fr_base_link_X_fr_leg_right_3_joint fr_base_link_X_fr_leg_right_3_joint;
    Type_fr_base_link_X_fr_leg_right_4_joint fr_base_link_X_fr_leg_right_4_joint;
    Type_fr_base_link_X_fr_leg_right_5_joint fr_base_link_X_fr_leg_right_5_joint;
    Type_fr_base_link_X_fr_leg_right_6_joint fr_base_link_X_fr_leg_right_6_joint;
    Type_fr_leg_left_2_link_X_fr_leg_left_1_link fr_leg_left_2_link_X_fr_leg_left_1_link;
    Type_fr_leg_left_1_link_X_fr_leg_left_2_link fr_leg_left_1_link_X_fr_leg_left_2_link;
    Type_fr_leg_left_3_link_X_fr_leg_left_2_link fr_leg_left_3_link_X_fr_leg_left_2_link;
    Type_fr_leg_left_2_link_X_fr_leg_left_3_link fr_leg_left_2_link_X_fr_leg_left_3_link;
    Type_fr_leg_left_4_link_X_fr_leg_left_3_link fr_leg_left_4_link_X_fr_leg_left_3_link;
    Type_fr_leg_left_3_link_X_fr_leg_left_4_link fr_leg_left_3_link_X_fr_leg_left_4_link;
    Type_fr_leg_left_5_link_X_fr_leg_left_4_link fr_leg_left_5_link_X_fr_leg_left_4_link;
    Type_fr_leg_left_4_link_X_fr_leg_left_5_link fr_leg_left_4_link_X_fr_leg_left_5_link;
    Type_fr_leg_left_6_link_X_fr_leg_left_5_link fr_leg_left_6_link_X_fr_leg_left_5_link;
    Type_fr_leg_left_5_link_X_fr_leg_left_6_link fr_leg_left_5_link_X_fr_leg_left_6_link;
    Type_fr_leg_right_2_link_X_fr_leg_right_1_link fr_leg_right_2_link_X_fr_leg_right_1_link;
    Type_fr_leg_right_1_link_X_fr_leg_right_2_link fr_leg_right_1_link_X_fr_leg_right_2_link;
    Type_fr_leg_right_3_link_X_fr_leg_right_2_link fr_leg_right_3_link_X_fr_leg_right_2_link;
    Type_fr_leg_right_2_link_X_fr_leg_right_3_link fr_leg_right_2_link_X_fr_leg_right_3_link;
    Type_fr_leg_right_4_link_X_fr_leg_right_3_link fr_leg_right_4_link_X_fr_leg_right_3_link;
    Type_fr_leg_right_3_link_X_fr_leg_right_4_link fr_leg_right_3_link_X_fr_leg_right_4_link;
    Type_fr_leg_right_5_link_X_fr_leg_right_4_link fr_leg_right_5_link_X_fr_leg_right_4_link;
    Type_fr_leg_right_4_link_X_fr_leg_right_5_link fr_leg_right_4_link_X_fr_leg_right_5_link;
    Type_fr_leg_right_6_link_X_fr_leg_right_5_link fr_leg_right_6_link_X_fr_leg_right_5_link;
    Type_fr_leg_right_5_link_X_fr_leg_right_6_link fr_leg_right_5_link_X_fr_leg_right_6_link;

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
    class Type_fr_base_link_X_fr_leg_left_1_link : public TransformForce<Scalar, Type_fr_base_link_X_fr_leg_left_1_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_1_link();
        const Type_fr_base_link_X_fr_leg_left_1_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_1_link_X_fr_base_link : public TransformForce<Scalar, Type_fr_leg_left_1_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_1_link_X_fr_base_link();
        const Type_fr_leg_left_1_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_2_link : public TransformForce<Scalar, Type_fr_base_link_X_fr_leg_left_2_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_2_link();
        const Type_fr_base_link_X_fr_leg_left_2_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_2_link_X_fr_base_link : public TransformForce<Scalar, Type_fr_leg_left_2_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_2_link_X_fr_base_link();
        const Type_fr_leg_left_2_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_3_link : public TransformForce<Scalar, Type_fr_base_link_X_fr_leg_left_3_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_3_link();
        const Type_fr_base_link_X_fr_leg_left_3_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_3_link_X_fr_base_link : public TransformForce<Scalar, Type_fr_leg_left_3_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_3_link_X_fr_base_link();
        const Type_fr_leg_left_3_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_4_link : public TransformForce<Scalar, Type_fr_base_link_X_fr_leg_left_4_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_4_link();
        const Type_fr_base_link_X_fr_leg_left_4_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_4_link_X_fr_base_link : public TransformForce<Scalar, Type_fr_leg_left_4_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_4_link_X_fr_base_link();
        const Type_fr_leg_left_4_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_5_link : public TransformForce<Scalar, Type_fr_base_link_X_fr_leg_left_5_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_5_link();
        const Type_fr_base_link_X_fr_leg_left_5_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_5_link_X_fr_base_link : public TransformForce<Scalar, Type_fr_leg_left_5_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_5_link_X_fr_base_link();
        const Type_fr_leg_left_5_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_6_link : public TransformForce<Scalar, Type_fr_base_link_X_fr_leg_left_6_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_6_link();
        const Type_fr_base_link_X_fr_leg_left_6_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_6_link_X_fr_base_link : public TransformForce<Scalar, Type_fr_leg_left_6_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_6_link_X_fr_base_link();
        const Type_fr_leg_left_6_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_1_link : public TransformForce<Scalar, Type_fr_base_link_X_fr_leg_right_1_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_1_link();
        const Type_fr_base_link_X_fr_leg_right_1_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_1_link_X_fr_base_link : public TransformForce<Scalar, Type_fr_leg_right_1_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_1_link_X_fr_base_link();
        const Type_fr_leg_right_1_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_2_link : public TransformForce<Scalar, Type_fr_base_link_X_fr_leg_right_2_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_2_link();
        const Type_fr_base_link_X_fr_leg_right_2_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_2_link_X_fr_base_link : public TransformForce<Scalar, Type_fr_leg_right_2_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_2_link_X_fr_base_link();
        const Type_fr_leg_right_2_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_3_link : public TransformForce<Scalar, Type_fr_base_link_X_fr_leg_right_3_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_3_link();
        const Type_fr_base_link_X_fr_leg_right_3_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_3_link_X_fr_base_link : public TransformForce<Scalar, Type_fr_leg_right_3_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_3_link_X_fr_base_link();
        const Type_fr_leg_right_3_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_4_link : public TransformForce<Scalar, Type_fr_base_link_X_fr_leg_right_4_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_4_link();
        const Type_fr_base_link_X_fr_leg_right_4_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_4_link_X_fr_base_link : public TransformForce<Scalar, Type_fr_leg_right_4_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_4_link_X_fr_base_link();
        const Type_fr_leg_right_4_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_5_link : public TransformForce<Scalar, Type_fr_base_link_X_fr_leg_right_5_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_5_link();
        const Type_fr_base_link_X_fr_leg_right_5_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_5_link_X_fr_base_link : public TransformForce<Scalar, Type_fr_leg_right_5_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_5_link_X_fr_base_link();
        const Type_fr_leg_right_5_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_6_link : public TransformForce<Scalar, Type_fr_base_link_X_fr_leg_right_6_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_6_link();
        const Type_fr_base_link_X_fr_leg_right_6_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_6_link_X_fr_base_link : public TransformForce<Scalar, Type_fr_leg_right_6_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_6_link_X_fr_base_link();
        const Type_fr_leg_right_6_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_1_joint : public TransformForce<Scalar, Type_fr_base_link_X_fr_leg_left_1_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_1_joint();
        const Type_fr_base_link_X_fr_leg_left_1_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_2_joint : public TransformForce<Scalar, Type_fr_base_link_X_fr_leg_left_2_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_2_joint();
        const Type_fr_base_link_X_fr_leg_left_2_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_3_joint : public TransformForce<Scalar, Type_fr_base_link_X_fr_leg_left_3_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_3_joint();
        const Type_fr_base_link_X_fr_leg_left_3_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_4_joint : public TransformForce<Scalar, Type_fr_base_link_X_fr_leg_left_4_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_4_joint();
        const Type_fr_base_link_X_fr_leg_left_4_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_5_joint : public TransformForce<Scalar, Type_fr_base_link_X_fr_leg_left_5_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_5_joint();
        const Type_fr_base_link_X_fr_leg_left_5_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_6_joint : public TransformForce<Scalar, Type_fr_base_link_X_fr_leg_left_6_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_6_joint();
        const Type_fr_base_link_X_fr_leg_left_6_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_1_joint : public TransformForce<Scalar, Type_fr_base_link_X_fr_leg_right_1_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_1_joint();
        const Type_fr_base_link_X_fr_leg_right_1_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_2_joint : public TransformForce<Scalar, Type_fr_base_link_X_fr_leg_right_2_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_2_joint();
        const Type_fr_base_link_X_fr_leg_right_2_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_3_joint : public TransformForce<Scalar, Type_fr_base_link_X_fr_leg_right_3_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_3_joint();
        const Type_fr_base_link_X_fr_leg_right_3_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_4_joint : public TransformForce<Scalar, Type_fr_base_link_X_fr_leg_right_4_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_4_joint();
        const Type_fr_base_link_X_fr_leg_right_4_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_5_joint : public TransformForce<Scalar, Type_fr_base_link_X_fr_leg_right_5_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_5_joint();
        const Type_fr_base_link_X_fr_leg_right_5_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_6_joint : public TransformForce<Scalar, Type_fr_base_link_X_fr_leg_right_6_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_6_joint();
        const Type_fr_base_link_X_fr_leg_right_6_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_2_link_X_fr_leg_left_1_link : public TransformForce<Scalar, Type_fr_leg_left_2_link_X_fr_leg_left_1_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_2_link_X_fr_leg_left_1_link();
        const Type_fr_leg_left_2_link_X_fr_leg_left_1_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_1_link_X_fr_leg_left_2_link : public TransformForce<Scalar, Type_fr_leg_left_1_link_X_fr_leg_left_2_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_1_link_X_fr_leg_left_2_link();
        const Type_fr_leg_left_1_link_X_fr_leg_left_2_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_3_link_X_fr_leg_left_2_link : public TransformForce<Scalar, Type_fr_leg_left_3_link_X_fr_leg_left_2_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_3_link_X_fr_leg_left_2_link();
        const Type_fr_leg_left_3_link_X_fr_leg_left_2_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_2_link_X_fr_leg_left_3_link : public TransformForce<Scalar, Type_fr_leg_left_2_link_X_fr_leg_left_3_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_2_link_X_fr_leg_left_3_link();
        const Type_fr_leg_left_2_link_X_fr_leg_left_3_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_4_link_X_fr_leg_left_3_link : public TransformForce<Scalar, Type_fr_leg_left_4_link_X_fr_leg_left_3_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_4_link_X_fr_leg_left_3_link();
        const Type_fr_leg_left_4_link_X_fr_leg_left_3_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_3_link_X_fr_leg_left_4_link : public TransformForce<Scalar, Type_fr_leg_left_3_link_X_fr_leg_left_4_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_3_link_X_fr_leg_left_4_link();
        const Type_fr_leg_left_3_link_X_fr_leg_left_4_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_5_link_X_fr_leg_left_4_link : public TransformForce<Scalar, Type_fr_leg_left_5_link_X_fr_leg_left_4_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_5_link_X_fr_leg_left_4_link();
        const Type_fr_leg_left_5_link_X_fr_leg_left_4_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_4_link_X_fr_leg_left_5_link : public TransformForce<Scalar, Type_fr_leg_left_4_link_X_fr_leg_left_5_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_4_link_X_fr_leg_left_5_link();
        const Type_fr_leg_left_4_link_X_fr_leg_left_5_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_6_link_X_fr_leg_left_5_link : public TransformForce<Scalar, Type_fr_leg_left_6_link_X_fr_leg_left_5_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_6_link_X_fr_leg_left_5_link();
        const Type_fr_leg_left_6_link_X_fr_leg_left_5_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_5_link_X_fr_leg_left_6_link : public TransformForce<Scalar, Type_fr_leg_left_5_link_X_fr_leg_left_6_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_5_link_X_fr_leg_left_6_link();
        const Type_fr_leg_left_5_link_X_fr_leg_left_6_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_2_link_X_fr_leg_right_1_link : public TransformForce<Scalar, Type_fr_leg_right_2_link_X_fr_leg_right_1_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_2_link_X_fr_leg_right_1_link();
        const Type_fr_leg_right_2_link_X_fr_leg_right_1_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_1_link_X_fr_leg_right_2_link : public TransformForce<Scalar, Type_fr_leg_right_1_link_X_fr_leg_right_2_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_1_link_X_fr_leg_right_2_link();
        const Type_fr_leg_right_1_link_X_fr_leg_right_2_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_3_link_X_fr_leg_right_2_link : public TransformForce<Scalar, Type_fr_leg_right_3_link_X_fr_leg_right_2_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_3_link_X_fr_leg_right_2_link();
        const Type_fr_leg_right_3_link_X_fr_leg_right_2_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_2_link_X_fr_leg_right_3_link : public TransformForce<Scalar, Type_fr_leg_right_2_link_X_fr_leg_right_3_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_2_link_X_fr_leg_right_3_link();
        const Type_fr_leg_right_2_link_X_fr_leg_right_3_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_4_link_X_fr_leg_right_3_link : public TransformForce<Scalar, Type_fr_leg_right_4_link_X_fr_leg_right_3_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_4_link_X_fr_leg_right_3_link();
        const Type_fr_leg_right_4_link_X_fr_leg_right_3_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_3_link_X_fr_leg_right_4_link : public TransformForce<Scalar, Type_fr_leg_right_3_link_X_fr_leg_right_4_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_3_link_X_fr_leg_right_4_link();
        const Type_fr_leg_right_3_link_X_fr_leg_right_4_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_5_link_X_fr_leg_right_4_link : public TransformForce<Scalar, Type_fr_leg_right_5_link_X_fr_leg_right_4_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_5_link_X_fr_leg_right_4_link();
        const Type_fr_leg_right_5_link_X_fr_leg_right_4_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_4_link_X_fr_leg_right_5_link : public TransformForce<Scalar, Type_fr_leg_right_4_link_X_fr_leg_right_5_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_4_link_X_fr_leg_right_5_link();
        const Type_fr_leg_right_4_link_X_fr_leg_right_5_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_6_link_X_fr_leg_right_5_link : public TransformForce<Scalar, Type_fr_leg_right_6_link_X_fr_leg_right_5_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_6_link_X_fr_leg_right_5_link();
        const Type_fr_leg_right_6_link_X_fr_leg_right_5_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_5_link_X_fr_leg_right_6_link : public TransformForce<Scalar, Type_fr_leg_right_5_link_X_fr_leg_right_6_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_5_link_X_fr_leg_right_6_link();
        const Type_fr_leg_right_5_link_X_fr_leg_right_6_link& update(const JState&);
    protected:
    };
    
public:
    ForceTransforms();
    void updateParameters();
    Type_fr_base_link_X_fr_leg_left_1_link fr_base_link_X_fr_leg_left_1_link;
    Type_fr_leg_left_1_link_X_fr_base_link fr_leg_left_1_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_left_2_link fr_base_link_X_fr_leg_left_2_link;
    Type_fr_leg_left_2_link_X_fr_base_link fr_leg_left_2_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_left_3_link fr_base_link_X_fr_leg_left_3_link;
    Type_fr_leg_left_3_link_X_fr_base_link fr_leg_left_3_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_left_4_link fr_base_link_X_fr_leg_left_4_link;
    Type_fr_leg_left_4_link_X_fr_base_link fr_leg_left_4_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_left_5_link fr_base_link_X_fr_leg_left_5_link;
    Type_fr_leg_left_5_link_X_fr_base_link fr_leg_left_5_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_left_6_link fr_base_link_X_fr_leg_left_6_link;
    Type_fr_leg_left_6_link_X_fr_base_link fr_leg_left_6_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_right_1_link fr_base_link_X_fr_leg_right_1_link;
    Type_fr_leg_right_1_link_X_fr_base_link fr_leg_right_1_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_right_2_link fr_base_link_X_fr_leg_right_2_link;
    Type_fr_leg_right_2_link_X_fr_base_link fr_leg_right_2_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_right_3_link fr_base_link_X_fr_leg_right_3_link;
    Type_fr_leg_right_3_link_X_fr_base_link fr_leg_right_3_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_right_4_link fr_base_link_X_fr_leg_right_4_link;
    Type_fr_leg_right_4_link_X_fr_base_link fr_leg_right_4_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_right_5_link fr_base_link_X_fr_leg_right_5_link;
    Type_fr_leg_right_5_link_X_fr_base_link fr_leg_right_5_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_right_6_link fr_base_link_X_fr_leg_right_6_link;
    Type_fr_leg_right_6_link_X_fr_base_link fr_leg_right_6_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_left_1_joint fr_base_link_X_fr_leg_left_1_joint;
    Type_fr_base_link_X_fr_leg_left_2_joint fr_base_link_X_fr_leg_left_2_joint;
    Type_fr_base_link_X_fr_leg_left_3_joint fr_base_link_X_fr_leg_left_3_joint;
    Type_fr_base_link_X_fr_leg_left_4_joint fr_base_link_X_fr_leg_left_4_joint;
    Type_fr_base_link_X_fr_leg_left_5_joint fr_base_link_X_fr_leg_left_5_joint;
    Type_fr_base_link_X_fr_leg_left_6_joint fr_base_link_X_fr_leg_left_6_joint;
    Type_fr_base_link_X_fr_leg_right_1_joint fr_base_link_X_fr_leg_right_1_joint;
    Type_fr_base_link_X_fr_leg_right_2_joint fr_base_link_X_fr_leg_right_2_joint;
    Type_fr_base_link_X_fr_leg_right_3_joint fr_base_link_X_fr_leg_right_3_joint;
    Type_fr_base_link_X_fr_leg_right_4_joint fr_base_link_X_fr_leg_right_4_joint;
    Type_fr_base_link_X_fr_leg_right_5_joint fr_base_link_X_fr_leg_right_5_joint;
    Type_fr_base_link_X_fr_leg_right_6_joint fr_base_link_X_fr_leg_right_6_joint;
    Type_fr_leg_left_2_link_X_fr_leg_left_1_link fr_leg_left_2_link_X_fr_leg_left_1_link;
    Type_fr_leg_left_1_link_X_fr_leg_left_2_link fr_leg_left_1_link_X_fr_leg_left_2_link;
    Type_fr_leg_left_3_link_X_fr_leg_left_2_link fr_leg_left_3_link_X_fr_leg_left_2_link;
    Type_fr_leg_left_2_link_X_fr_leg_left_3_link fr_leg_left_2_link_X_fr_leg_left_3_link;
    Type_fr_leg_left_4_link_X_fr_leg_left_3_link fr_leg_left_4_link_X_fr_leg_left_3_link;
    Type_fr_leg_left_3_link_X_fr_leg_left_4_link fr_leg_left_3_link_X_fr_leg_left_4_link;
    Type_fr_leg_left_5_link_X_fr_leg_left_4_link fr_leg_left_5_link_X_fr_leg_left_4_link;
    Type_fr_leg_left_4_link_X_fr_leg_left_5_link fr_leg_left_4_link_X_fr_leg_left_5_link;
    Type_fr_leg_left_6_link_X_fr_leg_left_5_link fr_leg_left_6_link_X_fr_leg_left_5_link;
    Type_fr_leg_left_5_link_X_fr_leg_left_6_link fr_leg_left_5_link_X_fr_leg_left_6_link;
    Type_fr_leg_right_2_link_X_fr_leg_right_1_link fr_leg_right_2_link_X_fr_leg_right_1_link;
    Type_fr_leg_right_1_link_X_fr_leg_right_2_link fr_leg_right_1_link_X_fr_leg_right_2_link;
    Type_fr_leg_right_3_link_X_fr_leg_right_2_link fr_leg_right_3_link_X_fr_leg_right_2_link;
    Type_fr_leg_right_2_link_X_fr_leg_right_3_link fr_leg_right_2_link_X_fr_leg_right_3_link;
    Type_fr_leg_right_4_link_X_fr_leg_right_3_link fr_leg_right_4_link_X_fr_leg_right_3_link;
    Type_fr_leg_right_3_link_X_fr_leg_right_4_link fr_leg_right_3_link_X_fr_leg_right_4_link;
    Type_fr_leg_right_5_link_X_fr_leg_right_4_link fr_leg_right_5_link_X_fr_leg_right_4_link;
    Type_fr_leg_right_4_link_X_fr_leg_right_5_link fr_leg_right_4_link_X_fr_leg_right_5_link;
    Type_fr_leg_right_6_link_X_fr_leg_right_5_link fr_leg_right_6_link_X_fr_leg_right_5_link;
    Type_fr_leg_right_5_link_X_fr_leg_right_6_link fr_leg_right_5_link_X_fr_leg_right_6_link;

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
    class Type_fr_base_link_X_fr_leg_left_1_link : public TransformHomogeneous<Scalar, Type_fr_base_link_X_fr_leg_left_1_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_1_link();
        const Type_fr_base_link_X_fr_leg_left_1_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_1_link_X_fr_base_link : public TransformHomogeneous<Scalar, Type_fr_leg_left_1_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_1_link_X_fr_base_link();
        const Type_fr_leg_left_1_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_2_link : public TransformHomogeneous<Scalar, Type_fr_base_link_X_fr_leg_left_2_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_2_link();
        const Type_fr_base_link_X_fr_leg_left_2_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_2_link_X_fr_base_link : public TransformHomogeneous<Scalar, Type_fr_leg_left_2_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_2_link_X_fr_base_link();
        const Type_fr_leg_left_2_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_3_link : public TransformHomogeneous<Scalar, Type_fr_base_link_X_fr_leg_left_3_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_3_link();
        const Type_fr_base_link_X_fr_leg_left_3_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_3_link_X_fr_base_link : public TransformHomogeneous<Scalar, Type_fr_leg_left_3_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_3_link_X_fr_base_link();
        const Type_fr_leg_left_3_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_4_link : public TransformHomogeneous<Scalar, Type_fr_base_link_X_fr_leg_left_4_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_4_link();
        const Type_fr_base_link_X_fr_leg_left_4_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_4_link_X_fr_base_link : public TransformHomogeneous<Scalar, Type_fr_leg_left_4_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_4_link_X_fr_base_link();
        const Type_fr_leg_left_4_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_5_link : public TransformHomogeneous<Scalar, Type_fr_base_link_X_fr_leg_left_5_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_5_link();
        const Type_fr_base_link_X_fr_leg_left_5_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_5_link_X_fr_base_link : public TransformHomogeneous<Scalar, Type_fr_leg_left_5_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_5_link_X_fr_base_link();
        const Type_fr_leg_left_5_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_6_link : public TransformHomogeneous<Scalar, Type_fr_base_link_X_fr_leg_left_6_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_6_link();
        const Type_fr_base_link_X_fr_leg_left_6_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_6_link_X_fr_base_link : public TransformHomogeneous<Scalar, Type_fr_leg_left_6_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_6_link_X_fr_base_link();
        const Type_fr_leg_left_6_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_1_link : public TransformHomogeneous<Scalar, Type_fr_base_link_X_fr_leg_right_1_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_1_link();
        const Type_fr_base_link_X_fr_leg_right_1_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_1_link_X_fr_base_link : public TransformHomogeneous<Scalar, Type_fr_leg_right_1_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_1_link_X_fr_base_link();
        const Type_fr_leg_right_1_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_2_link : public TransformHomogeneous<Scalar, Type_fr_base_link_X_fr_leg_right_2_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_2_link();
        const Type_fr_base_link_X_fr_leg_right_2_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_2_link_X_fr_base_link : public TransformHomogeneous<Scalar, Type_fr_leg_right_2_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_2_link_X_fr_base_link();
        const Type_fr_leg_right_2_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_3_link : public TransformHomogeneous<Scalar, Type_fr_base_link_X_fr_leg_right_3_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_3_link();
        const Type_fr_base_link_X_fr_leg_right_3_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_3_link_X_fr_base_link : public TransformHomogeneous<Scalar, Type_fr_leg_right_3_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_3_link_X_fr_base_link();
        const Type_fr_leg_right_3_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_4_link : public TransformHomogeneous<Scalar, Type_fr_base_link_X_fr_leg_right_4_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_4_link();
        const Type_fr_base_link_X_fr_leg_right_4_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_4_link_X_fr_base_link : public TransformHomogeneous<Scalar, Type_fr_leg_right_4_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_4_link_X_fr_base_link();
        const Type_fr_leg_right_4_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_5_link : public TransformHomogeneous<Scalar, Type_fr_base_link_X_fr_leg_right_5_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_5_link();
        const Type_fr_base_link_X_fr_leg_right_5_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_5_link_X_fr_base_link : public TransformHomogeneous<Scalar, Type_fr_leg_right_5_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_5_link_X_fr_base_link();
        const Type_fr_leg_right_5_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_6_link : public TransformHomogeneous<Scalar, Type_fr_base_link_X_fr_leg_right_6_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_6_link();
        const Type_fr_base_link_X_fr_leg_right_6_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_6_link_X_fr_base_link : public TransformHomogeneous<Scalar, Type_fr_leg_right_6_link_X_fr_base_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_6_link_X_fr_base_link();
        const Type_fr_leg_right_6_link_X_fr_base_link& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_1_joint : public TransformHomogeneous<Scalar, Type_fr_base_link_X_fr_leg_left_1_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_1_joint();
        const Type_fr_base_link_X_fr_leg_left_1_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_2_joint : public TransformHomogeneous<Scalar, Type_fr_base_link_X_fr_leg_left_2_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_2_joint();
        const Type_fr_base_link_X_fr_leg_left_2_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_3_joint : public TransformHomogeneous<Scalar, Type_fr_base_link_X_fr_leg_left_3_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_3_joint();
        const Type_fr_base_link_X_fr_leg_left_3_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_4_joint : public TransformHomogeneous<Scalar, Type_fr_base_link_X_fr_leg_left_4_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_4_joint();
        const Type_fr_base_link_X_fr_leg_left_4_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_5_joint : public TransformHomogeneous<Scalar, Type_fr_base_link_X_fr_leg_left_5_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_5_joint();
        const Type_fr_base_link_X_fr_leg_left_5_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_left_6_joint : public TransformHomogeneous<Scalar, Type_fr_base_link_X_fr_leg_left_6_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_left_6_joint();
        const Type_fr_base_link_X_fr_leg_left_6_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_1_joint : public TransformHomogeneous<Scalar, Type_fr_base_link_X_fr_leg_right_1_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_1_joint();
        const Type_fr_base_link_X_fr_leg_right_1_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_2_joint : public TransformHomogeneous<Scalar, Type_fr_base_link_X_fr_leg_right_2_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_2_joint();
        const Type_fr_base_link_X_fr_leg_right_2_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_3_joint : public TransformHomogeneous<Scalar, Type_fr_base_link_X_fr_leg_right_3_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_3_joint();
        const Type_fr_base_link_X_fr_leg_right_3_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_4_joint : public TransformHomogeneous<Scalar, Type_fr_base_link_X_fr_leg_right_4_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_4_joint();
        const Type_fr_base_link_X_fr_leg_right_4_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_5_joint : public TransformHomogeneous<Scalar, Type_fr_base_link_X_fr_leg_right_5_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_5_joint();
        const Type_fr_base_link_X_fr_leg_right_5_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_base_link_X_fr_leg_right_6_joint : public TransformHomogeneous<Scalar, Type_fr_base_link_X_fr_leg_right_6_joint>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_base_link_X_fr_leg_right_6_joint();
        const Type_fr_base_link_X_fr_leg_right_6_joint& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_2_link_X_fr_leg_left_1_link : public TransformHomogeneous<Scalar, Type_fr_leg_left_2_link_X_fr_leg_left_1_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_2_link_X_fr_leg_left_1_link();
        const Type_fr_leg_left_2_link_X_fr_leg_left_1_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_1_link_X_fr_leg_left_2_link : public TransformHomogeneous<Scalar, Type_fr_leg_left_1_link_X_fr_leg_left_2_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_1_link_X_fr_leg_left_2_link();
        const Type_fr_leg_left_1_link_X_fr_leg_left_2_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_3_link_X_fr_leg_left_2_link : public TransformHomogeneous<Scalar, Type_fr_leg_left_3_link_X_fr_leg_left_2_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_3_link_X_fr_leg_left_2_link();
        const Type_fr_leg_left_3_link_X_fr_leg_left_2_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_2_link_X_fr_leg_left_3_link : public TransformHomogeneous<Scalar, Type_fr_leg_left_2_link_X_fr_leg_left_3_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_2_link_X_fr_leg_left_3_link();
        const Type_fr_leg_left_2_link_X_fr_leg_left_3_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_4_link_X_fr_leg_left_3_link : public TransformHomogeneous<Scalar, Type_fr_leg_left_4_link_X_fr_leg_left_3_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_4_link_X_fr_leg_left_3_link();
        const Type_fr_leg_left_4_link_X_fr_leg_left_3_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_3_link_X_fr_leg_left_4_link : public TransformHomogeneous<Scalar, Type_fr_leg_left_3_link_X_fr_leg_left_4_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_3_link_X_fr_leg_left_4_link();
        const Type_fr_leg_left_3_link_X_fr_leg_left_4_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_5_link_X_fr_leg_left_4_link : public TransformHomogeneous<Scalar, Type_fr_leg_left_5_link_X_fr_leg_left_4_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_5_link_X_fr_leg_left_4_link();
        const Type_fr_leg_left_5_link_X_fr_leg_left_4_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_4_link_X_fr_leg_left_5_link : public TransformHomogeneous<Scalar, Type_fr_leg_left_4_link_X_fr_leg_left_5_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_4_link_X_fr_leg_left_5_link();
        const Type_fr_leg_left_4_link_X_fr_leg_left_5_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_6_link_X_fr_leg_left_5_link : public TransformHomogeneous<Scalar, Type_fr_leg_left_6_link_X_fr_leg_left_5_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_6_link_X_fr_leg_left_5_link();
        const Type_fr_leg_left_6_link_X_fr_leg_left_5_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_left_5_link_X_fr_leg_left_6_link : public TransformHomogeneous<Scalar, Type_fr_leg_left_5_link_X_fr_leg_left_6_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_left_5_link_X_fr_leg_left_6_link();
        const Type_fr_leg_left_5_link_X_fr_leg_left_6_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_2_link_X_fr_leg_right_1_link : public TransformHomogeneous<Scalar, Type_fr_leg_right_2_link_X_fr_leg_right_1_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_2_link_X_fr_leg_right_1_link();
        const Type_fr_leg_right_2_link_X_fr_leg_right_1_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_1_link_X_fr_leg_right_2_link : public TransformHomogeneous<Scalar, Type_fr_leg_right_1_link_X_fr_leg_right_2_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_1_link_X_fr_leg_right_2_link();
        const Type_fr_leg_right_1_link_X_fr_leg_right_2_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_3_link_X_fr_leg_right_2_link : public TransformHomogeneous<Scalar, Type_fr_leg_right_3_link_X_fr_leg_right_2_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_3_link_X_fr_leg_right_2_link();
        const Type_fr_leg_right_3_link_X_fr_leg_right_2_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_2_link_X_fr_leg_right_3_link : public TransformHomogeneous<Scalar, Type_fr_leg_right_2_link_X_fr_leg_right_3_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_2_link_X_fr_leg_right_3_link();
        const Type_fr_leg_right_2_link_X_fr_leg_right_3_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_4_link_X_fr_leg_right_3_link : public TransformHomogeneous<Scalar, Type_fr_leg_right_4_link_X_fr_leg_right_3_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_4_link_X_fr_leg_right_3_link();
        const Type_fr_leg_right_4_link_X_fr_leg_right_3_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_3_link_X_fr_leg_right_4_link : public TransformHomogeneous<Scalar, Type_fr_leg_right_3_link_X_fr_leg_right_4_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_3_link_X_fr_leg_right_4_link();
        const Type_fr_leg_right_3_link_X_fr_leg_right_4_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_5_link_X_fr_leg_right_4_link : public TransformHomogeneous<Scalar, Type_fr_leg_right_5_link_X_fr_leg_right_4_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_5_link_X_fr_leg_right_4_link();
        const Type_fr_leg_right_5_link_X_fr_leg_right_4_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_4_link_X_fr_leg_right_5_link : public TransformHomogeneous<Scalar, Type_fr_leg_right_4_link_X_fr_leg_right_5_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_4_link_X_fr_leg_right_5_link();
        const Type_fr_leg_right_4_link_X_fr_leg_right_5_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_6_link_X_fr_leg_right_5_link : public TransformHomogeneous<Scalar, Type_fr_leg_right_6_link_X_fr_leg_right_5_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_6_link_X_fr_leg_right_5_link();
        const Type_fr_leg_right_6_link_X_fr_leg_right_5_link& update(const JState&);
    protected:
    };
    
    class Type_fr_leg_right_5_link_X_fr_leg_right_6_link : public TransformHomogeneous<Scalar, Type_fr_leg_right_5_link_X_fr_leg_right_6_link>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_leg_right_5_link_X_fr_leg_right_6_link();
        const Type_fr_leg_right_5_link_X_fr_leg_right_6_link& update(const JState&);
    protected:
    };
    
public:
    HomogeneousTransforms();
    void updateParameters();
    Type_fr_base_link_X_fr_leg_left_1_link fr_base_link_X_fr_leg_left_1_link;
    Type_fr_leg_left_1_link_X_fr_base_link fr_leg_left_1_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_left_2_link fr_base_link_X_fr_leg_left_2_link;
    Type_fr_leg_left_2_link_X_fr_base_link fr_leg_left_2_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_left_3_link fr_base_link_X_fr_leg_left_3_link;
    Type_fr_leg_left_3_link_X_fr_base_link fr_leg_left_3_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_left_4_link fr_base_link_X_fr_leg_left_4_link;
    Type_fr_leg_left_4_link_X_fr_base_link fr_leg_left_4_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_left_5_link fr_base_link_X_fr_leg_left_5_link;
    Type_fr_leg_left_5_link_X_fr_base_link fr_leg_left_5_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_left_6_link fr_base_link_X_fr_leg_left_6_link;
    Type_fr_leg_left_6_link_X_fr_base_link fr_leg_left_6_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_right_1_link fr_base_link_X_fr_leg_right_1_link;
    Type_fr_leg_right_1_link_X_fr_base_link fr_leg_right_1_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_right_2_link fr_base_link_X_fr_leg_right_2_link;
    Type_fr_leg_right_2_link_X_fr_base_link fr_leg_right_2_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_right_3_link fr_base_link_X_fr_leg_right_3_link;
    Type_fr_leg_right_3_link_X_fr_base_link fr_leg_right_3_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_right_4_link fr_base_link_X_fr_leg_right_4_link;
    Type_fr_leg_right_4_link_X_fr_base_link fr_leg_right_4_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_right_5_link fr_base_link_X_fr_leg_right_5_link;
    Type_fr_leg_right_5_link_X_fr_base_link fr_leg_right_5_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_right_6_link fr_base_link_X_fr_leg_right_6_link;
    Type_fr_leg_right_6_link_X_fr_base_link fr_leg_right_6_link_X_fr_base_link;
    Type_fr_base_link_X_fr_leg_left_1_joint fr_base_link_X_fr_leg_left_1_joint;
    Type_fr_base_link_X_fr_leg_left_2_joint fr_base_link_X_fr_leg_left_2_joint;
    Type_fr_base_link_X_fr_leg_left_3_joint fr_base_link_X_fr_leg_left_3_joint;
    Type_fr_base_link_X_fr_leg_left_4_joint fr_base_link_X_fr_leg_left_4_joint;
    Type_fr_base_link_X_fr_leg_left_5_joint fr_base_link_X_fr_leg_left_5_joint;
    Type_fr_base_link_X_fr_leg_left_6_joint fr_base_link_X_fr_leg_left_6_joint;
    Type_fr_base_link_X_fr_leg_right_1_joint fr_base_link_X_fr_leg_right_1_joint;
    Type_fr_base_link_X_fr_leg_right_2_joint fr_base_link_X_fr_leg_right_2_joint;
    Type_fr_base_link_X_fr_leg_right_3_joint fr_base_link_X_fr_leg_right_3_joint;
    Type_fr_base_link_X_fr_leg_right_4_joint fr_base_link_X_fr_leg_right_4_joint;
    Type_fr_base_link_X_fr_leg_right_5_joint fr_base_link_X_fr_leg_right_5_joint;
    Type_fr_base_link_X_fr_leg_right_6_joint fr_base_link_X_fr_leg_right_6_joint;
    Type_fr_leg_left_2_link_X_fr_leg_left_1_link fr_leg_left_2_link_X_fr_leg_left_1_link;
    Type_fr_leg_left_1_link_X_fr_leg_left_2_link fr_leg_left_1_link_X_fr_leg_left_2_link;
    Type_fr_leg_left_3_link_X_fr_leg_left_2_link fr_leg_left_3_link_X_fr_leg_left_2_link;
    Type_fr_leg_left_2_link_X_fr_leg_left_3_link fr_leg_left_2_link_X_fr_leg_left_3_link;
    Type_fr_leg_left_4_link_X_fr_leg_left_3_link fr_leg_left_4_link_X_fr_leg_left_3_link;
    Type_fr_leg_left_3_link_X_fr_leg_left_4_link fr_leg_left_3_link_X_fr_leg_left_4_link;
    Type_fr_leg_left_5_link_X_fr_leg_left_4_link fr_leg_left_5_link_X_fr_leg_left_4_link;
    Type_fr_leg_left_4_link_X_fr_leg_left_5_link fr_leg_left_4_link_X_fr_leg_left_5_link;
    Type_fr_leg_left_6_link_X_fr_leg_left_5_link fr_leg_left_6_link_X_fr_leg_left_5_link;
    Type_fr_leg_left_5_link_X_fr_leg_left_6_link fr_leg_left_5_link_X_fr_leg_left_6_link;
    Type_fr_leg_right_2_link_X_fr_leg_right_1_link fr_leg_right_2_link_X_fr_leg_right_1_link;
    Type_fr_leg_right_1_link_X_fr_leg_right_2_link fr_leg_right_1_link_X_fr_leg_right_2_link;
    Type_fr_leg_right_3_link_X_fr_leg_right_2_link fr_leg_right_3_link_X_fr_leg_right_2_link;
    Type_fr_leg_right_2_link_X_fr_leg_right_3_link fr_leg_right_2_link_X_fr_leg_right_3_link;
    Type_fr_leg_right_4_link_X_fr_leg_right_3_link fr_leg_right_4_link_X_fr_leg_right_3_link;
    Type_fr_leg_right_3_link_X_fr_leg_right_4_link fr_leg_right_3_link_X_fr_leg_right_4_link;
    Type_fr_leg_right_5_link_X_fr_leg_right_4_link fr_leg_right_5_link_X_fr_leg_right_4_link;
    Type_fr_leg_right_4_link_X_fr_leg_right_5_link fr_leg_right_4_link_X_fr_leg_right_5_link;
    Type_fr_leg_right_6_link_X_fr_leg_right_5_link fr_leg_right_6_link_X_fr_leg_right_5_link;
    Type_fr_leg_right_5_link_X_fr_leg_right_6_link fr_leg_right_5_link_X_fr_leg_right_6_link;

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
