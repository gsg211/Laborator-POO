#include <iostream>
#include "Catalog.h"

int main()
{
	int operatie=1;
	PFnComparare unPointerLaOFunctieDeComparare;
	Catalog catalogulAnului2; 
	
	catalogulAnului2.citire();
	std::cout << "\n Initial:";
	catalogulAnului2.afisare();
	do {
		do { 
			std::cout << "Ce doriti sa efectuati?" << std::endl;
			std::cout << "0.Iesire din program;" << std::endl;
			std::cout << "1 -sortarealfabetica a numelor;" << std::endl;
			std::cout << "2 -sortare descrescatoare dupa nota;" << std::endl;
			std::cout << "3 -sortare dupa lungimea numelui -crescator." <<std:: endl;
            std::cout<<"operatie= ";
			std::cin >> operatie; 
		} while ((operatie<0) || (operatie>3));
		switch (operatie) 
		{
		case 1:
		    std::cout << "1-sortare alfabetica a numelor;" << std::endl;
			unPointerLaOFunctieDeComparare = compNameAlph;
            catalogulAnului2.setComparator(unPointerLaOFunctieDeComparare);
			break;
		case 2:
			std::cout << "2 -sortare descrescatoare dupa nota;" << std::endl;
			unPointerLaOFunctieDeComparare = compGrDesc;
			catalogulAnului2.setComparator(unPointerLaOFunctieDeComparare);
			break;
		case 3:
			std::cout << "3 -sortare dupa lungimea numelui -crescator." << std::endl;
			unPointerLaOFunctieDeComparare = comNameLen;
			catalogulAnului2.setComparator(unPointerLaOFunctieDeComparare);
			break;
		default:
			std::cout << "Sfarsitul executiei programului." << std::endl;
		}
		catalogulAnului2.sortare();
		std::cout << "\n Dupa sortare case "<<operatie<<": ";
		catalogulAnului2.afisare();
	} while (operatie);
	
	catalogulAnului2.elibMemorie();//folositi si cataloagele celorlalti ani de studiu sau stergeti declaratiile variabilelor nefolosite in program

	return 0;
}
