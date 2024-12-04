#pragma once
#include <iostream>
#include <cstring>

class mobilier
{
    private:
        char* culoare;
    public:
        mobilier();
        mobilier(char * culoare);
        mobilier(const mobilier &c);
        ~mobilier();

        void citire();
        void afisare();

        mobilier& operator=(const mobilier c);
};

class canapea: public mobilier
{
    private:
        int nrPersoane;
    public:
        canapea();
        canapea(char *culoare,int nr_Persoane=3);
        canapea(const canapea &c);
        ~canapea();

        void citire();
        void afisare();

        canapea& operator=(const canapea &c);

};

