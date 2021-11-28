#ifndef FRANKA_TRANSFORMS_H_
#define FRANKA_TRANSFORMS_H_

#include <Eigen/Dense>
#include <iit/rbd/TransformsBase.h>
#include "declarations.h"
#include <iit/rbd/traits/DoubleTrait.h>
#include "kinematics_parameters.h"

namespace iit {
namespace Franka {

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
    class Type_fr_table_X_fr_panda_link1 : public TransformMotion<Scalar, Type_fr_table_X_fr_panda_link1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link1();
        const Type_fr_table_X_fr_panda_link1& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link1_X_fr_table : public TransformMotion<Scalar, Type_fr_panda_link1_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link1_X_fr_table();
        const Type_fr_panda_link1_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link2 : public TransformMotion<Scalar, Type_fr_table_X_fr_panda_link2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link2();
        const Type_fr_table_X_fr_panda_link2& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link2_X_fr_table : public TransformMotion<Scalar, Type_fr_panda_link2_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link2_X_fr_table();
        const Type_fr_panda_link2_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link3 : public TransformMotion<Scalar, Type_fr_table_X_fr_panda_link3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link3();
        const Type_fr_table_X_fr_panda_link3& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link3_X_fr_table : public TransformMotion<Scalar, Type_fr_panda_link3_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link3_X_fr_table();
        const Type_fr_panda_link3_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link4 : public TransformMotion<Scalar, Type_fr_table_X_fr_panda_link4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link4();
        const Type_fr_table_X_fr_panda_link4& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link4_X_fr_table : public TransformMotion<Scalar, Type_fr_panda_link4_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link4_X_fr_table();
        const Type_fr_panda_link4_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link5 : public TransformMotion<Scalar, Type_fr_table_X_fr_panda_link5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link5();
        const Type_fr_table_X_fr_panda_link5& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link5_X_fr_table : public TransformMotion<Scalar, Type_fr_panda_link5_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link5_X_fr_table();
        const Type_fr_panda_link5_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link6 : public TransformMotion<Scalar, Type_fr_table_X_fr_panda_link6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link6();
        const Type_fr_table_X_fr_panda_link6& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link6_X_fr_table : public TransformMotion<Scalar, Type_fr_panda_link6_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link6_X_fr_table();
        const Type_fr_panda_link6_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link7 : public TransformMotion<Scalar, Type_fr_table_X_fr_panda_link7>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link7();
        const Type_fr_table_X_fr_panda_link7& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link7_X_fr_table : public TransformMotion<Scalar, Type_fr_panda_link7_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link7_X_fr_table();
        const Type_fr_panda_link7_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link0 : public TransformMotion<Scalar, Type_fr_table_X_fr_panda_link0>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link0();
        const Type_fr_table_X_fr_panda_link0& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link0_X_fr_table : public TransformMotion<Scalar, Type_fr_panda_link0_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link0_X_fr_table();
        const Type_fr_panda_link0_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link1_COM : public TransformMotion<Scalar, Type_fr_table_X_fr_panda_link1_COM>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link1_COM();
        const Type_fr_table_X_fr_panda_link1_COM& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link1_COM_X_fr_table : public TransformMotion<Scalar, Type_fr_panda_link1_COM_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link1_COM_X_fr_table();
        const Type_fr_panda_link1_COM_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link2_COM : public TransformMotion<Scalar, Type_fr_table_X_fr_panda_link2_COM>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link2_COM();
        const Type_fr_table_X_fr_panda_link2_COM& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link2_COM_X_fr_table : public TransformMotion<Scalar, Type_fr_panda_link2_COM_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link2_COM_X_fr_table();
        const Type_fr_panda_link2_COM_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link3_COM : public TransformMotion<Scalar, Type_fr_table_X_fr_panda_link3_COM>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link3_COM();
        const Type_fr_table_X_fr_panda_link3_COM& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link3_COM_X_fr_table : public TransformMotion<Scalar, Type_fr_panda_link3_COM_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link3_COM_X_fr_table();
        const Type_fr_panda_link3_COM_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link4_COM : public TransformMotion<Scalar, Type_fr_table_X_fr_panda_link4_COM>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link4_COM();
        const Type_fr_table_X_fr_panda_link4_COM& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link4_COM_X_fr_table : public TransformMotion<Scalar, Type_fr_panda_link4_COM_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link4_COM_X_fr_table();
        const Type_fr_panda_link4_COM_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link5_COM : public TransformMotion<Scalar, Type_fr_table_X_fr_panda_link5_COM>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link5_COM();
        const Type_fr_table_X_fr_panda_link5_COM& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link5_COM_X_fr_table : public TransformMotion<Scalar, Type_fr_panda_link5_COM_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link5_COM_X_fr_table();
        const Type_fr_panda_link5_COM_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link6_COM : public TransformMotion<Scalar, Type_fr_table_X_fr_panda_link6_COM>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link6_COM();
        const Type_fr_table_X_fr_panda_link6_COM& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link6_COM_X_fr_table : public TransformMotion<Scalar, Type_fr_panda_link6_COM_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link6_COM_X_fr_table();
        const Type_fr_panda_link6_COM_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link7_COM : public TransformMotion<Scalar, Type_fr_table_X_fr_panda_link7_COM>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link7_COM();
        const Type_fr_table_X_fr_panda_link7_COM& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link7_COM_X_fr_table : public TransformMotion<Scalar, Type_fr_panda_link7_COM_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link7_COM_X_fr_table();
        const Type_fr_panda_link7_COM_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_table_COM : public TransformMotion<Scalar, Type_fr_table_X_fr_table_COM>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_table_COM();
        const Type_fr_table_X_fr_table_COM& update(const JState&);
    protected:
    };
    
