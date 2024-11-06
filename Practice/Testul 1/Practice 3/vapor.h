#pragma once

namespace Porturi
{


    class vapor
    {
    private:
        int nrContainere;
        bool inMiscare;
        char *destinatie;
    public:
        vapor();
        vapor(char *destinatie,bool inMiscare,int nrContainere=150);
        ~vapor();

        void afisare();
        void citire();
        void citire(char *destinatie);

        bool getInMiscare();
        void setInMiscare(bool inMiscare=true);

        int getNrContainere();
        void setNrContainere(int nrContainere);
    };
    
}