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
        bool operator ==(Complex c2);
        Complex operator + (const Complex &c2);
        Complex operator - (const Complex &c2);
        Complex operator * (const Complex &c2);

        double operator~(); //modulul
};