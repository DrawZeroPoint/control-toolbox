/**********************************************************************************************************************
This file is part of the Control Toolbox (https://github.com/ethz-adrl/control-toolbox), copyright by ETH Zurich.
Licensed under the BSD-2 license (see LICENSE file in main directory)
**********************************************************************************************************************/

#pragma once

#include <ct/core/math/Derivatives.h>

namespace ct {
namespace models {
namespace Walker {

class WalkerForwardKinJacReverse : public core::Derivatives<36, 12, double>
{
public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW

    typedef Eigen::Matrix<double, 12, 36> JAC_TYPE;
    typedef Eigen::Matrix<double, 36, 1> X_TYPE;

    WalkerForwardKinJacReverse()
    {
        jac_.setZero();
        v_.fill(0.0);
    };

    WalkerForwardKinJacReverse(const WalkerForwardKinJacReverse& other)
    {
        jac_.setZero();
        v_.fill(0.0);
    }

    virtual ~WalkerForwardKinJacReverse(){};

    WalkerForwardKinJacReverse* clone() const override { return new WalkerForwardKinJacReverse(*this); }
    JAC_TYPE jacobian(const Eigen::VectorXd& x_in) override;

private:
    JAC_TYPE jac_;
    std::array<double, 1549> v_;
};

}  // namespace Walker
}  // namespace models
}  // namespace ct
