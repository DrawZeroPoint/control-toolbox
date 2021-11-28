#ifndef IIT_ROBOT_FRANKA_DECLARATIONS_H_
#define IIT_ROBOT_FRANKA_DECLARATIONS_H_

#include <iit/rbd/rbd.h>

namespace iit {
namespace Franka {

static const int JointSpaceDimension = 7;
static const int jointsCount = 7;
/** The total number of rigid bodies of this robot, including the base */
static const int linksCount  = 8;

namespace tpl {
template <typename SCALAR>
using Column7d = iit::rbd::PlainMatrix<SCALAR, 7, 1>;

template <typename SCALAR>
using JointState = Column7d<SCALAR>;
}

using Column7d = tpl::Column7d<double>;
typedef Column7d JointState;

enum JointIdentifiers {
    PANDA_JOINT1 = 0
    , PANDA_JOINT2
    , PANDA_JOINT3
    , PANDA_JOINT4
    , PANDA_JOINT5
    , PANDA_JOINT6
    , PANDA_JOINT7
};

enum LinkIdentifiers {
    TABLE = 0
    , PANDA_LINK1
    , PANDA_LINK2
    , PANDA_LINK3
    , PANDA_LINK4
    , PANDA_LINK5
    , PANDA_LINK6
    , PANDA_LINK7
};

static const JointIdentifiers orderedJointIDs[jointsCount] =
    {PANDA_JOINT1,PANDA_JOINT2,PANDA_JOINT3,PANDA_JOINT4,PANDA_JOINT5,PANDA_JOINT6,PANDA_JOINT7};

static const LinkIdentifiers orderedLinkIDs[linksCount] =
    {TABLE,PANDA_LINK1,PANDA_LINK2,PANDA_LINK3,PANDA_LINK4,PANDA_LINK5,PANDA_LINK6,PANDA_LINK7};

}
}
#endif
