#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Flying.h"

using namespace std;

class Paratroopa : public Flying{
	protected:
		string Color;//color de caparazon
		int HP;
		int Defensa;
		int Velocidad;
		int Fuerza;
		bool Especial;
	public:
		Paratroopa(string,int,string,int);//nombre,vuelo,color de caparazon, HP
		Paratroopa();
		virtual ~Paratroopa();
		virtual void pelea();

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