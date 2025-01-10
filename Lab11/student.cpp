#include "student.h"

StudentAC::StudentAC()
{
}

StudentAC::StudentAC(std::string nume, int nota)
{
    this->nume=nume;
    this->nota=nota;
}

void StudentAC::afisare()
{
    std::cout<<"<------------------>\n";
    std::cout<<"NUME STUDENT: "<<nume<<"\n";
    std::cout<<"NOTA: "<<nota<<"\n";
    std::cout<<"<------------------>\n\n";
}

void StudentAC::modificareNota(int notaNoua)
{
    nota=notaNoua;
}   

void AfisareStudenti(std::vector<StudentAC> v)
{
    std::vector<StudentAC>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        it->afisare();
    }
}

std::vector<StudentAC> creareVector(StudentAC *p,int dim)
{
    std::vector<StudentAC> res;

    for(int i=0;i<dim;i++)
    {
        res.push_back(p[i]);
    }
    return res;
}

bool StudentAC::operator<(StudentAC& s)
{
    return this->nota<s.nota;
}

void sortareStudenti(std::vector<StudentAC> &v)
{
    std::sort(v.begin(),v.end());
}
