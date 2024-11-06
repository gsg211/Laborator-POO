#pragma once

class Carte
{
private:
    char *titlu;
    int an;
    double pret;
public:
    Carte();
    Carte(char *titlu, int an,double pret);
    ~Carte();

    void citire();
    void afisare();

    int getAn();
};


void citireVector(Carte *carti,int n);

void AfisareVector(Carte *carti,int n);

void SortCarti(Carte* carti,int n);
void DealocareVector(Carte *carti,int n);
