#include "Flying.h"
#include <cstdlib>
#include <stdlib.h>
#include <string>

using namespace std;

Flying::Flying(string pNombre, int pVuelo) : Minion(pNombre)
{
    Id = "F";
    Nombre = pNombre;
    Ganadas = 0;
    Experiencia = 0;
    Vuelo = pVuelo;
}

Flying::Flying() {}

//destructor
Flying::~Flying() {}

void Flying::setVuelo(int pVuelo)
{
    Vuelo = pVuelo;
}

int Flying::getVuelo()
{
    return Vuelo;
}
