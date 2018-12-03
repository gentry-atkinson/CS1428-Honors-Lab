#include <iostream>
#include "Analyzer.h"

using namespace std;

int main()
{
    /***********************
    Our goal today is to guess a secret number created by the SecretNumber class.'
    You cannot change the implementation of SecretNumber but you can view the header file.

    This code will create an Analyzer object and run the tests you have created.
    The first 4 blocks run your tests and output the result. Do not change them.
    The last block outputs your guess for your secret number.
    You only need to fill in the guess in this file.
    ***********************/
    Analyzer myAnalyzer;

    cout << "My secret number is ";
    if (!myAnalyzer.isPrime())
        cout << "not";
    cout << " prime." << endl;;

    cout << "My secret number is ";
    if (!myAnalyzer.isFibonacci())
        cout << "not";
    cout << " a Fibonacci number." << endl;

    cout << "My secret number is ";
    if (!myAnalyzer.isEven())
        cout << "not";
    cout << " even." << endl;

    cout << "My secret number is ";
    if (!myAnalyzer.isBiggerThan4())
        cout << "not";
    cout << " bigger then 4." << endl;

    cout << "My secret number is: " << "9" << endl;

    return 0;
}
