#include "String.h"

String::String(int size)
{
	amountStr = 1;
	sizeStr = new int[amountStr] {size};

	str = new char*[amountStr];

	str[amountStr - 1] = new char[size + 1] {'0'};
}

String::String(const char* st)
{
	if (st != nullptr && strlen(st) >= 1) {
		amountStr = 1;
		sizeStr = new int[amountStr];
		sizeStr[amountStr - 1] = strlen(st);

		str = new char* [amountStr];
		str[amountStr - 1] = new char[strlen(st) + 1];
		strcpy_s(str[amountStr - 1], strlen(st) + 1, st);
	}
	else {
		amountStr = 1;
		sizeStr = new int[amountStr] {80};

		str = new char* [amountStr];

		str[amountStr - 1] = new char[81] {'0'};
	}
}

void String::displayStr()
{
	for (int i = 0; i < amountStr; i++) {
		cout << i << ")";
		if (strlen(str[i]) >= 1)
			cout << str[i];
		else
			cout << "Строка пустая";
		cout.width(25);
		cout << "Длина строки - " << sizeStr[i];
	}
}

String::~String()
{
	for (int i = 0; i < amountStr; i++)
		delete[] str[i];

	delete[] str;
	delete[] sizeStr;
}
