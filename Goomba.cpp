#include "Goomba.h"
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include "ChainChop.h"
#include "Boo.h"
#include "Paratroopa.h"
#include "HammerBro.h"


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
   HP=HP-pHP;
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

void Goomba::pelea(Minion* p1){
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
                std::cout << "Goomba Poder especial + 10 ataque" << '\n';
                Fuerza=Fuerza+10;
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
                std::cout << "Goomba Poder especial + 10 ataque" << '\n';
                Fuerza=Fuerza+10;
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
                std::cout << "Goomba Poder especial + 10 ataque" << '\n';
                Fuerza=Fuerza+10;
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
                std::cout << "Goomba Poder especial + 10 ataque" << '\n';
                Fuerza=Fuerza+10;
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
                std::cout << "Goomba Poder especial + 10 ataque" << '\n';
                Fuerza=Fuerza+10;
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
                std::cout << "Goomba Poder especial + 10 ataque" << '\n';
                Fuerza=Fuerza+10;
            }
            Fuerza=Fuerza*0.4;
            std::cout << "Ataque a Paratroopa !" << '\n';
            dynamic_cast<Paratroopa*>(p1)->setHP(Fuerza);
        }
        
    }

}
