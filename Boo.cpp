#include "Boo.h"
#include <cstdlib>
#include <stdlib.h>
#include <string>

using namespace std;

Boo::Boo(string pNombre,int pVuelo,string pColor, int pHP): Flying(pNombre, pVuelo){
    Id="B";
    Nombre= pNombre;
    Ganadas= 0;
    Experiencia=0;
	Vuelo=pVuelo;
	Color=pColor;//color de su cuerpo
	HP=pHP;
	Defensa=20;
	Velocidad=35;
	Fuerza=8;
	Especial=true;
}

Boo::~Boo(){}

Boo::Boo(){}


void Boo::setColor(string pColor){
   Color=pColor;
}

string Boo::getColor(){
   return Color;
}
void Boo::setHP(int pHP){
   HP=pHP;
}
int Boo::getHP(){
   return HP;
}
void Boo::setDefensa(int pDefensa){
   Defensa=pDefensa;
}
int Boo::getDefensa(){
   return Defensa;
}
void Boo::setVelocidad(int pVelocidad){
   Velocidad=pVelocidad;
}
int Boo::getVelocidad(){
   return Velocidad;
}
void Boo::setFuerza(int pFuerza){
   Fuerza=pFuerza;
}
int Boo::getFuerza(){
   return Fuerza;
}
void Boo::setEspecial(bool pEspecial){
    Especial=pEspecial;
}
bool Boo::getEspecial(){
   return Especial;
}

void Boo::pelea(){
  
}
