#include "veiculo.h"

void Veiculo::setNumRodas(int nRodas)
{
	delete[] rodas;
    this->num_rodas = nRodas;
    this->rodas = new Roda[nRodas]();
}


int Veiculo::getNumRodas()
{
    return this->num_rodas;
}
