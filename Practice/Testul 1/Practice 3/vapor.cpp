#include "vapor.h"
#include <iostream>
#include <cstring>

using namespace Porturi;

vapor::vapor()
{
    nrContainere=150;
    inMiscare=true;
    destinatie=nullptr;
}

vapor::vapor(char *destinatie,bool inMiscare,int nrContainere)
{
     this->destinatie=new char[strlen(destinatie)+1];
     strcpy(this->destinatie,destinatie);

    this->inMiscare=inMiscare;
    this->nrContainere=nrContainere;
}
    
vapor::~vapor()
{
    if(destinatie!=nullptr)
    {
        delete [] destinatie;
        destinatie=nullptr;
    }
    nrContainere=-1;
    inMiscare=false;    
}

void vapor::afisare()
{
    std::cout<<"<--Afisare vapor-->\n";
    std::cout<<"Numar Containere: "<<nrContainere<<"\n";
    std::cout<<"Este in miscare?: "<<inMiscare<<"\n";
    std::cout<<"Destinatie: "<<destinatie<<"\n";    
}
void vapor::citire()
{
    //dealoca numele deja alocat
    if(destinatie!=nullptr)
    {
        delete [] destinatie;
    }

    std::cout<<"<--Citire vapor-->\n";

    std::cout<<"Numar Containere: ";
    std::cin>>nrContainere;

    std::cout<<"Este in miscare {0/1}?:";
    std::cin>>inMiscare;
    
    std::cout<<"Destinatie: ";
    char buffer[100];
    std::cin.ignore();
    std::cin.getline(buffer,100);
    destinatie=new char[strlen(buffer)+1];
    strcpy(destinatie,buffer);

    std::cout<<"\n";
}

void vapor::citire(char *destinatie)
{
    this->destinatie=new char[strlen(destinatie)+1];
    strcpy(this->destinatie,destinatie);
    std::cout<<"<--Citire vapor-->\n";

    std::cout<<"Numar Containere: ";
    std::cin>>nrContainere;

    std::cout<<"Este in miscare {0/1}?:";
    std::cin>>inMiscare;

    std::cout<<"\n";
}

bool vapor::getInMiscare()
{
    return inMiscare;
}
void vapor::setInMiscare(bool inMiscare)
{
    this->inMiscare=inMiscare;
}

int vapor::getNrContainere()
{
    return nrContainere;
}
void vapor::setNrContainere(int nrContainere)
{   
    this->nrContainere=nrContainere;
}