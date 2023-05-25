#pragma once
#include <iostream>

using namespace std;

class String
{
private:
	char** str;
	int* sizeStr;
	int amountStr;
public:
	String() : String::String(80){};

	String(int size);

	String(const char* str);

	void displayStr();



	~String();
};

