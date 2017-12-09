#include "Minion.h"
#include <cstdlib>
#include <stdlib.h>
#include <string>

using namespace std;

Minion::Minion(string pNombre)
{
    Id = "U";
    Nombre = pNombre;
    Ganadas = 0;
    Experiencia = 0;
}

//destructor
Minion::~Minion() {}

Minion::Minion() {}

void Minion::setId(string pId)
{
    Id = pId;
}
string Minion::getId()
{
    return Id;
}
void Minion::setNombre(string pNombre)
{
    Nombre = pNombre;
}
string Minion::getNombre()
{
    return Nombre;
}
void Minion::setGanadas(int pGanadas)
{
    Ganadas = Ganadas + pGanadas;
}
int Minion::getGanadas()
{
    return Ganadas;
}
void Minion::setExperiencia(int pExperiencia)
{
    Experiencia = Experiencia + pExperiencia;
}
int Minion::getExperiencia()
{
    return Experiencia;
}
