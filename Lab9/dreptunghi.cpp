#include "Dreptunghi.h"

Dreptunghi::Dreptunghi() :Figura()
{
	cout << "\nDreptunghi();";
	lung = 10;
	lat = 5;
}

Dreptunghi::Dreptunghi(const char* cul, double lg, double lt):Figura(cul)
{
	cout << "\nDreptunghi(";
	if (cul)
		cout << cul;
	cout << "," << lg << "," << lt << ");";
	lung = lg;
	lat = lt;
}

Dreptunghi::~Dreptunghi()
{
	cout << "\n~Dreptunghi();";
	lung = 0;
	lat = 0;
}

double Dreptunghi::Aria()
{
	double rez = 0;;
	rez = lung*lat;
	return rez;
	// return lung*lat;
}

double Dreptunghi::Perimetru()
{
	return 2 * (lung + lat);
}

void Dreptunghi::Afisare()
{
	Figura::Afisare();
	cout << "\nTip figura: dreptunghi";
	cout << "\nLungime: " << lung;
	cout << "\nLatime: " << lat;
}
