#include <iostream>
#include "automobil.h"

using namespace Vehicule;

int main()
{
    automobil a1((char *)"Opel");
    a1.afisare();
    automobil a2(a1);
    a2.citire();

    //a1=a2;
    std::cout<<(a1==a2);
    return 0;
}