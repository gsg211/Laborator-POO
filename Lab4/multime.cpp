#include "multime.h"
#include <iostream>
#define dimMax 100

Multime::Multime()
{
    dim=dimMax;
    date=new int[dim];
    n=0;
}

Multime::Multime(int d)
{
    dim=d;
    date=new int[dim];
    n=0;
}

Multime::~Multime()
{
    dim=-1;
    n=0;
    delete [] date;
}

void Multime::afisare()
{
    std::cout<<"\nMultimea este:\n{";
    for(int i=0;i<n;i++)
    {
        std::cout<<date[i];
        if(i!=n-1)
        {
            std::cout<<" ,";
        }
    }
    std::cout<<"}\n";
}

void Multime::adauga(int nr)
{
    for(int i=0;i<n;i++)
    {
        if(date[i]==nr)
        {
            return;
        }       
    }
    date[n]=nr;
    n++;
}

void Multime::extrage(int nr)
{
    bool gasit=false;
    for(int i=0;i<n;i++)
    {
        if(date[i]==nr && !gasit)
        {
           gasit=true;
           n--;
        }
        if(gasit)
        {
            int aux=date[i];
            date[i]=date[i+1];
            date[i+1]=aux;
        }       
    }
}