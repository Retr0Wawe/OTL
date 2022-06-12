#ifndef EXCEPTION_HPP_
#define EXCEPTION_HPP_

#include "defines.hpp"

namespace own
{
    class exception
    {
    public:
        using c_str = const char*;
    public:
        explicit exception(c_str _msg): msg(_msg)
        {   }

        virtual ~exception() = default;
    public:
        virtual c_str what() const noexcept
        {
            return msg;
        }
    protected:
        c_str msg;
    };

    class out_of_range : public exception 
    {
    public:
        explicit out_of_range(c_str _msg) : exception(_msg)
        {   }

        out_of_range(c_str _msg, usize_t _index) : exception(_msg), index(_index)
        {   }

        ~out_of_range() = default;
    protected:
        usize_t index;
    };
}

#endif