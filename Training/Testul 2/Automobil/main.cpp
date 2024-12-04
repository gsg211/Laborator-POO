#include <iostream>
#include "automobil.h"

using namespace Vehicule;

int main()
{
    std::cout<<"testare metode\n\n";
    automobil a1((char *)"Opel");
    a1.afisare();
    automobil a2(a1);
    //a2.citire();

    //a1=a2;
    std::cout<<(a1==a2)<<"\n";

    motocicleta m1((char*)"Suzuki",20.8);
    m1.afisare();

    motocicleta m2;
    m2=m1;
    //m2.citire();
    m2.afisare();
    std::cout<<(m1==m2)<<"\n";
    std::cout<<"inceput program\n\n";


    int n=4;
    automobil *vector[4];
    //std::cin.ignore(1000,'\n');
    //std::cin.getline();
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            vector[i]=new automobil;
        }
        else
        {
            vector[i]=new motocicleta;
        }
        vector[i]->citire();
    }
    for(int i=0;i<n;i++)
    {
        vector[i]->afisare();
    }

    return 0;
}