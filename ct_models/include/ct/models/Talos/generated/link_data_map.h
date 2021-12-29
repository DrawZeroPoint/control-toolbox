#ifndef IIT_TALOS_LINK_DATA_MAP_H_
#define IIT_TALOS_LINK_DATA_MAP_H_

#include "declarations.h"

namespace iit {
namespace Talos {

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
    data[BASE_LINK] = rhs[BASE_LINK];
    data[LEG_LEFT_1_LINK] = rhs[LEG_LEFT_1_LINK];
    data[LEG_LEFT_2_LINK] = rhs[LEG_LEFT_2_LINK];
    data[LEG_LEFT_3_LINK] = rhs[LEG_LEFT_3_LINK];
    data[LEG_LEFT_4_LINK] = rhs[LEG_LEFT_4_LINK];
    data[LEG_LEFT_5_LINK] = rhs[LEG_LEFT_5_LINK];
    data[LEG_LEFT_6_LINK] = rhs[LEG_LEFT_6_LINK];
    data[LEG_RIGHT_1_LINK] = rhs[LEG_RIGHT_1_LINK];
    data[LEG_RIGHT_2_LINK] = rhs[LEG_RIGHT_2_LINK];
    data[LEG_RIGHT_3_LINK] = rhs[LEG_RIGHT_3_LINK];
    data[LEG_RIGHT_4_LINK] = rhs[LEG_RIGHT_4_LINK];
    data[LEG_RIGHT_5_LINK] = rhs[LEG_RIGHT_5_LINK];
    data[LEG_RIGHT_6_LINK] = rhs[LEG_RIGHT_6_LINK];
}

template<typename T> inline
void LinkDataMap<T>::assigndata(const T& value) {
    data[BASE_LINK] = value;
    data[LEG_LEFT_1_LINK] = value;
    data[LEG_LEFT_2_LINK] = value;
    data[LEG_LEFT_3_LINK] = value;
    data[LEG_LEFT_4_LINK] = value;
    data[LEG_LEFT_5_LINK] = value;
    data[LEG_LEFT_6_LINK] = value;
    data[LEG_RIGHT_1_LINK] = value;
    data[LEG_RIGHT_2_LINK] = value;
    data[LEG_RIGHT_3_LINK] = value;
    data[LEG_RIGHT_4_LINK] = value;
    data[LEG_RIGHT_5_LINK] = value;
    data[LEG_RIGHT_6_LINK] = value;
}

template<typename T> inline
std::ostream& operator<<(std::ostream& out, const LinkDataMap<T>& map) {
    out
    << "   base_link = "
    << map[BASE_LINK]
    << "   leg_left_1_link = "
    << map[LEG_LEFT_1_LINK]
    << "   leg_left_2_link = "
    << map[LEG_LEFT_2_LINK]
    << "   leg_left_3_link = "
    << map[LEG_LEFT_3_LINK]
    << "   leg_left_4_link = "
    << map[LEG_LEFT_4_LINK]
    << "   leg_left_5_link = "
    << map[LEG_LEFT_5_LINK]
    << "   leg_left_6_link = "
    << map[LEG_LEFT_6_LINK]
    << "   leg_right_1_link = "
    << map[LEG_RIGHT_1_LINK]
    << "   leg_right_2_link = "
    << map[LEG_RIGHT_2_LINK]
    << "   leg_right_3_link = "
    << map[LEG_RIGHT_3_LINK]
    << "   leg_right_4_link = "
    << map[LEG_RIGHT_4_LINK]
    << "   leg_right_5_link = "
    << map[LEG_RIGHT_5_LINK]
    << "   leg_right_6_link = "
    << map[LEG_RIGHT_6_LINK]
    ;
    return out;
}

}
}
#endif
