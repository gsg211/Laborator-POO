#pragma once
#include "Figura.h"

class Triunghi : public Figura {
	double a, b, c;
public:
	Triunghi();
	Triunghi(const char* cul, double aa, double bb, double cc);
	~Triunghi();
	double Aria();
	double Perimetru();
	void Afisare();
};
