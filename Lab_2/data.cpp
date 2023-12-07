#include "data.h"
#include <iostream>

void Cdata::setA(double a) {
	m_a = a;
}
double Cdata::getA() {
	return m_a;
}
bool Cdata::checkA(double min, double max) {
	if (m_a >= min && m_a <= max) {
		std::cout << "v norme";
		return 1;
	}
	else {
		std::cout << "ne v norme";
		return 0;
	}
}