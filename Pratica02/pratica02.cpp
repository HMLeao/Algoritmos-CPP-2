#include <iostream>
#include "veiculo.h"

using namespace std;

int main()
{
    // Veiculo v1("Veiculo qualquer");

    Veiculo * terr = new Terrestre("VT1");
    Veiculo * aqua = new Aquatico("VQ1");
    Veiculo * aereo = new Aereo("VA1");

    dynamic_cast<Terrestre *>(terr)->setCapPass(45); 
    dynamic_cast<Aquatico *>(aqua)->setCargaMax(12.5); 
    dynamic_cast<Aereo *>(aereo)->setVelMax(1040.5);

    terr->mover();
    aqua->mover();
    aereo->mover();

    Veiculo * anfi = new Anfibio("ANFI1");
    dynamic_cast<Anfibio *>(anfi)->mover();
    delete anfi;
    delete terr;
    delete aqua;
    delete aereo;
    
    return 0;
}