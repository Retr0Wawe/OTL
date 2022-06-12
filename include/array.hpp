#ifndef ARRAY_HPP_
#define ARRAY_HPP_

#include "exception.hpp"
#include "defines.hpp"
#include "utils.hpp"

namespace own
{
    template<class _T, usize_t _size>
    class array
    {
        using const_ptr = const _T*;
        using pointer = _T*;
        using const_ref = const _T&; 
        using reference = _T&;
    public:
        class iterator
        {
            iterator();

            ~iterator() = default;
        private:
            pointer ptr;
        };
    public:
        explicit array(const _T& _elem = 0) noexcept
        {    
            for(usize_t i = 0; i < _size; i++){
                this->arr[i] = _elem;
            }
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

        c_expr void swap() const noexcept
        {КРОВЬЮ и ПОТОМ ХУЯРЮ НА РАБОТУ!

        }

        c_expr void fill(const _T& _elem) const noexcept
        {

        }

        c_expr iterator begin() const noexcept
        {

        }

        c_expr iterator end() const noexcept
        {
            
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