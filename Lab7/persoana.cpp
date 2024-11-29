#include "persoana.h"
#include <cstring>
#include <iostream>

Persoana::Persoana(const char *nume, const char *prenume, Data *dataNastere) 
{
	if (nume!=nullptr)
	{
		this->nume = new char[strlen(nume) + 1];
		strcpy_s(this->nume, strlen(nume)+1, nume);
	}
    else 
    {
        this->nume=nullptr;
    }

	if (prenume!=nullptr)
	{
		this->prenume = new char[strlen(prenume) + 1];
		strcpy_s(this->prenume, strlen(prenume)+1, prenume);
	}
    else 
    {
        this->prenume=nullptr;
    }
    
    if(dataNastere!=nullptr)
    {
        this->dataNastere= new Data(*dataNastere);
    }
    else
    {
        this->dataNastere= nullptr;
    }
}

Persoana::~Persoana()
{
    if(nume!=nullptr)
    {
        delete [] nume;
        nume=nullptr;
    }
    if(prenume!=nullptr)
    {
        delete [] prenume;
        prenume=nullptr;
    }
    if(dataNastere!=nullptr)
    {
        delete [] dataNastere;
        dataNastere=nullptr;
    }
}

char *Persoana::getNume() 
{
	return nume;
}

char *Persoana::getPrenume() 
{
	return prenume;
}

Data* Persoana::getDataNastere() 
{
	return dataNastere;
}

void Persoana::afisarePersoana()
{
    std::cout<<"<------>\n";
    if(nume!=nullptr)
    {
        std::cout<<"Nume: "<<nume<<"\n";
    }
    if(prenume!=nullptr)
    {
        std::cout<<"Prenume: "<<prenume<<"\n";
    }
    if(dataNastere!=nullptr)
    {
        std::cout<<"Data: ";
        std::cout<<dataNastere->getZi()<<" ";
        std::cout<<dataNastere->getLuna()<<" ";
        std::cout<<dataNastere->getAn()<<"\n";
    }
    
}

void Persoana::afisare()
{
    afisarePersoana();
}

