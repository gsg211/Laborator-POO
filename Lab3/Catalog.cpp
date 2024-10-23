#include <iostream>
#include "Grupa.h"
#include "Catalog.h"
#include <cstring>

void Catalog::citire()
{
    std::cout<<"nr grupe: ";
    std::cin>>nrGrupe;
    tabGrupe=new Grupa[nrGrupe];


    for (int i = 0; i < nrGrupe; i++)
    {
       tabGrupe[i].read();
    }
    
}

void Catalog::afisare()
{
    std::cout<<"Afisare grupe: \n";
    for (int i = 0; i < nrGrupe; i++)
    {
       tabGrupe[i].print();
    }
}

void Catalog::sortare()
{
    for (int i = 0; i < nrGrupe; i++)
    {
       tabGrupe[i].bSort();
    }
}


void Catalog::elibMemorie()
{
    for(int i=0;i<nrGrupe;i++)
    {
        tabGrupe[i].elibMem();
    }
    delete tabGrupe;
    
}

void Catalog::setComparator(PFnComparare comparator)
{
    for(int i=0;i<nrGrupe;i++)
    {
        tabGrupe[i].comparator=comparator;
    }
}