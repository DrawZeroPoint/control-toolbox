/**********************************************************************************************************************
This file is part of the Control Toolbox (https://github.com/ethz-adrl/control-toolbox), copyright by ETH Zurich.
Licensed under the BSD-2 license (see LICENSE file in main directory)
**********************************************************************************************************************/

#pragma once

#include <ct/core/math/Derivatives.h>

namespace ct {
namespace models {
namespace Talos {

class TalosInverseDynJacForward : public core::Derivatives<54, 18, double>
{
public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW

    typedef Eigen::Matrix<double, 18, 54> JAC_TYPE;
    typedef Eigen::Matrix<double, 54, 1> X_TYPE;

    TalosInverseDynJacForward()
    {
        jac_.setZero();
        v_.fill(0.0);
    };

    TalosInverseDynJacForward(const TalosInverseDynJacForward& other)
    {
        jac_.setZero();
        v_.fill(0.0);
    }

    virtual ~TalosInverseDynJacForward(){};

    TalosInverseDynJacForward* clone() const override { return new TalosInverseDynJacForward(*this); }
    JAC_TYPE jacobian(const Eigen::VectorXd& x_in) override;

private:
    JAC_TYPE jac_;
    std::array<double, 300> v_;
};

}  // namespace Talos
}  // namespace models
}  // namespace ct
