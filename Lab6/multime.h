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
        Multime(const Multime& m);
        ~Multime();

        void adauga(int nr);
        void extrage(int nr);
        void afisare();

        Multime& operator+=(int x);
        Multime operator-=(int x);
        Multime& operator=(const Multime& m);

        Multime operator+=(const Multime& m);
	    Multime operator+(const Multime& m);

        

};