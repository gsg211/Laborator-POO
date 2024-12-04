#pragma once
#include <iostream>
#include <cstring>

namespace Vehicule
{
    class automobil
    { 
        private:
            char * marca;
        public:
            automobil();
            automobil(char * marca);
            automobil(const automobil &c);
           ~automobil();

            automobil& operator=(const automobil &c);
            friend bool operator==(const automobil &a1, const automobil &a2);

            virtual void afisare();
            virtual void citire();

    };
    
    bool operator==(const automobil &a1, const automobil &a2);
    
    class motocicleta: public automobil
    {
        private:
        double vitezaMaxima;
        public:
        motocicleta();
        motocicleta(char* marca,double viteza_max);
        motocicleta(const motocicleta &c);
        ~motocicleta();

        motocicleta& operator=(const motocicleta &c);
        friend bool operator==(const motocicleta&m1,const motocicleta&m2);

        void citire();
        void afisare();
    };
    bool operator==(const motocicleta&m1,const motocicleta&m2);
}
