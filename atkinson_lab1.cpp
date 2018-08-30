//Gentry Atkinson
//CS1428 Fall 2018
//Lab 1

#include<iostream>

using namespace std;

int main () {
    int myFirstInt;
    myFirstInt = 5;
    int mySecondInt = 7;

    cout << "The sum of my variables is " << myFirstInt + mySecondInt << endl;

    int myAge = 34;
    int thisYear = 2018;
    float pi = 3.14159;
    float myFirstFloat = myFirstInt;
    bool myFirstBool = false;
    bool mySecondBool = true;

    cout << "myFirstInt * mySecondInt = " << myFirstInt * mySecondInt << endl;
    cout << "My birth year = " << thisYear - myAge << endl;
    cout << "Circumference = " << 2 * pi * 4 << endl;
    cout << "myFirstInt / 3 = " << myFirstInt / 3 << endl;
    cout << "myFirstInt / 3.0 = " << myFirstInt / 3.0 << endl;
    cout << "One fifth of the square of myFirstFloat = " << (myFirstFloat * myFirstFloat) / 5 << endl;
    cout << "myFirstInt + mySecondBool = " << myFirstInt + mySecondBool << endl;
    cout << "(3 * myFirstFloat + mySecondInt) / 4 * (mySecondInt * mySecondInt) = " << (3 * myFirstFloat + mySecondInt) / 4 * (mySecondInt * mySecondInt) << endl;
    cout << "Volume of Sphere = " << (4.0 / 3.0) * pi * 8 << endl;
    cout << "Years since last leap year = " << thisYear % 4 << endl;

    return 0;
}

