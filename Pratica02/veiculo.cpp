#include "veiculo.h"

// using namespace std;

// void Veiculo::mover()
// {
//     cout << "Veiculo " << this->nome <<" se moveu" << endl;
// }


/**
 * Métodos de Terrestre 
 */
void Terrestre::setCapPass(int cp)
{
    this->cap_pass = cp;
}

int Terrestre::getCapPass()
{
    return this->cap_pass;
}

void Terrestre::mover()
{
    cout << "Veiculo terrestre " << this->nome <<" se moveu" << endl;
}


/**
 * Métodos de Aquatico 
 */
void Aquatico::setCargaMax(float gm)
{
    this->carga_max = gm;
}

float Aquatico::getCargaMax()
{
    return this->carga_max;
}

void Aquatico::mover() 
{
    cout << "Veiculo aquatico " << this->nome <<" se moveu" << endl;
}


/**
 * Métodos de Aereo
 */
void Aereo::setVelMax(float vm)
{
    this->vel_max = vm;
}

float Aereo::getVelMax()
{
    return this->vel_max;
}

void Aereo::mover()
{
    cout << "Veiculo aereo " << this->nome <<" se moveu" << endl;
}


/**
 * Métodos de Anfibio 
 */
void Anfibio::mover()
{
    Terrestre::mover();
    Aquatico::mover();
}