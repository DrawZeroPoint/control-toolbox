#ifndef IIT_WALKER_JOINT_DATA_MAP_H_
#define IIT_WALKER_JOINT_DATA_MAP_H_

#include "declarations.h"

namespace iit {
namespace Walker {

/**
 * A very simple container to associate a generic data item to each joint
 */
template<typename T> class JointDataMap {
private:
    T data[jointsCount];
public:
    JointDataMap() {};
    JointDataMap(const T& defaultValue);
    JointDataMap(const JointDataMap& rhs);
    JointDataMap& operator=(const JointDataMap& rhs);
    JointDataMap& operator=(const T& rhs);
          T& operator[](JointIdentifiers which);
    const T& operator[](JointIdentifiers which) const;
private:
    void copydata(const JointDataMap& rhs);
    void assigndata(const T& rhs);
};

template<typename T> inline
JointDataMap<T>::JointDataMap(const T& value) {
    assigndata(value);
}

template<typename T> inline
JointDataMap<T>::JointDataMap(const JointDataMap& rhs)
{
    copydata(rhs);
}

template<typename T> inline
JointDataMap<T>& JointDataMap<T>::operator=(const JointDataMap& rhs)
{
    if(&rhs != this) {
        copydata(rhs);
    }
    return *this;
}

template<typename T> inline
JointDataMap<T>& JointDataMap<T>::operator=(const T& value)
{
    assigndata(value);
    return *this;
}

template<typename T> inline
T& JointDataMap<T>::operator[](JointIdentifiers j) {
    return data[j];
}

template<typename T> inline
const T& JointDataMap<T>::operator[](JointIdentifiers j) const {
    return data[j];
}

template<typename T> inline
void JointDataMap<T>::copydata(const JointDataMap& rhs) {
    data[RIGHT_LEG_J1] = rhs[RIGHT_LEG_J1];
    data[RIGHT_LEG_J2] = rhs[RIGHT_LEG_J2];
    data[RIGHT_LEG_J3] = rhs[RIGHT_LEG_J3];
    data[RIGHT_LEG_J4] = rhs[RIGHT_LEG_J4];
    data[RIGHT_LEG_J5] = rhs[RIGHT_LEG_J5];
    data[RIGHT_LEG_J6] = rhs[RIGHT_LEG_J6];
    data[LEFT_LEG_J1] = rhs[LEFT_LEG_J1];
    data[LEFT_LEG_J2] = rhs[LEFT_LEG_J2];
    data[LEFT_LEG_J3] = rhs[LEFT_LEG_J3];
    data[LEFT_LEG_J4] = rhs[LEFT_LEG_J4];
    data[LEFT_LEG_J5] = rhs[LEFT_LEG_J5];
    data[LEFT_LEG_J6] = rhs[LEFT_LEG_J6];
}

template<typename T> inline
void JointDataMap<T>::assigndata(const T& value) {
    data[RIGHT_LEG_J1] = value;
    data[RIGHT_LEG_J2] = value;
    data[RIGHT_LEG_J3] = value;
    data[RIGHT_LEG_J4] = value;
    data[RIGHT_LEG_J5] = value;
    data[RIGHT_LEG_J6] = value;
    data[LEFT_LEG_J1] = value;
    data[LEFT_LEG_J2] = value;
    data[LEFT_LEG_J3] = value;
    data[LEFT_LEG_J4] = value;
    data[LEFT_LEG_J5] = value;
    data[LEFT_LEG_J6] = value;
}

template<typename T> inline
std::ostream& operator<<(std::ostream& out, const JointDataMap<T>& map) {
    out
    << "   right_leg_j1 = "
    << map[RIGHT_LEG_J1]
    << "   right_leg_j2 = "
    << map[RIGHT_LEG_J2]
    << "   right_leg_j3 = "
    << map[RIGHT_LEG_J3]
    << "   right_leg_j4 = "
    << map[RIGHT_LEG_J4]
    << "   right_leg_j5 = "
    << map[RIGHT_LEG_J5]
    << "   right_leg_j6 = "
    << map[RIGHT_LEG_J6]
    << "   left_leg_j1 = "
    << map[LEFT_LEG_J1]
    << "   left_leg_j2 = "
    << map[LEFT_LEG_J2]
    << "   left_leg_j3 = "
    << map[LEFT_LEG_J3]
    << "   left_leg_j4 = "
    << map[LEFT_LEG_J4]
    << "   left_leg_j5 = "
    << map[LEFT_LEG_J5]
    << "   left_leg_j6 = "
    << map[LEFT_LEG_J6]
    ;
    return out;
}

}
}
#endif
