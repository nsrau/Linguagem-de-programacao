#include <iostream>
#include <string>

template <typename T>
class Nota
{
public:
    static T valor(T arg1)
    {
        return arg1;
    }
};

template <typename T>
class CalculaMedia
{
public:
    static T notas(T arg1, T arg2, T arg3, T arg4)
    {
        return (arg1 + arg2 + arg3 + arg4) / 4;
    }
};