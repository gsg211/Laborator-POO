#pragma once

#include "Student.h"

typedef int(*PFnComparare)(student a, student b);

struct Grupa {
	int nrStud;
	student *tabStudenti; 
	char* numeGrupa;
	void read(void);    
	void print(void);   
	PFnComparare comparator; //pointer catre o functie de comparatie, definita global//acest pointer va fi setat de catre un "obiect" de tip structura Catalog, pentru fiecare grupa in parte.
	void bSort(void); 
	void elibMem(void); //a se vedea implementarea!
};
