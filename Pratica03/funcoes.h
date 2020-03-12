#pragma once
#include <iostream>
#include <cstring>


template <class T>
void trocar(T & a, T & b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class T>
T maximo(const T a, const T b)
{
        return a>b ? a : b;
}


template <class T>
T minimo(const T a, const T b)
{
        return a<b ? a : b;
}

template<>
const char * maximo<const char*>(const char * a, const char * b)
{
    int result = strcmp(a,b);
    if(result>0)
        return a;
    else if(result<0)
        return b;
    else
        return "iguais";
}

template<>
const char * minimo<const char*>(const char * a, const char * b)
{
    int result = strcmp(a,b);
    if(result<0)
        return a;
    else if(result>0)
        return b;
    else
        return "iguais";
}   