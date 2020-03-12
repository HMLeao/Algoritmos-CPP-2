#pragma once
#include <iostream>
#include "arranjo.h"

using namespace std;

class Aluno {
private:
    string nome;
    string mat;
public:
    Aluno (){}
    Aluno (const char * nome, const char * mat) : nome(nome), mat(mat) {}
    friend class Arranjo<Aluno>;
};

template<>
void Arranjo<Aluno>::set(int idx, const Aluno & aluno) 
{
    this->items[idx] = aluno;
}

template<>
void Arranjo<Aluno>::exibir() 
{
    for(int i=0; i < this->tamanho; i++)
    {
        cout << i << ": " << this->items[i].mat << " = " << this->items[i].nome << endl;
    }
}