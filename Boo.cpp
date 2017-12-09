#include "Boo.h"
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include "Paratroopa.h"
#include "ChainChop.h"
#include "HammerBro.h"
#include "Magikoopa.h"
#include "Goomba.h"
#include <fstream>

using namespace std;

Boo::Boo(string pNombre, int pVuelo, string pColor, int pHP) : Flying(pNombre, pVuelo)
{
    Id = "B";
    Nombre = pNombre;
    Ganadas = 0;
    Experiencia = 0;
    Vuelo = pVuelo;
    Color = pColor; //color de su cuerpo
    HP = pHP;
    Defensa = 20;
    Velocidad = 35;
    Fuerza = 8;
    Especial = true;
}

Boo::~Boo() {}

Boo::Boo() {}

void Boo::setColor(string pColor)
{
    Color = pColor;
}

string Boo::getColor()
{
    return Color;
}
void Boo::setHP(int pHP)
{
    HP = HP - pHP;
}
int Boo::getHP()
{
    return HP;
}
void Boo::setDefensa(int pDefensa)
{
    Defensa = Defensa + pDefensa;
}
int Boo::getDefensa()
{
    return Defensa;
}
void Boo::setVelocidad(int pVelocidad)
{
    Velocidad = Velocidad + pVelocidad;
}
int Boo::getVelocidad()
{
    return Velocidad;
}
void Boo::setFuerza(int pFuerza)
{
    Fuerza = Fuerza + pFuerza;
}
int Boo::getFuerza()
{
    return Fuerza;
}
void Boo::setEspecial(bool pEspecial)
{
    Especial = pEspecial;
}
bool Boo::getEspecial()
{
    return Especial;
}

