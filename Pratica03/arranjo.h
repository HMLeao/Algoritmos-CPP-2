#pragma once
#include <iostream>

using namespace std;

template <class T>
class Arranjo {
private:
    int tamanho;
    T * items; //items do arranjo 
public:  

    Arranjo(int tam) 
    {   
        this->items = new T[tam]();
        this->tamanho = tam;
    }  

    virtual ~Arranjo() 
    {   
        delete[] items;
    }

    virtual T get(int idx)
    { 
        if(idx>tamanho-1) throw "Acesso ilegal: indice maior que o tamanho do arranjo";
        else if(idx<0) throw "Acesso ilegal: indice menor que zero. ";
        return this->items[idx];
    }

    virtual void set(int idx, const T & item) 
    {  
        if(idx>tamanho-1) throw "Acesso ilegal: indice maior que o tamanho do arranjo";
        else if(idx<0) throw "Acesso ilegal: indice menor que zero. ";
        else
            this->items[idx] = item;
    } 
 
    virtual void exibir();
}; 
 

template<class T> 
void Arranjo<T>::exibir() 
{ 
    for(int i = 0; i < this->tamanho; i++)
    {
        cout << i << ": " << this->items[i] << endl;
    }
} 

