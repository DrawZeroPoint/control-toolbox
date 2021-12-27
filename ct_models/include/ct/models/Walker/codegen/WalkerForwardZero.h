/**********************************************************************************************************************
This file is part of the Control Toolbox (https://github.com/ethz-adrl/control-toolbox), copyright by ETH Zurich.
Licensed under the BSD-2 license (see LICENSE file in main directory)
**********************************************************************************************************************/

#pragma once

#include <ct/core/math/Derivatives.h>

namespace ct {
namespace models {
namespace Walker {

class WalkerForwardZero : public core::Derivatives<49, 36, double>
{
public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW

    typedef Eigen::Matrix<double, 36, 1> OUT_TYPE;
    typedef Eigen::Matrix<double, 49, 1> X_TYPE;

    WalkerForwardZero()
    {
        eval_.setZero();
        v_.fill(0.0);
    };

    WalkerForwardZero(const WalkerForwardZero& other)
    {
        eval_.setZero();
        v_.fill(0.0);
    }

    virtual ~WalkerForwardZero(){};

    WalkerForwardZero* clone() const override { return new WalkerForwardZero(*this); }
    OUT_TYPE forwardZero(const Eigen::VectorXd& x_in) override;

private:
    OUT_TYPE eval_;
    std::array<double, 477> v_;
};

}  // namespace Walker
}  // namespace models
}  // namespace ct
