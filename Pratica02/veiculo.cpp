#include "veiculo.h"

void Terrestre::setCapPass(int cp)
{
    this->cap_pass = cp;
}

int Terrestre::getCapPass()
{
    return this->cap_pass;
}

void Aquatico::setCargaMax(float gm)
{
    this->carga_max = gm;
}

float Aquatico::getCargaMax()
{
    return this->carga_max;
}

void Aereo::setVelMax(float vm)
{
    this->vel_max = vm;
}

float Aereo::getVelMax()
{
    return this->vel_max;
}