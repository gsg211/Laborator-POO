#pragma once
#include "Grupa.h"
struct Catalog
{ 
	int nrGrupe;
	Grupa *tabGrupe;
	void setComparator(PFnComparare comparator);
      //iteram fiecare grupa din tablou si facem initializarea campului 
      //cu parametrul formal primit
	void citire(void);//citim numarul de grupe, alocam dinamic tabloul, apoi apelam citirea pentru fiecare grupa in parte
	void afisare(void);//afisam, pe rand, continutul fiecarei grupe. A se vedea functia de afisare din structura Grupa!
	void sortare(void);
      //considerand acel comparator care a fost setat pentru fiecare grupa
      //se apeleaza bSort pentru fiecare grupa in parte
	void elibMemorie(void);//in care apelam elibMem pentru fiecare grupa in parte
};
