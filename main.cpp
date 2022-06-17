#include "include/array.hpp"

#include <iostream>
#include <array>
#include <algorithm>
#include <vector>

using namespace own;

int main()
{
    const array<int, 5> c;

    for(auto it = c.cbegin(); it != c.cend(); it++){
        std::cout << *it << std::endl;
    }
}   