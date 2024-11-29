#include"data.h"
#include <iostream>


Data::Data(int an, int luna, int zi) 
{
	this->an = an;
	this->luna = luna;
	this->zi = zi;
}

int Data::getAn() 
{
	return an;
}

int Data::getLuna() 
{
	return luna;
}

int Data::getZi() 
{
	return zi;
}

int Data::maiMare(Data data2)
{
    if (an > data2.an) 
    {
        return 1;
    }

    if (an < data2.an) 
    {
        return 0;
    }


    if (luna > data2.luna) 
    {
        return 1;
    }

    if (luna < data2.luna) 
    {
        return 0;
    }

    if (zi > data2.zi) 
    {
        return 1;
    }

    if (zi < data2.zi) 
    {
        return 0;
    }

    return 0;	
}

