#include <stdio.h>
#include "header2.h"
#include "string.h"
#include <stdlib.h>

void ReadData(student *s)
{
    scanf("%d\n",&s->nrMat);
    char buff[99];
    fgets(buff,99,stdin);
    buff[strlen(buff)-1]='\0'; 
    s->nume=(char*)malloc(strlen(buff)+1);
    strcpy(s->nume,buff);
    
    scanf("%c",&s->gen);
}

void WriteData(student * s)
{
    printf("Nr matricol: %d\n",s->nrMat);
    printf("Nume: %s\n",s->nume);
    printf("Gen: %c\n",s->gen);
}