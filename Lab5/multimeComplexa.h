#pragma once
#include "complex.h"
#define DIMMAX 10
class MultimeC
{
    private:
        Complex *date;
        int dim;
        int n;
    public:
        MultimeC();
        MultimeC(int d);
        ~MultimeC();

        void adauga(Complex c);
        void extrage(Complex c);
        void afisare();

};