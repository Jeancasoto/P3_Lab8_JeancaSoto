#include "Paratroopa.h"
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include "ChainChop.h"
#include "Boo.h"
#include <fstream>
#include "Goomba.h"
#include "HammerBro.h"

using namespace std;

Paratroopa::Paratroopa(string pNombre, int pVuelo, string pColor, int pHP) : Flying(pNombre, pVuelo)
{
    Id = "P";
    Nombre = pNombre;
    Ganadas = 0;
    Experiencia = 0;
    Vuelo = pVuelo;
    Color = pColor; //color de su caparazon
    HP = pHP;
    Defensa = 40;
    Velocidad = 10;
    Fuerza = 9;
    Especial = true;
}

Paratroopa::Paratroopa() {}

Paratroopa::~Paratroopa() {}

void Paratroopa::setColor(string pColor)
{
    Color = pColor;
}
string Paratroopa::getColor()
{
    return Color;
}
void Paratroopa::setHP(int pHP)
{
    HP = HP - pHP;
}
int Paratroopa::getHP()
{
    return HP;
}
void Paratroopa::setDefensa(int pDefensa)
{
    Defensa = Defensa + pDefensa;
}
int Paratroopa::getDefensa()
{
    return Defensa;
}
void Paratroopa::setVelocidad(int pVelocidad)
{
    Velocidad = Velocidad + pVelocidad;
}
int Paratroopa::getVelocidad()
{
    return Velocidad;
}
void Paratroopa::setFuerza(int pFuerza)
{
    Fuerza = Fuerza + pFuerza;
}
int Paratroopa::getFuerza()
{
    return Fuerza;
}
void Paratroopa::setEspecial(bool pEspecial)
{
    Especial = pEspecial;
}
bool Paratroopa::getEspecial()
{
    return Especial;
}

void Paratroopa::pelea(Minion *p1)
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
            //Fuerza=Fuerza*0.5;
            int esp2 = rand() % 3 + 1;
            if (esp1 == esp2)
            {
                file << "Paratroopa Poder especial 80% Defensa" << '\n';
                std::cout << "Paratroopa Poder especial 80% Defensa" << '\n';
                Fuerza = Fuerza * 0.8;
            }
            else
            {
                Fuerza = Fuerza * 0.2;
            }
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
                file << "Paratroopa Poder especial 80% Defensa" << '\n';
                std::cout << "Paratroopa Poder especial 80% Defensa" << '\n';
                Fuerza = Fuerza * 0.8;
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
            Fuerza = Fuerza * 0.5;
            int esp2 = rand() % 3 + 1;
            if (esp1 == esp2)
            {
                file << "Paratroopa Poder especial 80% Defensa" << '\n';
                std::cout << "Paratroopa Poder especial 80% Defensa" << '\n';
                Fuerza = Fuerza * 0.8;
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
            Fuerza = Fuerza * 0.5;
            int esp2 = rand() % 3 + 1;
            if (esp1 == esp2)
            {
                file << "Paratroopa Poder especial 80% Defensa" << '\n';
                std::cout << "Paratroopa Poder especial 80% Defensa" << '\n';
                Fuerza = Fuerza * 0.8;
            }
            else
            {
                Fuerza = Fuerza * 0.6;
            }
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
                file << "Paratroopa Poder especial 80% Defensa" << '\n';
                std::cout << "Paratroopa Poder especial 80% Defensa" << '\n';
                Fuerza = Fuerza * 0.8;
            }
            else
            {
                Fuerza = Fuerza * 0.2;
            }
            file << "Ataque a Boo!" << '\n';
            std::cout << "Ataque a Boo!" << '\n';
            dynamic_cast<Boo *>(p1)->setHP(Fuerza);
        }
    }

    if (p1->getId() == "P")
    {
        cout << dynamic_cast<Paratroopa *>(p1)->getNombre() << " HP:  " << dynamic_cast<Paratroopa *>(p1)->getHP() << endl;
        file << dynamic_cast<Paratroopa *>(p1)->getNombre() << " HP:  " << dynamic_cast<Paratroopa *>(p1)->getHP() << '\n';
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
                file << "Paratroopa Poder especial 80% Defensa" << '\n';
                std::cout << "Paratroopa Poder especial 80% Defensa" << '\n';
                Fuerza = Fuerza * 0.8;
            }
            else
            {
                Fuerza = Fuerza * 0.2;
            }
            file << "Ataque a Paratroopa!" << '\n';
            std::cout << "Ataque a Paratroopa!" << '\n';
            dynamic_cast<Paratroopa *>(p1)->setHP(Fuerza);
        }
    }
    file.close();
}
