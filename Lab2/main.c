#include <stdio.h>
#include <stdlib.h>
#include "header2.h"

#define n 1

int main()
{
    student *s;
    s=(student*)malloc(n*sizeof(student));
    if(s==0)
    {
        printf("err\n");
        return -1;
    }
    int i;

    //atribuiri pointeri de functii
    for(i=0;i<n;i++)
    {
        s[i].Read=&ReadData;
    }
    for(i=0;i<n;i++)
    {
        s[i].Write=&WriteData;
    }

    //citiri si afisari
    for(i=0;i<n;i++)
    {
        s[i].Read(s);
    }
    for(i=0;i<n;i++)
    {
        s[i].Write(s);
    }

    if(s)
    {
        free(s);
    }
    s=0;
    return 0;
}