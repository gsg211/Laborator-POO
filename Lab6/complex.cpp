#include <iostream>
#include "complex.h"
#include <math.h>
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

bool Complex::operator ==(Complex c2)
{
    return c2.re==this->re && c2.im==this->im;
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

Complex Complex::operator +(const Complex &c2)
{
    Complex rez;
    rez.re=this->re+c2.re;
    rez.im=this->im+c2.im;
    return rez;
}

Complex Complex::operator -(const Complex &c2)
{
    Complex rez;
    rez.re=this->re-c2.re;
    rez.im=this->im-c2.im;
    return rez;
}

Complex Complex::operator *(const Complex &c2)
{
    Complex rez;
    rez.re=this->re*c2.re-this->im*c2.im; 
    rez.im=this->re*c2.im+c2.re*this->im;
    return rez;
}

double Complex::operator~()
{
    return sqrt(re*re+im*im);
}