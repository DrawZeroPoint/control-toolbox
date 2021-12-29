/**********************************************************************************************************************
This file is part of the Control Toolbox (https://github.com/ethz-adrl/control-toolbox), copyright by ETH Zurich.
Licensed under the BSD-2 license (see LICENSE file in main directory)
**********************************************************************************************************************/

#pragma once

#include <ct/core/math/Derivatives.h>

namespace ct {
namespace models {
namespace Talos {

class TalosForwardKinJacReverse : public core::Derivatives<36, 12, double>
{
public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW

    typedef Eigen::Matrix<double, 12, 36> JAC_TYPE;
    typedef Eigen::Matrix<double, 36, 1> X_TYPE;

    TalosForwardKinJacReverse()
    {
        jac_.setZero();
        v_.fill(0.0);
    };

    TalosForwardKinJacReverse(const TalosForwardKinJacReverse& other)
    {
        jac_.setZero();
        v_.fill(0.0);
    }

    virtual ~TalosForwardKinJacReverse(){};

    TalosForwardKinJacReverse* clone() const override { return new TalosForwardKinJacReverse(*this); }
    JAC_TYPE jacobian(const Eigen::VectorXd& x_in) override;

private:
    JAC_TYPE jac_;
    std::array<double, 614> v_;
};

}  // namespace Talos
}  // namespace models
}  // namespace ct
