#include "manual.h"

using namespace std;
namespace biblioteca
{
    manual::manual(char * titlu, int clasa):carte(titlu)
    {
        this->clasa=clasa;
    }
    manual::manual(const manual &m):carte(m)
    {
        this->clasa=m.clasa;
    }
    manual::~manual()
    {
        this->clasa=0;
    }
    manual& manual::operator=(const manual &m)
    {
        if(this==&m)
        {
            return *this;
        }
        carte::operator=(m);
        this->clasa=m.clasa;
        return *this;
    }

    void manual::citire()
    {
        carte::citire();
        std::cout<<"Introduceti clasa: ";
        cin>>clasa;
        cin.ignore();
    }
    void manual::afisare()
    {
        carte::afisare();
        cout<<"Clasa: "<<clasa<<"\n";
    }


}