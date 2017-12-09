#include "Range.h"
#include <cstdlib>
#include <stdlib.h>
#include <string>


using namespace std;

Range::Range(string pNombre , int pRango): Minion(pNombre){
    Id="R";
    Nombre= pNombre;
    Ganadas= 0;
    Experiencia=0;
	Rango=pRango;
}

//destructor 
Range::~Range(){}

Range::Range(){}

void Range::setRango(int pRango){
   Rango=pRango;
}
int Range::getRango(){
   return Rango;
}
