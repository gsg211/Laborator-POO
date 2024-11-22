#include <iostream>
#include "carte.h"

int main()
{
	Carte *c;
	int n;

	std::cout<<"Numar de carti: ";
	std::cin>>n;
	c=new Carte[n];

	citireVector(c,n);
	SortCarti(c,n);
	AfisareVector(c,n);

	delete [] c;
	return 0;
}
