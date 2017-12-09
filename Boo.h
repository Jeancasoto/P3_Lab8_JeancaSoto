#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Flying.h"

using namespace std;

class Boo : public Flying
{
  protected:
	string Color; //color del boo
	int HP;
	int Defensa;
	int Velocidad;
	int Fuerza;
	bool Especial;

  public:
	Boo(string, int, string, int);
	Boo();
	virtual ~Boo();
	virtual void pelea(Minion *);

	string getColor();
	void setColor(string);

	int getHP();
	void setHP(int);

	int getDefensa();
	void setDefensa(int);

	int getVelocidad();
	void setVelocidad(int);

	int getFuerza();
	void setFuerza(int);

	bool getEspecial();
	void setEspecial(bool);
};
