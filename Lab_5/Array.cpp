#include "Array.h"
#include <iostream>
using namespace std;

void Array::init(int size) {
	sizeOfArray = size;
	arr = new int[sizeOfArray];
	for (int i = 0; i < sizeOfArray; i++)
	{
		arr[i] = 0;
	}
}

void Array::arrayPrint() const
{
	for (int i = 0; i < sizeOfArray; i++) {
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

void Array::set()
{
	int x;
	for (int i = 0; i < sizeOfArray; i++) {
		cout << "¬вед≥ть значенн€ arr [" << i+1 << "] -> ";
		cin >> x;
		arr[i] = x;
	}
}

int Array::get(int index) const
{
	return arr[index];
}

int Array::getSize() const
{
	return sizeOfArray;
}

int* Array::getArray() const {
	return arr;
}

int* sortarray::copyArray(int* arr, int size) {
	arraySize = size;
	arrayCopy = new int[arraySize];
	for (int i = 0; i < arraySize; i++) {
		int tempval = arr[i];
		arrayCopy[i] = tempval;
	}
	for (int i = 0; i < arraySize; i++) {
		cout << arrayCopy[i] << ' ';
	}
	cout << '\n';
	return arrayCopy;
}

int* sortarray::sortArray(bool ascending)
{
	bool swapped;

	do {
		swapped = false;

		for (int i = 0; i < arraySize - 1; i++) {
			if ((ascending && arrayCopy[i] > arrayCopy[i + 1]) || (!ascending && arrayCopy[i] < arrayCopy[i + 1])) {
				swap(arrayCopy[i], arrayCopy[i + 1]);
				swapped = true;
			}
		}

	} while (swapped);

	for (int i = 0; i < arraySize; i++) {
		cout << arrayCopy[i] << ' ';
	}

	cout << '\n';

	return arrayCopy;
}