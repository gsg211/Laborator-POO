#include <iostream>
#include "header.h"

#define n 3

int main()
{
    /*
    //problema 1
    student *s;
    s=new student[n];
    if(s==0)
    {
        std::cout<<"Eroare la alocare \n";
    }

    //citiri si afisari
    for(int i=0;i<n;i++)
    {
        s[i].Read();
    }
    for(int i=0;i<n;i++)
    {
        s[i].Write();
        
    }
    delete[] s;
    */

    //Problema tema:
    catalog c;
    c.Create(n);
    c.Write();

    std::cout<<"Sortare alfabetica:";
    c.sortName();
    c.Write();

    std::cout<<"Sortare dupa Lungime:";
    c.sortLen();
    c.Write();

    c.Delete();
    return 0;
}