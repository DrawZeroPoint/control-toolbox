#ifndef IIT_ROBOT_TALOS_INERTIA_PROPERTIES_H_
#define IIT_ROBOT_TALOS_INERTIA_PROPERTIES_H_

#include <iit/rbd/rbd.h>
#include <iit/rbd/InertiaMatrix.h>
#include <iit/rbd/utils.h>
#include <iit/rbd/traits/DoubleTrait.h>

#include "declarations.h"

namespace iit {
namespace Talos {
/**
 * This namespace encloses classes and functions related to the Dynamics
 * of the robot Talos.
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
        const IMatrix& getTensor_base_link() const;
        const IMatrix& getTensor_leg_left_1_link() const;
        const IMatrix& getTensor_leg_left_2_link() const;
        const IMatrix& getTensor_leg_left_3_link() const;
        const IMatrix& getTensor_leg_left_4_link() const;
        const IMatrix& getTensor_leg_left_5_link() const;
        const IMatrix& getTensor_leg_left_6_link() const;
        const IMatrix& getTensor_leg_right_1_link() const;
        const IMatrix& getTensor_leg_right_2_link() const;
        const IMatrix& getTensor_leg_right_3_link() const;
        const IMatrix& getTensor_leg_right_4_link() const;
        const IMatrix& getTensor_leg_right_5_link() const;
        const IMatrix& getTensor_leg_right_6_link() const;
        Scalar getMass_base_link() const;
        Scalar getMass_leg_left_1_link() const;
        Scalar getMass_leg_left_2_link() const;
        Scalar getMass_leg_left_3_link() const;
        Scalar getMass_leg_left_4_link() const;
        Scalar getMass_leg_left_5_link() const;
        Scalar getMass_leg_left_6_link() const;
        Scalar getMass_leg_right_1_link() const;
        Scalar getMass_leg_right_2_link() const;
        Scalar getMass_leg_right_3_link() const;
        Scalar getMass_leg_right_4_link() const;
        Scalar getMass_leg_right_5_link() const;
        Scalar getMass_leg_right_6_link() const;
        const Vec3d& getCOM_base_link() const;
        const Vec3d& getCOM_leg_left_1_link() const;
        const Vec3d& getCOM_leg_left_2_link() const;
        const Vec3d& getCOM_leg_left_3_link() const;
        const Vec3d& getCOM_leg_left_4_link() const;
        const Vec3d& getCOM_leg_left_5_link() const;
        const Vec3d& getCOM_leg_left_6_link() const;
        const Vec3d& getCOM_leg_right_1_link() const;
        const Vec3d& getCOM_leg_right_2_link() const;
        const Vec3d& getCOM_leg_right_3_link() const;
        const Vec3d& getCOM_leg_right_4_link() const;
        const Vec3d& getCOM_leg_right_5_link() const;
        const Vec3d& getCOM_leg_right_6_link() const;
        Scalar getTotalMass() const;

    private:

        IMatrix tensor_base_link;
        IMatrix tensor_leg_left_1_link;
        IMatrix tensor_leg_left_2_link;
        IMatrix tensor_leg_left_3_link;
        IMatrix tensor_leg_left_4_link;
        IMatrix tensor_leg_left_5_link;
        IMatrix tensor_leg_left_6_link;
        IMatrix tensor_leg_right_1_link;
        IMatrix tensor_leg_right_2_link;
        IMatrix tensor_leg_right_3_link;
        IMatrix tensor_leg_right_4_link;
        IMatrix tensor_leg_right_5_link;
        IMatrix tensor_leg_right_6_link;
        Vec3d com_base_link;
        Vec3d com_leg_left_1_link;
        Vec3d com_leg_left_2_link;
        Vec3d com_leg_left_3_link;
        Vec3d com_leg_left_4_link;
        Vec3d com_leg_left_5_link;
        Vec3d com_leg_left_6_link;
        Vec3d com_leg_right_1_link;
        Vec3d com_leg_right_2_link;
        Vec3d com_leg_right_3_link;
        Vec3d com_leg_right_4_link;
        Vec3d com_leg_right_5_link;
        Vec3d com_leg_right_6_link;
};

template <typename TRAIT>
inline InertiaProperties<TRAIT>::~InertiaProperties() {}

template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_base_link() const {
    return this->tensor_base_link;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_leg_left_1_link() const {
    return this->tensor_leg_left_1_link;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_leg_left_2_link() const {
    return this->tensor_leg_left_2_link;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_leg_left_3_link() const {
    return this->tensor_leg_left_3_link;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_leg_left_4_link() const {
    return this->tensor_leg_left_4_link;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_leg_left_5_link() const {
    return this->tensor_leg_left_5_link;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_leg_left_6_link() const {
    return this->tensor_leg_left_6_link;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_leg_right_1_link() const {
    return this->tensor_leg_right_1_link;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_leg_right_2_link() const {
    return this->tensor_leg_right_2_link;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_leg_right_3_link() const {
    return this->tensor_leg_right_3_link;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_leg_right_4_link() const {
    return this->tensor_leg_right_4_link;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_leg_right_5_link() const {
    return this->tensor_leg_right_5_link;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_leg_right_6_link() const {
    return this->tensor_leg_right_6_link;
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_base_link() const {
    return this->tensor_base_link.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_leg_left_1_link() const {
    return this->tensor_leg_left_1_link.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_leg_left_2_link() const {
    return this->tensor_leg_left_2_link.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_leg_left_3_link() const {
    return this->tensor_leg_left_3_link.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_leg_left_4_link() const {
    return this->tensor_leg_left_4_link.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_leg_left_5_link() const {
    return this->tensor_leg_left_5_link.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_leg_left_6_link() const {
    return this->tensor_leg_left_6_link.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_leg_right_1_link() const {
    return this->tensor_leg_right_1_link.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_leg_right_2_link() const {
    return this->tensor_leg_right_2_link.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_leg_right_3_link() const {
    return this->tensor_leg_right_3_link.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_leg_right_4_link() const {
    return this->tensor_leg_right_4_link.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_leg_right_5_link() const {
    return this->tensor_leg_right_5_link.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_leg_right_6_link() const {
    return this->tensor_leg_right_6_link.getMass();
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_base_link() const {
    return this->com_base_link;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_leg_left_1_link() const {
    return this->com_leg_left_1_link;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_leg_left_2_link() const {
    return this->com_leg_left_2_link;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_leg_left_3_link() const {
    return this->com_leg_left_3_link;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_leg_left_4_link() const {
    return this->com_leg_left_4_link;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_leg_left_5_link() const {
    return this->com_leg_left_5_link;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_leg_left_6_link() const {
    return this->com_leg_left_6_link;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_leg_right_1_link() const {
    return this->com_leg_right_1_link;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_leg_right_2_link() const {
    return this->com_leg_right_2_link;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_leg_right_3_link() const {
    return this->com_leg_right_3_link;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_leg_right_4_link() const {
    return this->com_leg_right_4_link;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_leg_right_5_link() const {
    return this->com_leg_right_5_link;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_leg_right_6_link() const {
    return this->com_leg_right_6_link;
}

template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getTotalMass() const {
    return 15.36284 + 2.235009 + 1.490952 + 6.239871 + 3.759951 + 1.29096 + 1.607773 + 2.235009 + 1.490952 + 6.239871 + 3.759951 + 1.29096 + 1.607773;
}

}

using InertiaProperties = tpl::InertiaProperties<rbd::DoubleTrait>;

}
}
}

#include "inertia_properties.impl.h"

#endif
