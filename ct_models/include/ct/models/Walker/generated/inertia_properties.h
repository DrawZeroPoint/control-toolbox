#ifndef IIT_ROBOT_WALKER_INERTIA_PROPERTIES_H_
#define IIT_ROBOT_WALKER_INERTIA_PROPERTIES_H_

#include <iit/rbd/rbd.h>
#include <iit/rbd/InertiaMatrix.h>
#include <iit/rbd/utils.h>
#include <iit/rbd/traits/DoubleTrait.h>

#include "declarations.h"

namespace iit {
namespace Walker {
/**
 * This namespace encloses classes and functions related to the Dynamics
 * of the robot Walker.
 */
namespace dyn {

using InertiaMatrix = iit::rbd::InertiaMatrixDense;

namespace tpl {

template <typename TRAIT>
class InertiaProperties {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW

        typedef typename TRAIT::Scalar Scalar;
        typedef iit::rbd::Core<Scalar> CoreS;
        typedef iit::rbd::tpl::InertiaMatrixDense<Scalar> IMatrix;
        typedef typename CoreS::Vector3 Vec3d;

        InertiaProperties();
        ~InertiaProperties();
        const IMatrix& getTensor_torso() const;
        const IMatrix& getTensor_right_leg_l1() const;
        const IMatrix& getTensor_right_leg_l2() const;
        const IMatrix& getTensor_right_leg_l3() const;
        const IMatrix& getTensor_right_leg_l4() const;
        const IMatrix& getTensor_right_leg_l5() const;
        const IMatrix& getTensor_right_leg_l6() const;
        const IMatrix& getTensor_left_leg_l1() const;
        const IMatrix& getTensor_left_leg_l2() const;
        const IMatrix& getTensor_left_leg_l3() const;
        const IMatrix& getTensor_left_leg_l4() const;
        const IMatrix& getTensor_left_leg_l5() const;
        const IMatrix& getTensor_left_leg_l6() const;
        Scalar getMass_torso() const;
        Scalar getMass_right_leg_l1() const;
        Scalar getMass_right_leg_l2() const;
        Scalar getMass_right_leg_l3() const;
        Scalar getMass_right_leg_l4() const;
        Scalar getMass_right_leg_l5() const;
        Scalar getMass_right_leg_l6() const;
        Scalar getMass_left_leg_l1() const;
        Scalar getMass_left_leg_l2() const;
        Scalar getMass_left_leg_l3() const;
        Scalar getMass_left_leg_l4() const;
        Scalar getMass_left_leg_l5() const;
        Scalar getMass_left_leg_l6() const;
        const Vec3d& getCOM_torso() const;
        const Vec3d& getCOM_right_leg_l1() const;
        const Vec3d& getCOM_right_leg_l2() const;
        const Vec3d& getCOM_right_leg_l3() const;
        const Vec3d& getCOM_right_leg_l4() const;
        const Vec3d& getCOM_right_leg_l5() const;
        const Vec3d& getCOM_right_leg_l6() const;
        const Vec3d& getCOM_left_leg_l1() const;
        const Vec3d& getCOM_left_leg_l2() const;
        const Vec3d& getCOM_left_leg_l3() const;
        const Vec3d& getCOM_left_leg_l4() const;
        const Vec3d& getCOM_left_leg_l5() const;
        const Vec3d& getCOM_left_leg_l6() const;
        Scalar getTotalMass() const;

    private:

