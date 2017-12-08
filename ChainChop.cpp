#include "ChainChop.h"
#include <cstdlib>
#include <stdlib.h>
#include <string>

using namespace std;

ChainChop::ChainChop(string pNombre,int pIntimidacion,string pColor, int pHP): Melee(pNombre, pIntimidacion){
    Id="CH";
    Nombre= pNombre;
    Ganadas= 0;
    Experiencia=0;
	Intimidacion=pIntimidacion;
	color=pColor;//color de su cuerpo
	HP=pHP;
	Defensa=60;
	Velocidad=20;
	Fuerza=15;
	Especial=true;
}

ChainChop::ChainChop(){}

ChainChop::~ChainChop(){}

void ChainChop::setColor(string pColor){
   color=pColor;
}
string ChainChop::getColor(){
   return color;
}
void ChainChop::setHP(int pHP){
   HP=pHP;
}
int ChainChop::getHP(){
   return HP;
}
void ChainChop::setVelocidad(int pVelocidad){
   Velocidad=pVelocidad;
}
int ChainChop::getVelocidad(){
   return Velocidad;
}
void ChainChop::setFuerza(int pFuerza){
   Fuerza=pFuerza;
}
int ChainChop::getFuerza(){
   return Fuerza;
}
void ChainChop::setEspecial(bool pEspecial){
   Especial=pEspecial;
}
bool ChainChop::getEspecial(){
   return Especial;
}

void ChainChop::pelea(){

  
}

