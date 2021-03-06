#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Melee.h"

using namespace std;

class ChainChop : public Melee
{
  protected:
	string color; //color de su cuerpo
	int HP;
	int Defensa;
	int Velocidad;
	int Fuerza;
	bool Especial;

  public:
	ChainChop(string, int, string, int);
	ChainChop();
	virtual ~ChainChop();
	virtual void pelea(Minion *);

	string getColor();
	void setColor(string);

	int getDefensa();
	void setDefensa(int);

	int getHP();
	void setHP(int);

	int getVelocidad();
	void setVelocidad(int);

	int getFuerza();
	void setFuerza(int);

	bool getEspecial();
	void setEspecial(bool);
};