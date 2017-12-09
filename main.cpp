#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>
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
#include <vector>


Minion*** Create();
void Delete(Minion***);
void Print(Minion***);

using namespace std;

int main(){
    try{
        char resp='s';
        vector <Minion*> minions;
        vector<Minion**> teams;
        Minion*** ARREGLO=Create();
        int cont=0;
        while(resp=='s'|| resp=='S'){
        MenuPrincipal:
        char principal;
        std::cout <<'\n';
        std::cout << "||||||BIENVENIDO A MARIO ODYSSEY|||||||| " << endl;
        std::cout << "➤ a)Como jugar?" << '\n';
        std::cout << "➤ b)Crear personaje" << '\n';
        std::cout << "➤ c)Crear equipo" << '\n';
        std::cout << "➤ d)A pelear!" << '\n';
        std::cout << "➤ e)Eliminar/Modificar" << '\n';
        std::cout << "➤ f)Salir" << '\n';
        cin >> principal;
        std::cout<< '\n';
        switch (principal){
        case  'a':{
            std::cout << "\nSe debe crear Minion para poder crear equipos que contengan 7 Minions de Bowser.\n" 
            <<"Cada equipo debera tener 7 integrantes, que contengan 7 diferentes Minions. El primer Minion del equipo,\n"
            <<"es conocido como el capitán. Los Minions tienen atributos similares pero diferentes clases. Todos ellos\n"
            <<"se les conoce el Nombre, la Cantidad de batallas ganadas y su experiencia inicia en 0. Cada Minion tiene\n"
            <<"su Tipo de pelea y por cada tipo hay varios personajes los cuales tienen atributos y poderes diferentes." << '\n';

        }
            break;
            //fin case 'a'
        case  'b':{
            MenuCrear:
            char crear;
            std::cout << "▶︎ a)Crear un tipo Melee" << '\n';
            std::cout << "▶︎ b)Crear un tipo Flying" << '\n';
            std::cout << "▶︎ c)Crear un tipo Range" << '\n';
            cin >> crear;
            std::cout<< '\n';

            switch (crear){
            case  'a':{
                MenuCrearM:
                char crearM;
                std::cout << "\n▶︎▶︎▶︎▶︎▶︎Creacion de un Melee◀︎◀︎◀︎◀︎◀︎" << '\n';
                std::cout << "▶︎ a)Crear un Goomba" << '\n';
                std::cout << "▶︎ b)Crear un ChainChop" << '\n';
                cin >> crearM;
                std::cout<< '\n';
                switch (crearM){
                    case  'a':{
                        std::cout << "☗☖☗GOMBA☗☖☗" << '\n';
                        std::cout << "El Gomba de forma predeterminada tiene:" << '\n';
                        std::cout << "Defensa: 0%" << '\n';
                        std::cout << "Velocidad: 65%" << '\n';
                        std::cout << "Fuerza: 10" << '\n';
                        std::cout << "El Gomba cuenta con un ataque especial que se activa una vez" << '\n';
                        std::cout << "durante la pelea, se pone un sombrero con pulla y este le aumenta " << '\n';
                        std::cout << "+10 a la fuerza por dos turnos." << '\n';

                        try{
                            string nombre;
                            string tamanoS;
                            double tamano;
                            string intimidarS;
                            int intimidar;
                            string HPs;
                            int HP;
                            std::cout << "\nIngrese nombre" << '\n';
                            cin >> nombre;
                            std::cout << "Ingrese tamano" << '\n';
                            cin >> tamanoS;
                            tamano=stod(tamanoS);
                            std::cout << "Ingrese HP (Debe estar en un rango de [20-40])" << '\n';
                            cin >> HPs;
                            HP=stoi(HPs);
                            while(HP<20 || HP>40){
                                std::cout << "Ingrese HP (Debe estar en un rango de [20-40])" << '\n';
                                cin >> HPs;
                                HP=stoi(HPs);
                            }
                            std::cout << "Ingrese su habilidad de intimidacion (Rango entre[1-100])" << '\n';
                            cin >> intimidarS;
                            intimidar=stoi(intimidarS);
                            while(intimidar<0 || intimidar>100){
                                std::cout << "Ingrese su habilidad de intimidacion (Rango entre[1-100])" << '\n';
                                cin >> intimidarS;
                                intimidar=stoi(intimidarS);
                            }
                            minions.push_back(new Goomba(nombre,intimidar,tamano,HP));
                            std::cout << "✔︎ GOMBA creado con exito!" << '\n';
                        }
                        catch (const std::exception&){
                            std::cout << "✖︎ UPS! algo salio mal, Ingreso un valor insesperado" << '\n';
                            goto MenuCrearM;
                        }
                    }
                        break;
                        //fin case 'a'
                    case  'b':{
                        std::cout << "☗☖☗CHAINCHOP☗☖☗" << '\n';
                        std::cout << "El Chainchop de forma predeterminada tiene:" << '\n';
                        std::cout << "Defensa: 60%" << '\n';
                        std::cout << "Velocidad: 20%" << '\n';
                        std::cout << "Fuerza: 15" << '\n';
                        std::cout << "El Chainchop cuenta con un ataque especial que se activa una vez" << '\n';
                        std::cout << "durante la pelea, pega un golpe que le aumenta +20 a su fuerza y " << '\n';
                        std::cout << "no ataca durante los siguientes 2 turnos." << '\n';

                        try{
                            string nombre;
                            string HPs;
                            string intimidarS;
                            int intimidar;
                            int HP;
                            string color;
                            std::cout << "\nIngrese nombre" << '\n';
                            cin >> nombre;
                            std::cout << "Ingrese color de su cuerpo" << '\n';
                            cin >> color;
                            std::cout << "Ingrese HP (Debe estar en un rango de [10-30])" << '\n';
                            cin >> HPs;
                            HP=stoi(HPs);
                            while(HP<10 || HP>30){
                                std::cout << "Ingrese HP (Debe estar en un rango de [10-30])" << '\n';
                                cin >> HPs;
                                HP=stoi(HPs);
                            }
                            std::cout << "Ingrese su habilidad de intimidacion (Rango entre[1-100])" << '\n';
                            cin >> intimidarS;
                            intimidar=stoi(intimidarS);
                            while(intimidar<0 || intimidar>100){
                                std::cout << "Ingrese su habilidad de intimidacion (Rango entre[1-100])" << '\n';
                                cin >> intimidarS;
                                intimidar=stoi(intimidarS);
                            }
                            minions.push_back(new ChainChop(nombre,intimidar,color,HP));
                            std::cout << "✔︎ CHAINCHOP creado con exito!" << '\n';                            
                        }
                        catch (const std::exception&){
                            std::cout << "✖︎ UPS! algo salio mal, Ingreso un valor insesperado" << '\n';
                            goto MenuCrearM;
                        }
                    }
                        break;
                        //fin case 'b'
                    default:
                    std::cout << "✖︎ La accion no esta contemplada dentro del menu, intente de nuevo" << '\n';
                    goto MenuCrearM;
                        break;
                }// fin switch melee

                    }
                break;
                //fin case 'a'
            case  'b':{
                MenuCrearF:
                char crearF;
                std::cout << "\n▶︎▶︎▶︎▶︎▶︎Creacion de un Flying◀︎◀︎◀︎◀︎◀︎" << '\n';
                std::cout << "▶︎ a)Crear un Boo" << '\n';
                std::cout << "▶︎ b)Crear un Paratroopa" << '\n';
                cin >> crearF;
                std::cout<< '\n';
                switch (crearF){
                    case  'a':{
                        std::cout << "☗☖☗BOO☗☖☗" << '\n';
                        std::cout << "El Boo de forma predeterminada tiene:" << '\n';
                        std::cout << "Defensa: 20%" << '\n';
                        std::cout << "Velocidad: 35%" << '\n';
                        std::cout << "Fuerza: 8" << '\n';
                        std::cout << "El Boo cuenta con un ataque especial que se activa una vez" << '\n';
                        std::cout << "durante la pelea, se hace invisible y su velocidad aumenta " << '\n';
                        std::cout << "a 90% durante los siguientes 3 turnos." << '\n';

                        try{
                            string nombre;
                            string HPs;
                            int HP;
                            string volarS;
                            int volar;
                            string color;
                            std::cout << "\nIngrese nombre" << '\n';
                            cin >> nombre;
                            std::cout << "Ingrese color del boo" << '\n';
                            cin >> color;
                            std::cout << "Ingrese HP (Debe estar en un rango de [20-40])" << '\n';
                            cin >> HPs;
                            HP=stoi(HPs);
                            while(HP<20 || HP>40){
                                std::cout << "Ingrese HP (Debe estar en un rango de [20-40])" << '\n';
                                cin >> HPs;
                                HP=stoi(HPs);
                            }
                            std::cout << "Ingrese su habilidad de vuelo (Rango entre[1-100])" << '\n';
                            cin >> volarS;
                            volar=stoi(volarS);
                            while(volar<0 || volar>100){
                                std::cout << "Ingrese su habilidad de vuelo (Rango entre[1-100])" << '\n';
                                cin >> volarS;
                                volar=stoi(volarS);
                            }
                            minions.push_back(new Boo(nombre,volar,color,HP));
                            std::cout << "✔︎ BOO creado con exito!" << '\n';              

                            
                        }
                        catch (const std::exception&){
                            std::cout << "✖︎ UPS! algo salio mal, Ingreso un valor insesperado" << '\n';
                            goto MenuCrearF;
                        }
                    }
                        break;
                        //fin case 'a'
                    case  'b':{
                        std::cout << "☗☖☗PARATROOPA☗☖☗" << '\n';
                        std::cout << "El Paratroopa de forma predeterminada tiene:" << '\n';
                        std::cout << "Defensa: 40%" << '\n';
                        std::cout << "Velocidad: 10%" << '\n';
                        std::cout << "Fuerza: 9" << '\n';
                        std::cout << "El Paratroopa cuenta con un ataque especial que se activa una vez" << '\n';
                        std::cout << "durante la pelea, se esconde en su caparazon y su defensa aumenta " << '\n';
                        std::cout << "a 80% durante los siguientes 4 turnos." << '\n';

                        try{
                            string nombre;
                            string HPs;
                            int HP;
                            string volarS;
                            int volar;
                            string color;
                            std::cout << "\nIngrese nombre" << '\n';
                            cin >> nombre;
                            std::cout << "Ingrese color del caparazon" << '\n';
                            cin >> color;
                            std::cout << "Ingrese HP (Debe estar en un rango de [40-60])" << '\n';
                            cin >> HPs;
                            HP=stoi(HPs);
                            while(HP<40 || HP>60){
                                std::cout << "Ingrese HP (Debe estar en un rango de [40-60])" << '\n';
                                cin >> HPs;
                                HP=stoi(HPs);
                            }
                            std::cout << "Ingrese su habilidad de vuelo (Rango entre[1-100])" << '\n';
                            cin >> volarS;
                            volar=stoi(volarS);
                            while(volar<0 || volar>100){
                                std::cout << "Ingrese su habilidad de vuelo (Rango entre[1-100])" << '\n';
                                cin >> volarS;
                                volar=stoi(volarS);
                            }
                            minions.push_back(new Paratroopa(nombre,volar,color,HP));
                            std::cout << "✔︎ PARATROOPA creado con exito!" << '\n';      

                            
                        }
                        catch (const std::exception&){
                            std::cout << "✖︎ UPS! algo salio mal, Ingreso un valor insesperado" << '\n';
                            goto MenuCrearF;
                        }
                    }
                        break;
                        //fin case 'b'
                    default:
                    std::cout << "✖︎ La accion no esta contemplada dentro del menu, intente de nuevo" << '\n';
                    goto MenuCrearF;
                        break;
                }// fin switch Flying

            }
                break;
                //fin case b
            case  'c':{
                MenuCrearR:
                char crearR;
                std::cout << "\n▶︎▶︎▶︎▶︎▶︎Creacion de un Range◀︎◀︎◀︎◀︎◀︎" << '\n';
                std::cout << "▶︎ a)Crear un HammerBro" << '\n';
                std::cout << "▶︎ b)Crear un Magikoopa" << '\n';
                cin >> crearR;
                std::cout<< '\n';
                switch (crearR){
                    case  'a':{
                        std::cout << "☗☖☗HAMMERBRO☗☖☗" << '\n';
                        std::cout << "El Hammerbro de forma predeterminada tiene:" << '\n';
                        std::cout << "Defensa: 15%" << '\n';
                        std::cout << "Velocidad: 30%" << '\n';
                        std::cout << "Fuerza: 6" << '\n';
                        std::cout << "El Hammerbro cuenta con un ataque especial que se activa una vez" << '\n';
                        std::cout << "durante la pelea, tira un martillos que tiene un 15% de posibilidades " << '\n';
                        std::cout << "de derrotar a su enemigo." << '\n';

                        try{
                            string nombre;
                            string HPs;
                            string tamanoS;
                            double tamano;
                            int HP;
                            string rangoS;
                            int rango;
                            string color;
                            std::cout << "\nIngrese nombre" << '\n';
                            cin >> nombre;
                            std::cout << "Ingrese tamano de martillos" << '\n';
                            cin >> tamanoS;
                            tamano=stod(tamanoS);
                            std::cout << "Ingrese HP (Debe estar en un rango de [60-80])" << '\n';
                            cin >> HPs;
                            HP=stoi(HPs);
                            while(HP<60 || HP>80){
                                std::cout << "Ingrese HP (Debe estar en un rango de [60-80])" << '\n';
                                cin >> HPs;
                                HP=stoi(HPs);
                            }
                            std::cout << "Ingrese su rango de ataque (Rango entre[1-100])" << '\n';
                            cin >> rangoS;
                            rango=stoi(rangoS);
                            while(rango<0 || rango>100){
                                std::cout << "Ingrese su rango de ataque (Rango entre[1-100])" << '\n';
                                cin >> rangoS;
                                rango=stoi(rangoS);
                            }
                            minions.push_back(new HammerBro(nombre,rango,tamano,HP));
                            std::cout << "✔︎ HAMMERBRO creado con exito!" << '\n';      

                            
                        }
                        catch (const std::exception&){
                            std::cout << "✖︎ UPS! algo salio mal, Ingreso un valor insesperado" << '\n';
                            goto MenuCrearR;
                        }

                    }
                        break;
                        //fin case 'a'
                    case  'b':{
                        std::cout << "☗☖☗MAGIKOOPA☗☖☗" << '\n';
                        std::cout << "El Magikoopa de forma predeterminada tiene:" << '\n';
                        std::cout << "Defensa: 0%" << '\n';
                        std::cout << "Velocidad: 60%" << '\n';
                        std::cout << "Fuerza: 7" << '\n';
                        std::cout << "El Magikoopa cuenta con un ataque especial que se activa una vez" << '\n';
                        std::cout << "durante la pelea, este recupera 25 pts de su vida o se le suman  " << '\n';
                        std::cout << "a su vida actual." << '\n';

                        try{
                            string nombre;
                            string HPs;
                            int HP;
                            string color;
                            string rangoS;
                            int rango;
                            std::cout << "\nIngrese nombre" << '\n';
                            cin >> nombre;
                            std::cout << "Ingrese color del traje" << '\n';
                            cin >> color;
                            std::cout << "Ingrese HP (Debe estar en un rango de [50-70])" << '\n';
                            cin >> HPs;
                            HP=stoi(HPs);
                            while(HP<50 || HP>70){
                                std::cout << "Ingrese HP (Debe estar en un rango de [50-70])" << '\n';
                                cin >> HPs;
                                HP=stoi(HPs);
                            }
                            std::cout << "Ingrese su rango de ataque (Rango entre[1-100])" << '\n';
                            cin >> rangoS;
                            rango=stoi(rangoS);
                            while(rango<0 || rango>100){
                                std::cout << "Ingrese su rango de ataque (Rango entre[1-100])" << '\n';
                                cin >> rangoS;
                                rango=stoi(rangoS);
                            }
                            minions.push_back(new Magikoopa(nombre,rango,color,HP));
                            std::cout << "✔︎ MAGIKOOPA creado con exito!" << '\n'; 

                            
                        }
                        catch (const std::exception&){
                            std::cout << "✖︎ UPS! algo salio mal, Ingreso un valor insesperado" << '\n';
                            goto MenuCrearR;
                        }
                    }
                        break;
                        //fin case 'b'
                    default:
                    std::cout << "✖︎ La accion no esta contemplada dentro del menu, intente de nuevo" << '\n';
                    goto MenuCrearR;
                        break;
                }// fin switch Range

            }
                break;
                //fin case c
            default:
            std::cout << "✖︎ La accion no esta contemplada dentro del menu, intente de nuevo" << '\n';
            goto MenuCrear;
                break;
            }//fin switch crear tipo

        }
            break;
            //fin case 'b'
        case  'c':{//crear equipo
            if(minions.size()==0){
                std::cout << "\n✖︎ Actualmente no hemos encontrado Minions disponibles, Porfavor agregue Minions al programa" << '\n';
                goto MenuPrincipal;
            }else{
                string nombre;
                int pos;
                std::cout << "Ingrese el nombre de su equipo: " << '\n';
                cin >> nombre;

                

                for (int j = 0; j < 7; j++){
                    std::cout << "\nA continuacion se le muestran los Minions disponibles, los cuales puede reclutar" << '\n';
                    std::cout << "7 de ellos para su equipo." << '\n';
                    for(int i = 0; i < minions.size(); i++){
                        if(dynamic_cast<Goomba*>(minions[i])){
                            std::cout <<"❍ "<<i<<"- "<<minions[i]->getNombre() << " TIPO: Goomba" <<'\n';
                        }
                        if(dynamic_cast<ChainChop*>(minions[i])){
                            std::cout <<"❍ "<<i<<"- "<<minions[i]->getNombre() << " TIPO: ChainChop"<< '\n';
                        }
                        if(dynamic_cast<Boo*>(minions[i])){
                            std::cout <<"❍ "<<i<<"- "<<minions[i]->getNombre() << " TIPO: Boo"<< '\n';
                        }
                        if(dynamic_cast<Magikoopa*>(minions[i])){
                            std::cout <<"❍ "<<i<<"- "<<minions[i]->getNombre() << " TIPO: Magikoopa" <<'\n';
                        }
                        if(dynamic_cast<HammerBro*>(minions[i])){
                            std::cout <<"❍ "<<i<<"- "<<minions[i]->getNombre() << " TIPO: HammerBro" <<'\n';
                        }
                        if(dynamic_cast<Paratroopa*>(minions[i])){
                            std::cout <<"❍ "<<i<<"- "<<minions[i]->getNombre() << " TIPO: Paratroopa"<< '\n';
                        }

                    }

                    std::cout << "Ingrese el numero de posicion donde se encuentra el minion que" << '\n';
                    std::cout << "que desea agregar a su equipo" << '\n';
                    cin>> pos;

                    std::cout << "Agrego a " <<minions[pos]->getNombre()<<'\n';

                    ARREGLO[cont][j]=minions[pos];
                }

                //teams.push_back(equipo);
                std::cout << "✔︎ El equipo fue creado exitosamente!" << '\n';
                cont++;

            }
            
        }
            break;
            //fin case 'c'
        case  'd':{//simulacion
        //    for (int i = 0; i < teams.size(); i++){
        //        std::cout << teams[0][i]->getNombre() << '\n';
        //    }
        //Print(ARREGLO);
        }
            break;
            //fin case 'd'
        case  'e':{
            char elimination;
            std::cout << "\n✖︎ a) Eliminar Minion" << '\n';
            std::cout << "✖︎ b) Eliminar equipo" << '\n';
            std::cout << "✖︎ c) Modificar equipo" << '\n';
            cin >> elimination;
            switch (elimination){
            case  'a':{
                std::cout << "✖︎✖︎✖︎ ELIMINAR MINION ✖︎✖︎✖︎" << '\n';
                if(minions.size()==0){
                std::cout << "\n✖︎ Actualmente no hemos encontrado Minions disponibles, Porfavor agregue Minions al programa" << '\n';
                goto MenuPrincipal;
                }else{
                    //string nombre;
                    int pos;
                    //std::cout << "Ingrese el nombre de su equipo: " << '\n';
                    //cin >> nombre;

                    //Minion* equipo[7];

                    //for (int j = 0; j < 7; j++){
                        std::cout << "\nA continuacion se le muestran los Minions disponibles, los cuales puede Eliminar" << '\n';
                        //std::cout << "7 de ellos para su equipo." << '\n';
                        for(int i = 0; i < minions.size(); i++){
                            if(dynamic_cast<Goomba*>(minions[i])){
                                std::cout <<"❍ "<<i<<"- "<<minions[i]->getNombre() << " TIPO: Goomba" <<'\n';
                            }
                            if(dynamic_cast<ChainChop*>(minions[i])){
                                std::cout <<"❍ "<<i<<"- "<<minions[i]->getNombre() << " TIPO: ChainChop"<< '\n';
                            }
                            if(dynamic_cast<Boo*>(minions[i])){
                                std::cout <<"❍ "<<i<<"- "<<minions[i]->getNombre() << " TIPO: Boo"<< '\n';
                            }
                            if(dynamic_cast<Magikoopa*>(minions[i])){
                                std::cout <<"❍ "<<i<<"- "<<minions[i]->getNombre() << " TIPO: Magikoopa" <<'\n';
                            }
                            if(dynamic_cast<HammerBro*>(minions[i])){
                                std::cout <<"❍ "<<i<<"- "<<minions[i]->getNombre() << " TIPO: HammerBro" <<'\n';
                            }
                            if(dynamic_cast<Paratroopa*>(minions[i])){
                                std::cout <<"❍ "<<i<<"- "<<minions[i]->getNombre() << " TIPO: Paratroopa"<< '\n';
                            }

                        }

                        std::cout << "Ingrese el numero de posicion donde se encuentra el minion que" << '\n';
                        std::cout << "que desea ✖︎︎︎︎︎︎✖︎︎︎︎︎︎✖︎︎︎︎︎︎ELIMINAR✖︎︎︎︎︎︎✖︎︎︎︎︎︎✖︎︎︎︎︎︎ " << '\n';
                        cin>> pos;

                        //myvector.erase (myvector.begin()+5);
                        minions.erase(minions.begin()+pos);
                        std::cout << "✔︎ ELIMINO EXITOSAMENTE" <<'\n';


                        //equipo[j]=minions[pos];
                    //}

                    //teams.push_back(equipo);
                    //std::cout << "✔︎ El equipo fue creado exitosamente!" << '\n';

                }

            }
                break;
                //fin case 'a'
            case  'b':{

                std::cout << "✖︎✖︎✖︎ ELIMINAR EQUIPO ✖︎✖︎✖︎" << '\n';
                if(ARREGLO[0][0]==NULL){
                std::cout << "\n✖︎ Actualmente no hemos encontrado Equipos disponibles, Porfavor agregue Equipos al programa" << '\n';
                goto MenuPrincipal;
                }else{
                    //string nombre;
                    int pos;
                    //std::cout << "Ingrese el nombre de su equipo: " << '\n';
                    //cin >> nombre;

                    //Minion* equipo[7];

                    //for (int j = 0; j < 7; j++){
                        std::cout << "\nA continuacion se le muestran los Equipos disponibles, los cuales puede Eliminar" << '\n';
                        //std::cout << "7 de ellos para su equipo." << '\n';
                        for(int i = 0; i < 50; i++){
                            //for (int i = 0; i < 7; i++){
                                if(ARREGLO[i][0]!=NULL){
                                    std::cout <<"El equipo en pos: "<<"["<<i<<"]"<<" donde el capitan es:  "<< ARREGLO[i][0]->getNombre() << '\n';
                                    //break;
                                //}
                            }
                            
                            //std::cout <<"El equipo donde el capitan es:  "<< teams[1][1]->getNombre() << '\n';

                        }

                        std::cout << "Ingrese el numero de posicion donde se encuentra el equipo que" << '\n';
                        std::cout << "desea ✖︎︎︎︎︎︎✖︎︎︎︎︎︎✖︎︎︎︎︎︎ELIMINAR✖︎︎︎︎︎︎✖︎︎︎︎︎︎✖︎︎︎︎︎︎ " << '\n';
                        cin>> pos;

                        //myvector.erase (myvector.begin()+5);
                        //teams.erase(teams.begin()+pos);

                        for(int i = 0; i < 50; i++){
                            for (int j = 0; j < 7; j++){
                                if(i==pos){
                                    ARREGLO[i][j]=NULL;
                                }
                            }

                        }
                        

                        std::cout << "✔︎ ELIMINO EXITOSAMENTE" <<'\n';


                        //equipo[j]=minions[pos];
                    //}

                    //teams.push_back(equipo);
                    //std::cout << "✔︎ El equipo fue creado exitosamente!" << '\n';

                }


            }
                break;
                //fin case b
            case  'c':{
                std::cout << "⚙︎︎︎⚙︎︎︎⚙︎︎︎ MODIFICAR MINION ⚙︎︎︎⚙︎︎︎⚙︎︎︎" << '\n';
                //std::cout << "✖︎✖︎✖︎ ELIMINAR EQUIPO ✖︎✖︎✖︎" << '\n';
                if(ARREGLO[0][0]==NULL){
                std::cout << "\n✖︎ Actualmente no hemos encontrado Equipos disponibles, Porfavor agregue Equipos al programa" << '\n';
                goto MenuPrincipal;
                }else{
                    //string nombre;
                    int pos;
                    //std::cout << "Ingrese el nombre de su equipo: " << '\n';
                    //cin >> nombre;

                    //Minion* equipo[7];

                    //for (int j = 0; j < 7; j++){
                        std::cout << "\nA continuacion se le muestran los Equipos disponibles, los cuales puede MODIFICAR" << '\n';
                        //std::cout << "7 de ellos para su equipo." << '\n';
                        for(int i = 0; i < 50; i++){
                            //for (int i = 0; i < 7; i++){
                                if(ARREGLO[i][0]!=NULL){
                                    std::cout <<"El equipo en pos: "<<"["<<i<<"]"<<" donde el capitan es:  "<< ARREGLO[i][0]->getNombre() << '\n';
                                    //break;
                                //}
                            }
                            
                            //std::cout <<"El equipo donde el capitan es:  "<< teams[1][1]->getNombre() << '\n';

                        }

                        std::cout << "Ingrese el numero de posicion donde se encuentra el equipo que" << '\n';
                        std::cout << "desea ⚙︎︎︎⚙︎︎︎⚙︎︎︎ MODIFICAR ⚙︎︎︎⚙︎︎︎⚙︎︎︎ " << '\n';
                        cin>> pos;

                        //myvector.erase (myvector.begin()+5);
                        //teams.erase(teams.begin()+pos);

                        for(int i = 0; i < 50; i++){
                            for (int j = 0; j < 7; j++){
                                if(i==pos){
                                    std::cout <<"["<<i<<"] "<< ARREGLO[i][j]->getNombre() << '\n';
                                }
                            }

                        }

                        int pos2;
                        std::cout << "Ingrese el numero de posicion donde se encuentra el ELEMENTO que" << '\n';
                        std::cout << "desea ⚙︎︎︎⚙︎︎︎⚙︎︎︎ MODIFICAR ⚙︎︎︎⚙︎︎︎⚙︎︎︎ " << '\n';
                        cin>> pos2;

                        for(int i = 0; i < 50; i++){
                            for (int j = 0; j < 7; j++){
                                if(i==pos){
                                    if(j==pos2){
                                        ARREGLO[i][j]=NULL;
                                    }
                                }
                            }

                        }

                        //for (int j = 0; j < 7; j++){
                            std::cout << "\nA continuacion se le muestran los Minions disponibles, los cuales puede reclutar" << '\n';
                            std::cout << "7 de ellos para su equipo." << '\n';
                            for(int i = 0; i < minions.size(); i++){
                                if(dynamic_cast<Goomba*>(minions[i])){
                                    std::cout <<"❍ "<<i<<"- "<<minions[i]->getNombre() << " TIPO: Goomba" <<'\n';
                                }
                                if(dynamic_cast<ChainChop*>(minions[i])){
                                    std::cout <<"❍ "<<i<<"- "<<minions[i]->getNombre() << " TIPO: ChainChop"<< '\n';
                                }
                                if(dynamic_cast<Boo*>(minions[i])){
                                    std::cout <<"❍ "<<i<<"- "<<minions[i]->getNombre() << " TIPO: Boo"<< '\n';
                                }
                                if(dynamic_cast<Magikoopa*>(minions[i])){
                                    std::cout <<"❍ "<<i<<"- "<<minions[i]->getNombre() << " TIPO: Magikoopa" <<'\n';
                                }
                                if(dynamic_cast<HammerBro*>(minions[i])){
                                    std::cout <<"❍ "<<i<<"- "<<minions[i]->getNombre() << " TIPO: HammerBro" <<'\n';
                                }
                                if(dynamic_cast<Paratroopa*>(minions[i])){
                                    std::cout <<"❍ "<<i<<"- "<<minions[i]->getNombre() << " TIPO: Paratroopa"<< '\n';
                                }

                            }
                            int pos3;
                            std::cout << "Ingrese el numero de posicion donde se encuentra el minion que" << '\n';
                            std::cout << "que desea agregar a su equipo" << '\n';
                            cin>> pos3;

                            std::cout << "Agrego a " <<minions[pos3]->getNombre()<<'\n';

                            ARREGLO[pos][pos2]=minions[pos3];
                        //}


                        std::cout << "✔︎ MODIFICO EXITOSAMENTE" <<'\n';


                        //equipo[j]=minions[pos];
                    //}

                    //teams.push_back(equipo);
                    //std::cout << "✔︎ El equipo fue creado exitosamente!" << '\n';

                }

            }
                break;
                //fin case c
            default:
                break;
            }


        }
            break;
            //fin case 'e'
        case  'f':{
            std::cout << "▶︎▶︎▶︎▶︎▶︎▶︎Esperamos vuelva pronto!, Gracias por jugar a Mario Odyssey◀︎︎︎︎︎︎︎︎◀︎︎︎︎︎︎︎︎◀︎︎︎︎︎︎︎︎◀︎︎︎︎︎︎︎︎◀︎︎︎︎︎︎︎︎◀︎︎︎︎︎︎︎︎" << '\n';
            resp='n';
        }
            break;
            //fin case 'f'
        case  'z':{
            Print(ARREGLO);

            // for (int i = 0; i < minions.size(); i++){
            //     cout << minions[i]->getNombre()<<endl;
            // }
        }
            break;
            //fin case 'z'
        default:
            std::cout << "✖︎ La accion no esta contemplada dentro del menu, intente de nuevo" << '\n';
            goto MenuPrincipal;
            break;
        }// fin switch principal

    }//fin while con respuesta de usuario
    
    for (int i = 0; i < minions.size(); i++){
            delete minions[i];
    }
    Delete(ARREGLO);
        std::cout << "Se libero exitosamente la memoria" << '\n';

    }catch (const std::exception&){
        std::cout << "✖︎ UPS! algo salio mal, pongase en contacto con el programador!" << '\n';
    }
    
     return 0;
}//fin main



/*
switch (){
            case  'a':{

            }
                break;
                //fin case 'a'
            default:
                break;
            }
            */

            /*
            try{
                
            }
            catch (const std::exception&){
                 std::cout << "✖︎ UPS! algo salio mal, pongase en contacto con el programador!" << '\n';
            }
            */

//crear matrix
Minion*** Create(){
	Minion*** retVal= new Minion**[50];

	for(int i=0 ; i<50 ; i++){
		retVal[i]=new Minion*[7];
	}

	for (int i = 0; i < 50; ++i){
		for (int j = 0; j < 7; ++j){
			retVal[i][j]=NULL;
		}
	}

	return retVal;
}

//delete matrix 

void Delete(Minion*** matrix){
	for(int i=0; i<7 ; i++){
		delete matrix[i];
		matrix[i]=NULL;
	}
	delete [] matrix;
}

//imprimir Matrix

void Print(Minion*** matrix){
	
	for(int i=0; i<50 ; i++){
		for(int j=0; j<7 ; j++){
			if(matrix[i][j]!=NULL){
                cout<<"["<<matrix[i][j]->getNombre()<<"]";
            }else{
                cout<<"["<<matrix[i][j]<<"]";
            }
		}
		cout<<endl;
	}

}



            