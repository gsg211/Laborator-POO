#include "electrocasnice.h"

using namespace electrocasnice;

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
    std::cin.ignore(1);
}


CuptorCuInductie::CuptorCuInductie(char* marca,int temperatura,float consum):cuptor(marca,temperatura)
{
    this->consum=consum;
}
CuptorCuInductie::CuptorCuInductie(const CuptorCuInductie &c):cuptor(c)
{
    this->consum=c.consum;
}
CuptorCuInductie::~CuptorCuInductie()
{
    this->consum=0;
}
void CuptorCuInductie::afisare()
{
    cuptor::afisare();
    std::cout<<"consum: "<<consum<<"\n\n";
}
void CuptorCuInductie::citire()
{
    cuptor::citire();
    std::cin.ignore();
    std::cout<<"consum: ";
    std::cin>>consum;
}

//operatori friend 
namespace electrocasnice
{
    cuptor& operator+=(cuptor &c,int temp)//NU se pune const!
    {
        c.temperaturaMaxima=c.temperaturaMaxima+temp;
        return c;
    }

    // ++c 
    //asta are referinta pt ca
    //asta returneaza referinta la c care inca mai exista dupa
    cuptor& operator++(cuptor &c)
    {
        c.temperaturaMaxima++;
        return c;
    }
    //c++
    //nu are referinta pt ca
    //returneaza temp, care e DISTRUS dupa 
    cuptor operator++(cuptor &c,int dummy)//acel dummy e pus ca sa le diferentieze
    {
        cuptor temp(c);
        c.temperaturaMaxima++;
        return temp;
    }

    //Param return: inputstream (NEAPARAT REFERINTA) 
    //e functia de citire basic dar cu c. in loc de this->
    //si input in loc de std::cin

    
    /*
   std::istream& operator>>(std::istream &input,cuptor &c)
    {
        char buffer[64];
        std::cout<<"citire stream\n";
        std::cout<<"Marca: ";
        input.getline(buffer,64);
        if(c.marca!=nullptr)
        {
            delete[] c.marca;
        }
        c.marca=new char[strlen(buffer)+1];
        strcpy_s(c.marca,strlen(buffer)+1,buffer);

        std::cout<<"Temperatura maxima: ";
        //std::cin.ignore(1);
        input>>c.temperaturaMaxima;
        std::cout<<"\n";
        std::cin.ignore(1);
        return input; //neaparat return la stream
    }*/

    //testat si merge si pt inlantuire
    std::istream& operator>>(std::istream &input,cuptor &c)
    {
        c.citire();
        return input; //neaparat return la stream
    }


    //acelasi lucru
    std::ostream& operator<<(std::ostream& output,cuptor &c)
    {
        output<<"afisare stream\n\n";
        output<<"Marca e: "<<c.marca<<"\n";
        output<<"Temperatura maxima e: "<<c.temperaturaMaxima<<"\n\n";

        return output;
    }
}