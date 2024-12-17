#pragma once
#include "Figura.h"

class Cerc :public Figura {
	double xc, yc;
	double raza;
public:
	Cerc();
	Cerc(const char* cul, double xxc, double yyc, double r);
	~Cerc();
	double Aria();
	double Perimetru();
	void Afisare();
};
