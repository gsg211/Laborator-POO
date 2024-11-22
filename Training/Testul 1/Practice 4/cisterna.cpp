#include <iostream>
#include <cstring>
#include "cisterna.h"

using namespace Transporturi;

cisterna::cisterna()
{
    transportAvizat=false;
    continut=nullptr;
    cantitate=0;
}
cisterna::cisterna(char* continut,float cantitate,bool transportAvizat)
{
    this->continut=new char[strlen(continut)+1];
    strcpy(this->continut,continut);

    this->cantitate=cantitate;
    this->transportAvizat=transportAvizat;

}
cisterna::~cisterna()
{
    if(continut!=nullptr)
    {
        delete [] continut;
        continut=nullptr;
    }
    cantitate=0;
    transportAvizat=0;
}

void cisterna::afisare()
{
    std::cout<<"<---Afisare--->\n";

    std::cout<<"Aviz: "<<transportAvizat<<"\n";
    

    if(continut!=nullptr)
    {
        std::cout<<"Continut: "<<continut<<"\n";
    }
    else
    {
        std::cout<<"Continut: necunoscut"<<"\n";
    }
    
    std::cout<<"Cantitate: "<<cantitate<<" tone\n\n";
}
void cisterna::citire() 
{
    std::cout<<"<---Citire--->\n";

    std::cout<<"Aviz (1/0): ";
    std::cin>>transportAvizat;
    
    //dealoca pentru a modifica un obiect deja instantiat
    if(continut!=nullptr)
    {
        delete [] continut;
    }

    //citire continut
    char buffer[BUFFERSIZE];
    std::cout<<"Continut: ";
    std::cin.ignore(); //ignora \n de la cin-ul de mai sus
    std::cin.getline(buffer,BUFFERSIZE);
    continut=new char[strlen(buffer)+1];
    strcpy(continut,buffer);


    std::cout<<"Cantitate: ";
    std::cin>>cantitate;

    std::cout<<"\n";

}
void cisterna::citire(float cantitate)
{
    this->cantitate=cantitate;
    std::cout<<"<---Citire--->\n";


    std::cout<<"Aviz (1/0): ";
    std::cin>>transportAvizat;

    if(continut!=nullptr)
    {
        delete [] continut;
    }

    char buffer[BUFFERSIZE];
    std::cout<<"Continut: ";
    std::cin.ignore();
    std::cin.getline(buffer,BUFFERSIZE);
    continut=new char[strlen(buffer)+1];
    strcpy(continut,buffer);

    std::cout<<"\n";
}

char* cisterna::getContinut()
{
    return continut;
}
void cisterna::setContinut(char *continut)
{
    if(this->continut!=nullptr)
    {
        delete [] this->continut;
    }
    this->continut=new char[strlen(continut)+1];
    strcpy(this->continut,continut);
}

float cisterna::getCantitate()
{
    return cantitate;
}
void cisterna::setCantitate(float cantitate)
{
    this->cantitate=cantitate;
}

