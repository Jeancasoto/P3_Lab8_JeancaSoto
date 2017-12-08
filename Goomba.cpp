#include "Goomba.h"
#include <cstdlib>
#include <stdlib.h>
#include <string>

using namespace std;

Goomba::Goomba(string pNombre,int pIntimidacion,double pTamano, int pHP): Melee(pNombre, pIntimidacion){
    Id="G";
    Nombre= pNombre;
    Ganadas= 0;
    Experiencia=0;
	Intimidacion=pIntimidacion;
	tamano=pTamano;
	HP=pHP;
	Defensa=0;
	Velocidad=65;
	Fuerza=10;
	Especial=true;
}

Goomba::~Goomba(){}

Goomba::Goomba(){}

void Goomba::setTamano(double pTamano){
   tamano=pTamano;
}
double Goomba::getTamano(){
   return tamano;
}
void Goomba::setHP(int pHP){
   HP=pHP;
}
int Goomba::getHP(){
   return HP;
}
void Goomba::setDefensa(int pDefensa){
   Defensa=pDefensa;
}
int Goomba::getDefensa(){
   return Defensa;
}
void Goomba::setVelocidad(int pVelocidad){
   Velocidad=pVelocidad;
}
int Goomba::getVelocidad(){
   return Velocidad;
}
void Goomba::setFuerza(int pFuerza){
   Fuerza=pFuerza;
}
int Goomba::getFuerza(){
   return Fuerza;
}
void Goomba::setEspecial(bool pEspecial){
   Especial=pEspecial;
}
bool Goomba::getEspecial(){
   return Especial;
}

void Goomba::pelea(){

    
}
