#ifndef INITIALIZER_LIST_HPP_
#define INITIALIZER_LIST_HPP_

#include "defines.hpp"

namespace own
{
    template<typename _T>
    class initializer_list
    {
        using pointer = _T*;
        using const_ptr = const _T*;
        using reference = _T&;
        using const_ref = const _T&;
    public:
        initializer_list(): ptr(nullptr)
        {   }

        initializer_list(const _T* _ptr, usize_t _size) noexcept : ptr(_ptr)
        {   }

        ~initializer_list() = default;
    public:
        c_expr pointer begin() noexcept;

        c_expr pointer end() noexcept;
    private:
        _T* ptr;
        usize_t size;
    };
}

#endif