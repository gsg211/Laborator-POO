#include <iostream>
#include "multimeComplexa.h"
#include "complex"

MultimeC::MultimeC()
{
    this->date=new Complex[DIMMAX];
    this->n=0;
    this->dim=0;
}

MultimeC::MultimeC(int dim)
{
    this->date=new Complex[dim];
    this->dim=dim;
    this->n=0;
}

MultimeC::~MultimeC()
{
    delete [] this->date;
    this->date=nullptr;
    this->n=0;
    this->dim=0;
}


void MultimeC::afisare()
{
    std::cout<<"\nMultimea este:\n{";
    for(int i=0;i<n;i++)
    {
        date[i].afisare();
        if(i!=n-1)
        {
            std::cout<<" ,";
        }
    }
    std::cout<<"}\n";
}

void MultimeC::adauga(Complex nr)
{
    for(int i=0;i<n;i++)
    {
        if(date[i].egal(nr))
        {
            return;
        }       
    }
    date[n]=nr;
    n++;
}

void MultimeC::extrage(Complex nr)
{
    bool gasit=false;
    for(int i=0;i<n;i++)
    {
        if(date[i].egal(nr) && !gasit)
        {
           gasit=true;
           n--;
        }
        if(gasit)
        {
            Complex aux=date[i];
            date[i]=date[i+1];
            date[i+1]=aux;
        }       
    }
}
