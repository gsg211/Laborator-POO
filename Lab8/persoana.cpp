#include "persoana.h"
#include <iostream>
PersoanaAC::PersoanaAC()
{
        m_sCnp = std::string(13,'0');
        m_sNume = "";
        m_sAdresa = "";
}

PersoanaAC::PersoanaAC(std::string cnp, std::string nume, std::string adresa)
{
    m_sCnp = cnp;
    m_sNume = nume;
    m_sAdresa = adresa;
}
PersoanaAC::~PersoanaAC()
{
}

void PersoanaAC::schimbareAdresa(std::string adresaNoua)
{
    this->m_sAdresa=adresaNoua;
}

string PersoanaAC::getNume()
{
    return m_sNume;
}

string PersoanaAC::getAdresa()
{
    return m_sAdresa;
}

string PersoanaAC::getCNP()
{
    return m_sCnp;
}


void AfisareProfil(PersoanaAC p)
{
    p.AfisareProfil();
}

void PersoanaAC::AfisareProfil()
{
    cout<<"Nume: "<<m_sNume<<"\n";
    cout<<"CNP: "<<m_sCnp<<"\n";
    cout<<"Adresa: "<<m_sAdresa<<"\n";
}