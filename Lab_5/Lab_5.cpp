#include <iostream>
#include <Windows.h>
#include "Array.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Array ararar;
	ararar.init(15);
	ararar.arrayPrint();
	ararar.set();
	ararar.arrayPrint();

	sortarray sortArray;
	sortArray.copyArray(ararar.getArray(), ararar.getSize());
	sortArray.sortArray(true);
	sortArray.sortArray(false);
}