#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Range.h"

using namespace std;

class HammerBro : public Range
{
  protected:
	double tamano; //tamano del hammer
	int HP;
	int Defensa;
	int Velocidad;
	int Fuerza;
	bool Especial;

  public:
	HammerBro(string, int, double, int); //nombre,rango,tamano, HP
	HammerBro();

	virtual ~HammerBro();
	virtual void pelea(Minion *);

	double getTamano();
	void setTamano(double);

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