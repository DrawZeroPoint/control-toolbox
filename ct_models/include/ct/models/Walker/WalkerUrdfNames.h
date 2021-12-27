/**********************************************************************************************************************
This file is part of the Control Toolbox (https://github.com/ethz-adrl/control-toolbox), copyright by ETH Zurich.
Licensed under the BSD-2 license (see LICENSE file in main directory)
**********************************************************************************************************************/

#pragma once

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"

namespace ct {
namespace models {
namespace Walker {

static std::vector<std::string> urdfJointNames()
{
    std::vector<std::string> urdfJointNames = {"right_leg_j1", "right_leg_j2", "right_leg_j3", "right_leg_j4",
        "right_leg_j5", "right_leg_j6", "left_leg_j1", "left_leg_j2", "left_leg_j3", "left_leg_j4",
        "left_leg_j5", "left_leg_j6",};

    return urdfJointNames;
}

}  // namespace Walker
}  // namespace models
}  // namespace ct

#pragma GCC diagnostic pop
