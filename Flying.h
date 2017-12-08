#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Minion.h"

using namespace std;

class Flying : public Minion{
	protected:
		int Vuelo;
	public:
		Flying(string ,int);//nombre, vuelo
		Flying();
		virtual ~Flying();
		virtual void pelea()=0;
		int getVuelo();
		void setVuelo(int);

};