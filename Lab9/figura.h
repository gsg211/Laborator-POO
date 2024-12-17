#pragma once

#include <iostream>
using namespace std;

class Figura {
	char* culoare;
public:
	Figura();
	Figura(const char* cul);
	virtual ~Figura();
	virtual double Aria()=0;
	virtual double Perimetru()=0;
	virtual void Afisare();
};

void sortareArie(Figura *v[],int size);
int PerimetruMax(Figura *v[],int size);