#ifndef SECRETNUMBER_H
#define SECRETNUMBER_H


class SecretNumber
{
    public:
        SecretNumber();
        int getNumber();

    private:
        int number;
        static const int lowerBound = 1;
        static const int upperBound = 10;
};

#endif // SECRETNUMBER_H
