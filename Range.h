#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Minion.h"

using namespace std;

class Range : public Minion{
	protected:
		int Rango;
	public:
		Range(string , int);//nombre, rango, 
		Range();

		virtual ~Range();
		virtual void pelea(Minion*)=0;

		int getRango();
		void setRango(int);

};