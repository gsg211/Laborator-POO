#include "minge.h"

minge::minge():jucarie()
{
    diametru=-1;
    condition=UNKNOWN;
    type=NONE;
}
minge::minge(char* mat, int varsta, double pret,int diametru, tip tip_minge, conditie cond_minge):jucarie(mat,varsta,pret)
{
    this->diametru=diametru;
    this->type=tip_minge;
    this->condition=cond_minge;
}
minge::minge(const minge &c):jucarie(c)
{
    this->diametru=c.diametru;
    this->type=c.type;
    this->condition=c.condition;
}
minge::~minge()
{
    cout<<"\nDestructor clasa derivata:Minge apelat";
    diametru=-1;
    condition=UNKNOWN;
    type=NONE;
}

jucarie& minge::operator=(const minge &c)
{
    if(this==&c) 
    {
        return *this;
    }
    jucarie::operator=(c);

    this->diametru=c.diametru;
    this->type=c.type;
    this->condition=c.condition;
    return *this;
}

char* cond_to_string(minge::conditie conditie)
{
    switch (conditie)
    {
        case (minge::umflata):
            return (char*)"umflata";
        case (minge::dezumflata):
            return (char*)"dezumflata";
        case (minge::sparta):
            return (char*)"sparta";
        case (minge::UNKNOWN):
            return (char*)"UNKNOWN";
        default:
            return (char*)"UNKNOWN";
    }
    return (char*)"UNKNOWN";
}

char* type_to_string(minge::tip type)
{
    switch (type)
    {
        case (minge::fotball):
            return (char*)"fotball";
        case (minge::bowling):
            return (char*)"bowling";
        case (minge::tenis):
            return (char*)"tenis";
        case (minge::volley):
            return (char*)"volley";
        case (minge::NONE):
            return (char*)"NONE";
        default:
            return (char*)"NONE";
    }
    return (char*)"NONE";
}



void minge::citire()
{
    jucarie::citire();
    cout<<"Diametru: ";
    cin>>diametru;
    cin.ignore(1,'\n');

    cout<<"Tip:\n1: Fotbal\n2: volley\n3: tenis\n4: bowling\n";
    int optiune;
    cout<<"\nOptiune: ";
    cin>>optiune;
    cin.ignore(1,'\n');
    switch (optiune)
    {
        case 1:
            type=fotball;
            break;
        case 2:
            type=volley;
            break;
        case 3:
            type=tenis;
            break;
        case 4:
            type=bowling;
            break;
        default:
            type=NONE;
            break;
    }

    cout<<"\nConditie:\n1: Umflata\n2: Dezumflata\n3: Sparta\n";
    cout<<"\nOptiune: ";

    cin>>optiune;
    cin.ignore(1,'\n');
    switch (optiune)
    {
        case 1:
            condition=umflata;
            break;
        case 2:
            condition=dezumflata;
            break;
        case 3:
            condition=sparta;
            break;
        default:
            condition=UNKNOWN;
            break;
    }

}
void minge::afisare()
{
    jucarie::afisare();
    cout<<"Diametru: "<<diametru<<"\n";
    cout<<"Tip: "<<type_to_string(type)<<"\n";
    cout<<"Conditie: "<<cond_to_string(condition)<<"\n";
}

istream& operator>>(istream &input, minge &c)
{
    cout<<"\n<--Citire-->";
    char buffer[buffer_size]="\0";
    cout<<"\nMaterial: "; 
    input.getline(buffer,buffer_size);
    
    if(c.material!=nullptr)
    {
        delete []c.material;
    }
    int len=strlen(buffer)+1;
    c.material=new char[len];
    strcpy_s(c.material,len,buffer);

    cout<<"Varsta: ";
    input>>c.varsta;
    input.ignore(1,'\n');
    cout<<"Pret: ";
    input>>c.pret;
    input.ignore(1,'\n');
    cout<<"Diametru: ";
    input>>c.diametru;
    input.ignore(1,'\n');

    cout<<"Tip:\n1: Fotbal\n2: volley\n3: tenis\n4: bowling\n";
    int optiune;
    cout<<"\nOptiune: ";
    input>>optiune;
    input.ignore(1,'\n');
    switch (optiune)
    {
        case 1:
            c.type=minge::fotball;
            break;
        case 2:
            c.type=minge::volley;
            break;
        case 3:
            c.type=minge::tenis;
            break;
        case 4:
            c.type=minge::bowling;
            break;
        default:
            c.type=minge::NONE;
            break;
    }

    cout<<"\nConditie:\n1: Umflata\n2: Dezumflata\n3: Sparta\n";
    cout<<"\nOptiune: ";

    cin>>optiune;
    cin.ignore(1,'\n');
    switch (optiune)
    {
        case 1:
            c.condition=minge::umflata;
            break;
        case 2:
            c.condition=minge::dezumflata;
            break;
        case 3:
            c.condition=minge::sparta;
            break;
        default:
            c.condition=minge::UNKNOWN;
            break;
    }
    return input;
}
ostream& operator<<(ostream &output,const minge &c)
{
    output<<"\n<--Afisare-->";
    if(c.material != nullptr)
    {
        output<<"\nMaterial: "<<c.material<<"\n";
    }
    else
    {
        output<<"\nMaterial: N/A \n";
    }
    output<<"Varsta: "<<c.varsta<<" ani\n";
    output<<"Pret: "<<c.pret<<" lei\n";
    output<<"Diametru: "<<c.diametru<<"\n";
    output<<"Tip: "<<type_to_string(c.type)<<"\n";
    output<<"Conditie: "<<cond_to_string(c.condition)<<"\n";
    return output;
}