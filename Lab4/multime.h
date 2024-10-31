#pragma once

class Multime
{
    private:
        int dim;
        int *date;
        int n;
    public:
        Multime();
        Multime(int d);
        ~Multime();
        void adauga(int nr);
        void extrage(int nr);
        void afisare();
};
