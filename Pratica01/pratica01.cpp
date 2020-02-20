#include <iostream>
#include <chrono>
#include "veiculo.h"

using namespace std;

// class Veiculo
// {
// private:
//     string nome;
//     int num_rodas;
// public:
//     Veiculo(const char * n)
//     {
//         this->nome = n;
//         cout << "Um novo veiculo foi criado com o nome: " << this->nome << "!" << endl;
//     }

//     ~Veiculo(){ cout << "o veiculo " << this->nome << " foi destruido" << endl; }

//     void setNumRodas(int);
//     int getNumRodas();
// };

// void Veiculo::setNumRodas(int n)
// {
//     this->num_rodas = n;
// }


// int Veiculo::getNumRodas()
// {
//     return this->num_rodas;
// }

int main() 
{


    cout << "Hello, World!" << endl;

    // Veiculo veiculo1("v1");
    // {
    //     Veiculo veiculo2("v2");
    //     {
    //         Veiculo veiculo3("v3");
    //     }
    // }

    Veiculo * obj1 = new Veiculo("v1");
    // {
    //     Veiculo * obj2 = new Veiculo("v2");
    //     {
    //         Veiculo * obj3 = new Veiculo("v3");
    //         delete obj3;
    //     }
    //     delete obj2;
    // }
    // delete obj1;
        
    obj1->setNumRodas(4);

    // auto start = std::chrono::high_resolution_clock::now();

    // for(int i = 0; i < 10000 ; i++)
    // {
    //     obj1->setNumRodas(4);
    // }

    // auto finish = std::chrono::high_resolution_clock::now();
    // long elapsed = std::chrono::duration_cast<std::chrono::nanoseconds> (finish-start).count() / 1000;
    // cout << "tempo[us] = " << elapsed << endl;

    // cout << "o veiculo " << " possui " << obj1->getNumRodas() << " rodas" << endl;

    delete obj1;

    return 0;
}