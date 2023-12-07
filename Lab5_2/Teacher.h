#pragma once
#include <string>
class Teacher
{
private:
	int sizeOfArray;
	struct Data {
		std::string surname,name,patronymic;
		int departmentNumber,yearOfHire;
		double salary,allowance,vacationPay,materialAssistance,bonus;
	};
	Data* dat;
	double* retsallary;
public:
	void init(int size);
	void arrayPrint() const;
	void setArray();
	int getSize() const;
	double* returnSallary();
};

class Tax :public Teacher {
private:
	int sizeOfStruct;
	struct taxData {
		double esv,pdfo, moneyTaken, newSallary;
	};
	taxData* taxes;
	double* sallary;
public:
	void init(int size);
	void countTax(double* sallary);
	void printTax() const;
};

