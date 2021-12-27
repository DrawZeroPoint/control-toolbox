#ifndef IIT_ROBOT_WALKER_DECLARATIONS_H_
#define IIT_ROBOT_WALKER_DECLARATIONS_H_

#include <iit/rbd/rbd.h>

namespace iit {
namespace Walker {

static const int JointSpaceDimension = 12;
static const int jointsCount = 12;
/** The total number of rigid bodies of this robot, including the base */
static const int linksCount  = 13;

namespace tpl {
template <typename SCALAR>
using Column12d = iit::rbd::PlainMatrix<SCALAR, 12, 1>;

template <typename SCALAR>
using JointState = Column12d<SCALAR>;
}

using Column12d = tpl::Column12d<double>;
typedef Column12d JointState;

enum JointIdentifiers {
    RIGHT_LEG_J1 = 0
    , RIGHT_LEG_J2
    , RIGHT_LEG_J3
    , RIGHT_LEG_J4
    , RIGHT_LEG_J5
    , RIGHT_LEG_J6
    , LEFT_LEG_J1
    , LEFT_LEG_J2
    , LEFT_LEG_J3
    , LEFT_LEG_J4
    , LEFT_LEG_J5
    , LEFT_LEG_J6
};

enum LinkIdentifiers {
    TORSO = 0
    , RIGHT_LEG_L1
    , RIGHT_LEG_L2
    , RIGHT_LEG_L3
    , RIGHT_LEG_L4
    , RIGHT_LEG_L5
    , RIGHT_LEG_L6
    , LEFT_LEG_L1
    , LEFT_LEG_L2
    , LEFT_LEG_L3
    , LEFT_LEG_L4
    , LEFT_LEG_L5
    , LEFT_LEG_L6
};

static const JointIdentifiers orderedJointIDs[jointsCount] =
    {RIGHT_LEG_J1,RIGHT_LEG_J2,RIGHT_LEG_J3,RIGHT_LEG_J4,RIGHT_LEG_J5,RIGHT_LEG_J6,LEFT_LEG_J1,LEFT_LEG_J2,LEFT_LEG_J3,LEFT_LEG_J4,LEFT_LEG_J5,LEFT_LEG_J6};

static const LinkIdentifiers orderedLinkIDs[linksCount] =
    {TORSO,RIGHT_LEG_L1,RIGHT_LEG_L2,RIGHT_LEG_L3,RIGHT_LEG_L4,RIGHT_LEG_L5,RIGHT_LEG_L6,LEFT_LEG_L1,LEFT_LEG_L2,LEFT_LEG_L3,LEFT_LEG_L4,LEFT_LEG_L5,LEFT_LEG_L6};

}
}
#endif
