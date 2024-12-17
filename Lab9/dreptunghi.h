#pragma once
#include "Figura.h"

class Dreptunghi : public Figura {
	double lung, lat;
public:
	Dreptunghi();
	Dreptunghi(const char* cul, double lg, double lt);
	~Dreptunghi();
	double Aria();
	double Perimetru();
	void Afisare();
};
