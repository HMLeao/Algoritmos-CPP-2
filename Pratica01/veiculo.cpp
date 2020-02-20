#include "veiculo.h"

void Veiculo::setNumRodas(int nRodas)
{
    this->num_rodas = nRodas;
    this->roda = new Roda[nRodas]();
}


int Veiculo::getNumRodas()
{
    return this->num_rodas;
}
