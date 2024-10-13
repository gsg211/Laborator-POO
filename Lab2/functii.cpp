#include <iostream>
#include "header.h"
#include <cstring>

//functii problema 1
void student::Read()
{
    std::cout<<"Numar matricol: ";
    std::cin>>nrMat;

    
    std::cout<<"Nume: ";
    char buff[50];
    std::cin.ignore(); //trece peste end line
    std::cin.get(buff,50);

    nume=new char[strlen(buff)];
    strcpy(nume,buff);

    std::cout<<"Gen: ";
    std::cin>>gen;
    std::cout<<"\n";

}

void student::Write()
{
    std::cout<<"Numar matricol: "<<nrMat<<"\n";
    std::cout<<"Nume: "<<nume<<"\n";
    std::cout<<"Gen: "<<gen<<"\n\n";
}


//functii tema
void catalog::Create(int studentCount)
{
    studentNumber=studentCount;
    students=new char*[studentNumber];
    Read();
}

void catalog::Delete()
{
    for(int i=0;i<studentNumber;i++)
    {
        delete [] students[i];
        students[i]=0;
    }
    delete[] students;
    students=0;
    studentNumber=0;
}

void catalog::Read()
{
    if(studentNumber==0)
    {
        std::cout<<"\nEroare: nu exista studenti \n";
        return;
    }

    char buffer[200];
    std::cout<<"\n<---Citire Catalog--->\n";

    for(int i=0;i<studentNumber;i++)
    {
        std::cout<<i<<"->Nume: ";
        std::cin.getline(buffer,200);

        students[i]=new char[strlen(buffer)];
        if(students[i]==0)
        {
            std::cout<<"\nEroare: alocare esuata \n";
        }

        strcpy(students[i],buffer);
    }
    std::cout<<'\n';
}

void catalog::Write()
{
    if(studentNumber==0)
    {
        std::cout<<"\nEroare: nu exista studenti \n";
        return;
    }
    
    std::cout<<"\n<---Scriere Catalog--->\n";
    for(int i=0;i<studentNumber;i++)
    {
        std::cout<<i<<"-> Name: "<<students[i]<<"\n";
    }
    std::cout<<"\n\n";
}

void catalog::sortLen()
{
    for(int i=0;i<studentNumber;i++)
    {
        for(int j=i+1;j<studentNumber;j++)
        {
            if(strlen(students[i]) > strlen(students[j]))
            {
                char *aux;
                aux=students[i];
                students[i]=students[j];
                students[j]=aux;
            }
        }
    }
}

void catalog::sortName()
{
    for(int i=0;i<studentNumber;i++)
    {
        for(int j=i+1;j<studentNumber;j++)
        {
            if(strcmp(students[i],students[j])>0)
            {
                char *aux;
                aux=students[i];
                students[i]=students[j];
                students[j]=aux;
            }
        }
    }
}