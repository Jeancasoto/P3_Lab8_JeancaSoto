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

using namespace std;

int main(){
    try{
        char resp='s';
    while(resp=='s'|| resp=='S'){
        MenuPrincipal:
        char principal;
        std::cout <<'\n';
        std::cout << "||||||BIENVENIDO A MARIO ODYSSEY|||||||| " << endl;
        std::cout << "➤ a)Como jugar?" << '\n';
        std::cout << "➤ b)Crear personaje" << '\n';
        std::cout << "➤ c)Crear equipo" << '\n';
        std::cout << "➤ d)A pelear!" << '\n';
        std::cout << "➤ e)Salir" << '\n';
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
        case  'c':{

        }
            break;
            //fin case 'c'
        case  'd':{

        }
            break;
            //fin case 'd'
        case  'e':{
            std::cout << "▶︎▶︎▶︎▶︎▶︎▶︎Esperamos vuelva pronto!, Gracias por jugar a Mario Odyssey◀︎︎︎︎︎︎︎︎◀︎︎︎︎︎︎︎︎◀︎︎︎︎︎︎︎︎◀︎︎︎︎︎︎︎︎◀︎︎︎︎︎︎︎︎◀︎︎︎︎︎︎︎︎" << '\n';
            resp='n';
        }
            break;
            //fin case 'e'
        default:
            std::cout << "✖︎ La accion no esta contemplada dentro del menu, intente de nuevo" << '\n';
            goto MenuPrincipal;
            break;
        }// fin switch principal

    }
        
    }
    catch (const std::exception&){
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