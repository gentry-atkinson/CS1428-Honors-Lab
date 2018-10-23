
//Gentry Atkinson
//CS1428 Fall 2018
//Lab 8

#include <iostream>
#include <fstream>

using namespace std;

bool countIntegers(ifstream file, int * countArray);
bool countIntegers(char * fileName, int * countArray);
int findMostCommon(int * countArray, int size);
int determineShift(int mostFrequent);


int main() {
    int countArray[26];
    int mostFrequent;
    ofstream outFile;
    ifstream inFile;
    int input;
    int shift;

    countIntegers("lab8_cipherText.txt", countArray);
    shift = determineShift(findMostCommon(countArray, 26));

    while (!inFile.eof()){
        inFile >> input;
        input += shift;
        outFile << static_cast<char>(input + 'A');
    }

    return 0;
}

bool countIntegers(ifstream file, int * countArray){
    int input;
    if (!file.is_open()) return false;
    while (!file.eof()){
        file >> input;
        countArray[input]++;
    }
    return true;
}

bool countIntegers(char * fileName, int * countArray){
    ifstream file;
    file.open(fileName);
    file.close();
    //return countIntegers(file, countArray);

    int input;
    if (!file.is_open()) return false;
    while (!file.eof()){
        file >> input;
        countArray[input]++;
    }
    return true;
}

int findMostCommon(int * countArray, int size){
    int biggest = 0;
    for (int i = 0; i < size; i++)
        if (countArray[i] > countArray[biggest])
            biggest = i;

    return biggest;
}

int determineShift(int mostFrequent) {
    return -1 * (mostFrequent - 4);
}
