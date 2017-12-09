#include "Magikoopa.h"
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include "Goomba.h"
#include <fstream>
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
    HP = HP - pHP;
}
int Magikoopa::getHP()
{
    return HP;
}
void Magikoopa::setDefensa(int pDefensa)
{
    Defensa = Defensa + pDefensa;
}
int Magikoopa::getDefensa()
{
    return Defensa;
}
void Magikoopa::setVelocidad(int pVelocidad)
{
    Velocidad = Velocidad + pVelocidad;
}
int Magikoopa::getVelocidad()
{
    return Velocidad;
}
void Magikoopa::setFuerza(int pFuerza)
{
    Fuerza = Fuerza + pFuerza;
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

//void Magikoopa::pelea(Minion*){}

void Magikoopa::pelea(Minion *p1)
{
    fstream file;
    file.open("MaquinaTiempo.txt", std::fstream::in | std::fstream::out | std::fstream::app);
    int esp1 = rand() % 3 + 1;

    if (p1->getId() == "H")
    {
        file << dynamic_cast<HammerBro *>(p1)->getNombre() << " HP:  " << dynamic_cast<HammerBro *>(p1)->getHP() << '\n';
        cout << dynamic_cast<HammerBro *>(p1)->getNombre() << " HP:  " << dynamic_cast<HammerBro *>(p1)->getHP() << endl;
        int def = rand() % 9 + 1;
        if (def == 1 || def == 2 || def == 3)
        {
            std::cout << "HammerBro Evadio el ataque!" << '\n';
            file << "HammerBro Evadio el ataque!" << '\n';
        } //fin evadir
        else
        {
            //Fuerza=Fuerza*0.5;
            int esp2 = rand() % 3 + 1;
            if (esp1 == esp2)
            {
                file << "Magikoopa Poder especial +25 HP" << '\n';
                std::cout << "Magikoopa Poder especial +25 HP" << '\n';
                HP = HP + 25;
            } //fin especial
            Fuerza = Fuerza * 0.2;

            std::cout << "Ataque a HammerBro!" << '\n';
            file << "Ataque a HammerBro!" << '\n';
            dynamic_cast<HammerBro *>(p1)->setHP(Fuerza);
        } //fin else
    }     //fin if

    if (p1->getId() == "MK")
    {
        file << dynamic_cast<Magikoopa *>(p1)->getNombre() << " HP:  " << dynamic_cast<Magikoopa *>(p1)->getHP() << '\n';
        cout << dynamic_cast<Magikoopa *>(p1)->getNombre() << " HP:  " << dynamic_cast<Magikoopa *>(p1)->getHP() << endl;
        int def = rand() % 9 + 1;
        if (def == 1 || def == 2 || def == 3 || def == 4 || def == 5 || def == 6)
        {
            std::cout << "Magikoopa Evadio el ataque!" << '\n';
            file << "Magikoopa Evadio el ataque!" << '\n';
        }
        else
        {
            //Fuerza=Fuerza*0.5;
            int esp2 = rand() % 3 + 1;
            if (esp1 == esp2)
            {
                std::cout << "Magikoopa Poder especial +25 HP" << '\n';
                file << "Magikoopa Poder especial +25 HP" << '\n';
                HP = HP + 25;
            }
            //Fuerza=Fuerza*0.2;
        } //fin else
        std::cout << "Ataque a Magikoopa!" << '\n';
        file << "Ataque a Magikoopa!" << '\n';
        dynamic_cast<Magikoopa *>(p1)->setHP(Fuerza);
    } //fin if

    if (p1->getId() == "G")
    {
        file << dynamic_cast<Goomba *>(p1)->getNombre() << " HP:  " << dynamic_cast<Goomba *>(p1)->getHP() << '\n';
        cout << dynamic_cast<Goomba *>(p1)->getNombre() << " HP:  " << dynamic_cast<Goomba *>(p1)->getHP() << endl;
        int def = rand() % 9 + 1;
        if (def == 1 || def == 2 || def == 3 || def == 4 || def == 5 || def == 6 || def == 7)
        {
            std::cout << "Goomba Evadio el ataque!" << '\n';
            file << "Goomba Evadio el ataque!" << '\n';
        }
        else
        {
            //Fuerza=Fuerza*0.5;
            int esp2 = rand() % 3 + 1;
            if (esp1 == esp2)
            {
                std::cout << "Magikoopa Poder especial +25 HP" << '\n';
                file << "Magikoopa Poder especial +25 HP" << '\n';
                HP = HP + 25;
            }
            //Fuerza=Fuerza*0.2;
        }
        std::cout << "Ataque a Goomba!" << '\n';
        file << "Ataque a Goomba!" << '\n';
        dynamic_cast<Goomba *>(p1)->setHP(Fuerza);
    }

    if (p1->getId() == "CH")
    {
        cout << dynamic_cast<ChainChop *>(p1)->getNombre() << " HP:  " << dynamic_cast<ChainChop *>(p1)->getHP() << endl;
        file << dynamic_cast<ChainChop *>(p1)->getNombre() << " HP:  " << dynamic_cast<ChainChop *>(p1)->getHP() << '\n';
        int def = rand() % 9 + 1;
        if (def == 1 || def == 2)
        {
            std::cout << "ChainChop Evadio el ataque!" << '\n';
            file << "ChainChop Evadio el ataque!" << '\n';
        }
        else
        {
            //Fuerza=Fuerza*0.5;
            int esp2 = rand() % 3 + 1;
            if (esp1 == esp2)
            {
                std::cout << "Magikoopa Poder especial +25 HP" << '\n';
                file << "Magikoopa Poder especial +25 HP" << '\n';
                HP = HP + 25;
            }
            Fuerza = Fuerza * 0.6;
            std::cout << "Ataque a ChainChop!" << '\n';
            file << "Ataque a ChainChop!" << '\n';
            dynamic_cast<ChainChop *>(p1)->setHP(Fuerza);
        }
    }

    if (p1->getId() == "B")
    {
        file << dynamic_cast<Boo *>(p1)->getNombre() << " HP:  " << dynamic_cast<Boo *>(p1)->getHP() << '\n';
        cout << dynamic_cast<Boo *>(p1)->getNombre() << " HP:  " << dynamic_cast<Boo *>(p1)->getHP() << endl;
        int def = rand() % 9 + 1;
        if (def == 1 || def == 2 || def == 3 || def == 4)
        {
            std::cout << "Boo Evadio el ataque!" << '\n';
            file << "Boo Evadio el ataque!" << '\n';
        }
        else
        {
            Fuerza = Fuerza * 0.5;
            int esp2 = rand() % 3 + 1;
            if (esp1 == esp2)
            {
                std::cout << "Magikoopa Poder especial +25 HP" << '\n';
                file << "Magikoopa Poder especial +25 HP" << '\n';
                HP = HP + 25;
            }
            Fuerza = Fuerza * 0.2;
            std::cout << "Ataque a Boo!" << '\n';
            file << "Ataque a Boo!" << '\n';
            dynamic_cast<Boo *>(p1)->setHP(Fuerza);
        }
    }
    if (p1->getId() == "P")
    {
        file << dynamic_cast<Paratroopa *>(p1)->getNombre() << " HP:  " << dynamic_cast<Paratroopa *>(p1)->getHP() << "\n";
        cout << dynamic_cast<Paratroopa *>(p1)->getNombre() << " HP:  " << dynamic_cast<Paratroopa *>(p1)->getHP() << endl;

        int def = rand() % 9 + 1;
        if (def == 1)
        {
            std::cout << "Evadio el ataque!" << '\n';
            file << "Evadio el ataque!" << '\n';
        }
        else
        {
            Fuerza = Fuerza * 0.5;
            int esp2 = rand() % 3 + 1;
            if (esp1 == esp2)
            {
                file << "Poder especial +25 HP" << '\n';
                std::cout << "Poder especial +25 HP" << '\n';
                HP = HP + 25;
            }
            Fuerza = Fuerza * 0.4;
            file << "Ataque a Paratroopa" << '\n';
            std::cout << "Ataque a Paratroopa" << '\n';
            dynamic_cast<Paratroopa *>(p1)->setHP(Fuerza);
        }
    }
    file.close();
}
