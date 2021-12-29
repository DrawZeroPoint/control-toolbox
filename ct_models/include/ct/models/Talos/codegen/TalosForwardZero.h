/**********************************************************************************************************************
This file is part of the Control Toolbox (https://github.com/ethz-adrl/control-toolbox), copyright by ETH Zurich.
Licensed under the BSD-2 license (see LICENSE file in main directory)
**********************************************************************************************************************/

#pragma once

#include <ct/core/math/Derivatives.h>

namespace ct {
namespace models {
namespace Talos {

class TalosForwardZero : public core::Derivatives<49, 36, double>
{
public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW

    typedef Eigen::Matrix<double, 36, 1> OUT_TYPE;
    typedef Eigen::Matrix<double, 49, 1> X_TYPE;

    TalosForwardZero()
    {
        eval_.setZero();
        v_.fill(0.0);
    };

    TalosForwardZero(const TalosForwardZero& other)
    {
        eval_.setZero();
        v_.fill(0.0);
    }

    virtual ~TalosForwardZero(){};

    TalosForwardZero* clone() const override { return new TalosForwardZero(*this); }
    OUT_TYPE forwardZero(const Eigen::VectorXd& x_in) override;

private:
    OUT_TYPE eval_;
    std::array<double, 396> v_;
};

}  // namespace Talos
}  // namespace models
}  // namespace ct
