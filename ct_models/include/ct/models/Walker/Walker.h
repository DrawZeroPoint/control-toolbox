/**********************************************************************************************************************
This file is part of the Control Toolbox (https://github.com/ethz-adrl/control-toolbox), copyright by ETH Zurich.
Licensed under the BSD-2 license (see LICENSE file in main directory)
**********************************************************************************************************************/

#pragma once

#include <Eigen/Core>
#include <Eigen/StdVector>

#include "generated/declarations.h"
#include "generated/forward_dynamics.h"
#include "generated/inertia_properties.h"
#include "generated/inverse_dynamics.h"
#include "generated/jacobians.h"
#include "generated/jsim.h"
#include "generated/transforms.h"
#include "generated/link_data_map.h"
#include "generated/traits.h"

#include <ct/rbd/rbd.h>

// these will be undefined later, DO NOT USE!

#define ROBCOGEN_NS Walker  // defines the NS of the robot in robcogen, e.g. iit::<ROBCOGEN_NS>
#define TARGET_NS Walker

// define all links of the robot, names as in robcogen
#define CT_BASE fr_torso  // base link name
#define CT_L0 fr_right_leg_l1
#define CT_L1 fr_right_leg_l2
#define CT_L2 fr_right_leg_l3
#define CT_L3 fr_right_leg_l4
#define CT_L4 fr_right_leg_l5
#define CT_L5 fr_right_leg_l6
#define CT_L6 fr_left_leg_l1
#define CT_L7 fr_left_leg_l2
#define CT_L8 fr_left_leg_l3
#define CT_L9 fr_left_leg_l4
#define CT_L10 fr_left_leg_l5
#define CT_L11 fr_left_leg_l6

// number of endeffectors
#define CT_N_EE 2

#define CT_EE0 fr_right_leg_l6
#define CT_EE0_IS_ON_LINK 5
#define CT_EE0_FIRST_JOINT 0
#define CT_EE0_LAST_JOINT 5

#define CT_EE1 fr_left_leg_l6
#define CT_EE1_IS_ON_LINK 11
#define CT_EE1_FIRST_JOINT 6
#define CT_EE1_LAST_JOINT 11

#include <ct/rbd/robot/robcogen/robcogenHelpers.h>

#include "WalkerUrdfNames.h"
#include "codegen/WalkerWithContactModelLinearizedForward.h"
