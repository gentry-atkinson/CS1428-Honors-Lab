#include "Analyzer.h"

Analyzer::Analyzer()
{

}

int Analyzer::getNumber() {return number.getNumber();}

bool Analyzer::isPrime(int i){
    /**********************************
    This method should return true if number is prime.
    We are goig to implement this method recursively.
    Fill in all the missing portions.
    **********************************/

    //Base case: a number < 2 is not prime
    if(number.getNumber() < 2)
        return false;

    //Base case: 2 is prime
    if (number.getNumber() == 2)
        return true;

    //If number is divisable by i, it is not prime
    if (number.getNumber() % i == 0)
        return false;

    //If i*i > number, then number must be prime
    if ((i * i) > number.getNumber())
        return true;

    //If all case have passed, then call isPrime with a higher i value
    return isPrime(i+1);
}

bool Analyzer::isFibonacci(int a, int b){
    /**********************************
    This method should return true if number is in
    the Fibonacci Sequience (0, 1, 1, 2, 3, 5, 8, 13...)

    We are goig to implement this method recursively.
    Fill in all the missing portions.
    **********************************/

    //Base case: if b > number, then number is not a fibonacci
    if (b > number.getNumber())
        return false;
    //Base case: if b is the same as number, then number is a fibonacci
    if (b == number.getNumber())
        return true;
    //If all cases have passed
    return isFibonacci(b, a+b);
}

bool Analyzer::isBiggerThan4(){
    /**********************************
    This method should return true if number is bigger than
    the number 4.
    **********************************/

    if (number.getNumber() > 4)
        return true;
    else
        return false;

}

bool Analyzer::isEven(){
    /**********************************
    This method should return true if number is even.
    **********************************/

    return ((number.getNumber() %2) == 0 );
}
