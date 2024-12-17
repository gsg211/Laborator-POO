#include <iostream>
#include "figura.h"
#include "cerc.h"
#include "triunghi.h"
#include "dreptunghi.h"

int main()
{
	/*
	Triunghi t1((char*) "mov",3,4,5);
	t1.Afisare();
	std::cout<<"arie "<<t1.Aria()<<"\n";
	std::cout<<"perimetru "<<t1.Perimetru()<<"\n";
	*/
	Figura *array[9];

	array[0]=new Dreptunghi((char*)"RGB",3,5);
	array[1]=new Dreptunghi((char*)"RGB",4.5,2);
	array[2]=new Dreptunghi((char*)"RGB",2,2);
	array[3]=new Triunghi((char*)"RGB",3,4,5);
	array[4]=new Triunghi((char*)"RGB",2,4,3);
	array[5]=new Triunghi((char*)"RGB",6,8,10);
	array[6]=new Cerc((char*)"RGB",0,0,3);
	array[7]=new Cerc((char*)"RGB",0,0,9);
	array[8]=new Cerc((char*)"RGB",0,0,2);

	sortareArie(array,9);

	for(int i=0;i<9	;i++)
	{
		array[i]->Afisare();
		std::cout<<"\narie: "<<array[i]->Aria()<<"\n";
	}

	std::cout<<"\n\nPerimetru maxim "<<PerimetruMax(array,9);
}
