/**********************************************************************************************************************
This file is part of the Control Toolbox (https://github.com/ethz-adrl/control-toolbox), copyright by ETH Zurich.
Licensed under the BSD-2 license (see LICENSE file in main directory)
**********************************************************************************************************************/

#pragma once

#include <ct/core/math/Derivatives.h>

namespace ct {
namespace models {
namespace Walker {

class WalkerInverseDynJacReverse : public core::Derivatives<54, 18, double>
{
public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW

    typedef Eigen::Matrix<double, 18, 54> JAC_TYPE;
    typedef Eigen::Matrix<double, 54, 1> X_TYPE;

    WalkerInverseDynJacReverse()
    {
        jac_.setZero();
        v_.fill(0.0);
    };

    WalkerInverseDynJacReverse(const WalkerInverseDynJacReverse& other)
    {
        jac_.setZero();
        v_.fill(0.0);
    }

    virtual ~WalkerInverseDynJacReverse(){};

    WalkerInverseDynJacReverse* clone() const override { return new WalkerInverseDynJacReverse(*this); }
    JAC_TYPE jacobian(const Eigen::VectorXd& x_in) override;

private:
    JAC_TYPE jac_;
    std::array<double, 1470> v_;
};

}  // namespace Walker
}  // namespace models
}  // namespace ct
