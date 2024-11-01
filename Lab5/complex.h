#pragma once

class Complex
{
    private:
        int re;
        int im;
    public:
        Complex();
        Complex(int re,int im);
        Complex(const Complex &c);
        ~Complex();

        void citire();
        void afisare();
        bool egal(Complex c2);
        Complex adunare(Complex c2);
};