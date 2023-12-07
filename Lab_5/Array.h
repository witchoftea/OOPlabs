#pragma once
class Array
{
private:
	int sizeOfArray;
	int* arr;

public:
	void init(int size);
	void arrayPrint() const;
	void set();
	int get(int index) const;
	int getSize() const;
	int* getArray() const;
};

class sortarray : public Array
{
private:
	int* arrayCopy;
	int arraySize;
public:
	int* copyArray(int* arr, int size);
	int* sortArray(bool ascending);
};


