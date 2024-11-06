#include <iostream>
#include "vapor.h"
#include <cstring>

using namespace Porturi;

int main()
{
	char c[10]="IOn";
	vapor v(c,1);

	v.afisare();
	std::cout<<v.getInMiscare()<<" "<<v.getNrContainere();
	
	std::cout<<"\n";
	v.setInMiscare(0);
	v.setNrContainere(200);

	std::cout<<v.getInMiscare()<<" "<<v.getNrContainere();
	return 0;
}
