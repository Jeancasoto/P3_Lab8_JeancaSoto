//#include "ChainChop.h"
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include "Minion.h"
#include "Melee.h"
#include "Flying.h"
#include "Range.h"
#include "Goomba.h"
#include "ChainChop.h"
#include "Boo.h"
#include "Paratroopa.h"
#include "HammerBro.h"
#include "Magikoopa.h"

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
   HP=HP-pHP;
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

void ChainChop::pelea(Minion* p1){
    int esp1=rand() % 3 + 1;

    if(p1->getId()=="H"){
        cout<< dynamic_cast<HammerBro*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<HammerBro*>(p1)->getHP()<<endl;
        int def=rand() % 9 + 1;
        if(def==1 || def==2 || def==3){
            std::cout << "HammerBro Evadio el ataque!" << '\n';
        }else{
            Fuerza=Fuerza*0.5;
            int esp2=rand() % 3 + 1;
            if(esp1==esp2){
                std::cout << "Chainchop Poder especial + 20 ataque" << '\n';
                Fuerza=Fuerza+20;
            }
            Fuerza=Fuerza*0.2;
            std::cout << "Ataque a HammerBro!" << '\n';
            dynamic_cast<HammerBro*>(p1)->setHP(Fuerza);
        }

    }


    if(p1->getId()=="MK"){
        cout<< dynamic_cast<Magikoopa*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<Magikoopa*>(p1)->getHP()<<endl; 
        int def=rand() % 9 + 1;
        if(def==1 || def==2 || def==3 || def==4 || def==5 || def==6){
            std::cout << "Magikoopa Evadio el ataque!" << '\n';
        }else{
            Fuerza=Fuerza*0.5;
            int esp2=rand() % 3 + 1;
            if(esp1==esp2){
                std::cout << "ChainChop Poder especial + 20 ataque" << '\n';
                Fuerza=Fuerza+20;
            }
            std::cout << "Ataque a Magikoopa!" << '\n';
            dynamic_cast<Magikoopa*>(p1)->setHP(Fuerza);
        }
    }

    if(p1->getId()=="G"){
        cout<< dynamic_cast<Goomba*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<Goomba*>(p1)->getHP()<<endl;
        int def=rand() % 9 + 1;
        if(def==1 || def==2 || def==3 || def==4 || def==5 || def==6 || def==7){
            std::cout << "Goomba Evadio el ataque!" << '\n';
        }else{
            //Fuerza=Fuerza*0.5;
            int esp2=rand() % 3 + 1;
            if(esp1==esp2){
                std::cout << "ChainChop Poder especial + 20 ataque" << '\n';
                Fuerza=Fuerza+20;
            }
            std::cout << "Ataque a Goomba!" << '\n';
            dynamic_cast<Goomba*>(p1)->setHP(Fuerza);
        }
        

    }

    if(p1->getId()=="CH"){
        cout<< dynamic_cast<ChainChop*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<ChainChop*>(p1)->getHP()<<endl;
        int def=rand() % 9 + 1;
        if(def==1 || def==2 ){
            std::cout << "ChainChop Evadio el ataque!" << '\n';
        }else{
            //Fuerza=Fuerza*0.5;
            int esp2=rand() % 3 + 1;
            if(esp1==esp2){
                std::cout << "ChainChop Poder especial + 20 ataque" << '\n';
                Fuerza=Fuerza+20;
            }
            Fuerza=Fuerza*0.6;
            std::cout << "Ataque a ChainChop!" << '\n';
            dynamic_cast<ChainChop*>(p1)->setHP(Fuerza);
        }
        
    }
    
    if(p1->getId()=="B"){
        cout<< dynamic_cast<Boo*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<Boo*>(p1)->getHP()<<endl;
        int def=rand() % 9 + 1;
        if(def==1 || def==2 || def==3 || def==4){
            std::cout << "Boo Evadio el ataque!" << '\n';
        }else{
            //Fuerza=Fuerza*0.5;
            int esp2=rand() % 3 + 1;
            if(esp1==esp2){
                std::cout << "ChainChop Poder especial + 20 ataque" << '\n';
                Fuerza=Fuerza+20;
            }
            Fuerza=Fuerza*0.2;
            std::cout << "Ataque a Boo!" << '\n';
            dynamic_cast<Boo*>(p1)->setHP(Fuerza);
        }
        
        

    }

    if(p1->getId()=="P"){
        cout<< dynamic_cast<Paratroopa*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<Paratroopa*>(p1)->getHP()<<endl;
        int def=rand() % 9 + 1;
        if(def==1){
            std::cout << "Paratroopa Evadio el ataque!" << '\n';
        }else{
            //Fuerza=Fuerza*0.5;
            int esp2=rand() % 3 + 1;
            if(esp1==esp2){
                std::cout << "ChainChop Poder especial + 20 ataque" << '\n';
                Fuerza=Fuerza+20;
            }
            Fuerza=Fuerza*0.4;
            std::cout << "Ataque a Paratroopa!" << '\n';
            dynamic_cast<Paratroopa*>(p1)->setHP(Fuerza);
        }
        
    }
  
}

