#include <iostream>
#include <cstring>
#include "contact.h"

Contact::Contact()
{
    this->nume=nullptr;
    this->prenume=nullptr;
    this->telefon=nullptr;
    this->mail=nullptr;
}

Contact::Contact(char* nume,char* prenume,char* telefon,char *mail)
{
    this->nume=new char[strlen(nume)+1];
    strcpy(this->nume,nume);

    this->prenume=new char[strlen(prenume)+1];
    strcpy(this->prenume,prenume);

    this->telefon=new char[strlen(telefon)+1];
    strcpy(this->telefon,telefon);

    this->mail=new char[strlen(mail)+1];
    strcpy(this->mail,mail);
}

//deep copy constructor
Contact::Contact(Contact &c)
{
    this->nume=new char[strlen(c.getNume())+1];
    strcpy(this->nume,c.getNume());

    this->prenume=new char[strlen(c.getPrenume())+1];
    strcpy(this->prenume,c.getPrenume());

    this->telefon=new char[strlen(c.getTel())+1];
    strcpy(this->telefon,c.getTel());

    this->mail=new char[strlen(c.getMail())+1];
    strcpy(this->mail,c.getMail());
}


Contact::~Contact()
{
    if(nume)
    {
        delete[] nume;
        nume=nullptr;
    }
    if(prenume)
    {
        delete[] prenume;
        prenume=nullptr;
    }
    if(telefon)
    {
        delete[] telefon;
        telefon=nullptr;
    }
    if(mail)
    {
        delete[] mail;
        mail=nullptr;
    }
}

char* Contact::getNume()
{
    return this->nume;
}
char* Contact::getPrenume()
{
    return this->prenume;
}
char* Contact::getTel()
{
    return this->telefon;
}
char* Contact::getMail()
{
    return this->mail;
}

void Contact::afisare()
{
    std::cout<<"<---Afisare contact--=>\n";

    std::cout<<"Nume: "<<nume<<"\n";
    std::cout<<"Prenume: "<<prenume<<"\n";
    std::cout<<"Numar telefon: "<<telefon<<"\n";
    std::cout<<"Mail: "<<mail<<"\n";
}

void Contact::citire()
{
    char buffer[100];
    std::cout<<"<---Citire contact--->\n";
    
    std::cout<<"Nume:";
    std::cin.getline(buffer,100);
    nume=new char[strlen(buffer)+1];
    strcpy(nume,buffer);


    std::cout<<"Prenume:";
    std::cin.getline(buffer,100);
    prenume=new char[strlen(buffer)+1];
    strcpy(prenume,buffer);


    std::cout<<"Telefon:";
    std::cin.getline(buffer,100);
    telefon=new char[strlen(buffer)+1];
    strcpy(telefon,buffer);


    std::cout<<"Mail:";
    std::cin.getline(buffer,100);
    mail=new char[strlen(buffer)+1];
    strcpy(mail,buffer);

}

ListaContacte::ListaContacte()
{
    this->date=nullptr;
    this->n=0;
    this->dim=0;
}

ListaContacte::ListaContacte(int dim)
{
    this->date=new Contact[dim];
    this->n=0;
    this->dim=dim;
}

void ListaContacte::adauga()
{
    if(n==dim+1)
    {
        return;
    }
    date[n].citire();
    n++;
}

bool egal(Contact a,Contact b)
{
    bool c1=strcmp(a.getNume(),b.getNume())==0;
    bool c2=strcmp(a.getPrenume(),b.getPrenume())==0;
    bool c3=strcmp(a.getTel(),b.getTel())==0;
    bool c4=strcmp(a.getMail(),b.getMail())==0;

    return c1 & c2 & c3 & c4;
}

void swap(Contact &a,Contact &b)
{
    Contact aux=a;
    a=b;
    b=aux;
}

void ListaContacte::stergere()
{
    Contact c;
    std::cout<<"Introdu contactul pentru stergere:\n"; 
    c.citire();
    bool gasit=false;

    for(int i=0;i<n;i++)
    {
        if(egal(date[i],c))
        {
            gasit=true;
            n--;
        }
        if(gasit)
        {
            swap(date[i],date[i+1]);
        }
    }
}

void ListaContacte::afisare()
{
   for(int i=0;i<n;i++)
    {
        date[i].afisare();
        std::cout<<"\n";
    } 
}