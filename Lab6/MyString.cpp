#include "MyString.h"
#include <cstring>

String::String()
{
    this->s=nullptr;
}

String::String(const char* text)
{
    this->s=new char[strlen(text)+1];
    strcpy(s,text);
}

//deep copy
String::String(const String& str)
{
    if(this->s!=nullptr)
    {
        delete[] this->s;
    }
    this->s=new char[strlen(str.s)+1];
    strcpy(s,str.s);
}

String::~String()
{
    if(this->s!=nullptr)
    {
        delete[] this->s;
    }
    this->s=nullptr;
}

String String::operator+(const String& str)
{
    char* temp;
    temp=new char[strlen(str.s)+strlen(this->s)+1];
    strcpy(temp,this->s);
    strcat(temp,str.s);
    
    
    if(this->s!=nullptr)
    {
        delete[] this->s;
    }
    this->s=temp;
    return *this;
}
String& String::operator=(const String& str)
{
    if(this->s!=nullptr)
    {
        delete[] this->s;
    }
    this->s=new char[strlen(str.s)+1];
    strcpy(s,str.s);
    return *this;
}

bool String::operator==(const String& str)
{
    return strcmp(this->s,str.s)==0;
}

int String::compara(String str)
{
    return strcmp(this->s,str.s);
}

int String::cauta(String str)
{
    char *p=strstr(this->s,str.s);
    return p-this->s;
}

