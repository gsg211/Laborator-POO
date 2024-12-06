#include <iostream>
#include "electrocasnice.h"
using namespace electrocasnice;

int main()
{
    cuptor c1((char*)"Philips",200);
    c1.afisare();
    cuptor c2((char*)"penny",100);
    c2.afisare();
    cuptor c3((char*)"ex");
    c3=c2;
    c3++;
    std::cin>>c3>>c2;
    std::cout<<c3;
    std::cout<<c2;

    //CuptorCuInductie ci1((char*)"Andrew",250,102.2);
    //CuptorCuInductie ci2(ci1);

    //ci1.afisare();
    //ci2.afisare();
    //ci2.citire();
    //ci2.afisare();

    //std::cout<<ci2;

    return 0;
}