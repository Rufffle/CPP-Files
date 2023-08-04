#include <iostream>
#include "complex.h"
#include "complex.cpp"

int main() {
    Complex c1(5,2), c2(5,3);

    Complex c3 = c1 + c2;
    Complex c4 = c1 * c2;

    bool b = (c1 != c2);

    c3.Print();
    c4.Print();

    if  (b == 0)
        cout << "Not Equal." <<endl;
    else
        cout << "Equal." <<endl;

    return 0;
}
