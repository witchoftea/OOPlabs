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
		cout <<' '<< "������� -->" << ' ' << dat[i].surname << ' ' << '\n' << ' ' <<
			"��'� -->" << ' '<<dat[i].name << ' ' << '\n' << ' ' <<
			"��-������� -->"<<' '<<dat[i].patronymic << ' ' << '\n' << ' ' <<
			"����� �������� -->" << ' ' << dat[i].departmentNumber << ' ' << '\n' << ' ' <<
			 "г� ��������� �� ������ -->" << ' ' << dat[i].yearOfHire << ' ' << '\n' << ' ' <<
			 "����� -->" << ' ' << dat[i].salary << ' ' << '\n' << ' ' <<
			 "������� �� ������� ���� -->" << ' ' << dat[i].allowance << ' ' << '\n' << ' ' <<
			 "������ �������� -->" << ' ' << dat[i].vacationPay << ' ' << '\n' << ' ' <<
			 "���������� �������� -->" << ' ' << dat[i].materialAssistance << ' ' << '\n' << ' ' <<
			"�������� -->" << ' ' << dat[i].bonus << '\n'<<' '<<'\n';
	}
	cout << '\n';
}
void Teacher::setArray()
{
	int x;
	string str;
	double y;
	for(int i = 0; i < sizeOfArray; i++) {
		cout << "������ ������� [" << i + 1 << "] -> ";
		cin >> str;
		dat[i].surname = str;
		cout << "������ ��'� [" << i + 1 << "] -> ";
		cin >> str;
		dat[i].name = str;
		cout << "������ ��-������� [" << i + 1 << "] -> ";
		cin >> str;
		dat[i].patronymic = str;

		cout << "����� �������� [" << i + 1 << "] -->";
		cin >> x;
		dat[i].departmentNumber = x;
		cout << "г� ��������� �� ������ [" << i + 1 << "] -->";
		cin >> x;
		dat[i].yearOfHire = x;

		cout << "����� [" << i + 1 << "] -->";
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
		cout << "������ �������� [" << i + 1 << "] -->";
		cin >> y;
		dat[i].vacationPay = y;
		cout << "���������� �������� [" << i + 1 << "] -->";
		cin >> y;
		dat[i].materialAssistance = y;
		cout << "�������� [" << i + 1 << "] -->";
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
		cout << ' ' << "��� [" << i + 1 << "]-->" << ' ' << taxes[i].esv << ' ' << '\n' << ' ' <<
			"���� [" << i + 1 << "]-->" << ' ' << taxes[i].pdfo << ' ' << '\n' << ' ' <<
			"�������� ��������� ������ [" << i + 1 << "]-->" << ' ' << taxes[i].moneyTaken << ' ' << '\n' << ' ' <<
			"�������� �������� �� ������ [" << i + 1 << "]-->" << ' ' << taxes[i].newSallary << '\n' << ' ' << '\n';
	}
	cout << '\n';
}