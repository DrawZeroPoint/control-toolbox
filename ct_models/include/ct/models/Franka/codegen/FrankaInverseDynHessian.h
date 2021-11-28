/**********************************************************************************************************************
This file is part of the Control Toolbox (https://github.com/ethz-adrl/control-toolbox), copyright by ETH Zurich.
Licensed under the BSD-2 license (see LICENSE file in main directory)
**********************************************************************************************************************/

#pragma once

#include <ct/core/math/Derivatives.h>

namespace ct {
namespace models {
namespace Franka {

class FrankaInverseDynHessian : public core::Derivatives<14, 7, double>
{
public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW

    typedef Eigen::Matrix<double, 14, 14> HES_TYPE;
    typedef Eigen::Matrix<double, 14, 1> X_TYPE;

    FrankaInverseDynHessian()
    {
        hessian_.setZero();
        v_.fill(0.0);
    };

    FrankaInverseDynHessian(const FrankaInverseDynHessian& other)
    {
        hessian_.setZero();
        v_.fill(0.0);
    }

    virtual ~FrankaInverseDynHessian(){};

    FrankaInverseDynHessian* clone() const override { return new FrankaInverseDynHessian(*this); }
    HES_TYPE hessian(const Eigen::VectorXd& x_in, const Eigen::VectorXd& w_in) override;

private:
    HES_TYPE hessian_;
    std::array<double, 461> v_;
};

}  // namespace Franka
}  // namespace models
}  // namespace ct
