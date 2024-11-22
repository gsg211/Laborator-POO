#include <iostream>
#include "cisterna.h"

using namespace Transporturi;

int main()
{
	char s[10]="Benzina";
	char s2[10]="Diesel";

	cisterna c(s,4.5); //constr cu parametri
	c.afisare(); //testare afisare

	//testare setter
	c.setCantitate(20);
	c.setContinut(s2);

	//testare getter
	std::cout<<c.getContinut()<<" "<<c.getCantitate()<<"\n\n";
	c.afisare();

	cisterna c2; //constructor vid
	c2.afisare();

	//testare citire cu argument
	c2.citire(26.7);
	c2.afisare();

	//testare citire fara argument
	c.citire();
	c.afisare();

	return 0;
}
