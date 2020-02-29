#include <iostream>
#include "veiculo.h"

using namespace std;

int main()
{
    Veiculo v1("Veiculo qualquer");

    Veiculo * terr = new Terrestre("VT1");
    Veiculo * aqua = new Aquatico("VQ1");
    Veiculo * aereo = new Aereo("VA1");

    ((Terrestre *)terr)->setCapPass(45); 
    ((Aquatico *)aqua)->setCargaMax(12.5); 
    ((Aereo *)aereo)->setVelMax(1040.5);

    return 0;
}