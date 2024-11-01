#include <iostream>
#include "complex.h"
#include "multimeComplexa.h"

int main()
{
	//problema 2
	/*
	MultimeC m;
	Complex c1(2, 3), c2(3, 4), c3(2, -1);
	m.adauga(c1);
	m.adauga(c2);
	m.afisare();
	m.extrage(c1);
	m.extrage(c3);
	m.afisare();
	m.adauga(c3);
	m.adauga(c3);
	m.afisare();
	*/
	int optiune;
	MultimeC m(20);
	Complex c;
	do
	{
		std::cout<<"Alegeti optiunea:\n\n";
		std::cout<<"1: Adaugare element\n";
		std::cout<<"2: Extragere Element\n\n";
		std::cout<<"0: iesire program\n\n";
		std::cout<<"Optiune: ";

		std::cin>>optiune;

		switch (optiune)
		{
			case 1:
				c.citire();
				m.adauga(c);
				break;

			case 2:
				c.citire();
				m.extrage(c);
				break;
			
			default:
				break;
		}

		m.afisare();
	} while (optiune);
	
	return 0;
}
