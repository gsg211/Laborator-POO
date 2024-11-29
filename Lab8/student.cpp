#include "student.h"
#include <iostream>

StudentAC::StudentAC()
{
    m_ianStudiu = 0;
    m_inotaP2 = 0;
}

StudentAC::StudentAC(string cnp, string nume, string adresa,int anStudiu, int notaP2) :
PersoanaAC(cnp, nume, adresa), m_ianStudiu(anStudiu),m_inotaP2(notaP2)
{
}

StudentAC::~StudentAC()
{
}

void StudentAC::inscriereAnStudiu(int anStudiuNou)
{
    m_ianStudiu=anStudiuNou;
}

int StudentAC::getAn()
{
    return m_ianStudiu;
}

int StudentAC::getNota()
{
    return m_inotaP2;
}


void AfisareProfil(StudentAC s)
{
    s.AfisareProfil();
}

void StudentAC::AfisareProfil()
{
    PersoanaAC::AfisareProfil();
    cout<<"An: "<<m_ianStudiu<<"\n";
    cout<<"Nota: "<<m_inotaP2<<"\n";
}

StudentAC* StudentAC::comparaStudent(StudentAC *s)
{
    return (this->m_inotaP2>s->getNota())? this: s;
}


StudentMaster::StudentMaster()
{
    
}
StudentMaster::StudentMaster(string cnp, string nume, string adresa, int anStudiu, int notaP2,
string numeDizertatie): StudentAC(cnp,nume,adresa,anStudiu,notaP2),m_sNumeDizertatie(numeDizertatie)
{
}
StudentMaster::~StudentMaster()
{
}
