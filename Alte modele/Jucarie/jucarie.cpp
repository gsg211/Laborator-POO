#include "Jucarie.h"

jucarie::jucarie()
{
    material=nullptr;
    varsta=-1;
    pret=-1;
    contor++;
}       
jucarie::jucarie(char* mat, int varsta, double pret)
{
    if(mat!=nullptr)
    {
        int len=strlen(mat)+1;
        this->material=new char[len];
        strcpy_s(this->material,len,mat);

    }
    else
    {
        this->material=nullptr;
    }
    this->varsta=varsta;
    this->pret=pret;
    contor++;
    
}
jucarie::jucarie(const jucarie &c)
{
    if(c.material!=nullptr)
    {
        int len=strlen(c.material)+1;
        this->material=new char[len];
        strcpy_s(this->material,len,c.material);
    }
    else
    {
        this->material=nullptr;
    }
    this->varsta=c.varsta;
    this->pret=c.pret;
    contor++;

}
jucarie::~jucarie()
{
    cout<<"\nDestructor cls de baza apelat";
    if(material!=nullptr)
    {
        delete[] material;
        material=nullptr;
    }
    varsta=-1;
    pret=-1;
    contor--;
}

void jucarie::citire()
{
    cout<<"\n<--Citire-->";
    char buffer[buffer_size]="\0";
    cout<<"\nMaterial: "; 
    cin.getline(buffer,buffer_size);
    
    if(material!=nullptr)
    {
        delete []material;
    }
    int len=strlen(buffer)+1;
    material=new char[len];
    strcpy_s(material,len,buffer);

    cout<<"Varsta: ";
    cin>>varsta;
    cin.ignore(1,'\n');
    cout<<"Pret: ";
    cin>>pret;
    cin.ignore(1,'\n');

}
void jucarie::afisare()
{
    cout<<"\n<--Afisare-->";
    if(material != nullptr)
    {
        cout<<"\nMaterial: "<<material<<"\n";
    }
    else
    {
        cout<<"\nMaterial: N/A \n";
    }
    cout<<"Varsta: "<<varsta<<" ani\n";
    cout<<"Pret: "<<pret<<" lei\n";

}

void jucarie::setMaterial(char* mat)
{
    if(this->material!=nullptr)
    {
        delete [] material;
    }

    if(mat!=nullptr)
    {
        int len=strlen(mat)+1;
        this->material=new char[len];
        strcpy_s(this->material,len,mat);

    }
    else
    {
        this->material=nullptr;
    }

}
char* jucarie::getMaterial()
{
    return material;
}

void jucarie::setVarsta(int varsta)
{
    this->varsta=varsta;
}
int jucarie::getVarsta()
{
    return varsta;
}

void jucarie::setPret(double pret)
{
    this->pret=pret;
}
double jucarie::getPret()
{
    return pret;
}

int jucarie::getContor()
{
    return contor;
}

jucarie& jucarie::operator=(const jucarie &c)
{
    if(this==&c)//previne self assignment
    {
        return *this;
    }
    if(this->material!=nullptr)
    {
        delete [] material;
    }

    if(c.material!=nullptr)
    {
        int len=strlen(c.material)+1;
        this->material=new char[len];
        strcpy_s(this->material,len,c.material);
    }
    else
    {
        this->material=nullptr;
    }
    this->varsta=c.varsta;
    this->pret=c.pret;

    return *this;
}


istream& operator>>(istream &input, jucarie &c)
{
    char buffer[buffer_size]="\0";
    input.getline(buffer,buffer_size);
    
    if(c.material!=nullptr)
    {
        delete []c.material;
    }
    int len=strlen(buffer)+1;
    c.material=new char[len];
    strcpy_s(c.material,len,buffer);

    input>>c.varsta;
    input.ignore(1,'\n');
    input>>c.pret;
    input.ignore(1,'\n');

    return input;
}
ostream& operator<<(ostream &output,const jucarie &c)
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
    return output;
}


bool jucarie::operator<(const jucarie &j2)
{
    return this->pret < j2.pret;
}
bool jucarie::operator> (const jucarie &j2)
{
    return this->pret > j2.pret;
}

int jucarie::operator+ (const jucarie &j2)
{
    return this->pret + j2.pret;
}

 jucarie& operator++(jucarie &c)
 {
    c.pret++;
    return c;
 }
 jucarie operator++(jucarie &c,int dummy)
 {
    jucarie temp(c);
    c.pret++;
    return temp;
 }