#pragma once
#include <iostream>

using namespace std;

class String
{
private:
	char* str = nullptr;
public:
	String();

	String(int size);

	String(const char* str);


	~String();
};

