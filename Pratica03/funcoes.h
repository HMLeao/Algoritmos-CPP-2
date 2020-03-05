#include <iostream>

void trocar(int & a, int & b)
{
    int temp = a;
    a = b;
    b = temp;
}

int maximo(const int a, const int b)
{
    if(a != b)
        return a>b ? a : b;
    else
        return 0;
}

int minimo(const int a, const int b)
{
    if(a != b)
        return a<b ? a : b;
    else
        return 0;
}

