#include "Figura.h"
#include <cstring>

Figura::Figura()
{
	cout << "\nFigura();";
	culoare = nullptr;
}

Figura::Figura(const char* cul)
{
	cout << "\nFigura par(";
	if (cul)
	{
		culoare = new char[strlen(cul) + 1];
		strcpy_s(culoare, strlen(cul) + 1, cul);
		cout << cul;
	}
	else
		culoare = nullptr;
	cout << ");";
}

Figura::~Figura()
{
	cout << "\n~Figura();";
	if (culoare)
		delete[] culoare;
	culoare = nullptr;
}

void Figura::Afisare()
{
	cout << "\nCuloare: ";
	if (culoare)
		cout << culoare;
}

void swap_fig(Figura* &a,Figura* &b)
{
	Figura* aux=a;
	a=b;
	b=aux;
}


//FUNCTIE SORTARE GLOBALA

void sortareArie(Figura *v[],int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(v[i]->Aria()>v[j]->Aria())
			{
				swap_fig(v[i],v[j]);
			}
		}
	}
}

int PerimetruMax(Figura *v[],int size)
{
	int max=v[0]->Perimetru();
	for(int i=1;i<size;i++)
	{
		int p=v[i]->Perimetru();
		if(p>max)
		{
			max=p;
		}
	}
	return max;
}
