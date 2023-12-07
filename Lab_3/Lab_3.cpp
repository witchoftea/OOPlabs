#include <iostream>
#include "DoubleVector.h"
using namespace std;

int main()
{
    CDoubleVector vector;
    vector.vectprint();
    vector.init(5);
    vector.vectprint();
    cout<<vector.getSize()<< ' '<<'\n';
    vector.set(0, 4);
    vector.set(1, 10);
    vector.set(2, -5);
    vector.set(3, 9);
    vector.set(4, 401);
    vector.vectprint();
    cout << vector.getMax() << ' ' << '\n';
    cout << vector.getMin() << ' ' << '\n';
    cout << vector.getAvgValue() << ' ' << '\n';
    
    CDoubleVector copy_vector = vector;
    copy_vector.vectprint();

    copy_vector.clear();
    copy_vector.vectprint();
    
    return 0;
}

