#include <iostream>
#include "complex.h"

Complex::Complex()
{
    re=0;
    im=0;
}

Complex::Complex(int re,int im)
{
    this->re=re;
    this->im=im;
}

Complex::Complex(const Complex &c)
{
    this->re=c.re;
    this->im=c.im;
}

Complex::~Complex()
{
    re=0;
    im=0;
}

bool Complex::egal(Complex c2)
{
    return c2.re==this->re && c2.im==this->im;
}

Complex Complex::adunare(Complex c2)
{
    Complex c3;
    c3.re=this->re+c2.re;
    c3.im=this->im+c2.im;
    return c3;
}

void Complex::afisare()
{
    std::cout<<this->re<<" + "<<this->im<<"i";
}

void Complex::citire()
{
    std::cout<<"Citire numar complex\n";
    
    std::cout<<"Parte reala: ";
    std::cin>>this->re;

    std::cout<<"Parte imaginara: ";
    std::cin>>this->im;
}