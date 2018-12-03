#ifndef ANALYZER_H
#define ANALYZER_H

#include "SecretNumber.h"

class Analyzer
{
    public:
        Analyzer();
        bool isPrime(int i = 2);
        bool isFibonacci(int a = 0, int b = 1);
        bool isBiggerThan4();
        bool isEven();
        int getNumber();

    private:
        SecretNumber number;
};

#endif // ANALYZER_H
