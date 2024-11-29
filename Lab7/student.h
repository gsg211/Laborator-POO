#pragma once
#include "persoana.h"
#include "data.h"

class Student: public Persoana
{
    private:
        int grupa;
    public:
        Student(char* nume=nullptr,char* prenume=nullptr,Data *dataNastere=nullptr,int grupa=0);
        ~Student();
        int getGrupa();
        void afisare();
};

void sortare(Student** v, int n);
void afisare(Student** v, int n);