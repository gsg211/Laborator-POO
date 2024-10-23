#include <iostream>
#include "Grupa.h"
#include "Student.h"
#include <cstring>

void Grupa::read()
{
    std::cout<<"Citire grupa\n\n";
    std::cout<<"Numar studenti: ";
    std::cin>>nrStud;

    char buffer[50];
    std::cout<<"Nume grupa: ";
    std::cin.ignore(1);
    std::cin.getline(buffer,50);
    numeGrupa=new char[strlen(buffer)+1];
    strcpy(numeGrupa,buffer);

    tabStudenti=new student[nrStud];
    std::cout<<"Studenti grupa "<<numeGrupa<<":\n";
    for(int i=0;i<nrStud;i++)
    {
        tabStudenti[i].read();
    }
}

void Grupa::print()
{
    std::cout<<"\nAfisare Grupa "<<numeGrupa<<"\n\n";
    std::cout<<"Numar studenti: "<<nrStud<<"\n\n";

    for(int i=0;i<nrStud;i++)
    {
        std::cout<<"Student "<<i<<":\n";
        tabStudenti[i].print();
    }
}

void Grupa::bSort()
{
    bool sorted=false;
    do
    {
        sorted=true;
        for(int i=0;i<nrStud-1;i++)
        {
            if(comparator(tabStudenti[i],tabStudenti[i+1]))
            {
                swapStudent(tabStudenti[i],tabStudenti[i+1]);
                sorted=false;
            }
        }
    } while (!sorted);
}

void Grupa::elibMem()
{
    for(int i=0;i<nrStud;i++)
    {
        tabStudenti[i].erase();
    }
    delete tabStudenti;
    
}