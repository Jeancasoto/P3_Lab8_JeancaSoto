#include "Paratroopa.h"
#include <cstdlib>
#include <stdlib.h>
#include <string>

using namespace std;

Paratroopa::Paratroopa(string pNombre,int pVuelo,string pColor, int pHP): Flying(pNombre, pVuelo){
    Id="P";
    Nombre= pNombre;
    Ganadas= 0;
    Experiencia=0;
	Vuelo=pVuelo;
	Color=pColor;//color de su caparazon
	HP=pHP;
	Defensa=40;
	Velocidad=10;
	Fuerza=9;
	Especial=true;
}

Paratroopa::Paratroopa(){}

Paratroopa::~Paratroopa(){}

void Paratroopa::setColor(string pColor){
   Color=pColor;
}
string Paratroopa::getColor(){
   return Color;
}
void Paratroopa::setHP(int pHP){
   HP=pHP;
}
int Paratroopa::getHP(){
   return HP;
}
void Paratroopa::setDefensa(int pDefensa){
    Defensa=pDefensa;
}
int Paratroopa::getDefensa(){
   return Defensa;
}
void Paratroopa::setVelocidad(int pVelocidad){
   Velocidad=pVelocidad;
}
int Paratroopa::getVelocidad(){
   return Velocidad;
}
void Paratroopa::setFuerza(int pFuerza){
    Fuerza=pFuerza;
}
int Paratroopa::getFuerza(){
   return Fuerza;
}
void Paratroopa::setEspecial(bool pEspecial){
   Especial=pEspecial;
}
bool Paratroopa::getEspecial(){
   return Especial;
}

void Paratroopa::pelea(){
    
}
