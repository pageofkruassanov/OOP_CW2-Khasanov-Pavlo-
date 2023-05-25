#include <iostream>
#include "String.h"
#include <locale.h>

using namespace std;

int main()
{
	setlocale(0, "Rus");
	String str1;

	String str2(10);
	
	String str3("oops, its great");

	str1.displayStr();
	cout << endl;
	str2.displayStr();
	cout << endl;
	str3.displayStr();
}