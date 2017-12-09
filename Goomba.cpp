#include "Goomba.h"
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include "ChainChop.h"
#include "Boo.h"
#include "Paratroopa.h"
#include <fstream>
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
     fstream file;
    file.open("MaquinaTiempo.txt", std::fstream::in | std::fstream::out | std::fstream::app);
    int esp1=rand() % 3 + 1;

    if(p1->getId()=="H"){
        file<< dynamic_cast<HammerBro*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<HammerBro*>(p1)->getHP()<<'\n';
        cout<< dynamic_cast<HammerBro*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<HammerBro*>(p1)->getHP()<<endl;
        int def=rand() % 9 + 1;
        if(def==1 || def==2 || def==3){
            file << "HammerBro Evadio el ataque!" << '\n';
            std::cout << "HammerBro Evadio el ataque!" << '\n';
        }else{
            Fuerza=Fuerza*0.5;
            int esp2=rand() % 3 + 1;
            if(esp1==esp2){
                file << "Goomba Poder especial + 10 ataque" << '\n';
                std::cout << "Goomba Poder especial + 10 ataque" << '\n';
                Fuerza=Fuerza+10;
            }
            Fuerza=Fuerza*0.2;
            file << "Ataque a HammerBro!" << '\n';
            std::cout << "Ataque a HammerBro!" << '\n';
            dynamic_cast<HammerBro*>(p1)->setHP(Fuerza);
        }

    }


    if(p1->getId()=="MK"){
        file<< dynamic_cast<Magikoopa*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<Magikoopa*>(p1)->getHP()<<'\n';
            cout<< dynamic_cast<Magikoopa*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<Magikoopa*>(p1)->getHP()<<endl;
        int def=rand() % 9 + 1;
        if(def==1 || def==2 || def==3 || def==4 || def==5 || def==6){
             file << "Magikoopa Evadio el ataque!" << '\n';
            std::cout << "Magikoopa Evadio el ataque!" << '\n';
        }else{
            Fuerza=Fuerza*0.5;
            int esp2=rand() % 3 + 1;
            if(esp1==esp2){
                file << "Goomba Poder especial + 10 ataque" << '\n';
                std::cout << "Goomba Poder especial + 10 ataque" << '\n';
                Fuerza=Fuerza+10;
            }
            file << "Ataque a Magikoopa!" << '\n';
            std::cout << "Ataque a Magikoopa!" << '\n';
            dynamic_cast<Magikoopa*>(p1)->setHP(Fuerza);
        }
    }

    if(p1->getId()=="G"){
        file<< dynamic_cast<Goomba*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<Goomba*>(p1)->getHP()<<'\n';
            cout<< dynamic_cast<Goomba*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<Goomba*>(p1)->getHP()<<endl;

        int def=rand() % 9 + 1;
        if(def==1 || def==2 || def==3 || def==4 || def==5 || def==6 || def==7){
            file << "Goomba Evadio el ataque!" << '\n';
            std::cout << "Goomba Evadio el ataque!" << '\n';
        }else{
            //Fuerza=Fuerza*0.5;
            int esp2=rand() % 3 + 1;
            if(esp1==esp2){
                file << "Goomba Poder especial + 10 ataque" << '\n';
                std::cout << "Goomba Poder especial + 10 ataque" << '\n';
                Fuerza=Fuerza+10;
            }
            file << "Ataque a Goomba!" << '\n';
            std::cout << "Ataque a Goomba!" << '\n';
            dynamic_cast<Goomba*>(p1)->setHP(Fuerza);
        }
        

    }

    if(p1->getId()=="CH"){
            cout<< dynamic_cast<ChainChop*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<ChainChop*>(p1)->getHP()<<endl;
        file<< dynamic_cast<ChainChop*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<ChainChop*>(p1)->getHP()<<'\n';
        int def=rand() % 9 + 1;
        if(def==1 || def==2 ){
            file << "ChainChop Evadio el ataque!" << '\n';
            std::cout << "ChainChop Evadio el ataque!" << '\n';
        }else{
            //Fuerza=Fuerza*0.5;
            int esp2=rand() % 3 + 1;
            if(esp1==esp2){
                file << "Goomba Poder especial + 10 ataque" << '\n';
                std::cout << "Goomba Poder especial + 10 ataque" << '\n';
                Fuerza=Fuerza+10;
            }
            Fuerza=Fuerza*0.6;
            file << "Ataque a ChainChop!" << '\n';
            std::cout << "Ataque a ChainChop!" << '\n';
            dynamic_cast<ChainChop*>(p1)->setHP(Fuerza);
        }
        
    }
    
    if(p1->getId()=="B"){
        file<< dynamic_cast<Boo*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<Boo*>(p1)->getHP()<<'\n';
            cout<< dynamic_cast<Boo*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<Boo*>(p1)->getHP()<<endl;

        int def=rand() % 9 + 1;
        if(def==1 || def==2 || def==3 || def==4){
            file << "Boo Evadio el ataque!" << '\n';
            std::cout << "Boo Evadio el ataque!" << '\n';
        }else{
            //Fuerza=Fuerza*0.5;
            int esp2=rand() % 3 + 1;
            if(esp1==esp2){
                file << "Goomba Poder especial + 10 ataque" << '\n';
                std::cout << "Goomba Poder especial + 10 ataque" << '\n';
                Fuerza=Fuerza+10;
            }
            Fuerza=Fuerza*0.2;
            file << "Ataque a Boo!" << '\n';
            std::cout << "Ataque a Boo!" << '\n';
            dynamic_cast<Boo*>(p1)->setHP(Fuerza);
        }
        
        

    }

    if(p1->getId()=="P"){
        file<< dynamic_cast<Paratroopa*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<Paratroopa*>(p1)->getHP()<<"\n";
            cout<< dynamic_cast<Paratroopa*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<Paratroopa*>(p1)->getHP()<<endl;

        int def=rand() % 9 + 1;
        if(def==1){
            file << "Paratroopa Evadio el ataque!" << '\n';
            std::cout << "Paratroopa Evadio el ataque!" << '\n';
        }else{
            //Fuerza=Fuerza*0.5;
            int esp2=rand() % 3 + 1;
            if(esp1==esp2){
                file << "Goomba Poder especial + 10 ataque" << '\n';
                std::cout << "Goomba Poder especial + 10 ataque" << '\n';
                Fuerza=Fuerza+10;
            }
            Fuerza=Fuerza*0.4;
            file << "Ataque a Paratroopa !" << '\n';
            std::cout << "Ataque a Paratroopa !" << '\n';
            dynamic_cast<Paratroopa*>(p1)->setHP(Fuerza);
        }
        
    }
    file.close();
}
