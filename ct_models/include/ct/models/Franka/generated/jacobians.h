#ifndef FRANKA_JACOBIANS_H_
#define FRANKA_JACOBIANS_H_

#include <iit/rbd/rbd.h>
#include <iit/rbd/TransformsBase.h>
#include <iit/rbd/traits/DoubleTrait.h>
#include "declarations.h"
#include "kinematics_parameters.h"

namespace iit {
  namespace Franka {

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

        class Type_fr_table_J_fr_panda_link1 : public JacobianT<Scalar, 1, Type_fr_table_J_fr_panda_link1>
        {
        public:
          EIGEN_MAKE_ALIGNED_OPERATOR_NEW
          Type_fr_table_J_fr_panda_link1();
          const Type_fr_table_J_fr_panda_link1& update(const JState&);
        protected:
        };

        class Type_fr_table_J_fr_panda_link2 : public JacobianT<Scalar, 2, Type_fr_table_J_fr_panda_link2>
        {
        public:
          EIGEN_MAKE_ALIGNED_OPERATOR_NEW
          Type_fr_table_J_fr_panda_link2();
          const Type_fr_table_J_fr_panda_link2& update(const JState&);
        protected:
        };

        class Type_fr_table_J_fr_panda_link3 : public JacobianT<Scalar, 3, Type_fr_table_J_fr_panda_link3>
        {
        public:
          EIGEN_MAKE_ALIGNED_OPERATOR_NEW
          Type_fr_table_J_fr_panda_link3();
          const Type_fr_table_J_fr_panda_link3& update(const JState&);
        protected:
        };

        class Type_fr_table_J_fr_panda_link4 : public JacobianT<Scalar, 4, Type_fr_table_J_fr_panda_link4>
        {
        public:
          EIGEN_MAKE_ALIGNED_OPERATOR_NEW
          Type_fr_table_J_fr_panda_link4();
          const Type_fr_table_J_fr_panda_link4& update(const JState&);
        protected:
        };

        class Type_fr_table_J_fr_panda_link5 : public JacobianT<Scalar, 5, Type_fr_table_J_fr_panda_link5>
        {
        public:
          EIGEN_MAKE_ALIGNED_OPERATOR_NEW
          Type_fr_table_J_fr_panda_link5();
          const Type_fr_table_J_fr_panda_link5& update(const JState&);
        protected:
        };

        class Type_fr_table_J_fr_panda_link6 : public JacobianT<Scalar, 6, Type_fr_table_J_fr_panda_link6>
        {
        public:
          EIGEN_MAKE_ALIGNED_OPERATOR_NEW
          Type_fr_table_J_fr_panda_link6();
          const Type_fr_table_J_fr_panda_link6& update(const JState&);
        protected:
        };

        class Type_fr_table_J_fr_panda_link7 : public JacobianT<Scalar, 7, Type_fr_table_J_fr_panda_link7>
        {
        public:
          EIGEN_MAKE_ALIGNED_OPERATOR_NEW
          Type_fr_table_J_fr_panda_link7();
          const Type_fr_table_J_fr_panda_link7& update(const JState&);
        protected:
        };

        class Type_fr_table_J_fr_panda_link1_COM : public JacobianT<Scalar, 1, Type_fr_table_J_fr_panda_link1_COM>
        {
        public:
          EIGEN_MAKE_ALIGNED_OPERATOR_NEW
          Type_fr_table_J_fr_panda_link1_COM();
          const Type_fr_table_J_fr_panda_link1_COM& update(const JState&);
        protected:
        };

        class Type_fr_table_J_fr_panda_link2_COM : public JacobianT<Scalar, 2, Type_fr_table_J_fr_panda_link2_COM>
        {
        public:
          EIGEN_MAKE_ALIGNED_OPERATOR_NEW
          Type_fr_table_J_fr_panda_link2_COM();
          const Type_fr_table_J_fr_panda_link2_COM& update(const JState&);
        protected:
        };

        class Type_fr_table_J_fr_panda_link3_COM : public JacobianT<Scalar, 3, Type_fr_table_J_fr_panda_link3_COM>
        {
        public:
          EIGEN_MAKE_ALIGNED_OPERATOR_NEW
          Type_fr_table_J_fr_panda_link3_COM();
          const Type_fr_table_J_fr_panda_link3_COM& update(const JState&);
        protected:
        };

        class Type_fr_table_J_fr_panda_link4_COM : public JacobianT<Scalar, 4, Type_fr_table_J_fr_panda_link4_COM>
        {
        public:
          EIGEN_MAKE_ALIGNED_OPERATOR_NEW
          Type_fr_table_J_fr_panda_link4_COM();
          const Type_fr_table_J_fr_panda_link4_COM& update(const JState&);
        protected:
        };

        class Type_fr_table_J_fr_panda_link5_COM : public JacobianT<Scalar, 5, Type_fr_table_J_fr_panda_link5_COM>
        {
        public:
          EIGEN_MAKE_ALIGNED_OPERATOR_NEW
          Type_fr_table_J_fr_panda_link5_COM();
          const Type_fr_table_J_fr_panda_link5_COM& update(const JState&);
        protected:
        };

        class Type_fr_table_J_fr_panda_link6_COM : public JacobianT<Scalar, 6, Type_fr_table_J_fr_panda_link6_COM>
        {
        public:
          EIGEN_MAKE_ALIGNED_OPERATOR_NEW
          Type_fr_table_J_fr_panda_link6_COM();
          const Type_fr_table_J_fr_panda_link6_COM& update(const JState&);
        protected:
        };

        class Type_fr_table_J_fr_panda_link7_COM : public JacobianT<Scalar, 7, Type_fr_table_J_fr_panda_link7_COM>
        {
        public:
          EIGEN_MAKE_ALIGNED_OPERATOR_NEW
          Type_fr_table_J_fr_panda_link7_COM();
          const Type_fr_table_J_fr_panda_link7_COM& update(const JState&);
        protected:
        };

      public:
        Jacobians();
        void updateParameters();
      public:
        Type_fr_table_J_fr_panda_link1 fr_table_J_fr_panda_link1;
        Type_fr_table_J_fr_panda_link2 fr_table_J_fr_panda_link2;
        Type_fr_table_J_fr_panda_link3 fr_table_J_fr_panda_link3;
        Type_fr_table_J_fr_panda_link4 fr_table_J_fr_panda_link4;
        Type_fr_table_J_fr_panda_link5 fr_table_J_fr_panda_link5;
        Type_fr_table_J_fr_panda_link6 fr_table_J_fr_panda_link6;
        Type_fr_table_J_fr_panda_link7 fr_table_J_fr_panda_link7;
        Type_fr_table_J_fr_panda_link1_COM fr_table_J_fr_panda_link1_COM;
        Type_fr_table_J_fr_panda_link2_COM fr_table_J_fr_panda_link2_COM;
        Type_fr_table_J_fr_panda_link3_COM fr_table_J_fr_panda_link3_COM;
        Type_fr_table_J_fr_panda_link4_COM fr_table_J_fr_panda_link4_COM;
        Type_fr_table_J_fr_panda_link5_COM fr_table_J_fr_panda_link5_COM;
        Type_fr_table_J_fr_panda_link6_COM fr_table_J_fr_panda_link6_COM;
        Type_fr_table_J_fr_panda_link7_COM fr_table_J_fr_panda_link7_COM;

      protected:

      };

    } //namespace tpl

    using Jacobians = tpl::Jacobians<rbd::DoubleTrait>;

#include "jacobians.impl.h"


  }
}

#endif
