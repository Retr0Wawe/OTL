#ifndef UTILS_HPP_
#define UTILS_HPP_

#include "defines.hpp"

namespace own
{
    template<typename _InputIter, typename _Function>
    void for_each(_InputIter begin, _InputIter end, _Function func) noexcept
    {
        for(; begin != end; begin++){
            func(*begin);
        }
    }

    template<typename _ForwardIter, typename _T>
    c_expr void fill(_ForwardIter begin, _ForwardIter end, _T elem) noexcept
    {
        for(; begin != end; begin++){
            *begin = elem;
        }
    } 

    template<typename _T>
    void swap(_T& a, _T& b) noexcept
    {
        auto tmp = a;
        a = b;
        b = tmp;
    }
}

#endif