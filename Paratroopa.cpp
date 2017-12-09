#include "Paratroopa.h"
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include "ChainChop.h"
#include "Boo.h"
#include "Goomba.h"
#include "HammerBro.h"

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
   HP=HP-pHP;
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

void Paratroopa::pelea(Minion* p1){
    int esp1=rand() % 3 + 1;

    if(p1->getId()=="H"){
         cout<< dynamic_cast<HammerBro*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<HammerBro*>(p1)->getHP()<<endl;

        int def=rand() % 9 + 1;
        if(def==1 || def==2 || def==3){
            std::cout << "HammerBro Evadio el ataque!" << '\n';
        }else{
            //Fuerza=Fuerza*0.5;
            int esp2=rand() % 3 + 1;
            if(esp1==esp2){
                std::cout << "Paratroopa Poder especial 80% Defensa" << '\n';
                Fuerza=Fuerza*0.8;
            }else{
                Fuerza=Fuerza*0.2;
            }
            
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
            //Fuerza=Fuerza*0.5;
            int esp2=rand() % 3 + 1;
            if(esp1==esp2){
                std::cout << "Paratroopa Poder especial 80% Defensa" << '\n';
                Fuerza=Fuerza*0.8;
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
            Fuerza=Fuerza*0.5;
            int esp2=rand() % 3 + 1;
            if(esp1==esp2){
                std::cout << "Paratroopa Poder especial 80% Defensa" << '\n';
                Fuerza=Fuerza*0.8;
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
            Fuerza=Fuerza*0.5;
            int esp2=rand() % 3 + 1;
            if(esp1==esp2){
                std::cout << "Paratroopa Poder especial 80% Defensa" << '\n';
                Fuerza=Fuerza*0.8;
            }else{
                Fuerza=Fuerza*0.6;
            }
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
                std::cout << "Paratroopa Poder especial 80% Defensa" << '\n';
                Fuerza=Fuerza*0.8;
            }else{
                Fuerza=Fuerza*0.2;
            }
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
                std::cout << "Paratroopa Poder especial 80% Defensa" << '\n';
                Fuerza=Fuerza*0.8;
            }else{
                Fuerza=Fuerza*0.2;
            }
            std::cout << "Ataque a Paratroopa!" << '\n';
            dynamic_cast<Paratroopa*>(p1)->setHP(Fuerza);
        }
        
    }
}
