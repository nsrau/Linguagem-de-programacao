#include <iostream>
#include <string>

template <typename T>
T Maximo(T arg1, T arg2)
{
    if (arg1 > arg2)
    {
        return arg1;
    }
    if (arg2 > arg1)
    {
        return arg2;
    }
    return arg1;
}
