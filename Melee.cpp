#include "Melee.h"
#include <cstdlib>
#include <stdlib.h>
#include <string>

using namespace std;


Melee::Melee(string pNombre , int pIntimidacion): Minion(pNombre){
    Id="M";
    Nombre= pNombre;
    Ganadas= 0;
    Experiencia=0;
	Intimidacion=pIntimidacion;
}
//destructor
Melee::~Melee(){}

Melee::Melee(){}

void Melee::setIntimidacion(int pIntimidacion){
    Intimidacion=pIntimidacion;
}
int Melee::getIntimidacion(){
   return Intimidacion;
}
