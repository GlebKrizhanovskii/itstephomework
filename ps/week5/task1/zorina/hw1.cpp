﻿// Напишите программу, которая создает двухмерный массив и заполняет его по следующему
//принципу: пользователь вводит число(например, 3) первый элемент массива принимает
//значение этого числа, последующий элемент массива принимает значение этого числа
//умноженного на 2 (т.е. 6 для нашего примера), третий элемент массива предыдущий элемент,
//умноженный на 2 (т.е. 6 * 2 = 12 для нашего примера).Созданный массив вывести на экран.

#include <iostream>
using namespace std;

int main()
{
	int const size = 5;
	long long ar[size][size];
	int num;
	cout << "Input a numeral\n";
	cin >> num;
	for (int x = 0; x < size; ++x)
	{
		for (int y = 0; y < size; ++y)
		{
			if (x == 0 && y == 0)
				ar[x][y] = num;
			else {
				num *= 2;
				ar[x][y] = num;
			}
			cout << ar[x][y] << "  ";
		}
		cout << endl;
	}
}