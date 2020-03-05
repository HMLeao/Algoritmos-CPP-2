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
    if(a != b)
        return a>b ? a : b;
    else
        return 0;
}


template <class T>
T minimo(const T a, const T b)
{
    if(a != b)
        return a<b ? a : b;
    else
        return 0;
}

template<>
char * maximo<char*>(char * a, char * b)
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
char * minimo<char*>(char * a, char * b)
{
    int result = strcmp(a,b);
    if(result<0)
        return a;
    else if(result>0)
        return b;
    else
        return "iguais";
}   