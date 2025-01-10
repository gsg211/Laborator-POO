#include <iostream>
#include "functii.h"
#include "student.h"
#include <vector>

int main()
{
    std::cout<<"Nr litere mari= "<<upper_count("UEEaI")<<"\n\n";
    std::cout<<"Nr cifre= "<<digit_count("Costel1 Mire2l")<<"\n\n\n";
    
    std::vector<StudentAC> vect;
    vect.push_back(StudentAC("Ion",3));
    vect.push_back(StudentAC("Andrei",5));
    vect.push_back(StudentAC("Marian",7));
    vect.push_back(StudentAC("Marinica Stefan",2));
    vect.push_back(StudentAC("Jackson",8));
    vect.push_back(StudentAC("Stephen",5));
    vect.push_back(StudentAC("Mihai",3));
    vect.push_back(StudentAC("Alex",5));
    vect.push_back(StudentAC("Cosmin",8));
    vect.push_back(StudentAC("Andreea",10));

    AfisareStudenti(vect);
    vect.clear();


    std::cout<<"\n\n\nVECTORUL A FOST ELIBERAT\n\n\n";

    StudentAC *Studenti=new StudentAC[4];
    Studenti[0]=StudentAC("Ion",3);
    Studenti[1]=StudentAC("Gigel",2);
    Studenti[2]=StudentAC("Costel",6);
    Studenti[3]=StudentAC("Mirel",-1000);

    vect=creareVector(Studenti,4);
    AfisareStudenti(vect);
    sortareStudenti(vect);
    std::cout<<"\n\n\n";
    AfisareStudenti(vect);
    return 0;
}