    class Type_fr_table_COM_X_fr_table : public TransformMotion<Scalar, Type_fr_table_COM_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_COM_X_fr_table();
        const Type_fr_table_COM_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_joint1 : public TransformMotion<Scalar, Type_fr_table_X_fr_panda_joint1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_joint1();
        const Type_fr_table_X_fr_panda_joint1& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_joint2 : public TransformMotion<Scalar, Type_fr_table_X_fr_panda_joint2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_joint2();
        const Type_fr_table_X_fr_panda_joint2& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_joint3 : public TransformMotion<Scalar, Type_fr_table_X_fr_panda_joint3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_joint3();
        const Type_fr_table_X_fr_panda_joint3& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_joint4 : public TransformMotion<Scalar, Type_fr_table_X_fr_panda_joint4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_joint4();
        const Type_fr_table_X_fr_panda_joint4& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_joint5 : public TransformMotion<Scalar, Type_fr_table_X_fr_panda_joint5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_joint5();
        const Type_fr_table_X_fr_panda_joint5& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_joint6 : public TransformMotion<Scalar, Type_fr_table_X_fr_panda_joint6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_joint6();
        const Type_fr_table_X_fr_panda_joint6& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link2_X_fr_panda_link1 : public TransformMotion<Scalar, Type_fr_panda_link2_X_fr_panda_link1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link2_X_fr_panda_link1();
        const Type_fr_panda_link2_X_fr_panda_link1& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link1_X_fr_panda_link2 : public TransformMotion<Scalar, Type_fr_panda_link1_X_fr_panda_link2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link1_X_fr_panda_link2();
        const Type_fr_panda_link1_X_fr_panda_link2& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link3_X_fr_panda_link2 : public TransformMotion<Scalar, Type_fr_panda_link3_X_fr_panda_link2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link3_X_fr_panda_link2();
        const Type_fr_panda_link3_X_fr_panda_link2& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link2_X_fr_panda_link3 : public TransformMotion<Scalar, Type_fr_panda_link2_X_fr_panda_link3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link2_X_fr_panda_link3();
        const Type_fr_panda_link2_X_fr_panda_link3& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link4_X_fr_panda_link3 : public TransformMotion<Scalar, Type_fr_panda_link4_X_fr_panda_link3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link4_X_fr_panda_link3();
        const Type_fr_panda_link4_X_fr_panda_link3& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link3_X_fr_panda_link4 : public TransformMotion<Scalar, Type_fr_panda_link3_X_fr_panda_link4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link3_X_fr_panda_link4();
        const Type_fr_panda_link3_X_fr_panda_link4& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link5_X_fr_panda_link4 : public TransformMotion<Scalar, Type_fr_panda_link5_X_fr_panda_link4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link5_X_fr_panda_link4();
        const Type_fr_panda_link5_X_fr_panda_link4& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link4_X_fr_panda_link5 : public TransformMotion<Scalar, Type_fr_panda_link4_X_fr_panda_link5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link4_X_fr_panda_link5();
        const Type_fr_panda_link4_X_fr_panda_link5& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link6_X_fr_panda_link5 : public TransformMotion<Scalar, Type_fr_panda_link6_X_fr_panda_link5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link6_X_fr_panda_link5();
        const Type_fr_panda_link6_X_fr_panda_link5& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link5_X_fr_panda_link6 : public TransformMotion<Scalar, Type_fr_panda_link5_X_fr_panda_link6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link5_X_fr_panda_link6();
        const Type_fr_panda_link5_X_fr_panda_link6& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link7_X_fr_panda_link6 : public TransformMotion<Scalar, Type_fr_panda_link7_X_fr_panda_link6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link7_X_fr_panda_link6();
        const Type_fr_panda_link7_X_fr_panda_link6& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link6_X_fr_panda_link7 : public TransformMotion<Scalar, Type_fr_panda_link6_X_fr_panda_link7>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link6_X_fr_panda_link7();
        const Type_fr_panda_link6_X_fr_panda_link7& update(const JState&);
    protected:
    };
    
