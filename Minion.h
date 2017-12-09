#pragma once 
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Minion{
	protected:
		string Id;
		string Nombre;
		int Ganadas;
		int Experiencia;
	public:
		Minion(string);
		virtual ~Minion();
		virtual void pelea(Minion* )=0;
		Minion();

		string getId();
		void setId(string);

		string getNombre();
		void setNombre(string);

		int getGanadas();
		void setGanadas(int);

		int getExperiencia();
		void setExperiencia(int);

};
