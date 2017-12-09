#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Range.h"

using namespace std;

class Magikoopa : public Range{
	protected:
		string Color;//color del traje
		int HP;
		int Defensa;
		int Velocidad;
		int Fuerza;
		bool Especial;
	public:
		Magikoopa(string,int,string,int);//nombre, rango, color del traje, HP
		Magikoopa();

		virtual ~Magikoopa();
		virtual void pelea(Minion*);

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