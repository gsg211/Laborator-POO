#pragma once
#include <string>
using namespace std;
class PersoanaAC
{
    protected:
        string m_sCnp;
        string m_sNume;
        string m_sAdresa;
    public:
        PersoanaAC();
        PersoanaAC(string cnp, string nume, string adresa);
        ~PersoanaAC();
        void schimbareAdresa(string adresaNoua);//setter

        string getNume();
        string getCNP();
        string getAdresa();

        void AfisareProfil();
};