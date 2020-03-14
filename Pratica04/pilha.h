#pragma once

#include <iostream>

using namespace std;

template <class T>
class Pilha {
private:
    T * itens;
    int capacidade;
    int topo;

public:
    Pilha(int capacidade) 
    {
        this->itens = new T[capacidade]();
        this->capacidade = capacidade;
        this->topo = -1;
    }

    ~Pilha() 
    {
        delete[] this->itens;
    }

    void empilha(T item) 
    {
        // empilha item no topo da pilha; lança estouro de pilha se estiver cheia
        if(this->topo+1 < this->capacidade) 
        {
            this->itens[topo+1] = item;
            topo++;
        }
        else
        {
            throw "Estouro de pilha";
        }
    }

    T desempilha() 
    {
        // remove um item no topo da pilha;
        // lança "Pilha vazia" se vazia
        if(this->topo >=0) 
        {
            return this->itens[this->topo--];
        } 
        else 
        {
            throw "Underflow";
        }
    }

    int tamanho()
    {
        return topo + 1;
    }
};