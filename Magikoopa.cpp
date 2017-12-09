#include "Magikoopa.h"
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include "Goomba.h"
#include "ChainChop.h"
#include "Boo.h"
#include "Paratroopa.h"
#include "HammerBro.h"

using namespace std;

Magikoopa::Magikoopa(string pNombre, int pRango, string pColor, int pHP) : Range(pNombre, pRango)
{
    Id = "MK";
    Nombre = pNombre;
    Ganadas = 0;
    Experiencia = 0;
    Rango = pRango;
    Color = pColor; //color de traje
    HP = pHP;
    Defensa = 0;
    Velocidad = 60;
    Fuerza = 7;
    Especial = true;
}

Magikoopa::~Magikoopa() {}

Magikoopa::Magikoopa() {}

void Magikoopa::setColor(string pColor)
{
    Color = pColor;
}
string Magikoopa::getColor()
{
    return Color;
}
void Magikoopa::setHP(int pHP)
{
    HP = pHP;
}
int Magikoopa::getHP()
{
    return HP;
}
void Magikoopa::setDefensa(int pDefensa)
{
    Defensa = pDefensa;
}
int Magikoopa::getDefensa()
{
    return Defensa;
}
void Magikoopa::setVelocidad(int pVelocidad)
{
    Velocidad = pVelocidad;
}
int Magikoopa::getVelocidad()
{
    return Velocidad;
}
void Magikoopa::setFuerza(int pFuerza)
{
    Fuerza = pFuerza;
}
int Magikoopa::getFuerza()
{
    return Fuerza;
}
void Magikoopa::setEspecial(bool pEspecial)
{
    Especial = pEspecial;
}
bool Magikoopa::getEspecial()
{
    return Especial;
}

void Magikoopa::pelea(Minion*){}
// void Magikoopa::pelea(Minion *p1)
// {
//     int esp1 = rand() % 3 + 1;

//     if (p1->getId() == "H")
//     {
//         int def = rand() % 9 + 1;
//         if (def == 1 || def == 2 || def == 3)
//         {
//             std::cout << "Evadio el ataque!" << '\n';
//         }
//         else
//         {
//             //Fuerza=Fuerza*0.5;
//             int esp2 = rand() % 3 + 1;
//             if (esp1 == esp2)
//             {
//                 std::cout << "Poder especial +25 HP" << '\n';
//                 HP = HP + 25;
//             }
//             Fuerza = Fuerza * 0.2;

//             std::cout << "Atack!" << '\n';
//             dynamic_cast<HammerBro *>(p1)->setHP(Fuerza);
//         }
//     }

//     if (p1->getId() == "MK")
//     {
//         int def = rand() % 9 + 1;
//         if (def == 1 || def == 2 || def == 3 || def == 4 || def == 5 || def == 6)
//         {
//             std::cout << "Evadio el ataque!" << '\n';
//         }
//         else
//         {
//             //Fuerza=Fuerza*0.5;
//             int esp2 = rand() % 3 + 1;
//             if (esp1 == esp2)
//             {
//                 std::cout << "Poder especial +25 HP" << '\n';
//                 HP = HP + 25;
//             }
//             //Fuerza=Fuerza*0.2;
//         }
//         std::cout << "Atack!" << '\n';
//         dynamic_cast<Magikoopa *>(p1)->setHP(Fuerza);
//     }

//     if (p1->getId() == "G")
//     {
//         int def = rand() % 9 + 1;
//         if (def == 1 || def == 2 || def == 3 || def == 4 || def == 5 || def == 6 || def == 7)
//         {
//             std::cout << "Evadio el ataque!" << '\n';
//         }
//         else
//         {
//             //Fuerza=Fuerza*0.5;
//             int esp2 = rand() % 3 + 1;
//             if (esp1 == esp2)
//             {
//                 std::cout << "Poder especial +25 HP" << '\n';
//                 HP = HP + 25;
//             }
//             //Fuerza=Fuerza*0.2;
//         }
//         std::cout << "Atack!" << '\n';
//         dynamic_cast<Goomba *>(p1)->setHP(Fuerza);
//     }

//     if (p1->getId() == "CH")
//     {
//         int def = rand() % 9 + 1;
//         if (def == 1 || def == 2)
//         {
//             std::cout << "Evadio el ataque!" << '\n';
//         }
//         else
//         {
//             //Fuerza=Fuerza*0.5;
//             int esp2 = rand() % 3 + 1;
//             if (esp1 == esp2)
//             {
//                 std::cout << "Poder especial +25 HP" << '\n';
//                 HP = HP + 25;
//             }
//             Fuerza = Fuerza * 0.6;
//             std::cout << "Atack!" << '\n';
//             dynamic_cast<ChainChop *>(p1)->setHP(Fuerza);
//         }

//         if (p1->getId() == "B")
//         {
//             int def = rand() % 9 + 1;
//             if (def == 1 || def == 2 || def == 3 || def == 4)
//             {
//                 std::cout << "Evadio el ataque!" << '\n';
//             }
//             else
//             {
//                 Fuerza = Fuerza * 0.5;
//                 int esp2 = rand() % 3 + 1;
//                 if (esp1 == esp2)
//                 {
//                     std::cout << "Poder especial +25 HP" << '\n';
//                     HP = HP + 25;
//                 }
//                 Fuerza = Fuerza * 0.2;
//                 std::cout << "Atack!" << '\n';
//                 dynamic_cast<Boo *>(p1)->setHP(Fuerza);
//             }

//             if (p1->getId() == "P")
//             {
//                 int def = rand() % 9 + 1;
//                 if (def == 1)
//                 {
//                     std::cout << "Evadio el ataque!" << '\n';
//                 }
//                 else
//                 {
//                     Fuerza = Fuerza * 0.5;
//                     int esp2 = rand() % 3 + 1;
//                     if (esp1 == esp2)
//                     {
//                         std::cout << "Poder especial +25 HP" << '\n';
//                         HP = HP + 25;
//                     }
//                     Fuerza = Fuerza * 0.4;
//                     std::cout << "Atack!" << '\n';
//                     dynamic_cast<Paratroopa *>(p1)->setHP(Fuerza);
//                 }
//             }
//         }
//     }
// }
