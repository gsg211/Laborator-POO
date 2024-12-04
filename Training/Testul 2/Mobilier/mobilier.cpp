#include "mobilier.h"


mobilier::mobilier()
{
    this->culoare=nullptr;
}
mobilier::mobilier(char * culoare)
{
    if(culoare!=nullptr)
    {
        this->culoare=new char[strlen(culoare)+1];
        strcpy(this->culoare,culoare);
    }
    else
    {
        culoare=nullptr;
    }
}
mobilier::mobilier(const mobilier &c)
{
    this->culoare=new char[strlen(c.culoare)+1];
    strcpy(this->culoare,c.culoare);
}

mobilier::~mobilier()
{
    if(this->culoare!=nullptr)
    {
        delete [] this->culoare;
        this->culoare=nullptr;
    }
}

void mobilier::citire()
{
    char buffer[64];
    std::cout<<"Culoare: ";
    
    std::cin.getline(buffer,64);

    if(this->culoare!=nullptr)
    {
        delete[] this->culoare;
    }

    this->culoare=new char[strlen(buffer)+1];
    strcpy(this->culoare,buffer);

}
void mobilier::afisare()
{
    std::cout<<"Culoare obiect: "<<culoare<<"\n";
}


canapea::canapea():mobilier()
{
    nrPersoane=0;
}
canapea::canapea(char *culoare,int nr_Persoane):mobilier(culoare)
{
    this->nrPersoane=nr_Persoane;
}
canapea::canapea(const canapea &c):mobilier(c)
{
    this->nrPersoane=c.nrPersoane;
}
canapea::~canapea()
{
 this->nrPersoane=0;
}

void canapea::afisare()
{
    mobilier::afisare();
    std::cout<<"nr persoane= "<<nrPersoane<<"\n";
}

canapea& canapea::operator=(const canapea &c)
{
    canapea ret(c);
    return *this;
}

