#ifndef UTILS_HPP_
#define UTILS_HPP_

namespace own
{
    template<typename _InputIter, typename _Function>
    void for_each(_InputIter begin, _InputIter end, _Function func)
    {
        for(; begin != end; begin++){
            func(*begin);
        }
    } 
}

#endif