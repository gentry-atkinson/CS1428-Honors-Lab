//Gentry Atkinson
//CS1428 Fall 2019
//Lab 2

#include <iostream>

using namespace std;


int main() {
    int myCount;
    bool myCondition;

    myCount = 44;
    myCondition = false;

    if(myCondition == true){                        //two equal signs!
        cout << "myCondition is true" << endl;
    }
    else {
        cout << "myCondition is false" << endl;
    }

    if(myCount < 10 || myCount >99){
        cout << "myCount is not a double digit number" << endl;
    }
    else{
        cout << "myCount is a double digit number" << endl;
    }

    cout << "Please enter a number: ";
    cin >> myCount;
    cout<<endl;
    if(myCount % 2 == 0){
        cout << "This is an even number." <<endl;
    }

    //DECLARE A CHAR TO HOLD SOME USER INPUT
    char inputValue;
    //ASK THE USER TO INPUT A CHARACTER
    cout << "Please enter a character: ";
    cin >> inputValue;
    //IF THE INPUT IS a, e, i, o, or u
    if (inputValue == 'a' || inputValue == 'e' || inputValue == 'i' || inputValue == 'o' || inputValue == 'u')
    //OUTPUT "This character is a vowel."
        cout << "This character is a vowel" << endl;
    //ELSE
    else
    //OUTPUT "This character is not a vowel."
        cout << "This character is not a vowel." << endl;
    //PRINT: Thank you.
    cout << "Thank you" << endl;

    cout << "outPutValue has the value 100" << endl;

    return 0;
}
