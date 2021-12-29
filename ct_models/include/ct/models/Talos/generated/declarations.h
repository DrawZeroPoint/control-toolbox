#ifndef IIT_ROBOT_TALOS_DECLARATIONS_H_
#define IIT_ROBOT_TALOS_DECLARATIONS_H_

#include <iit/rbd/rbd.h>

namespace iit {
namespace Talos {

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
    LEG_LEFT_1_JOINT = 0
    , LEG_LEFT_2_JOINT
    , LEG_LEFT_3_JOINT
    , LEG_LEFT_4_JOINT
    , LEG_LEFT_5_JOINT
    , LEG_LEFT_6_JOINT
    , LEG_RIGHT_1_JOINT
    , LEG_RIGHT_2_JOINT
    , LEG_RIGHT_3_JOINT
    , LEG_RIGHT_4_JOINT
    , LEG_RIGHT_5_JOINT
    , LEG_RIGHT_6_JOINT
};

enum LinkIdentifiers {
    BASE_LINK = 0
    , LEG_LEFT_1_LINK
    , LEG_LEFT_2_LINK
    , LEG_LEFT_3_LINK
    , LEG_LEFT_4_LINK
    , LEG_LEFT_5_LINK
    , LEG_LEFT_6_LINK
    , LEG_RIGHT_1_LINK
    , LEG_RIGHT_2_LINK
    , LEG_RIGHT_3_LINK
    , LEG_RIGHT_4_LINK
    , LEG_RIGHT_5_LINK
    , LEG_RIGHT_6_LINK
};

static const JointIdentifiers orderedJointIDs[jointsCount] =
    {LEG_LEFT_1_JOINT,LEG_LEFT_2_JOINT,LEG_LEFT_3_JOINT,LEG_LEFT_4_JOINT,LEG_LEFT_5_JOINT,LEG_LEFT_6_JOINT,LEG_RIGHT_1_JOINT,LEG_RIGHT_2_JOINT,LEG_RIGHT_3_JOINT,LEG_RIGHT_4_JOINT,LEG_RIGHT_5_JOINT,LEG_RIGHT_6_JOINT};

static const LinkIdentifiers orderedLinkIDs[linksCount] =
    {BASE_LINK,LEG_LEFT_1_LINK,LEG_LEFT_2_LINK,LEG_LEFT_3_LINK,LEG_LEFT_4_LINK,LEG_LEFT_5_LINK,LEG_LEFT_6_LINK,LEG_RIGHT_1_LINK,LEG_RIGHT_2_LINK,LEG_RIGHT_3_LINK,LEG_RIGHT_4_LINK,LEG_RIGHT_5_LINK,LEG_RIGHT_6_LINK};

}
}
#endif
