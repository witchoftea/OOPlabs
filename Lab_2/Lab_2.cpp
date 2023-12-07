#include <iostream>
#include "data.h"
using namespace std;

int main() {
	Cdata data{};
	data.setA(5);
	data.getA();
	data.checkA(1, 6);
}