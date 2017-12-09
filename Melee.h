#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Minion.h"

using namespace std;

class Melee : public Minion{
	protected:
		int Intimidacion;
	public:
		Melee(string, int);
		Melee();
		virtual ~Melee();
		virtual void pelea(Minion* )=0;
		int getIntimidacion();
		void setIntimidacion(int);

};