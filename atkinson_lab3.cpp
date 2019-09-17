//Gentry Atkinson
//CS1428 Fall 2019
//Lab 3

#include <iostream>

using namespace std;

int main() {
    //problem 4
    int myCount = 0;
    bool myCondition = true;

    while (myCount < 5){            //Checks the condition before entering the loop
        myCount = myCount + 1;
    }

    cout << "myCount is now: "  << myCount << endl; //should be 5

    myCondition = false;

    do {
        myCount = myCount - 1;
        myCondition = myCount > 0;
    }while (myCondition);            //Checks the condition after the body of the loop

    cout << "myCount is now: "  << myCount << endl; //should be 0

    for(int i = 1; i < 4; i++) {        //Loops a fixed number of times
        cout << "Loop number " << i << endl;
    } //should output: Loop number 1 Loop number 2 Loop number 3 on separate lines

    //problem 5

    //for (int x = 64; x > 2; x = x / 2){
    //    cout << x;
    //}
    int x = 64;
    while(x > 2){
        cout << x;
        x /= 2;
    }

    //Starting problem 6
    float a, b, c; //values to hold the lengths of three triangle legs.
    float aSquare, bSquare, cSquare;
    char continueLooping = 't'; //user input to continue

    while(continueLooping == 't'){
        //take user input of segment lengths
        cout << "Please enter 3 segment lengths:"
        cin >> a >> b >> c;

        //calculate squares
        aSquare = a*a;
        bSquare = b*b;
        cSquare = c*c;

        /*
        Obtuse            c^2 > a^2 + b^2
        Right            c^2 = a^2 + b^2
        Acute            c^2 < a^2 + b^2
        Invalid            c >= a + b
        */
        if ( c >= a+b){
            cout << "Invlaid" << endl;
        }
        else if (cSquare > aSquare + bSquare) {
            cout << "Obtuse" << endl;
        }
        else if (cSquare < aSquare + bSquare){
            cout << "Accute" << endl;
        }
        else {
            cout << "Right" << endl;
        }

        //Ask user if they want to continue
        cout << "Enter another triangle (y/n)?";
        cin >> continueLooping;
    }

    cout << "13" << endl;


    return 0;
}
