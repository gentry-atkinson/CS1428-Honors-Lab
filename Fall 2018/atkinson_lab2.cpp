//Gentry Atkinson
//CS1428 Fall 2018
//Lab 2


#include <iostream>

using namespace std;

int main() {
    int myCount;
    int myCondition;

    myCount = 0;

    while (myCount < 5){
        myCount = myCount + 1;
    }

    cout << "myCount is now: "  << myCount << endl; //should be 5

    myCondition = false;

    do {
        myCount = myCount - 1;
        myCondition = myCount > 0;
    }while (myCondition);

    cout << "myCount is now: "  << myCount << endl; //should be 0

    for(int i = 1; i < 4; i++) {
        cout << "Loop number " << i << endl;
    } //should output: Loop number 1 Loop number 2 Loop number 3 on separate lines

    if(myCondition == true){				//two equal signs!
        cout << "myCondition is true" << endl;
    }
    else {
        cout << "myCondition is false" << endl;
    }

    //DECLARE AN INTEGER TO HOLD USER INPUT
    int input = 0;
    //LOOP WHILE THE INPUT VALUE IS NOT 10
    while(input != 10){
    //PRINT: Please enter a number:
        cout << "Please enter a number: ";
    //TAKE USER INPUT FROM THE COMMAND LINE
        cin >> input;
    //IF THE NUMBER IS BIGGER THAN 10 PRINT: This number is bigger than 10.
        if(input > 10) cout << endl << "This number is bigger than 10." << endl;
    //IF THE NUMBER IS SMALLER THAN 10 PRINT: This number is smaller than 10.
        else if (input < 10) cout << endl << "This number is smaller than 10." << endl;
    //IF THE NUMBER IS EXACTLY 10 PRINT: This is the last number.
        else cout << endl << "This is the last number." << endl;
    //END LOOP
    }
    //PRINT: Thank you for playing.
    cout << "Thank you for playing." << endl;

    int x = 64;
    while (x > 2){
        cout << x;
        x = x/2;
    }

    cout << endl << "The output will be 13." << endl;


    return 0;
}

