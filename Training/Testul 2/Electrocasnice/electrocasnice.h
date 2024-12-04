#pragma once
#include <iostream>
#include <cstring>

namespace electrocasnice
{
    class cuptor
    {
        private:
        char* marca;
        int temperaturaMaxima;

        public:
        cuptor(char * marca=nullptr,int temperatura=180);
        cuptor(const cuptor &c);
        ~cuptor();

        cuptor& operator=(const cuptor &c);

        void afisare();
        void citire();
    };

}