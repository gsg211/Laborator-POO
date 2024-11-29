#pragma once
#include"Data.h"

class Persoana {
private:
	char *nume, *prenume;
	Data *dataNastere;
protected:
	void afisarePersoana(); //din laborator
public:
	Persoana(const char *nume=nullptr, const char *prenume=nullptr, Data *dataNastere=nullptr);
	~Persoana();
	char *getNume();
	char *getPrenume();
	Data *getDataNastere();
	void afisare();
};
