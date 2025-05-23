#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <list>

template<typename T>
typename T::const_iterator easyfind(const T& container, int i){
    typename T::const_iterator it = std::find(container.begin(), container.end(), i);
    if (it != container.end())
        return it;
    throw std::runtime_error("Value not found in container");
}

#endif