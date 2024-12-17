#include "triunghi.h"
#include "math.h"
Triunghi::Triunghi(const char* cul, double aa, double bb, double cc):Figura(cul)
{
    a=aa;
    b=bb;
    c=cc;
}

Triunghi::Triunghi()
{
    a=1;
    b=1;
    c=1;
}

Triunghi::~Triunghi()
{
    a=0;
    b=0;
    c=0;
}

void Triunghi::Afisare()
{
    Figura::Afisare();
    std::cout<<"\na= "<<a<<"\n";
    std::cout<<"b= "<<b<<"\n";
    std::cout<<"c= "<<c<<"\n";
}

double Triunghi::Perimetru()
{
    return a+b+c;
}

double Triunghi::Aria()
{
    double p= (a+b+c)/2;
    return  sqrt(p*(p-a)*(p-b)*(p-c));
}

