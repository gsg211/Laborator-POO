#pragma once
#include <iostream>
#include <cstring>

namespace biblioteca
{
    class carte
    {
        private:
        char *titlu;
        public:
        carte(char* title=nullptr);
        carte(const carte &c);
        ~carte();

        carte& operator=(const carte &c);
        virtual void citire();
        virtual void afisare();
    };
}