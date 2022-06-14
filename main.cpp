#include "include/array.hpp"

#include <iostream>
#include <array>
#include <algorithm>
#include <vector>

using namespace own;

int main()
{
    array<int, 10> arr(10);
    array<int, 10> arr2(9);
    
    arr.swap(arr2);

    for_each(arr.begin(), arr.end(), [&](auto c){
        std::cout << c << " ";
    });
}   