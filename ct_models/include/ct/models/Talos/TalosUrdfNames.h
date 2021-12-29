/**********************************************************************************************************************
This file is part of the Control Toolbox (https://github.com/ethz-adrl/control-toolbox), copyright by ETH Zurich.
Licensed under the BSD-2 license (see LICENSE file in main directory)
**********************************************************************************************************************/

#pragma once

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"

namespace ct {
namespace models {
namespace Talos {

static std::vector<std::string> urdfJointNames()
{
    std::vector<std::string> urdfJointNames = {
        "leg_left_1_joint", "leg_left_2_joint", "leg_left_3_joint", "leg_left_4_joint", "leg_left_5_joint", "leg_left_6_joint",
        "leg_right_1_joint", "leg_right_2_joint", "leg_right_3_joint", "leg_right_4_joint", "leg_right_5_joint", "leg_right_6_joint",};

    return urdfJointNames;
}

}  // namespace Talos
}  // namespace models
}  // namespace ct

#pragma GCC diagnostic pop
