#include "HammerBro.h"
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include "Goomba.h"
#include "ChainChop.h"
#include "Boo.h"
#include <fstream>
#include "Paratroopa.h"
#include "Magikoopa.h"


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
    HP=HP-pHP;
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

//void HammerBro::pelea(Minion*){}

void HammerBro::pelea(Minion* p1){
    int esp1=rand() % 3 + 1;
     fstream file;
    file.open("MaquinaTiempo.txt", std::fstream::in | std::fstream::out | std::fstream::app);

    if(p1->getId()=="H"){
        file<< dynamic_cast<HammerBro*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<HammerBro*>(p1)->getHP()<<'\n';
        cout<< dynamic_cast<HammerBro*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<HammerBro*>(p1)->getHP()<<endl;
        int def=rand() % 9 + 1;
        if(def==1 || def==2 || def==3){
            file << "HammerBro Evadio el ataque!" << '\n';
            std::cout << "HammerBro Evadio el ataque!" << '\n';
        }else{
            //Fuerza=Fuerza*0.5;
            int esp2=rand() % 3 + 1;
            if(esp1==esp2){
                file << "HammerBro Poder especial 15% de eliminar oponente" << '\n';
                std::cout << "HammerBro Poder especial 15% de eliminar oponente" << '\n';
                int ko=rand() % 9 + 1;
                if(ko==1 || ko==2){
                    file << "HammerBro Elimino su oponente!" << '\n';
                    std::cout << "HammerBro Elimino su oponente!" << '\n';
                    Fuerza=Fuerza*50;
                }//KO
            }//if poder especial
                Fuerza=Fuerza*0.2;
            
            
            std::cout << "Ataque a HammerBro!" << '\n';
            file << "Ataque a HammerBro!" << '\n';
            dynamic_cast<HammerBro*>(p1)->setHP(Fuerza);
        }//fin else

    }//fin if


    if(p1->getId()=="MK"){
        file<< dynamic_cast<Magikoopa*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<Magikoopa*>(p1)->getHP()<<'\n';
        cout<< dynamic_cast<Magikoopa*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<Magikoopa*>(p1)->getHP()<<endl;
        int def=rand() % 9 + 1;
        if(def==1 || def==2 || def==3 || def==4 || def==5 || def==6){
            std::cout << "Magikoopa Evadio el ataque!" << '\n';
             file << "Magikoopa Evadio el ataque!" << '\n';
        }else{
            //Fuerza=Fuerza*0.5;
            int esp2=rand() % 3 + 1;
            if(esp1==esp2){
                std::cout << "HammerBro Poder especial 15% de eliminar oponente" << '\n';
                file << "HammerBro Poder especial 15% de eliminar oponente" << '\n';
                int ko=rand() % 9 + 1;
                if(ko==1 || ko==2){
                    std::cout << "HammerBro Elimino su oponente!" << '\n';
                    file << "HammerBro Elimino su oponente!" << '\n';
                    Fuerza=Fuerza*50;
                }
            }
            std::cout << "Ataque a Magikoopa!" << '\n';
            file << "Ataque a Magikoopa!" << '\n';
            dynamic_cast<Magikoopa*>(p1)->setHP(Fuerza);
        }
    }

    if(p1->getId()=="G"){
         file<< dynamic_cast<Goomba*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<Goomba*>(p1)->getHP()<<'\n';
            cout<< dynamic_cast<Goomba*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<Goomba*>(p1)->getHP()<<endl;
        int def=rand() % 9 + 1;
        if(def==1 || def==2 || def==3 || def==4 || def==5 || def==6 || def==7){
            std::cout << "Goomba Evadio el ataque!" << '\n';
             file<< "Goomba Evadio el ataque!" << '\n';
        }else{
            Fuerza=Fuerza*0.5;
            int esp2=rand() % 3 + 1;
             if(esp1==esp2){
                std::cout << "HammerBro Poder especial 15% de eliminar oponente" << '\n';
                file<< "HammerBro Poder especial 15% de eliminar oponente" << '\n';
                int ko=rand() % 9 + 1;
                if(ko==1 || ko==2){
                    std::cout << "HammerBro Elimino su oponente!" << '\n';
                    file << "HammerBro Elimino su oponente!" << '\n';
                    Fuerza=Fuerza*50;
                }
            }
            std::cout << "Ataque a Goomba!" << '\n';
            file << "Ataque a Goomba!" << '\n';
            dynamic_cast<Goomba*>(p1)->setHP(Fuerza);
        }
        

    }

    if(p1->getId()=="CH"){
        cout<< dynamic_cast<ChainChop*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<ChainChop*>(p1)->getHP()<<endl;
        file<< dynamic_cast<ChainChop*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<ChainChop*>(p1)->getHP()<<'\n';
        int def=rand() % 9 + 1;
        if(def==1 || def==2 ){
            std::cout << "ChainChop Evadio el ataque!" << '\n';
            file << "ChainChop Evadio el ataque!" << '\n';
        }else{
            Fuerza=Fuerza*0.5;
            int esp2=rand() % 3 + 1;
            if(esp1==esp2){
                std::cout << "HammerBro Poder especial 15% de eliminar oponente" << '\n';
                file << "HammerBro Poder especial 15% de eliminar oponente" << '\n';
                int ko=rand() % 9 + 1;
                if(ko==1 || ko==2){
                    std::cout << "HammerBro Elimino su oponente!" << '\n';
                    file << "HammerBro Elimino su oponente!" << '\n';
                    Fuerza=Fuerza*50;
                }
            }
                Fuerza=Fuerza*0.6;
            
            std::cout << "Ataque a ChainChop!" << '\n';
            file << "Ataque a ChainChop!" << '\n';
            dynamic_cast<ChainChop*>(p1)->setHP(Fuerza);
        }
        
    }
    
    if(p1->getId()=="B"){
        file<< dynamic_cast<Boo*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<Boo*>(p1)->getHP()<<'\n';
        cout<< dynamic_cast<Boo*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<Boo*>(p1)->getHP()<<endl;

        int def=rand() % 9 + 1;
        if(def==1 || def==2 || def==3 || def==4){
            std::cout << "Boo Evadio el ataque!" << '\n';
            file << "Boo Evadio el ataque!" << '\n';
        }else{
            //Fuerza=Fuerza*0.5;
            int esp2=rand() % 3 + 1;
            if(esp1==esp2){
                std::cout << "HammerBro Poder especial 15% de eliminar oponente" << '\n';
               file << "HammerBro Poder especial 15% de eliminar oponente" << '\n';
                int ko=rand() % 9 + 1;
                if(ko==1 || ko==2){
                    std::cout << "HammerBro Elimino su oponente!" << '\n';
                    file << "HammerBro Elimino su oponente!" << '\n';
                    Fuerza=Fuerza*50;
                }
            }
                Fuerza=Fuerza*0.2;
            
            std::cout << "Ataque a Boo" << '\n';
            file << "Ataque a Boo" << '\n';
            dynamic_cast<Boo*>(p1)->setHP(Fuerza);
        }
        
        

    }

    if(p1->getId()=="P"){
        file<< dynamic_cast<Paratroopa*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<Paratroopa*>(p1)->getHP()<<"\n";
            cout<< dynamic_cast<Paratroopa*>(p1)->getNombre() <<" HP:  "<<dynamic_cast<Paratroopa*>(p1)->getHP()<<endl;
        int def=rand() % 9 + 1;
        if(def==1){
            std::cout << "Paratroopa Evadio el ataque!" << '\n';
            file << "Paratroopa Evadio el ataque!" << '\n';
        }else{
            //Fuerza=Fuerza*0.5;
            int esp2=rand() % 3 + 1;
            if(esp1==esp2){
                std::cout << "HammerBro Poder especial 15% de eliminar oponente" << '\n';
                file << "HammerBro Poder especial 15% de eliminar oponente" << '\n';
                int ko=rand() % 9 + 1;
                if(ko==1 || ko==2){
                    std::cout << "HammerBro Elimino su oponente!" << '\n';
                    file << "HammerBro Elimino su oponente!" << '\n';
                    Fuerza=Fuerza*50;
                }
            }
                Fuerza=Fuerza*0.4;
            
            std::cout << "Ataque a Paratroopa!" << '\n';
            file << "Ataque a Paratroopa!" << '\n';
            dynamic_cast<Paratroopa*>(p1)->setHP(Fuerza);
        }
        
    }
    file.close();
}