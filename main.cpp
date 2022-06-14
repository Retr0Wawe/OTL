#include "include/array.hpp"

#include <iostream>
#include <array>
#include <algorithm>
#include <vector>

using namespace own;

int main()
{
    const std::array<int, 4> f = {1,2,3,4};

    for(auto it = f.begin(); it != f.end(); it++){
        std::cout << *it;
    }
}   