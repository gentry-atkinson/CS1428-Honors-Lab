
//Gentry Atkinson
//CS1428 Fall 2018
//Lab 3

#include <iostream>
using namespace std;


int main() {
    //Problem 4
    int first, second;
    char operation;
    cout << "Welcome to Gentry's Simple Calculator." << endl;
    do{
        cout << "Enter your first integer value: ";
        cin >> first;
        cout << "Enter your your second integer value: ";
        cin >> second;
        cout << "Enter an operator (+,-,/, or*): ";
        cin >> operation;
        if (operation == '+')
            cout << first + second << endl;
        else if (operation == '-')
            cout << first - second << endl;
        else if (operation == '/')
            cout << first / second << endl;
        else if (operation == '*')
            cout << first * second << endl;
        else
            cout << "I dont recognize this operator." << endl;
    }while(first != 0 && second != 0);
    cout << "Thank you for caculating." << endl;

    //Problem 5 and 6
    //Variable declarations
    int a, b, c;
    char yOrN;
    bool goOn = true;

    while (goOn){ //continue the loop while goOn is true

        //take user input
        cout << "Enter the legth of the first leg: ";
        cin >> a;
        cout << "Enter the legth of the second leg: ";
        cin >> b;
        cout << "Enter the legth of the third leg: ";
        cin >> c;

        //case 1, one leg is greater than the sum of the other two
        if (a > b + c || b > a + c || c > a + b)
            cout << "Invalid" << endl;

        //case 2, the square of one leg is greater than the sums of the square of the other two
        else if (c*c > a*a + b*b || b*b > a*a + c*c || a*a > b*b + c*c)
            cout << "Obtuse" << endl;

        //case 3: the square of one leg is exactly the squares of the other two
        else if (c*c == a*a + b*b || b*b == a*a + c*c || a*a == b*b + c*c)
            cout << "Right" << endl;

        //case 4: the square of one leg is less that the squares of the other two
        else if (c*c < a*a + b*b || b*b < a*a + c*c || a*a < b*b + c*c)
            cout << "Accute" << endl;

        //Default case: something went wrong
        else
            cout << "Something went wrong." << endl;

        //prompt user to continu
        cout << "Would you like to enter another triangle (y or n): ";
        cin >> yOrN;

        //set goOn to false if user inputs  or N
        if (yOrN == 'n' || yOrN == 'N')
            goOn = false;
    }

    //Problem 7
    int output = 0;
    int i, j, k;
    for (i = 1; i < 100; i += 2){
        output += i;
    }
    cout << output << endl;
    output = 0;
    j = 1;
    while (j < 100 ){
        output += j;
        j += 2;
    }
    cout << output << endl;
    output = 0;
    k = 0;
    do {
        k++;
        if(k%2 == 1)
            output += k;
    }while (k != 100);
    cout << output << endl;


    //Problem 8
    cout << 50 << endl;
    return 0;
}
