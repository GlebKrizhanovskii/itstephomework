﻿// Написать функцию, которая вставляет в строку в указанную позицию заданный символ.

#include <iostream>
using namespace std;

void deleteСharacter(char*& str, int& size, int numChar)
{
	char* str2 = new char[size + 1];

	for (int i = size; i >= 0; --i)
	{

		if (i >= numChar)
		{
			str2[i + 1] = str[i];
		}

		else
		{
			str2[i] = str[i];
		}
	}
	str2[numChar] = '*';
	cout << str2;
	str2[size + 1] = '\0';
	delete[] str;
	str = str2;
}
int main()
{
	int  size = 36;
	char* line = new char[36]{ "Remove character from this sentence" };
	cout << line << endl;
	deleteСharacter(line, size, 9);
	return 0;
}


