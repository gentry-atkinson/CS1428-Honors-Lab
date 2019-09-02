//Your Name
//CS1428 Fall 2019
//Lab 1

#include <iostream>

using namespace std;

int main() {
    int myFirstInt;
    myFirstInt = 5;
    int mySecondInt = 7;

    cout << "The sum of my variables is " << myFirstInt + mySecondInt  << endl;

    int myAge = 35;
    int thisYear = 2019;
    float pi = 3.14159;
    float myFirstFloat = myFirstInt;
    bool myFirstBool = false;
    bool mySecondBool = true;

    cout << "myFirstInt * mySecondInt = " << myFirstInt * mySecondInt << endl;
    cout << "My birth year = " << thisYear - myAge << endl;
    cout << "circumference = 8 pi = " << 2*4*pi << myFirstInt * mySecondInt << endl;
    cout << "myFirstInt / 3 = " << myFirstInt / 3 << endl;
    cout << "myFirstInt / 3.0 = " << myFirstInt / 3.0 << endl;
    cout << "myFirstInt * mySecondBool = " << myFirstInt + mySecondBool << endl;
    cout << "volume = " << 4.0/3.0 * pi * (2 * 2 * 2) << endl;
    cout << "years since last leap year = " << thisYear % 4 << endl;

    myFirstInt = 369;

    cout << "New value of myFirstInt: " << myFirstInt << endl;

    cout << "First digit: " << myFirstInt / 100 << endl;
    cout << "Second digit: " << (myFirstInt/10) % 10 << endl;
    cout << "Third digit: " << myFirstInt % 10 << endl;

    return 0;

}
