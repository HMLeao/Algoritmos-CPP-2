#include <iostream>
#include "funcoes.h"
#include "arranjo.h"

using namespace std;

int main()
{
    float x = 5.5, y = 10.15, z = 30.7;
    const char * a = "a";
    const char * b = "b";
    trocar(x,y);

    cout << " Minimo entre " << x << " e " << y << " eh " << minimo(x,y) << endl;
    cout << " Maximo entre " << y << " e " << z << " eh " << maximo(y,z) << endl;
    cout << " Maximo entre " << a << " e " << b << " eh " << maximo(a,b) << endl;

    Arranjo<int> arr(10);

    arr.set(4,5);
    arr.set(7,15);
    arr.set(8,22);
    arr.exibir();

    cout << "agora com arranjo de float: " << endl << endl;

    Arranjo<float> f_arr(10);
    f_arr.set(3,5.5);
    f_arr.set(1,2.6);
    f_arr.set(0,1.37);
    f_arr.set(6,6.8);
    f_arr.exibir();

    Arranjo<int> ex_tes(10);
    try{
        ex_tes.set(-4,5);
    }catch(const char * e){
        cout << e << endl;
    }

    try{
        ex_tes.set(12,8);
    }catch(const char * e){
        cout << e << endl;
    }

    try{
        ex_tes.set(6,4);
    }catch(const char * e){
        cout << e << endl;
    }
    ex_tes.exibir();

    return 0;
}