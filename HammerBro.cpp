#include "HammerBro.h"
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include "Goomba.h"
#include "ChainChop.h"
#include "Boo.h"
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

void HammerBro::pelea(Minion*){}

// void HammerBro::pelea(Minion* p1){
//     int esp1=rand() % 3 + 1;

//     if(p1->getId()=="H"){
//         int def=rand() % 9 + 1;
//         if(def==1 || def==2 || def==3){
//             std::cout << "Evadio el ataque!" << '\n';
//         }else{
//             //Fuerza=Fuerza*0.5;
//             int esp2=rand() % 3 + 1;
//             if(esp1==esp2){
//                 std::cout << "Poder especial 15% de eliminar oponente" << '\n';
//                 int ko=rand() % 9 + 1;
//                 if(ko==1 || ko==2){
//                     std::cout << "Elimino su oponente!" << '\n';
//                     Fuerza=Fuerza*50;
//                 }
//             }
//                 Fuerza=Fuerza*0.2;
            
            
//             std::cout << "Atack!" << '\n';
//             dynamic_cast<HammerBro*>(p1)->setHP(Fuerza);
//         }

//     }


//     if(p1->getId()=="MK"){
//         int def=rand() % 9 + 1;
//         if(def==1 || def==2 || def==3 || def==4 || def==5 || def==6){
//             std::cout << "Evadio el ataque!" << '\n';
//         }else{
//             //Fuerza=Fuerza*0.5;
//             int esp2=rand() % 3 + 1;
//             if(esp1==esp2){
//                 std::cout << "Poder especial 15% de eliminar oponente" << '\n';
//                 int ko=rand() % 9 + 1;
//                 if(ko==1 || ko==2){
//                     std::cout << "Elimino su oponente!" << '\n';
//                     Fuerza=Fuerza*50;
//                 }
//             }
//             std::cout << "Atack!" << '\n';
//             dynamic_cast<Magikoopa*>(p1)->setHP(Fuerza);
//         }
//     }

//     if(p1->getId()=="G"){
//         int def=rand() % 9 + 1;
//         if(def==1 || def==2 || def==3 || def==4 || def==5 || def==6 || def==7){
//             std::cout << "Evadio el ataque!" << '\n';
//         }else{
//             Fuerza=Fuerza*0.5;
//             int esp2=rand() % 3 + 1;
//              if(esp1==esp2){
//                 std::cout << "Poder especial 15% de eliminar oponente" << '\n';
//                 int ko=rand() % 9 + 1;
//                 if(ko==1 || ko==2){
//                     std::cout << "Elimino su oponente!" << '\n';
//                     Fuerza=Fuerza*50;
//                 }
//             }
//             std::cout << "Atack!" << '\n';
//             dynamic_cast<Goomba*>(p1)->setHP(Fuerza);
//         }
        

//     }

//     if(p1->getId()=="CH"){
//         int def=rand() % 9 + 1;
//         if(def==1 || def==2 ){
//             std::cout << "Evadio el ataque!" << '\n';
//         }else{
//             Fuerza=Fuerza*0.5;
//             int esp2=rand() % 3 + 1;
//             if(esp1==esp2){
//                 std::cout << "Poder especial 15% de eliminar oponente" << '\n';
//                 int ko=rand() % 9 + 1;
//                 if(ko==1 || ko==2){
//                     std::cout << "Elimino su oponente!" << '\n';
//                     Fuerza=Fuerza*50;
//                 }
//             }
//                 Fuerza=Fuerza*0.6;
            
//             std::cout << "Atack!" << '\n';
//             dynamic_cast<ChainChop*>(p1)->setHP(Fuerza);
//         }
        
//     }
    
//     if(p1->getId()=="B"){
//         int def=rand() % 9 + 1;
//         if(def==1 || def==2 || def==3 || def==4){
//             std::cout << "Evadio el ataque!" << '\n';
//         }else{
//             //Fuerza=Fuerza*0.5;
//             int esp2=rand() % 3 + 1;
//             if(esp1==esp2){
//                 std::cout << "Poder especial 15% de eliminar oponente" << '\n';
//                 int ko=rand() % 9 + 1;
//                 if(ko==1 || ko==2){
//                     std::cout << "Elimino su oponente!" << '\n';
//                     Fuerza=Fuerza*50;
//                 }
//             }
//                 Fuerza=Fuerza*0.2;
            
//             std::cout << "Atack!" << '\n';
//             dynamic_cast<Boo*>(p1)->setHP(Fuerza);
//         }
        
        

//     }

//     if(p1->getId()=="P"){
//         int def=rand() % 9 + 1;
//         if(def==1){
//             std::cout << "Evadio el ataque!" << '\n';
//         }else{
//             //Fuerza=Fuerza*0.5;
//             int esp2=rand() % 3 + 1;
//             if(esp1==esp2){
//                 std::cout << "Poder especial 15% de eliminar oponente" << '\n';
//                 int ko=rand() % 9 + 1;
//                 if(ko==1 || ko==2){
//                     std::cout << "Elimino su oponente!" << '\n';
//                     Fuerza=Fuerza*50;
//                 }
//             }
//                 Fuerza=Fuerza*0.4;
            
//             std::cout << "Atack!" << '\n';
//             dynamic_cast<Paratroopa*>(p1)->setHP(Fuerza);
//         }
        
//     }

// }