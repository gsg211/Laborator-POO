#include <iostream>
#include "carte.h"
#include <cstring>

Carte::Carte()
{
    this->titlu=nullptr;
    this->an=0;
    this->pret=0;
}

Carte::Carte(char *titlu, int an,double pret)
{

    this->titlu=titlu;
    this->an=an;
    this->pret=pret;
}

Carte::~Carte()
{

    delete [] titlu;
    titlu=nullptr;
    this->an=0;
    this->pret=0;
}

void Carte::afisare()
{
    std::cout<<"<---Afisare carte:--->\n";
    
    if(titlu!=nullptr)
    {
        std::cout<<"titlu: "<<titlu<<"\n";
    }
    std::cout<<"an publicare: "<<an<<"\n";
    std::cout<<"pret: "<<pret<<"\n";
    std::cout<<"\n";
}

void Carte::citire()
{
    char buffer[100];
    
    std::cout<<"Citire carte:\n";

    std::cout<<"titlu: ";
    std::cin.ignore();
    std::cin.getline(buffer,100);

    this->titlu=new char[strlen(buffer)+2];
    strcpy(this->titlu,buffer);

    std::cout<<"an publicare: ";
    std::cin>>this->an;

    std::cout<<"pret: ";
    std::cin>>this->pret;

    std::cout<<"\n";
}

void swapCarte(Carte &a,Carte &b)
{
    Carte aux=a;
    a=b;
    b=aux;
}

int Carte::getAn()
{
    return this->an;
}



void SortCarti(Carte* carti,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(carti[i].getAn()>carti[j].getAn())
            {
                swapCarte(carti[i],carti[j]);
            }
        }
    }
}


void citireVector(Carte *carti,int n)
{
    std::cout<<"Citire CARTI:\n";
    for(int i=0;i<n;i++)
    {
        carti[i].citire();
    }
}

void AfisareVector(Carte *carti,int n)
{
    std::cout<<"Afisare CARTI:\n";
    for(int i=0;i<n;i++)
    {
        carti[i].afisare();
    }
}