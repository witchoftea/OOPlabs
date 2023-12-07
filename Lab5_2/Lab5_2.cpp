#include <iostream>
#include "Teacher.h"
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Teacher tc;
	tc.init(1);
	tc.arrayPrint();
	tc.setArray();
	tc.arrayPrint();
	Tax tax;
	tax.init (tc.getSize());
	tax.countTax(tc.returnSallary());
	tax.printTax();
}