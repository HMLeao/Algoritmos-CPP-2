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
    Aluno (string nome, string mat) : nome(nome), mat(mat) {}
    friend class Arranjo<Aluno>;

    // Aluno & operator=(const Aluno & aluno)
    // {
    //     return (Aluno &)aluno;
    // }
    friend ostream & operator<<(ostream & out, const Aluno & aluno);
};

template<>
void Arranjo<Aluno>::set(int idx, const Aluno & aluno) 
{
    if(idx > this->tamanho) throw "acesso ilegal: índice maior que o tamanho alocado";
    if(idx < 0) throw "acesso ilegal: índice menor que zero.";
    this->items[idx] = aluno;
}

// template<>
// void Arranjo<Aluno>::exibir() 
// {
//     for(int i=0; i < this->tamanho; i++)
//     {
//         cout << i << ": " << this->items[i].mat << " = " << this->items[i].nome << endl;
//     }
// }

ostream & operator<<(ostream & out, const Aluno & aluno)
{
     return out << aluno.mat << " = " << aluno.nome;
}