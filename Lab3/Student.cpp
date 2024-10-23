#include <iostream>
#include "Student.h"
#include <cstring>

void student::setNota(int n)
{
    nota=n;
}

int student::getNota()
{
    return nota;
}

void student::setNume(char* str)
{
    nume=new char[strlen(str)+1];
    strcpy(nume,str);
}

void student::print()
{
    std::cout<<"\nNume: "<<nume<<"\n";
    std::cout<<"nota: "<<nota<<"\n\n"; 

}

void student::read()
{
    int grade;
    char buffer[50];

    std::cout<<"\nNume: ";
    std::cin.get(buffer,50);
    std::cin.get();
    setNume(buffer);

    std::cout<<"Nota: ";
    std::cin>>nota;
    std::cin.get();
    std::cout<<"\n";

}

void student::erase()
{
    delete nume;
    nume=0;
    nota=0;
}

char* student::getNume()
{
    return nume;
}


int compNameAlph(student a, student b)
{
    return strcmp(a.getNume(),b.getNume()) > 0 ? true : false;
}
int compGrDesc(student a, student b)
{
    return a.getNota()<b.getNota();
}
int comNameLen(student a, student b)
{
    return strlen(a.getNume())>strlen(b.getNume());
}
// swap obiecte Student, pentru bubbleSort
void swapStudent(student &a, student &b)
{
    student aux=a;
    a=b;
    b=aux;
}
