#include "String.h"

String::String()
{
	if(str == nullptr)
		str = new char[81];
}

String::String(int size)
{
	if (str == nullptr)
		str = new char[size + 1];
}

String::String(const char* st)
{
	if(str == nullptr)
		str = new char[strlen(st) + 1];

	if (st != nullptr && strlen(st) > 1)
		strcpy_s(str, strlen(st) + 1, st);
}

String::~String()
{
	if (str != nullptr)
		delete[] str;
}
