/**********************************************************************************************************************
This file is part of the Control Toolbox (https://github.com/ethz-adrl/control-toolbox), copyright by ETH Zurich.
Licensed under the BSD-2 license (see LICENSE file in main directory)
**********************************************************************************************************************/

#pragma once

#include <ct/core/math/Derivatives.h>

namespace ct {
namespace models {
namespace Franka {

class FrankaInverseDynJacForward : public core::Derivatives<14, 7, double>
{
public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW

    typedef Eigen::Matrix<double, 7, 14> JAC_TYPE;
    typedef Eigen::Matrix<double, 14, 1> X_TYPE;

    FrankaInverseDynJacForward()
    {
        jac_.setZero();
        v_.fill(0.0);
    };

    FrankaInverseDynJacForward(const FrankaInverseDynJacForward& other)
    {
        jac_.setZero();
        v_.fill(0.0);
    }

    virtual ~FrankaInverseDynJacForward(){};

    FrankaInverseDynJacForward* clone() const override { return new FrankaInverseDynJacForward(*this); }
    JAC_TYPE jacobian(const Eigen::VectorXd& x_in) override;

private:
    JAC_TYPE jac_;
    std::array<double, 214> v_;
};

}  // namespace Franka
}  // namespace models
}  // namespace ct
