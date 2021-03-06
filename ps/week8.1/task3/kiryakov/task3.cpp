﻿#include <iostream>
using namespace std;

void fillArray(int* arr, int size) {
	for (int i = 0; i < size; ++i)
		arr[i] = rand() % 30;
}

void printArray(int* arr, int size) {
	for (int i = 0; i < size; ++i)
		cout << *(arr + i) << "\t";
	cout << endl;
}


int main()
{
	int size = 0, size1, size2;

	cout << "Input the size of the first array\n";
	cin >> size1;
	int* arr1 = new int[size1];
	fillArray(arr1, size1);

	cout << "Input the size of the second array\n";
	cin >> size2;
	int* arr2 = new int[size2];
	fillArray(arr2, size2);

	printArray(arr1, size1);
	cout << endl;
	printArray(arr2, size2);
	cout << endl;

	int tempSize = size1 + size2;
	int* tempArr = new int[tempSize];

	int index = 0;
	for (int i = 0; i < size1; ++i)
	{
		tempArr[index] = arr1[i];
		++index;
	}
	for (int i = 0; i < size2; ++i) {
		tempArr[index] = arr2[i];
		++index;
	}
	delete[]arr1;
	delete[]arr2;
	for (int i = 0; i < tempSize; ++i) {
		bool ok = true;
		for (int j = i + 1; j < tempSize; ++j)
			if (tempArr[i] == tempArr[j])
				ok = false;
		if (ok)
			++size;
	}
	int* arr = new int[size];
	int indexForArr = 0;
	for (int i = 0; i < tempSize; ++i) {
		bool ok = true;
		for (int j = i + 1; j < tempSize; ++j) {
			if (tempArr[i] == tempArr[j])
				ok = false;
		}
		if (ok) {
			arr[indexForArr] = tempArr[i];
			++indexForArr;
		}
	}
	printArray(arr, size);
	delete[]tempArr;
	delete[]arr;
}