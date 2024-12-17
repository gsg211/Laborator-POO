#include "cerc.h"

Cerc::Cerc():Figura()
{
    xc=0;
    yc=0;
    raza=0;
}
Cerc::Cerc(const char* cul, double xxc, double yyc, double r):Figura()
{
    xc=xxc;
    yc=yyc;
    raza=r;
}
Cerc::~Cerc()
{
    xc=0;
    yc=0;
    raza=0;
}
double Cerc::Aria()
{
    return (raza*raza)*3.14;    
}
double Cerc::Perimetru()
{
    return 2*3.14*raza;
}
void Cerc::Afisare()
{
    Figura::Afisare();
    std::cout<<"x centru: "<<xc<<"\n";
    std::cout<<"y centru: "<<yc<<"\n";
    std::cout<<"raza: "<<raza<<"\n";
}