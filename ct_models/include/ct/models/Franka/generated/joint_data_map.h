#ifndef IIT_FRANKA_JOINT_DATA_MAP_H_
#define IIT_FRANKA_JOINT_DATA_MAP_H_

#include "declarations.h"

namespace iit {
namespace Franka {

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
    data[PANDA_JOINT1] = rhs[PANDA_JOINT1];
    data[PANDA_JOINT2] = rhs[PANDA_JOINT2];
    data[PANDA_JOINT3] = rhs[PANDA_JOINT3];
    data[PANDA_JOINT4] = rhs[PANDA_JOINT4];
    data[PANDA_JOINT5] = rhs[PANDA_JOINT5];
    data[PANDA_JOINT6] = rhs[PANDA_JOINT6];
    data[PANDA_JOINT7] = rhs[PANDA_JOINT7];
}

template<typename T> inline
void JointDataMap<T>::assigndata(const T& value) {
    data[PANDA_JOINT1] = value;
    data[PANDA_JOINT2] = value;
    data[PANDA_JOINT3] = value;
    data[PANDA_JOINT4] = value;
    data[PANDA_JOINT5] = value;
    data[PANDA_JOINT6] = value;
    data[PANDA_JOINT7] = value;
}

template<typename T> inline
std::ostream& operator<<(std::ostream& out, const JointDataMap<T>& map) {
    out
    << "   panda_joint1 = "
    << map[PANDA_JOINT1]
    << "   panda_joint2 = "
    << map[PANDA_JOINT2]
    << "   panda_joint3 = "
    << map[PANDA_JOINT3]
    << "   panda_joint4 = "
    << map[PANDA_JOINT4]
    << "   panda_joint5 = "
    << map[PANDA_JOINT5]
    << "   panda_joint6 = "
    << map[PANDA_JOINT6]
    << "   panda_joint7 = "
    << map[PANDA_JOINT7]
    ;
    return out;
}

}
}
#endif
