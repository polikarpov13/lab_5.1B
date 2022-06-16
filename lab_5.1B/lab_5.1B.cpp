#include <iostream>
#include "LongLong.h"

using namespace std;

class olderNotZero {};

void checkOlder(LongLong l) {
    if (l.getOlder() < 0)
        throw olderNotZero();
}

int main()
{
    LongLong l;

    cout << "Enter l : "; cin >> l;

    cout << l << endl;

    checkOlder(l);

    cout << "Addition : " << l.getOlder() + l.getYounger() << endl;
    cout << "Multiplication : " << l.getOlder() * l.getYounger() << endl;
    cout << "Comparing : ";
    l.Compare();
}
