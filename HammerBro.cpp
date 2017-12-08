#include "HammerBro.h"
#include <cstdlib>
#include <stdlib.h>
#include <string>

using namespace std;

HammerBro::HammerBro(string pNombre,int pRango,double pTamano, int pHP): Range(pNombre, pRango){
    Id="H";
    Nombre= pNombre;
    Ganadas= 0;
    Experiencia=0;
	Rango=pRango;
	tamano=pTamano;//tamano de hammers
	HP=pHP;
	Defensa=15;
	Velocidad=30;
	Fuerza=6;
	Especial=true;
}

HammerBro::~HammerBro(){}

HammerBro::HammerBro(){

}void HammerBro::setTamano(double pTamano){
   tamano=pTamano;
}
double HammerBro::getTamano(){
   return tamano;
}
void HammerBro::setHP(int pHP){
    HP=pHP;
}
int HammerBro::getHP(){
   return HP;
}
void HammerBro::setDefensa(int pDefensa){
    Defensa=pDefensa;
}
int HammerBro::getDefensa(){
   return Defensa;
}
void HammerBro::setVelocidad(int pVelocidad){
   Velocidad=pVelocidad;
}
int HammerBro::getVelocidad(){
   return Velocidad;
}
void HammerBro::setFuerza(int pFuerza){
   Fuerza=pFuerza;
}
int HammerBro::getFuerza(){
   return Fuerza;
}
void HammerBro::setEspecial(bool pEspecial){
   Especial=pEspecial;
}
bool HammerBro::getEspecial(){
   return Especial;
}

void HammerBro::pelea(){}