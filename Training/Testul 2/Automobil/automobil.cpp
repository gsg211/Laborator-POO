#include "automobil.h"


namespace Vehicule{

automobil::automobil()
{
    this->marca=nullptr;
}


automobil::automobil(char * marca)
{
    this->marca=new char[strlen(marca)+1];
    strcpy_s(this->marca,strlen(marca)+1,marca);

}
automobil::automobil(const automobil &c)
{
    this->marca=new char[strlen(c.marca)+1];
    strcpy_s(this->marca,strlen(c.marca)+1,c.marca);
}

automobil::~automobil()
{
    if(this->marca!=nullptr)
    {
        delete [] this->marca;
        marca=nullptr;
    }
}

void automobil::afisare()
{
    std::cout<<"Marca este: "<<marca<<"\n";
}

void automobil::citire()
{
    char buffer[64];
    std::cout<<"Marca: ";
    std::cin.getline(buffer,64);

    if(marca!=nullptr)
    {
        delete [] marca;
    }
   marca=new char[strlen(buffer)+1];
    strcpy_s(marca,strlen(buffer)+1,buffer);
}

automobil& automobil::operator=(const automobil &c)
{
    if(this->marca)
    {
        delete [] this->marca;
    }

    this->marca=new char[strlen(c.marca)+1];
    strcpy_s(this->marca,strlen(c.marca)+1,c.marca);
    return *this;
}

bool operator==(const automobil &a1, const automobil &a2)
{
    return strcmp(a1.marca, a2.marca) == 0;
}

}