#include "Teacher.h"
#include <iostream>
using namespace std;

void Teacher::init(int size) {
	sizeOfArray = size;
	dat = new Data[sizeOfArray];
	for (int i = 0; i < sizeOfArray; i++)
	{
		dat[i].surname="null";
		dat[i].name="null";
		dat[i].patronymic="null";
		dat[i].departmentNumber=0;
		dat[i].yearOfHire=0;
		dat[i].salary=0;
		dat[i].allowance=0;
		dat[i].vacationPay=0;
		dat[i].materialAssistance=0;
		dat[i].bonus=0;
	}
}
void Teacher::arrayPrint() const
{
	for (int i = 0; i < sizeOfArray; i++) {
		cout <<' '<< "Прізвище -->" << ' ' << dat[i].surname << ' ' << '\n' << ' ' <<
			"Ім'я -->" << ' '<<dat[i].name << ' ' << '\n' << ' ' <<
			"По-батькові -->"<<' '<<dat[i].patronymic << ' ' << '\n' << ' ' <<
			"Номер підрозділу -->" << ' ' << dat[i].departmentNumber << ' ' << '\n' << ' ' <<
			 "Рік прийняття на роботу -->" << ' ' << dat[i].yearOfHire << ' ' << '\n' << ' ' <<
			 "Оклад -->" << ' ' << dat[i].salary << ' ' << '\n' << ' ' <<
			 "Доплата за вислугу років -->" << ' ' << dat[i].allowance << ' ' << '\n' << ' ' <<
			 "Оплата відпустки -->" << ' ' << dat[i].vacationPay << ' ' << '\n' << ' ' <<
			 "Матеріальна допомога -->" << ' ' << dat[i].materialAssistance << ' ' << '\n' << ' ' <<
			"Надбавка -->" << ' ' << dat[i].bonus << '\n'<<' '<<'\n';
	}
	cout << '\n';
}
void Teacher::setArray()
{
	int x;
	string str;
	double y;
	for(int i = 0; i < sizeOfArray; i++) {
		cout << "Введіть Прізвище [" << i + 1 << "] -> ";
		cin >> str;
		dat[i].surname = str;
		cout << "Введіть Ім'я [" << i + 1 << "] -> ";
		cin >> str;
		dat[i].name = str;
		cout << "Введіть По-батькові [" << i + 1 << "] -> ";
		cin >> str;
		dat[i].patronymic = str;

		cout << "Номер підрозділу [" << i + 1 << "] -->";
		cin >> x;
		dat[i].departmentNumber = x;
		cout << "Рік прийняття на роботу [" << i + 1 << "] -->";
		cin >> x;
		dat[i].yearOfHire = x;

		cout << "Оклад [" << i + 1 << "] -->";
		cin >> y;
		dat[i].salary = y;
		int yearsOfWork = 2023 - dat[i].yearOfHire;
		if (yearsOfWork > 20) {
			dat[i].allowance = 0.3 * dat[i].salary;
		}
		else if (yearsOfWork > 10) {
			dat[i].allowance = 0.2 * dat[i].salary;
		}
		else if (yearsOfWork > 3) {
			dat[i].allowance = 0.1 * dat[i].salary;
		}
		cout << "Оплата відпустки [" << i + 1 << "] -->";
		cin >> y;
		dat[i].vacationPay = y;
		cout << "Матеріальна допомога [" << i + 1 << "] -->";
		cin >> y;
		dat[i].materialAssistance = y;
		cout << "Надбавка [" << i + 1 << "] -->";
		cin >> y;
		dat[i].bonus = y;
	}
	cout << '\n';
}

int Teacher::getSize() const
{
	return sizeOfArray;
}

double* Teacher::returnSallary()
{
	retsallary = new double[sizeOfArray];
	for (int i = 0; i < sizeOfArray; i++) {
		retsallary[i] = dat[i].salary + dat[i].allowance;
	}
	return retsallary;
}

void Tax::init(int size) {
	sizeOfStruct = size;
	taxes = new taxData[sizeOfStruct];
	for (int i = 0; i < sizeOfStruct; i++)
	{
		taxes[i].esv=0;
		taxes[i].pdfo = 0;
		taxes[i].moneyTaken = 0;
		taxes[i].newSallary=0;
	}
}
void Tax::countTax(double* sallary) {
	for (int i = 0; i < sizeOfStruct; i++)
	{
		taxes[i].esv = sallary[i] * 0.061;
		 taxes[i].pdfo = (sallary[i]-taxes[i].esv)*0.15;
		 taxes[i].moneyTaken = taxes[i].esv+ taxes[i].pdfo;
		 taxes[i].newSallary = sallary[i]- taxes[i].moneyTaken;
	}
}
void Tax::printTax() const
{
	for (int i = 0; i < sizeOfStruct; i++) {
		cout << ' ' << "ЄСВ [" << i + 1 << "]-->" << ' ' << taxes[i].esv << ' ' << '\n' << ' ' <<
			"ПДФО [" << i + 1 << "]-->" << ' ' << taxes[i].pdfo << ' ' << '\n' << ' ' <<
			"Величина утриманих грошей [" << i + 1 << "]-->" << ' ' << taxes[i].moneyTaken << ' ' << '\n' << ' ' <<
			"Величина зарплати до видачі [" << i + 1 << "]-->" << ' ' << taxes[i].newSallary << '\n' << ' ' << '\n';
	}
	cout << '\n';
}