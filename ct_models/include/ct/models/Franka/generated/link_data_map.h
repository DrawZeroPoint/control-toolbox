#ifndef IIT_FRANKA_LINK_DATA_MAP_H_
#define IIT_FRANKA_LINK_DATA_MAP_H_

#include "declarations.h"

namespace iit {
namespace Franka {

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
    data[TABLE] = rhs[TABLE];
    data[PANDA_LINK1] = rhs[PANDA_LINK1];
    data[PANDA_LINK2] = rhs[PANDA_LINK2];
    data[PANDA_LINK3] = rhs[PANDA_LINK3];
    data[PANDA_LINK4] = rhs[PANDA_LINK4];
    data[PANDA_LINK5] = rhs[PANDA_LINK5];
    data[PANDA_LINK6] = rhs[PANDA_LINK6];
    data[PANDA_LINK7] = rhs[PANDA_LINK7];
}

template<typename T> inline
void LinkDataMap<T>::assigndata(const T& value) {
    data[TABLE] = value;
    data[PANDA_LINK1] = value;
    data[PANDA_LINK2] = value;
    data[PANDA_LINK3] = value;
    data[PANDA_LINK4] = value;
    data[PANDA_LINK5] = value;
    data[PANDA_LINK6] = value;
    data[PANDA_LINK7] = value;
}

template<typename T> inline
std::ostream& operator<<(std::ostream& out, const LinkDataMap<T>& map) {
    out
    << "   table = "
    << map[TABLE]
    << "   panda_link1 = "
    << map[PANDA_LINK1]
    << "   panda_link2 = "
    << map[PANDA_LINK2]
    << "   panda_link3 = "
    << map[PANDA_LINK3]
    << "   panda_link4 = "
    << map[PANDA_LINK4]
    << "   panda_link5 = "
    << map[PANDA_LINK5]
    << "   panda_link6 = "
    << map[PANDA_LINK6]
    << "   panda_link7 = "
    << map[PANDA_LINK7]
    ;
    return out;
}

}
}
#endif
