#include "SecretNumber.h"

#include <stdlib.h>
#include <time.h>
#include <fstream>

using namespace std;

bool exists(const char *filename){
    ifstream ifile(filename);
    return ifile.good();
}

SecretNumber::SecretNumber()
{
    srand(time(NULL));
    if (exists("secret.data")){
        ifstream inFile("secret.data");
        inFile >> number;
    }
    else{
        number = (rand() % upperBound) + lowerBound;
        ofstream outFile("secret.data");
        outFile << number;
    }
}

int SecretNumber::getNumber(){
    return number;
}

