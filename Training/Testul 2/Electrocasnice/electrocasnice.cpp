#include "electrocasnice.h"

namespace electrocasnice
{
    cuptor::cuptor(char * marca,int temperatura)
    {
        std::cout<<"constructorul cu parametri s-a apelat\n\n";
        this->temperaturaMaxima=temperatura;
        if(marca!=nullptr)
        {
            this->marca=new char[strlen(marca)+1];
            strcpy_s(this->marca,strlen(marca)+1,marca);
        }
        else
        {
            marca=nullptr;
        }
    }
    cuptor::~cuptor()
    {
        std::cout<<"destructorul s-a apelat\n\n";
        if(this->marca!=nullptr)
        {
            delete [] this->marca;
            this->marca=nullptr;
        }
        this->temperaturaMaxima=0;
    }
    cuptor& cuptor::operator=(const cuptor &c)
    {
        if(this->marca!=nullptr)
        {
            delete [] this->marca;
            this->marca=nullptr;
        }
        if(c.marca!=nullptr)
        {
            this->marca=new char[strlen(c.marca)+1];
            strcpy_s(this->marca,strlen(c.marca)+1,c.marca);
        }
        this->temperaturaMaxima=c.temperaturaMaxima;
        return *this;
    }
    cuptor::cuptor(const cuptor &c)
    {
        if(c.marca!=nullptr)
        {
            this->marca=new char[strlen(c.marca)+1];
            strcpy_s(this->marca,strlen(c.marca)+1,c.marca);
        }
        this->temperaturaMaxima=c.temperaturaMaxima;
    }
    void cuptor::afisare()
    {
        std::cout<<"afisare\n\n";
        std::cout<<"Marca e: "<<marca<<"\n";
        std::cout<<"Temperatura maxima e: "<<temperaturaMaxima<<"\n";
    }
    void cuptor::citire()
    {
        char buffer[64];
        std::cout<<"Citire obiect\n";
        std::cout<<"Marca: ";
        std::cin.getline(buffer,64);
        if(this->marca!=nullptr)
        {
            delete[] this->marca;
        }
        this->marca=new char[strlen(buffer)+1];
        strcpy_s(this->marca,strlen(buffer)+1,buffer);

        std::cout<<"Temperatura maxima: ";
        //std::cin.ignore(1);
        std::cin>>temperaturaMaxima;
    }
}