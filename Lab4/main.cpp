#include <iostream>
#include "multime.h"
#include "stiva.h"

int main()
{
	/*

	//problema 1
	Multime m(10);
	m.adauga(4);
	m.adauga(3);
	m.afisare();
	m.extrage(4);
	m.extrage(4);
	m.afisare();
	m.adauga(9);
	m.adauga(2);
	m.adauga(2);
	m.afisare();

	*/

	Stiva s;
	s.push(4);
	s.push(3);
	std::cout<< s.top() << std::endl;
	s.push(9);
	std::cout<< s.pop() << std::endl;
	s.push(2);
	s.print();
	return 0;
}
