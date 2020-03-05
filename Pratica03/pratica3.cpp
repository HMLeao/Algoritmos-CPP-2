#include <iostream>
#include "funcoes.h"

using namespace std;

int main()
{
    int x = 5, y = 10, z = 30;

    trocar(x,y);

    cout << " Minimo entre " << x << " e " << y << " eh " << minimo(x,y) << endl;

    cout << " Maximo entre " << y << " e " << z << " eh " << maximo(y,z) << endl;

    
    return 0;
}