public:
    MotionTransforms();
    void updateParameters();
    Type_fr_table_X_fr_panda_link1 fr_table_X_fr_panda_link1;
    Type_fr_panda_link1_X_fr_table fr_panda_link1_X_fr_table;
    Type_fr_table_X_fr_panda_link2 fr_table_X_fr_panda_link2;
    Type_fr_panda_link2_X_fr_table fr_panda_link2_X_fr_table;
    Type_fr_table_X_fr_panda_link3 fr_table_X_fr_panda_link3;
    Type_fr_panda_link3_X_fr_table fr_panda_link3_X_fr_table;
    Type_fr_table_X_fr_panda_link4 fr_table_X_fr_panda_link4;
    Type_fr_panda_link4_X_fr_table fr_panda_link4_X_fr_table;
    Type_fr_table_X_fr_panda_link5 fr_table_X_fr_panda_link5;
    Type_fr_panda_link5_X_fr_table fr_panda_link5_X_fr_table;
    Type_fr_table_X_fr_panda_link6 fr_table_X_fr_panda_link6;
    Type_fr_panda_link6_X_fr_table fr_panda_link6_X_fr_table;
    Type_fr_table_X_fr_panda_link7 fr_table_X_fr_panda_link7;
    Type_fr_panda_link7_X_fr_table fr_panda_link7_X_fr_table;
    Type_fr_table_X_fr_panda_link0 fr_table_X_fr_panda_link0;
    Type_fr_panda_link0_X_fr_table fr_panda_link0_X_fr_table;
    Type_fr_table_X_fr_panda_link1_COM fr_table_X_fr_panda_link1_COM;
    Type_fr_panda_link1_COM_X_fr_table fr_panda_link1_COM_X_fr_table;
    Type_fr_table_X_fr_panda_link2_COM fr_table_X_fr_panda_link2_COM;
    Type_fr_panda_link2_COM_X_fr_table fr_panda_link2_COM_X_fr_table;
    Type_fr_table_X_fr_panda_link3_COM fr_table_X_fr_panda_link3_COM;
    Type_fr_panda_link3_COM_X_fr_table fr_panda_link3_COM_X_fr_table;
    Type_fr_table_X_fr_panda_link4_COM fr_table_X_fr_panda_link4_COM;
    Type_fr_panda_link4_COM_X_fr_table fr_panda_link4_COM_X_fr_table;
    Type_fr_table_X_fr_panda_link5_COM fr_table_X_fr_panda_link5_COM;
    Type_fr_panda_link5_COM_X_fr_table fr_panda_link5_COM_X_fr_table;
    Type_fr_table_X_fr_panda_link6_COM fr_table_X_fr_panda_link6_COM;
    Type_fr_panda_link6_COM_X_fr_table fr_panda_link6_COM_X_fr_table;
    Type_fr_table_X_fr_panda_link7_COM fr_table_X_fr_panda_link7_COM;
    Type_fr_panda_link7_COM_X_fr_table fr_panda_link7_COM_X_fr_table;
    Type_fr_table_X_fr_table_COM fr_table_X_fr_table_COM;
    Type_fr_table_COM_X_fr_table fr_table_COM_X_fr_table;
    Type_fr_table_X_fr_panda_joint1 fr_table_X_fr_panda_joint1;
    Type_fr_table_X_fr_panda_joint2 fr_table_X_fr_panda_joint2;
    Type_fr_table_X_fr_panda_joint3 fr_table_X_fr_panda_joint3;
    Type_fr_table_X_fr_panda_joint4 fr_table_X_fr_panda_joint4;
    Type_fr_table_X_fr_panda_joint5 fr_table_X_fr_panda_joint5;
    Type_fr_table_X_fr_panda_joint6 fr_table_X_fr_panda_joint6;
    Type_fr_panda_link2_X_fr_panda_link1 fr_panda_link2_X_fr_panda_link1;
    Type_fr_panda_link1_X_fr_panda_link2 fr_panda_link1_X_fr_panda_link2;
    Type_fr_panda_link3_X_fr_panda_link2 fr_panda_link3_X_fr_panda_link2;
    Type_fr_panda_link2_X_fr_panda_link3 fr_panda_link2_X_fr_panda_link3;
    Type_fr_panda_link4_X_fr_panda_link3 fr_panda_link4_X_fr_panda_link3;
    Type_fr_panda_link3_X_fr_panda_link4 fr_panda_link3_X_fr_panda_link4;
    Type_fr_panda_link5_X_fr_panda_link4 fr_panda_link5_X_fr_panda_link4;
    Type_fr_panda_link4_X_fr_panda_link5 fr_panda_link4_X_fr_panda_link5;
    Type_fr_panda_link6_X_fr_panda_link5 fr_panda_link6_X_fr_panda_link5;
    Type_fr_panda_link5_X_fr_panda_link6 fr_panda_link5_X_fr_panda_link6;
    Type_fr_panda_link7_X_fr_panda_link6 fr_panda_link7_X_fr_panda_link6;
    Type_fr_panda_link6_X_fr_panda_link7 fr_panda_link6_X_fr_panda_link7;

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
    class Type_fr_table_X_fr_panda_link1 : public TransformForce<Scalar, Type_fr_table_X_fr_panda_link1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link1();
        const Type_fr_table_X_fr_panda_link1& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link1_X_fr_table : public TransformForce<Scalar, Type_fr_panda_link1_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link1_X_fr_table();
        const Type_fr_panda_link1_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link2 : public TransformForce<Scalar, Type_fr_table_X_fr_panda_link2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link2();
        const Type_fr_table_X_fr_panda_link2& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link2_X_fr_table : public TransformForce<Scalar, Type_fr_panda_link2_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link2_X_fr_table();
        const Type_fr_panda_link2_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link3 : public TransformForce<Scalar, Type_fr_table_X_fr_panda_link3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link3();
        const Type_fr_table_X_fr_panda_link3& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link3_X_fr_table : public TransformForce<Scalar, Type_fr_panda_link3_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link3_X_fr_table();
        const Type_fr_panda_link3_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link4 : public TransformForce<Scalar, Type_fr_table_X_fr_panda_link4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link4();
        const Type_fr_table_X_fr_panda_link4& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link4_X_fr_table : public TransformForce<Scalar, Type_fr_panda_link4_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link4_X_fr_table();
        const Type_fr_panda_link4_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link5 : public TransformForce<Scalar, Type_fr_table_X_fr_panda_link5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link5();
        const Type_fr_table_X_fr_panda_link5& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link5_X_fr_table : public TransformForce<Scalar, Type_fr_panda_link5_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link5_X_fr_table();
        const Type_fr_panda_link5_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link6 : public TransformForce<Scalar, Type_fr_table_X_fr_panda_link6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link6();
        const Type_fr_table_X_fr_panda_link6& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link6_X_fr_table : public TransformForce<Scalar, Type_fr_panda_link6_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link6_X_fr_table();
        const Type_fr_panda_link6_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link7 : public TransformForce<Scalar, Type_fr_table_X_fr_panda_link7>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link7();
        const Type_fr_table_X_fr_panda_link7& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link7_X_fr_table : public TransformForce<Scalar, Type_fr_panda_link7_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link7_X_fr_table();
        const Type_fr_panda_link7_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link0 : public TransformForce<Scalar, Type_fr_table_X_fr_panda_link0>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link0();
        const Type_fr_table_X_fr_panda_link0& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link0_X_fr_table : public TransformForce<Scalar, Type_fr_panda_link0_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link0_X_fr_table();
        const Type_fr_panda_link0_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link1_COM : public TransformForce<Scalar, Type_fr_table_X_fr_panda_link1_COM>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link1_COM();
        const Type_fr_table_X_fr_panda_link1_COM& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link1_COM_X_fr_table : public TransformForce<Scalar, Type_fr_panda_link1_COM_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link1_COM_X_fr_table();
        const Type_fr_panda_link1_COM_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link2_COM : public TransformForce<Scalar, Type_fr_table_X_fr_panda_link2_COM>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link2_COM();
        const Type_fr_table_X_fr_panda_link2_COM& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link2_COM_X_fr_table : public TransformForce<Scalar, Type_fr_panda_link2_COM_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link2_COM_X_fr_table();
        const Type_fr_panda_link2_COM_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link3_COM : public TransformForce<Scalar, Type_fr_table_X_fr_panda_link3_COM>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link3_COM();
        const Type_fr_table_X_fr_panda_link3_COM& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link3_COM_X_fr_table : public TransformForce<Scalar, Type_fr_panda_link3_COM_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link3_COM_X_fr_table();
        const Type_fr_panda_link3_COM_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link4_COM : public TransformForce<Scalar, Type_fr_table_X_fr_panda_link4_COM>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link4_COM();
        const Type_fr_table_X_fr_panda_link4_COM& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link4_COM_X_fr_table : public TransformForce<Scalar, Type_fr_panda_link4_COM_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link4_COM_X_fr_table();
        const Type_fr_panda_link4_COM_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link5_COM : public TransformForce<Scalar, Type_fr_table_X_fr_panda_link5_COM>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link5_COM();
        const Type_fr_table_X_fr_panda_link5_COM& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link5_COM_X_fr_table : public TransformForce<Scalar, Type_fr_panda_link5_COM_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link5_COM_X_fr_table();
        const Type_fr_panda_link5_COM_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link6_COM : public TransformForce<Scalar, Type_fr_table_X_fr_panda_link6_COM>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link6_COM();
        const Type_fr_table_X_fr_panda_link6_COM& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link6_COM_X_fr_table : public TransformForce<Scalar, Type_fr_panda_link6_COM_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link6_COM_X_fr_table();
        const Type_fr_panda_link6_COM_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link7_COM : public TransformForce<Scalar, Type_fr_table_X_fr_panda_link7_COM>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link7_COM();
        const Type_fr_table_X_fr_panda_link7_COM& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link7_COM_X_fr_table : public TransformForce<Scalar, Type_fr_panda_link7_COM_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link7_COM_X_fr_table();
        const Type_fr_panda_link7_COM_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_table_COM : public TransformForce<Scalar, Type_fr_table_X_fr_table_COM>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_table_COM();
        const Type_fr_table_X_fr_table_COM& update(const JState&);
    protected:
    };
    
    class Type_fr_table_COM_X_fr_table : public TransformForce<Scalar, Type_fr_table_COM_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_COM_X_fr_table();
        const Type_fr_table_COM_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_joint1 : public TransformForce<Scalar, Type_fr_table_X_fr_panda_joint1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_joint1();
        const Type_fr_table_X_fr_panda_joint1& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_joint2 : public TransformForce<Scalar, Type_fr_table_X_fr_panda_joint2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_joint2();
        const Type_fr_table_X_fr_panda_joint2& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_joint3 : public TransformForce<Scalar, Type_fr_table_X_fr_panda_joint3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_joint3();
        const Type_fr_table_X_fr_panda_joint3& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_joint4 : public TransformForce<Scalar, Type_fr_table_X_fr_panda_joint4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_joint4();
        const Type_fr_table_X_fr_panda_joint4& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_joint5 : public TransformForce<Scalar, Type_fr_table_X_fr_panda_joint5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_joint5();
        const Type_fr_table_X_fr_panda_joint5& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_joint6 : public TransformForce<Scalar, Type_fr_table_X_fr_panda_joint6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_joint6();
        const Type_fr_table_X_fr_panda_joint6& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link2_X_fr_panda_link1 : public TransformForce<Scalar, Type_fr_panda_link2_X_fr_panda_link1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link2_X_fr_panda_link1();
        const Type_fr_panda_link2_X_fr_panda_link1& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link1_X_fr_panda_link2 : public TransformForce<Scalar, Type_fr_panda_link1_X_fr_panda_link2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link1_X_fr_panda_link2();
        const Type_fr_panda_link1_X_fr_panda_link2& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link3_X_fr_panda_link2 : public TransformForce<Scalar, Type_fr_panda_link3_X_fr_panda_link2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link3_X_fr_panda_link2();
        const Type_fr_panda_link3_X_fr_panda_link2& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link2_X_fr_panda_link3 : public TransformForce<Scalar, Type_fr_panda_link2_X_fr_panda_link3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link2_X_fr_panda_link3();
        const Type_fr_panda_link2_X_fr_panda_link3& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link4_X_fr_panda_link3 : public TransformForce<Scalar, Type_fr_panda_link4_X_fr_panda_link3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link4_X_fr_panda_link3();
        const Type_fr_panda_link4_X_fr_panda_link3& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link3_X_fr_panda_link4 : public TransformForce<Scalar, Type_fr_panda_link3_X_fr_panda_link4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link3_X_fr_panda_link4();
        const Type_fr_panda_link3_X_fr_panda_link4& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link5_X_fr_panda_link4 : public TransformForce<Scalar, Type_fr_panda_link5_X_fr_panda_link4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link5_X_fr_panda_link4();
        const Type_fr_panda_link5_X_fr_panda_link4& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link4_X_fr_panda_link5 : public TransformForce<Scalar, Type_fr_panda_link4_X_fr_panda_link5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link4_X_fr_panda_link5();
        const Type_fr_panda_link4_X_fr_panda_link5& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link6_X_fr_panda_link5 : public TransformForce<Scalar, Type_fr_panda_link6_X_fr_panda_link5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link6_X_fr_panda_link5();
        const Type_fr_panda_link6_X_fr_panda_link5& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link5_X_fr_panda_link6 : public TransformForce<Scalar, Type_fr_panda_link5_X_fr_panda_link6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link5_X_fr_panda_link6();
        const Type_fr_panda_link5_X_fr_panda_link6& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link7_X_fr_panda_link6 : public TransformForce<Scalar, Type_fr_panda_link7_X_fr_panda_link6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link7_X_fr_panda_link6();
        const Type_fr_panda_link7_X_fr_panda_link6& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link6_X_fr_panda_link7 : public TransformForce<Scalar, Type_fr_panda_link6_X_fr_panda_link7>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link6_X_fr_panda_link7();
        const Type_fr_panda_link6_X_fr_panda_link7& update(const JState&);
    protected:
    };
    
