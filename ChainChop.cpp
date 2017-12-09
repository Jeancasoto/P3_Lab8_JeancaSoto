//#include "ChainChop.h"
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include "Minion.h"
#include "Melee.h"
#include "Flying.h"
#include "Range.h"
#include "Goomba.h"
#include "ChainChop.h"
#include "Boo.h"
#include <fstream>
#include "Paratroopa.h"
#include "HammerBro.h"
#include "Magikoopa.h"

using namespace std;

ChainChop::ChainChop(string pNombre, int pIntimidacion, string pColor, int pHP) : Melee(pNombre, pIntimidacion)
{
    Id = "CH";
    Nombre = pNombre;
    Ganadas = 0;
    Experiencia = 0;
    Intimidacion = pIntimidacion;
    color = pColor; //color de su cuerpo
    HP = pHP;
    Defensa = 60;
    Velocidad = 20;
    Fuerza = 15;
    Especial = true;
}

ChainChop::ChainChop() {}

ChainChop::~ChainChop() {}

void ChainChop::setColor(string pColor)
{
    color = pColor;
}
string ChainChop::getColor()
{
    return color;
}
void ChainChop::setHP(int pHP)
{
    HP = HP - pHP;
}
int ChainChop::getHP()
{
    return HP;
}

void ChainChop::setDefensa(int pDefensa)
{
    Defensa = Defensa + pDefensa;
}
int ChainChop::getDefensa()
{
    return Defensa;
}

void ChainChop::setVelocidad(int pVelocidad)
{
    Velocidad = Velocidad + pVelocidad;
}
int ChainChop::getVelocidad()
{
    return Velocidad;
}
void ChainChop::setFuerza(int pFuerza)
{
    Fuerza = Fuerza + pFuerza;
}
int ChainChop::getFuerza()
{
    return Fuerza;
}
void ChainChop::setEspecial(bool pEspecial)
{
    Especial = pEspecial;
}
bool ChainChop::getEspecial()
{
    return Especial;
}

void ChainChop::pelea(Minion *p1)
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
            file << "HammerBro Evadio el ataque!" << '\n';
            std::cout << "HammerBro Evadio el ataque!" << '\n';
        }
        else
        {
            Fuerza = Fuerza * 0.5;
            int esp2 = rand() % 3 + 1;
            if (esp1 == esp2)
            {
                file << "Chainchop Poder especial + 20 ataque" << '\n';
                std::cout << "Chainchop Poder especial + 20 ataque" << '\n';
                Fuerza = Fuerza + 20;
            }
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
            Fuerza = Fuerza * 0.5;
            int esp2 = rand() % 3 + 1;
            if (esp1 == esp2)
            {
                file << "ChainChop Poder especial + 20 ataque" << '\n';
                std::cout << "ChainChop Poder especial + 20 ataque" << '\n';
                Fuerza = Fuerza + 20;
            }
            file << "Ataque a Magikoopa!" << '\n';
            std::cout << "Ataque a Magikoopa!" << '\n';
            dynamic_cast<Magikoopa *>(p1)->setHP(Fuerza);
        }
    }

    if (p1->getId() == "G")
    {
        file << dynamic_cast<Goomba *>(p1)->getNombre() << " HP:  " << dynamic_cast<Goomba *>(p1)->getHP() << '\n';
        cout << dynamic_cast<Goomba *>(p1)->getNombre() << " HP:  " << dynamic_cast<Goomba *>(p1)->getHP() << endl;
        int def = rand() % 9 + 1;
        if (def == 1 || def == 2 || def == 3 || def == 4 || def == 5 || def == 6 || def == 7)
        {
            file << "Goomba Evadio el ataque!" << '\n';
            std::cout << "Goomba Evadio el ataque!" << '\n';
        }
        else
        {
            //Fuerza=Fuerza*0.5;
            int esp2 = rand() % 3 + 1;
            if (esp1 == esp2)
            {
                file << "ChainChop Poder especial + 20 ataque" << '\n';
                std::cout << "ChainChop Poder especial + 20 ataque" << '\n';
                Fuerza = Fuerza + 20;
            }
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
            file << "ChainChop Evadio el ataque!" << '\n';
            std::cout << "ChainChop Evadio el ataque!" << '\n';
        }
        else
        {
            //Fuerza=Fuerza*0.5;
            int esp2 = rand() % 3 + 1;
            if (esp1 == esp2)
            {
                file << "ChainChop Poder especial + 20 ataque" << '\n';
                std::cout << "ChainChop Poder especial + 20 ataque" << '\n';
                Fuerza = Fuerza + 20;
            }
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
                file << "ChainChop Poder especial + 20 ataque" << '\n';
                std::cout << "ChainChop Poder especial + 20 ataque" << '\n';
                Fuerza = Fuerza + 20;
            }
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
                file << "ChainChop Poder especial + 20 ataque" << '\n';
                std::cout << "ChainChop Poder especial + 20 ataque" << '\n';
                Fuerza = Fuerza + 20;
            }
            Fuerza = Fuerza * 0.4;
            file << "Ataque a Paratroopa!" << '\n';
            std::cout << "Ataque a Paratroopa!" << '\n';
            dynamic_cast<Paratroopa *>(p1)->setHP(Fuerza);
        }
    }
    file.close();
}