void Boo::pelea(Minion *p1)
{
    fstream file;
    file.open("MaquinaTiempo.txt", std::fstream::in | std::fstream::out | std::fstream::app);
    // file << cliente->escritura();
    //file.close();
    int esp1 = rand() % 3 + 1;

    if (p1->getId() == "H")
    {
        file << dynamic_cast<HammerBro *>(p1)->getNombre() << " HP:  " << dynamic_cast<HammerBro *>(p1)->getHP() << '\n';
        cout << dynamic_cast<HammerBro *>(p1)->getNombre() << " HP:  " << dynamic_cast<HammerBro *>(p1)->getHP() << endl;
        int def = rand() % 9 + 1;
        if (def == 1 || def == 2 || def == 3)
        {
            file << "HammerBro Evadio el ataque!" << '\n';
            std::cout << "HammerBro Evadio el ataque!" << '\n';
        }
        else
        {
            //Fuerza=Fuerza*0.5;
            int esp2 = rand() % 3 + 1;
            if (esp1 == esp2)
            {
                file << "Boo Poder especial 90% velocidad" << '\n';
                std::cout << "Boo Poder especial 90% velocidad" << '\n';
                file << "Boo Evadio el ataque!" << '\n';
                std::cout << "Boo Evadio el ataque!" << '\n';
                goto salto1;
            }
        salto1:
            Fuerza = Fuerza * 0.2;
            file << "Ataque a HammerBro!" << '\n';
            std::cout << "Ataque a HammerBro!" << '\n';
            dynamic_cast<HammerBro *>(p1)->setHP(Fuerza);
        }
    }

    if (p1->getId() == "MK")
    {
        file << dynamic_cast<Magikoopa *>(p1)->getNombre() << " HP:  " << dynamic_cast<Magikoopa *>(p1)->getHP() << '\n';
        cout << dynamic_cast<Magikoopa *>(p1)->getNombre() << " HP:  " << dynamic_cast<Magikoopa *>(p1)->getHP() << endl;
        int def = rand() % 9 + 1;
        if (def == 1 || def == 2 || def == 3 || def == 4 || def == 5 || def == 6)
        {
            file << "Magikoopa Evadio el ataque!" << '\n';
            std::cout << "Magikoopa Evadio el ataque!" << '\n';
        }
        else
        {
            //Fuerza=Fuerza*0.5;
            int esp2 = rand() % 3 + 1;
            if (esp1 == esp2)
            {
                file << "Boo especial 90% velocidad" << '\n';
                std::cout << "Boo especial 90% velocidad" << '\n';
                file << "Boo Evadio el ataque!" << '\n';
                std::cout << "Boo Evadio el ataque!" << '\n';
                goto salto2;
            }
        salto2:
            file << "Ataque a Magikoopa!" << '\n';
            std::cout << "Ataque a Magikoopa!" << '\n';
            dynamic_cast<Magikoopa *>(p1)->setHP(Fuerza);
        }
    }

    if (p1->getId() == "G")
    {
        file << dynamic_cast<Goomba *>(p1)->getNombre() << " HP:  " << dynamic_cast<Goomba *>(p1)->getHP() << '\n';
        cout << dynamic_cast<Goomba *>(p1)->getNombre() << " HP:  " << dynamic_cast<Goomba *>(p1)->getHP() << endl;
        int def = rand() % 10 + 1;
        if (def == 1 || def == 2 || def == 3 || def == 4 || def == 5 || def == 6 || def == 7)
        {
            file << "Goomba Evadio el ataque!" << '\n';
            std::cout << "Goomba Evadio el ataque!" << '\n';
        }
        else
        {
            Fuerza = Fuerza * 0.5;
            int esp2 = rand() % 3 + 1;
            if (esp1 == esp2)
            {
                file << "Boo Poder especial 90% velocidad" << '\n';
                std::cout << "Boo Poder especial 90% velocidad" << '\n';
                file << "Boo Evadio el ataque!" << '\n';
                std::cout << "Boo Evadio el ataque!" << '\n';
                goto salto3;
            }
        salto3:
            file << "Ataque a Goomba!" << '\n';
            std::cout << "Ataque a Goomba!" << '\n';
            dynamic_cast<Goomba *>(p1)->setHP(Fuerza);
        }
    }

    if (p1->getId() == "CH")
    {
        file << dynamic_cast<ChainChop *>(p1)->getNombre() << " HP:  " << dynamic_cast<ChainChop *>(p1)->getHP() << '\n';
        cout << dynamic_cast<ChainChop *>(p1)->getNombre() << " HP:  " << dynamic_cast<ChainChop *>(p1)->getHP() << endl;
        int def = rand() % 9 + 1;
        if (def == 1 || def == 2)
        {
            file << "ChainChopEvadio el ataque!" << '\n';
            std::cout << "ChainChopEvadio el ataque!" << '\n';
        }
        else
        {
            Fuerza = Fuerza * 0.5;
            int esp2 = rand() % 3 + 1;
            if (esp1 == esp2)
            {
                file << "Boo Poder especial 90% velocidad" << '\n';
                std::cout << "Boo Poder especial 90% velocidad" << '\n';
                file << "Boo Evadio el ataque!" << '\n';
                std::cout << "Boo Evadio el ataque!" << '\n';
                goto salto4;
            }
        salto4:
            Fuerza = Fuerza * 0.6;
            file << "Ataque a ChainChop!" << '\n';
            std::cout << "Ataque a ChainChop!" << '\n';
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
            file << "Boo Evadio el ataque!" << '\n';
            std::cout << "Boo Evadio el ataque!" << '\n';
        }
        else
        {
            //Fuerza=Fuerza*0.5;
            int esp2 = rand() % 3 + 1;
            if (esp1 == esp2)
            {
                file << "Boo Poder especial 90% velocidad" << '\n';
                std::cout << "Boo Poder especial 90% velocidad" << '\n';
                file << "Boo Evadio el ataque!" << '\n';
                std::cout << "Boo Evadio el ataque!" << '\n';
                goto salto5;
            }
        salto5:
            Fuerza = Fuerza * 0.2;

            file << "Ataque a Boo!" << '\n';
            std::cout << "Ataque a Boo!" << '\n';
            dynamic_cast<Boo *>(p1)->setHP(Fuerza);
        }
    }

    if (p1->getId() == "P")
    {
        file << dynamic_cast<Paratroopa *>(p1)->getNombre() << " HP:  " << dynamic_cast<Paratroopa *>(p1)->getHP() << '\n';
        cout << dynamic_cast<Paratroopa *>(p1)->getNombre() << " HP:  " << dynamic_cast<Paratroopa *>(p1)->getHP() << endl;
        int def = rand() % 9 + 1;
        if (def == 1)
        {
            file << "Paratroopa Evadio el ataque!" << '\n';
            std::cout << "Paratroopa Evadio el ataque!" << '\n';
        }
        else
        {
            //Fuerza=Fuerza*0.5;
            int esp2 = rand() % 3 + 1;
            if (esp1 == esp2)
            {
                file << "Boo Poder especial 90% velocidad" << '\n';
                std::cout << "Boo Poder especial 90% velocidad" << '\n';
                file << "Boo Evadio el ataque!" << '\n';
                std::cout << "Boo Evadio el ataque!" << '\n';
                goto salto6;
            }
        salto6:
            Fuerza = Fuerza * 0.4;
            file << "Ataque a Paratroopa!" << '\n';
            std::cout << "Ataque a Paratroopa!" << '\n';
            dynamic_cast<Paratroopa *>(p1)->setHP(Fuerza);
        }
    }
    file.close();
}