public:
    ForceTransforms();
    void updateParameters();
    Type_fr_table_X_fr_panda_link1 fr_table_X_fr_panda_link1;
    Type_fr_panda_link1_X_fr_table fr_panda_link1_X_fr_table;
    Type_fr_table_X_fr_panda_link2 fr_table_X_fr_panda_link2;
    Type_fr_panda_link2_X_fr_table fr_panda_link2_X_fr_table;
    Type_fr_table_X_fr_panda_link3 fr_table_X_fr_panda_link3;
    Type_fr_panda_link3_X_fr_table fr_panda_link3_X_fr_table;
    Type_fr_table_X_fr_panda_link4 fr_table_X_fr_panda_link4;
    Type_fr_panda_link4_X_fr_table fr_panda_link4_X_fr_table;
    Type_fr_table_X_fr_panda_link5 fr_table_X_fr_panda_link5;
    Type_fr_panda_link5_X_fr_table fr_panda_link5_X_fr_table;
    Type_fr_table_X_fr_panda_link6 fr_table_X_fr_panda_link6;
    Type_fr_panda_link6_X_fr_table fr_panda_link6_X_fr_table;
    Type_fr_table_X_fr_panda_link7 fr_table_X_fr_panda_link7;
    Type_fr_panda_link7_X_fr_table fr_panda_link7_X_fr_table;
    Type_fr_table_X_fr_panda_link0 fr_table_X_fr_panda_link0;
    Type_fr_panda_link0_X_fr_table fr_panda_link0_X_fr_table;
    Type_fr_table_X_fr_panda_link1_COM fr_table_X_fr_panda_link1_COM;
    Type_fr_panda_link1_COM_X_fr_table fr_panda_link1_COM_X_fr_table;
    Type_fr_table_X_fr_panda_link2_COM fr_table_X_fr_panda_link2_COM;
    Type_fr_panda_link2_COM_X_fr_table fr_panda_link2_COM_X_fr_table;
    Type_fr_table_X_fr_panda_link3_COM fr_table_X_fr_panda_link3_COM;
    Type_fr_panda_link3_COM_X_fr_table fr_panda_link3_COM_X_fr_table;
    Type_fr_table_X_fr_panda_link4_COM fr_table_X_fr_panda_link4_COM;
    Type_fr_panda_link4_COM_X_fr_table fr_panda_link4_COM_X_fr_table;
    Type_fr_table_X_fr_panda_link5_COM fr_table_X_fr_panda_link5_COM;
    Type_fr_panda_link5_COM_X_fr_table fr_panda_link5_COM_X_fr_table;
    Type_fr_table_X_fr_panda_link6_COM fr_table_X_fr_panda_link6_COM;
    Type_fr_panda_link6_COM_X_fr_table fr_panda_link6_COM_X_fr_table;
    Type_fr_table_X_fr_panda_link7_COM fr_table_X_fr_panda_link7_COM;
    Type_fr_panda_link7_COM_X_fr_table fr_panda_link7_COM_X_fr_table;
    Type_fr_table_X_fr_table_COM fr_table_X_fr_table_COM;
    Type_fr_table_COM_X_fr_table fr_table_COM_X_fr_table;
    Type_fr_table_X_fr_panda_joint1 fr_table_X_fr_panda_joint1;
    Type_fr_table_X_fr_panda_joint2 fr_table_X_fr_panda_joint2;
    Type_fr_table_X_fr_panda_joint3 fr_table_X_fr_panda_joint3;
    Type_fr_table_X_fr_panda_joint4 fr_table_X_fr_panda_joint4;
    Type_fr_table_X_fr_panda_joint5 fr_table_X_fr_panda_joint5;
    Type_fr_table_X_fr_panda_joint6 fr_table_X_fr_panda_joint6;
    Type_fr_panda_link2_X_fr_panda_link1 fr_panda_link2_X_fr_panda_link1;
    Type_fr_panda_link1_X_fr_panda_link2 fr_panda_link1_X_fr_panda_link2;
    Type_fr_panda_link3_X_fr_panda_link2 fr_panda_link3_X_fr_panda_link2;
    Type_fr_panda_link2_X_fr_panda_link3 fr_panda_link2_X_fr_panda_link3;
    Type_fr_panda_link4_X_fr_panda_link3 fr_panda_link4_X_fr_panda_link3;
    Type_fr_panda_link3_X_fr_panda_link4 fr_panda_link3_X_fr_panda_link4;
    Type_fr_panda_link5_X_fr_panda_link4 fr_panda_link5_X_fr_panda_link4;
    Type_fr_panda_link4_X_fr_panda_link5 fr_panda_link4_X_fr_panda_link5;
    Type_fr_panda_link6_X_fr_panda_link5 fr_panda_link6_X_fr_panda_link5;
    Type_fr_panda_link5_X_fr_panda_link6 fr_panda_link5_X_fr_panda_link6;
    Type_fr_panda_link7_X_fr_panda_link6 fr_panda_link7_X_fr_panda_link6;
    Type_fr_panda_link6_X_fr_panda_link7 fr_panda_link6_X_fr_panda_link7;

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
    class Type_fr_table_X_fr_panda_link1 : public TransformHomogeneous<Scalar, Type_fr_table_X_fr_panda_link1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link1();
        const Type_fr_table_X_fr_panda_link1& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link1_X_fr_table : public TransformHomogeneous<Scalar, Type_fr_panda_link1_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link1_X_fr_table();
        const Type_fr_panda_link1_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link2 : public TransformHomogeneous<Scalar, Type_fr_table_X_fr_panda_link2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link2();
        const Type_fr_table_X_fr_panda_link2& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link2_X_fr_table : public TransformHomogeneous<Scalar, Type_fr_panda_link2_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link2_X_fr_table();
        const Type_fr_panda_link2_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link3 : public TransformHomogeneous<Scalar, Type_fr_table_X_fr_panda_link3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link3();
        const Type_fr_table_X_fr_panda_link3& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link3_X_fr_table : public TransformHomogeneous<Scalar, Type_fr_panda_link3_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link3_X_fr_table();
        const Type_fr_panda_link3_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link4 : public TransformHomogeneous<Scalar, Type_fr_table_X_fr_panda_link4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link4();
        const Type_fr_table_X_fr_panda_link4& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link4_X_fr_table : public TransformHomogeneous<Scalar, Type_fr_panda_link4_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link4_X_fr_table();
        const Type_fr_panda_link4_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link5 : public TransformHomogeneous<Scalar, Type_fr_table_X_fr_panda_link5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link5();
        const Type_fr_table_X_fr_panda_link5& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link5_X_fr_table : public TransformHomogeneous<Scalar, Type_fr_panda_link5_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link5_X_fr_table();
        const Type_fr_panda_link5_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link6 : public TransformHomogeneous<Scalar, Type_fr_table_X_fr_panda_link6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link6();
        const Type_fr_table_X_fr_panda_link6& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link6_X_fr_table : public TransformHomogeneous<Scalar, Type_fr_panda_link6_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link6_X_fr_table();
        const Type_fr_panda_link6_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link7 : public TransformHomogeneous<Scalar, Type_fr_table_X_fr_panda_link7>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link7();
        const Type_fr_table_X_fr_panda_link7& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link7_X_fr_table : public TransformHomogeneous<Scalar, Type_fr_panda_link7_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link7_X_fr_table();
        const Type_fr_panda_link7_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link0 : public TransformHomogeneous<Scalar, Type_fr_table_X_fr_panda_link0>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link0();
        const Type_fr_table_X_fr_panda_link0& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link0_X_fr_table : public TransformHomogeneous<Scalar, Type_fr_panda_link0_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link0_X_fr_table();
        const Type_fr_panda_link0_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link1_COM : public TransformHomogeneous<Scalar, Type_fr_table_X_fr_panda_link1_COM>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link1_COM();
        const Type_fr_table_X_fr_panda_link1_COM& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link1_COM_X_fr_table : public TransformHomogeneous<Scalar, Type_fr_panda_link1_COM_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link1_COM_X_fr_table();
        const Type_fr_panda_link1_COM_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link2_COM : public TransformHomogeneous<Scalar, Type_fr_table_X_fr_panda_link2_COM>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link2_COM();
        const Type_fr_table_X_fr_panda_link2_COM& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link2_COM_X_fr_table : public TransformHomogeneous<Scalar, Type_fr_panda_link2_COM_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link2_COM_X_fr_table();
        const Type_fr_panda_link2_COM_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link3_COM : public TransformHomogeneous<Scalar, Type_fr_table_X_fr_panda_link3_COM>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link3_COM();
        const Type_fr_table_X_fr_panda_link3_COM& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link3_COM_X_fr_table : public TransformHomogeneous<Scalar, Type_fr_panda_link3_COM_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link3_COM_X_fr_table();
        const Type_fr_panda_link3_COM_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link4_COM : public TransformHomogeneous<Scalar, Type_fr_table_X_fr_panda_link4_COM>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link4_COM();
        const Type_fr_table_X_fr_panda_link4_COM& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link4_COM_X_fr_table : public TransformHomogeneous<Scalar, Type_fr_panda_link4_COM_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link4_COM_X_fr_table();
        const Type_fr_panda_link4_COM_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link5_COM : public TransformHomogeneous<Scalar, Type_fr_table_X_fr_panda_link5_COM>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link5_COM();
        const Type_fr_table_X_fr_panda_link5_COM& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link5_COM_X_fr_table : public TransformHomogeneous<Scalar, Type_fr_panda_link5_COM_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link5_COM_X_fr_table();
        const Type_fr_panda_link5_COM_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link6_COM : public TransformHomogeneous<Scalar, Type_fr_table_X_fr_panda_link6_COM>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link6_COM();
        const Type_fr_table_X_fr_panda_link6_COM& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link6_COM_X_fr_table : public TransformHomogeneous<Scalar, Type_fr_panda_link6_COM_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link6_COM_X_fr_table();
        const Type_fr_panda_link6_COM_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_link7_COM : public TransformHomogeneous<Scalar, Type_fr_table_X_fr_panda_link7_COM>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_link7_COM();
        const Type_fr_table_X_fr_panda_link7_COM& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link7_COM_X_fr_table : public TransformHomogeneous<Scalar, Type_fr_panda_link7_COM_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link7_COM_X_fr_table();
        const Type_fr_panda_link7_COM_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_table_COM : public TransformHomogeneous<Scalar, Type_fr_table_X_fr_table_COM>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_table_COM();
        const Type_fr_table_X_fr_table_COM& update(const JState&);
    protected:
    };
    
    class Type_fr_table_COM_X_fr_table : public TransformHomogeneous<Scalar, Type_fr_table_COM_X_fr_table>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_COM_X_fr_table();
        const Type_fr_table_COM_X_fr_table& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_joint1 : public TransformHomogeneous<Scalar, Type_fr_table_X_fr_panda_joint1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_joint1();
        const Type_fr_table_X_fr_panda_joint1& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_joint2 : public TransformHomogeneous<Scalar, Type_fr_table_X_fr_panda_joint2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_joint2();
        const Type_fr_table_X_fr_panda_joint2& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_joint3 : public TransformHomogeneous<Scalar, Type_fr_table_X_fr_panda_joint3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_joint3();
        const Type_fr_table_X_fr_panda_joint3& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_joint4 : public TransformHomogeneous<Scalar, Type_fr_table_X_fr_panda_joint4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_joint4();
        const Type_fr_table_X_fr_panda_joint4& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_joint5 : public TransformHomogeneous<Scalar, Type_fr_table_X_fr_panda_joint5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_joint5();
        const Type_fr_table_X_fr_panda_joint5& update(const JState&);
    protected:
    };
    
    class Type_fr_table_X_fr_panda_joint6 : public TransformHomogeneous<Scalar, Type_fr_table_X_fr_panda_joint6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_table_X_fr_panda_joint6();
        const Type_fr_table_X_fr_panda_joint6& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link2_X_fr_panda_link1 : public TransformHomogeneous<Scalar, Type_fr_panda_link2_X_fr_panda_link1>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link2_X_fr_panda_link1();
        const Type_fr_panda_link2_X_fr_panda_link1& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link1_X_fr_panda_link2 : public TransformHomogeneous<Scalar, Type_fr_panda_link1_X_fr_panda_link2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link1_X_fr_panda_link2();
        const Type_fr_panda_link1_X_fr_panda_link2& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link3_X_fr_panda_link2 : public TransformHomogeneous<Scalar, Type_fr_panda_link3_X_fr_panda_link2>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link3_X_fr_panda_link2();
        const Type_fr_panda_link3_X_fr_panda_link2& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link2_X_fr_panda_link3 : public TransformHomogeneous<Scalar, Type_fr_panda_link2_X_fr_panda_link3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link2_X_fr_panda_link3();
        const Type_fr_panda_link2_X_fr_panda_link3& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link4_X_fr_panda_link3 : public TransformHomogeneous<Scalar, Type_fr_panda_link4_X_fr_panda_link3>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link4_X_fr_panda_link3();
        const Type_fr_panda_link4_X_fr_panda_link3& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link3_X_fr_panda_link4 : public TransformHomogeneous<Scalar, Type_fr_panda_link3_X_fr_panda_link4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link3_X_fr_panda_link4();
        const Type_fr_panda_link3_X_fr_panda_link4& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link5_X_fr_panda_link4 : public TransformHomogeneous<Scalar, Type_fr_panda_link5_X_fr_panda_link4>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link5_X_fr_panda_link4();
        const Type_fr_panda_link5_X_fr_panda_link4& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link4_X_fr_panda_link5 : public TransformHomogeneous<Scalar, Type_fr_panda_link4_X_fr_panda_link5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link4_X_fr_panda_link5();
        const Type_fr_panda_link4_X_fr_panda_link5& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link6_X_fr_panda_link5 : public TransformHomogeneous<Scalar, Type_fr_panda_link6_X_fr_panda_link5>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link6_X_fr_panda_link5();
        const Type_fr_panda_link6_X_fr_panda_link5& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link5_X_fr_panda_link6 : public TransformHomogeneous<Scalar, Type_fr_panda_link5_X_fr_panda_link6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link5_X_fr_panda_link6();
        const Type_fr_panda_link5_X_fr_panda_link6& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link7_X_fr_panda_link6 : public TransformHomogeneous<Scalar, Type_fr_panda_link7_X_fr_panda_link6>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link7_X_fr_panda_link6();
        const Type_fr_panda_link7_X_fr_panda_link6& update(const JState&);
    protected:
    };
    
    class Type_fr_panda_link6_X_fr_panda_link7 : public TransformHomogeneous<Scalar, Type_fr_panda_link6_X_fr_panda_link7>
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
        Type_fr_panda_link6_X_fr_panda_link7();
        const Type_fr_panda_link6_X_fr_panda_link7& update(const JState&);
    protected:
    };
    
