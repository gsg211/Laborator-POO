#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
class StudentAC
{
    std::string nume;
    int nota;
    public:
    StudentAC();
    StudentAC(std::string nume, int nota);
    void afisare();
    void modificareNota(int notaNoua);

    bool operator<(StudentAC& s);
};

void AfisareStudenti(std::vector<StudentAC> v);
std::vector<StudentAC> creareVector(StudentAC *p,int dim);
void sortareStudenti(std::vector<StudentAC> &v);

