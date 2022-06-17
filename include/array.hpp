#ifndef ARRAY_HPP_
#define ARRAY_HPP_

#include "exception.hpp"
#include "defines.hpp"
#include "utils.hpp"
#include "allocator.hpp"

namespace own
{
    template<class _T, usize_t _size>
    class array
    {
    public:
        using const_ptr = const _T*;
        using pointer = _T*;
        using const_ref = const _T&; 
        using reference = _T&;
        using const_iterator = const _T*;
        using iterator = _T*;
    public:
        explicit array(const _T& _elem = 0) noexcept
        {    
            own::fill(arr, arr + _size, _elem);
        }    

        ~array() = default;
    public:
        c_expr const_ptr data() const noexcept
        {
            return this->arr;
        }

        c_expr pointer data() noexcept
        {
            return this->arr;
        }

        c_expr usize_t size() const noexcept
        {
            return _size;
        }

        c_expr bool empty() const noexcept
        {
            return _size == 0;
        }

        c_expr void swap(array<_T, _size>& _r) noexcept
        {
            for(auto i = 0lu; i < _size; i++){
                own::swap(this->arr[i], _r.arr[i]);
            }
        }

        c_expr void fill(const _T& _elem) const noexcept
        {
            own::fill(this->arr, this->arr + _size, _elem);
        }

        c_expr iterator begin() noexcept
        {
            return &this->arr[0];
        }

        c_expr iterator end() noexcept
        {
            return &this->arr[_size];
        }

        c_expr const_iterator begin() const noexcept
        {
            return &this->arr[0];
        }

        c_expr const_iterator end() const noexcept
        {
            return &this->arr[_size];
        }

        c_expr const_iterator cbegin() const noexcept
        {
            return &this->arr[0];
        }

        c_expr const_iterator cend() const noexcept
        {
            return &this->arr[_size];
        }

        c_expr const_ref front() const noexcept
        {
            return this->arr[0];
        }

        c_expr reference front() noexcept
        {
            return this->arr[0];
        }

        c_expr const_ref back() const noexcept
        {
            return this->arr[_size - 1];
        }

        c_expr reference back() noexcept
        {
            return this->arr[_size - 1];
        }
    public:
        c_expr const_ref operator[](usize_t _i) const
        {
            if(_i >= _size){
                throw out_of_range("out of array", _i);
            }
            return this->arr[_i];
        }

        c_expr reference operator[](usize_t _i)
        {
            if(_i >= _size){
                throw out_of_range("out of array", _i);
            }
            return this->arr[_i];
        }

        friend c_expr bool operator==(const array<_T, _size>& _l, const array<_T, _size>& _r) noexcept
        {
            return _l.arr == _r.arr;
        }

        friend c_expr bool operator!=(const array<_T, _size>& _l, const array<_T, _size>& _r) noexcept
        {
            return _l.arr != _r.arr;
        }
    private:
        _T arr[_size];
    };
}

#endif 