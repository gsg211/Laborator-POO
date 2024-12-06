# include "carte.h"
using namespace::std;
namespace biblioteca
{
    carte::carte(char* title)
    {
        cout<<"apel constructor\n\n";
        if(title!=nullptr)
        {
            this->titlu=new char[strlen(title)+1];
            strcpy_s(this->titlu, strlen(title)+1,title);
        }
        else
        {
            this->titlu=nullptr;
        }
    }
    carte::carte(const carte &c)
    {
        cout<<"apel constructor copiere\n\n";

        if(c.titlu!=nullptr)
        {
            this->titlu=new char[strlen(c.titlu)+1];
            strcpy_s(this->titlu, strlen(c.titlu)+1,c.titlu);
        }
        else
        {
            this->titlu=nullptr;
        }
    }
    carte::~carte()
    {
        cout<<"apel destructor\n\n";
        if(this->titlu!=nullptr)
        {
            delete [] this->titlu;
            titlu=nullptr;
        }
    }

    carte& carte::operator=(const carte &c)
    {
        cout<<"apel operator assignare\n\n";
        //verific self assigment
        if(&c==this)
        {
            return *this;
        }

        if(this->titlu!=nullptr)
        {
            delete [] this->titlu;
        }

        if(c.titlu!=nullptr)
        {
            this->titlu=new char[strlen(c.titlu)+1];
            strcpy_s(this->titlu, strlen(c.titlu)+1,c.titlu);
        }
        else
        {
            this->titlu=nullptr;
        }
        return *this;
    }
    void carte::citire()
    {
        cout<<"citire obiect\n\n";
        cout<<"Introduceti titlul cartii: ";
        char buffer[64]="";
        cin.getline(buffer,64);

        if(this->titlu!=nullptr)
        {
            delete [] this->titlu;
        }

        this->titlu=new char[strlen(buffer)+1];
        strcpy_s(this->titlu, strlen(buffer)+1,buffer);

    }
    void carte::afisare()
    {
        if(titlu!=nullptr)
        {
            cout<<"Titlu: "<<titlu<<"\n";
        }
        else
        {
            cout<<"Titlu: indisponibil"<<"\n";
        }
    }
}
