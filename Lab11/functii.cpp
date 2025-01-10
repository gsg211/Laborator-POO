#include "functii.h"

int upper_count(std::string Input)
{
    int counter=0;
    for(int i=0;i<Input.length();i++)
    {
        if(Input[i]>='A'&& Input[i]<='Z')
        {
            counter++;
        }
    }     
    return counter;  
}

int digit_count(std::string input)
{
    std::string::iterator i;
    int counter;

    for(i=input.begin();i!=input.end();i++)
    {
        if(*i>='A'&& *i<='Z')
        {
            counter++;
        }
    }
    return counter;
}