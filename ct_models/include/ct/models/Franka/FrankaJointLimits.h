/**********************************************************************************************************************
This file is part of the Control Toolbox (https://github.com/ethz-adrl/control-toolbox), copyright by ETH Zurich.
Licensed under the BSD-2 license (see LICENSE file in main directory)
**********************************************************************************************************************/

#pragma once

namespace ct {
namespace models {
namespace Franka {

template <typename SCALAR = double>
const typename ct::rbd::JointState<7, SCALAR>::Position& jointLowerLimit()
{
    static typename ct::rbd::JointState<7, SCALAR>::Position jointLowerLimit;
    jointLowerLimit << -2.8973, -1.7628, -2.8973, -3.0718, -2.8973, -0.0175, -2.8973;

    return jointLowerLimit;
}

template <typename SCALAR = double>
const typename ct::rbd::JointState<7, SCALAR>::Position& jointUpperLimit()
{
    static typename ct::rbd::JointState<7, SCALAR>::Position jointUpperLimit;
    jointUpperLimit << 2.8973, 1.7628, 2.8973, -0.0698, 2.8973, 3.7525, 2.8973;

    return jointUpperLimit;
}

template <typename SCALAR = double>
const typename ct::rbd::JointState<7, SCALAR>::Velocity& jointVelocityLimit()
{
    static typename ct::rbd::JointState<7, SCALAR>::Velocity jointVelocityLimit;
    jointVelocityLimit << 2.5, 2.5, 2.5, 2.5, 3, 3, 3;

    return jointVelocityLimit;
}
}
}
}