        IMatrix tensor_torso;
        IMatrix tensor_right_leg_l1;
        IMatrix tensor_right_leg_l2;
        IMatrix tensor_right_leg_l3;
        IMatrix tensor_right_leg_l4;
        IMatrix tensor_right_leg_l5;
        IMatrix tensor_right_leg_l6;
        IMatrix tensor_left_leg_l1;
        IMatrix tensor_left_leg_l2;
        IMatrix tensor_left_leg_l3;
        IMatrix tensor_left_leg_l4;
        IMatrix tensor_left_leg_l5;
        IMatrix tensor_left_leg_l6;
        Vec3d com_torso;
        Vec3d com_right_leg_l1;
        Vec3d com_right_leg_l2;
        Vec3d com_right_leg_l3;
        Vec3d com_right_leg_l4;
        Vec3d com_right_leg_l5;
        Vec3d com_right_leg_l6;
        Vec3d com_left_leg_l1;
        Vec3d com_left_leg_l2;
        Vec3d com_left_leg_l3;
        Vec3d com_left_leg_l4;
        Vec3d com_left_leg_l5;
        Vec3d com_left_leg_l6;
};

template <typename TRAIT>
inline InertiaProperties<TRAIT>::~InertiaProperties() {}

template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_torso() const {
    return this->tensor_torso;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_right_leg_l1() const {
    return this->tensor_right_leg_l1;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_right_leg_l2() const {
    return this->tensor_right_leg_l2;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_right_leg_l3() const {
    return this->tensor_right_leg_l3;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_right_leg_l4() const {
    return this->tensor_right_leg_l4;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_right_leg_l5() const {
    return this->tensor_right_leg_l5;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_right_leg_l6() const {
    return this->tensor_right_leg_l6;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_left_leg_l1() const {
    return this->tensor_left_leg_l1;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_left_leg_l2() const {
    return this->tensor_left_leg_l2;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_left_leg_l3() const {
    return this->tensor_left_leg_l3;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_left_leg_l4() const {
    return this->tensor_left_leg_l4;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_left_leg_l5() const {
    return this->tensor_left_leg_l5;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_left_leg_l6() const {
    return this->tensor_left_leg_l6;
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_torso() const {
    return this->tensor_torso.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_right_leg_l1() const {
    return this->tensor_right_leg_l1.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_right_leg_l2() const {
    return this->tensor_right_leg_l2.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_right_leg_l3() const {
    return this->tensor_right_leg_l3.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_right_leg_l4() const {
    return this->tensor_right_leg_l4.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_right_leg_l5() const {
    return this->tensor_right_leg_l5.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_right_leg_l6() const {
    return this->tensor_right_leg_l6.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_left_leg_l1() const {
    return this->tensor_left_leg_l1.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_left_leg_l2() const {
    return this->tensor_left_leg_l2.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_left_leg_l3() const {
    return this->tensor_left_leg_l3.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_left_leg_l4() const {
    return this->tensor_left_leg_l4.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_left_leg_l5() const {
    return this->tensor_left_leg_l5.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_left_leg_l6() const {
    return this->tensor_left_leg_l6.getMass();
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_torso() const {
    return this->com_torso;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_right_leg_l1() const {
    return this->com_right_leg_l1;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_right_leg_l2() const {
    return this->com_right_leg_l2;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_right_leg_l3() const {
    return this->com_right_leg_l3;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_right_leg_l4() const {
    return this->com_right_leg_l4;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_right_leg_l5() const {
    return this->com_right_leg_l5;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_right_leg_l6() const {
    return this->com_right_leg_l6;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_left_leg_l1() const {
    return this->com_left_leg_l1;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_left_leg_l2() const {
    return this->com_left_leg_l2;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_left_leg_l3() const {
    return this->com_left_leg_l3;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_left_leg_l4() const {
    return this->com_left_leg_l4;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_left_leg_l5() const {
    return this->com_left_leg_l5;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_left_leg_l6() const {
    return this->com_left_leg_l6;
}

template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getTotalMass() const {
    return 20.773 + 0.988 + 3.392 + 11.243 + 2.852 + 0.684 + 1.356 + 0.988 + 3.392 + 11.243 + 2.852 + 0.684 + 1.356;
}

}

using InertiaProperties = tpl::InertiaProperties<rbd::DoubleTrait>;

}
}
}

#include "inertia_properties.impl.h"

#endif
