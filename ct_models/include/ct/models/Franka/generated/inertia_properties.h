#ifndef IIT_ROBOT_FRANKA_INERTIA_PROPERTIES_H_
#define IIT_ROBOT_FRANKA_INERTIA_PROPERTIES_H_

#include <iit/rbd/rbd.h>
#include <iit/rbd/InertiaMatrix.h>
#include <iit/rbd/utils.h>
#include <iit/rbd/traits/DoubleTrait.h>

#include "declarations.h"

namespace iit {
namespace Franka {
/**
 * This namespace encloses classes and functions related to the Dynamics
 * of the robot Franka.
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
        const IMatrix& getTensor_panda_link1() const;
        const IMatrix& getTensor_panda_link2() const;
        const IMatrix& getTensor_panda_link3() const;
        const IMatrix& getTensor_panda_link4() const;
        const IMatrix& getTensor_panda_link5() const;
        const IMatrix& getTensor_panda_link6() const;
        const IMatrix& getTensor_panda_link7() const;
        Scalar getMass_panda_link1() const;
        Scalar getMass_panda_link2() const;
        Scalar getMass_panda_link3() const;
        Scalar getMass_panda_link4() const;
        Scalar getMass_panda_link5() const;
        Scalar getMass_panda_link6() const;
        Scalar getMass_panda_link7() const;
        const Vec3d& getCOM_panda_link1() const;
        const Vec3d& getCOM_panda_link2() const;
        const Vec3d& getCOM_panda_link3() const;
        const Vec3d& getCOM_panda_link4() const;
        const Vec3d& getCOM_panda_link5() const;
        const Vec3d& getCOM_panda_link6() const;
        const Vec3d& getCOM_panda_link7() const;
        Scalar getTotalMass() const;

    private:

        IMatrix tensor_panda_link1;
        IMatrix tensor_panda_link2;
        IMatrix tensor_panda_link3;
        IMatrix tensor_panda_link4;
        IMatrix tensor_panda_link5;
        IMatrix tensor_panda_link6;
        IMatrix tensor_panda_link7;
        Vec3d com_panda_link1;
        Vec3d com_panda_link2;
        Vec3d com_panda_link3;
        Vec3d com_panda_link4;
        Vec3d com_panda_link5;
        Vec3d com_panda_link6;
        Vec3d com_panda_link7;
};

template <typename TRAIT>
inline InertiaProperties<TRAIT>::~InertiaProperties() {}

template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_panda_link1() const {
    return this->tensor_panda_link1;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_panda_link2() const {
    return this->tensor_panda_link2;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_panda_link3() const {
    return this->tensor_panda_link3;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_panda_link4() const {
    return this->tensor_panda_link4;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_panda_link5() const {
    return this->tensor_panda_link5;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_panda_link6() const {
    return this->tensor_panda_link6;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::IMatrix& InertiaProperties<TRAIT>::getTensor_panda_link7() const {
    return this->tensor_panda_link7;
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_panda_link1() const {
    return this->tensor_panda_link1.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_panda_link2() const {
    return this->tensor_panda_link2.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_panda_link3() const {
    return this->tensor_panda_link3.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_panda_link4() const {
    return this->tensor_panda_link4.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_panda_link5() const {
    return this->tensor_panda_link5.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_panda_link6() const {
    return this->tensor_panda_link6.getMass();
}
template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getMass_panda_link7() const {
    return this->tensor_panda_link7.getMass();
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_panda_link1() const {
    return this->com_panda_link1;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_panda_link2() const {
    return this->com_panda_link2;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_panda_link3() const {
    return this->com_panda_link3;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_panda_link4() const {
    return this->com_panda_link4;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_panda_link5() const {
    return this->com_panda_link5;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_panda_link6() const {
    return this->com_panda_link6;
}
template <typename TRAIT>
inline const typename InertiaProperties<TRAIT>::Vec3d& InertiaProperties<TRAIT>::getCOM_panda_link7() const {
    return this->com_panda_link7;
}

template <typename TRAIT>
inline typename InertiaProperties<TRAIT>::Scalar InertiaProperties<TRAIT>::getTotalMass() const {
    return 4.970684 + 0.646926 + 3.228604 + 3.587895 + 1.225946 + 1.666555 + 0.735522;
}

}

using InertiaProperties = tpl::InertiaProperties<rbd::DoubleTrait>;

}
}
}

#include "inertia_properties.impl.h"

#endif