public:
    HomogeneousTransforms();
    void updateParameters();
    Type_fr_table_X_fr_panda_link1 fr_table_X_fr_panda_link1;
    Type_fr_panda_link1_X_fr_table fr_panda_link1_X_fr_table;
    Type_fr_table_X_fr_panda_link2 fr_table_X_fr_panda_link2;
    Type_fr_panda_link2_X_fr_table fr_panda_link2_X_fr_table;
    Type_fr_table_X_fr_panda_link3 fr_table_X_fr_panda_link3;
    Type_fr_panda_link3_X_fr_table fr_panda_link3_X_fr_table;
    Type_fr_table_X_fr_panda_link4 fr_table_X_fr_panda_link4;
    Type_fr_panda_link4_X_fr_table fr_panda_link4_X_fr_table;
    Type_fr_table_X_fr_panda_link5 fr_table_X_fr_panda_link5;
    Type_fr_panda_link5_X_fr_table fr_panda_link5_X_fr_table;
    Type_fr_table_X_fr_panda_link6 fr_table_X_fr_panda_link6;
    Type_fr_panda_link6_X_fr_table fr_panda_link6_X_fr_table;
    Type_fr_table_X_fr_panda_link7 fr_table_X_fr_panda_link7;
    Type_fr_panda_link7_X_fr_table fr_panda_link7_X_fr_table;
    Type_fr_table_X_fr_panda_link0 fr_table_X_fr_panda_link0;
    Type_fr_panda_link0_X_fr_table fr_panda_link0_X_fr_table;
    Type_fr_table_X_fr_panda_link1_COM fr_table_X_fr_panda_link1_COM;
    Type_fr_panda_link1_COM_X_fr_table fr_panda_link1_COM_X_fr_table;
    Type_fr_table_X_fr_panda_link2_COM fr_table_X_fr_panda_link2_COM;
    Type_fr_panda_link2_COM_X_fr_table fr_panda_link2_COM_X_fr_table;
    Type_fr_table_X_fr_panda_link3_COM fr_table_X_fr_panda_link3_COM;
    Type_fr_panda_link3_COM_X_fr_table fr_panda_link3_COM_X_fr_table;
    Type_fr_table_X_fr_panda_link4_COM fr_table_X_fr_panda_link4_COM;
    Type_fr_panda_link4_COM_X_fr_table fr_panda_link4_COM_X_fr_table;
    Type_fr_table_X_fr_panda_link5_COM fr_table_X_fr_panda_link5_COM;
    Type_fr_panda_link5_COM_X_fr_table fr_panda_link5_COM_X_fr_table;
    Type_fr_table_X_fr_panda_link6_COM fr_table_X_fr_panda_link6_COM;
    Type_fr_panda_link6_COM_X_fr_table fr_panda_link6_COM_X_fr_table;
    Type_fr_table_X_fr_panda_link7_COM fr_table_X_fr_panda_link7_COM;
    Type_fr_panda_link7_COM_X_fr_table fr_panda_link7_COM_X_fr_table;
    Type_fr_table_X_fr_table_COM fr_table_X_fr_table_COM;
    Type_fr_table_COM_X_fr_table fr_table_COM_X_fr_table;
    Type_fr_table_X_fr_panda_joint1 fr_table_X_fr_panda_joint1;
    Type_fr_table_X_fr_panda_joint2 fr_table_X_fr_panda_joint2;
    Type_fr_table_X_fr_panda_joint3 fr_table_X_fr_panda_joint3;
    Type_fr_table_X_fr_panda_joint4 fr_table_X_fr_panda_joint4;
    Type_fr_table_X_fr_panda_joint5 fr_table_X_fr_panda_joint5;
    Type_fr_table_X_fr_panda_joint6 fr_table_X_fr_panda_joint6;
    Type_fr_panda_link2_X_fr_panda_link1 fr_panda_link2_X_fr_panda_link1;
    Type_fr_panda_link1_X_fr_panda_link2 fr_panda_link1_X_fr_panda_link2;
    Type_fr_panda_link3_X_fr_panda_link2 fr_panda_link3_X_fr_panda_link2;
    Type_fr_panda_link2_X_fr_panda_link3 fr_panda_link2_X_fr_panda_link3;
    Type_fr_panda_link4_X_fr_panda_link3 fr_panda_link4_X_fr_panda_link3;
    Type_fr_panda_link3_X_fr_panda_link4 fr_panda_link3_X_fr_panda_link4;
    Type_fr_panda_link5_X_fr_panda_link4 fr_panda_link5_X_fr_panda_link4;
    Type_fr_panda_link4_X_fr_panda_link5 fr_panda_link4_X_fr_panda_link5;
    Type_fr_panda_link6_X_fr_panda_link5 fr_panda_link6_X_fr_panda_link5;
    Type_fr_panda_link5_X_fr_panda_link6 fr_panda_link5_X_fr_panda_link6;
    Type_fr_panda_link7_X_fr_panda_link6 fr_panda_link7_X_fr_panda_link6;
    Type_fr_panda_link6_X_fr_panda_link7 fr_panda_link6_X_fr_panda_link7;

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
