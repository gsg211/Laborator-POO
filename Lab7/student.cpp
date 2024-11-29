#include "student.h"
#include <iostream>

Student::Student(char* nume,char* prenume,Data *dataNastere,int grupa):Persoana(nume,prenume,dataNastere)
{
    this->grupa=grupa;
}

Student::~Student()
{
    Persoana::~Persoana();
    this->grupa=0;
}

int Student::getGrupa()
{
    return grupa;
}

void Student::afisare()
{
    Persoana::afisare();
    std::cout<<"Grupa:"<<grupa<<"\n";
    std::cout<<"<------>\n\n";

}

void sortare(Student** v, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if(v[i]->getGrupa() > v[j]->getGrupa())
            {
                Student *aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
}
void afisare(Student** v, int n)
{
    for(int i=0;i<3;i++)
    {
        std::cout<<"<===Grupa===>";
        v[i]->afisare();
        std::cout<<"<======>";
    }
}
