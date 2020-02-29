#include <iostream>

using namespace std;

class Roda
{
public:
    Roda()
    {
        cout << "Uma nova roda foi criada!" << endl;
    }

    ~Roda()
    {
        cout << "Uma roda foi destruida!" << endl;
    }
};


class Veiculo
{
private:
    string nome;
    int num_rodas = 0;

    Roda * rodas = NULL;
public:
    Veiculo(const char * n)
    {
        this->nome = n;
        cout << "Um novo veiculo foi criado com o nome: " << this->nome << "!" << endl;
    }

    ~Veiculo()
    { 
        cout << "o veiculo " << this->nome << " foi destruido" << endl;
        delete[] rodas;
    }

    void setNumRodas(int);
    int getNumRodas();
    // void setNumRodas(int nRodas)
    // {
    //     this->num_rodas = nRodas;
    //     this->roda = new Roda[nRodas]();
    // }


    // int getNumRodas()
    // {
    //     return this->num_rodas;
    // }

};
