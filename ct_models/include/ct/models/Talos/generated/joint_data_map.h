#ifndef IIT_TALOS_JOINT_DATA_MAP_H_
#define IIT_TALOS_JOINT_DATA_MAP_H_

#include "declarations.h"

namespace iit {
namespace Talos {

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
    data[LEG_LEFT_1_JOINT] = rhs[LEG_LEFT_1_JOINT];
    data[LEG_LEFT_2_JOINT] = rhs[LEG_LEFT_2_JOINT];
    data[LEG_LEFT_3_JOINT] = rhs[LEG_LEFT_3_JOINT];
    data[LEG_LEFT_4_JOINT] = rhs[LEG_LEFT_4_JOINT];
    data[LEG_LEFT_5_JOINT] = rhs[LEG_LEFT_5_JOINT];
    data[LEG_LEFT_6_JOINT] = rhs[LEG_LEFT_6_JOINT];
    data[LEG_RIGHT_1_JOINT] = rhs[LEG_RIGHT_1_JOINT];
    data[LEG_RIGHT_2_JOINT] = rhs[LEG_RIGHT_2_JOINT];
    data[LEG_RIGHT_3_JOINT] = rhs[LEG_RIGHT_3_JOINT];
    data[LEG_RIGHT_4_JOINT] = rhs[LEG_RIGHT_4_JOINT];
    data[LEG_RIGHT_5_JOINT] = rhs[LEG_RIGHT_5_JOINT];
    data[LEG_RIGHT_6_JOINT] = rhs[LEG_RIGHT_6_JOINT];
}

template<typename T> inline
void JointDataMap<T>::assigndata(const T& value) {
    data[LEG_LEFT_1_JOINT] = value;
    data[LEG_LEFT_2_JOINT] = value;
    data[LEG_LEFT_3_JOINT] = value;
    data[LEG_LEFT_4_JOINT] = value;
    data[LEG_LEFT_5_JOINT] = value;
    data[LEG_LEFT_6_JOINT] = value;
    data[LEG_RIGHT_1_JOINT] = value;
    data[LEG_RIGHT_2_JOINT] = value;
    data[LEG_RIGHT_3_JOINT] = value;
    data[LEG_RIGHT_4_JOINT] = value;
    data[LEG_RIGHT_5_JOINT] = value;
    data[LEG_RIGHT_6_JOINT] = value;
}

template<typename T> inline
std::ostream& operator<<(std::ostream& out, const JointDataMap<T>& map) {
    out
    << "   leg_left_1_joint = "
    << map[LEG_LEFT_1_JOINT]
    << "   leg_left_2_joint = "
    << map[LEG_LEFT_2_JOINT]
    << "   leg_left_3_joint = "
    << map[LEG_LEFT_3_JOINT]
    << "   leg_left_4_joint = "
    << map[LEG_LEFT_4_JOINT]
    << "   leg_left_5_joint = "
    << map[LEG_LEFT_5_JOINT]
    << "   leg_left_6_joint = "
    << map[LEG_LEFT_6_JOINT]
    << "   leg_right_1_joint = "
    << map[LEG_RIGHT_1_JOINT]
    << "   leg_right_2_joint = "
    << map[LEG_RIGHT_2_JOINT]
    << "   leg_right_3_joint = "
    << map[LEG_RIGHT_3_JOINT]
    << "   leg_right_4_joint = "
    << map[LEG_RIGHT_4_JOINT]
    << "   leg_right_5_joint = "
    << map[LEG_RIGHT_5_JOINT]
    << "   leg_right_6_joint = "
    << map[LEG_RIGHT_6_JOINT]
    ;
    return out;
}

}
}
#endif
