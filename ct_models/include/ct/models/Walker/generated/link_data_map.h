#ifndef IIT_WALKER_LINK_DATA_MAP_H_
#define IIT_WALKER_LINK_DATA_MAP_H_

#include "declarations.h"

namespace iit {
namespace Walker {

/**
 * A very simple container to associate a generic data item to each link
 */
template<typename T> class LinkDataMap {
private:
    T data[linksCount];
public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW

    LinkDataMap() {};
    LinkDataMap(const T& defaultValue);
    LinkDataMap(const LinkDataMap& rhs);
    LinkDataMap& operator=(const LinkDataMap& rhs);
    LinkDataMap& operator=(const T& rhs);
          T& operator[](LinkIdentifiers which);
    const T& operator[](LinkIdentifiers which) const;
private:
    void copydata(const LinkDataMap& rhs);
    void assigndata(const T& commonValue);
};

template<typename T> inline
LinkDataMap<T>::LinkDataMap(const T& value) {
    assigndata(value);
}

template<typename T> inline
LinkDataMap<T>::LinkDataMap(const LinkDataMap& rhs)
{
    copydata(rhs);
}

template<typename T> inline
LinkDataMap<T>& LinkDataMap<T>::operator=(const LinkDataMap& rhs)
{
    if(&rhs != this) {
        copydata(rhs);
    }
    return *this;
}

template<typename T> inline
LinkDataMap<T>& LinkDataMap<T>::operator=(const T& value)
{
    assigndata(value);
    return *this;
}

template<typename T> inline
T& LinkDataMap<T>::operator[](LinkIdentifiers l) {
    return data[l];
}

template<typename T> inline
const T& LinkDataMap<T>::operator[](LinkIdentifiers l) const {
    return data[l];
}

template<typename T> inline
void LinkDataMap<T>::copydata(const LinkDataMap& rhs) {
    data[TORSO] = rhs[TORSO];
    data[RIGHT_LEG_L1] = rhs[RIGHT_LEG_L1];
    data[RIGHT_LEG_L2] = rhs[RIGHT_LEG_L2];
    data[RIGHT_LEG_L3] = rhs[RIGHT_LEG_L3];
    data[RIGHT_LEG_L4] = rhs[RIGHT_LEG_L4];
    data[RIGHT_LEG_L5] = rhs[RIGHT_LEG_L5];
    data[RIGHT_LEG_L6] = rhs[RIGHT_LEG_L6];
    data[LEFT_LEG_L1] = rhs[LEFT_LEG_L1];
    data[LEFT_LEG_L2] = rhs[LEFT_LEG_L2];
    data[LEFT_LEG_L3] = rhs[LEFT_LEG_L3];
    data[LEFT_LEG_L4] = rhs[LEFT_LEG_L4];
    data[LEFT_LEG_L5] = rhs[LEFT_LEG_L5];
    data[LEFT_LEG_L6] = rhs[LEFT_LEG_L6];
}

template<typename T> inline
void LinkDataMap<T>::assigndata(const T& value) {
    data[TORSO] = value;
    data[RIGHT_LEG_L1] = value;
    data[RIGHT_LEG_L2] = value;
    data[RIGHT_LEG_L3] = value;
    data[RIGHT_LEG_L4] = value;
    data[RIGHT_LEG_L5] = value;
    data[RIGHT_LEG_L6] = value;
    data[LEFT_LEG_L1] = value;
    data[LEFT_LEG_L2] = value;
    data[LEFT_LEG_L3] = value;
    data[LEFT_LEG_L4] = value;
    data[LEFT_LEG_L5] = value;
    data[LEFT_LEG_L6] = value;
}

template<typename T> inline
std::ostream& operator<<(std::ostream& out, const LinkDataMap<T>& map) {
    out
    << "   torso = "
    << map[TORSO]
    << "   right_leg_l1 = "
    << map[RIGHT_LEG_L1]
    << "   right_leg_l2 = "
    << map[RIGHT_LEG_L2]
    << "   right_leg_l3 = "
    << map[RIGHT_LEG_L3]
    << "   right_leg_l4 = "
    << map[RIGHT_LEG_L4]
    << "   right_leg_l5 = "
    << map[RIGHT_LEG_L5]
    << "   right_leg_l6 = "
    << map[RIGHT_LEG_L6]
    << "   left_leg_l1 = "
    << map[LEFT_LEG_L1]
    << "   left_leg_l2 = "
    << map[LEFT_LEG_L2]
    << "   left_leg_l3 = "
    << map[LEFT_LEG_L3]
    << "   left_leg_l4 = "
    << map[LEFT_LEG_L4]
    << "   left_leg_l5 = "
    << map[LEFT_LEG_L5]
    << "   left_leg_l6 = "
    << map[LEFT_LEG_L6]
    ;
    return out;
}

}
}
#endif
