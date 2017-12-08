#include "Magikoopa.h"
#include <cstdlib>
#include <stdlib.h>
#include <string>

using namespace std;

Magikoopa::Magikoopa(string pNombre,int pRango,string pColor, int pHP): Range(pNombre, pRango){
    Id="MK";
    Nombre= pNombre;
    Ganadas= 0;
    Experiencia=0;
	Rango=pRango;
	Color=pColor;//color de traje
	HP=pHP;
	Defensa=0;
	Velocidad=60;
	Fuerza=7;
	Especial=true;
}

Magikoopa::~Magikoopa(){}

Magikoopa::Magikoopa(){}

void Magikoopa::setColor(string pColor){
    Color=pColor;
}
string Magikoopa::getColor(){
   return Color;
}
void Magikoopa::setHP(int pHP){
    HP=pHP;
}
int Magikoopa::getHP(){
   return HP;
}
void Magikoopa::setDefensa(int pDefensa){
   Defensa=pDefensa;
}
int Magikoopa::getDefensa(){
   return Defensa;
}
void Magikoopa::setVelocidad(int pVelocidad){
    Velocidad=pVelocidad;
}
int Magikoopa::getVelocidad(){
   return Velocidad;
}
void Magikoopa::setFuerza(int pFuerza){
   Fuerza=pFuerza;
}
int Magikoopa::getFuerza(){
   return Fuerza;
}
void Magikoopa::setEspecial(bool pEspecial){
   Especial=pEspecial;
}
bool Magikoopa::getEspecial(){
   return Especial;
}

void Magikoopa::pelea(){}
