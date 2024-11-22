#pragma once
#define DefaultSize 100;

class String
{
private:
    char *s;
public:
    String();
	String(const char* text);
	String(const String& str);
	~String();

	String operator+(const String& str);
	String& operator=(const String& str);

	bool operator==(const String& str);
	int cauta(String str);
	void afisare();
	int compara(String str);

};

