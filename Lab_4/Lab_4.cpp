#include <iostream>
#include "DoubleVector.h"
#include <Windows.h>
#include <string>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    CDoubleVector vector;
    cout << "вивід вектору, створеного за домпомогою конструктора за замовчуванням" << ' ' << '\n';
    vector.vectprint();
    vector.init(11);
    cout << "вивід вектору" << ' ' << '\n';
    vector.vectprint();
    cout<<"Розмір вектору : " <<' ' << vector.getSize() << ' ' << '\n';
    vector.set(0, 0.3);
    vector.set(1, 0.7);
    vector.set(2, 0.9);
    vector.set(3, 1.3);
    vector.set(4, 1.7);
    vector.set(5, 1.9);
    vector.set(6, 2.3);
    vector.set(7, 2.7);
    vector.set(8, 2.9);
    vector.set(9, 3.3);
    vector.set(10, 3.7);
    cout << "вивід заповненого вектору" << ' ' << '\n';
    vector.vectprint();
    cout << "Вивід максимального значення :" << ' ' << vector.getMax() << ' ' << '\n';
    cout << "Вивід мінімального значення :" << ' ' << vector.getMin() << ' ' << '\n';
    cout << "Вивід середнього значення : " << ' ' <<vector.getAvgValue() << ' ' << '\n';
    
    CDoubleVector copy_vector = vector;
    cout << "виведення копії вектору" << ' ' << '\n';
    copy_vector.vectprint();
    cout << "виведення очищенної копії вектору" << ' ' << '\n';
    copy_vector.clear();
    copy_vector.vectprint();
    
    cout << "Результат методу обчислення вираження" << ' ' << '\n';
    cout<<vector.calc()<< ' '<< '\n';

 string sf = "savevectorinfo.bin";
    string sr = "saveresult.txt";
    vector.saveresult();
    vector.savedata();
    vector.readdata();
    return 0;
}

