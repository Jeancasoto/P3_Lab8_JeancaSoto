#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Melee.h"
#include "HammerBro.h"

using namespace std;

class Goomba : public Melee{
	protected:
		double tamano;
		int HP;
		int Defensa;
		int Velocidad;
		int Fuerza;
		bool Especial;
	public:
		Goomba(string,int,double,int);
		Goomba();
		virtual ~Goomba();
		virtual void pelea(Minion*);

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