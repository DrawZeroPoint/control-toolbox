#ifndef WALKER_JACOBIANS_H_
#define WALKER_JACOBIANS_H_

		#include <iit/rbd/rbd.h>
#include <iit/rbd/TransformsBase.h>
#include <iit/rbd/traits/DoubleTrait.h>
#include "declarations.h"
#include "kinematics_parameters.h"

namespace iit {
namespace Walker {

template<typename SCALAR, int COLS, class M>
class JacobianT : public iit::rbd::JacobianBase<tpl::JointState<SCALAR>, COLS, M>
{};

namespace tpl {

/**
 *
 */
template <typename TRAIT>
class Jacobians {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW

        typedef typename TRAIT::Scalar Scalar;
        typedef iit::rbd::Core<Scalar> CoreS;

        typedef JointState<Scalar> JState;

        class Type_fr_torso_J_fr_left_leg_l6 : public JacobianT<Scalar, 6, Type_fr_torso_J_fr_left_leg_l6>
        {
        public:
            EIGEN_MAKE_ALIGNED_OPERATOR_NEW
            Type_fr_torso_J_fr_left_leg_l6();
            const Type_fr_torso_J_fr_left_leg_l6& update(const JState&);
        protected:
        };
        
        class Type_fr_torso_J_fr_right_leg_l6 : public JacobianT<Scalar, 6, Type_fr_torso_J_fr_right_leg_l6>
        {
        public:
            EIGEN_MAKE_ALIGNED_OPERATOR_NEW
            Type_fr_torso_J_fr_right_leg_l6();
            const Type_fr_torso_J_fr_right_leg_l6& update(const JState&);
        protected:
        };
        
    public:
        Jacobians();
        void updateParameters();
    public:
        Type_fr_torso_J_fr_left_leg_l6 fr_torso_J_fr_left_leg_l6;
        Type_fr_torso_J_fr_right_leg_l6 fr_torso_J_fr_right_leg_l6;

    protected:

};

} //namespace tpl

using Jacobians = tpl::Jacobians<rbd::DoubleTrait>;

#include "jacobians.impl.h"


}
}

#endif
