
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
    int mostFrequent, input, shift, mostFreqIndex;
    ofstream outFile;
    ifstream inFile;

    for(int i = 0; i < 26; i++)
        countArray[i] = 0;

    countIntegers("lab8_cipherText.txt", countArray);
    mostFreqIndex = findMostCommon(countArray, 26);
    shift = determineShift(mostFreqIndex);

    //cout << mostFreqIndex << endl;
    //cout << shift << endl;

    outFile.open("lab8_plainText.txt");
    inFile.open("lab8_cipherText.txt");


    while (!inFile.eof()){
        inFile >> input;
        input += (26 + shift);
        input %= 26;
        //cout << input << " : ";
        //cout << static_cast<char>(input + 'A') << endl;
        outFile << static_cast<char>(input + 'A');
    }

    cout << "John Donne" << endl;

    return 0;
}

bool countIntegers(ifstream file, int * countArray){
    int input;
    if (!file.is_open()) return false;
    while (!file.eof()){
        file >> input;
        //cout << input << endl;
        countArray[input]++;
    }
    return true;
}

bool countIntegers(char * fileName, int * countArray){
    ifstream file;
    file.open(fileName);
    //return countIntegers(file, countArray);

    int input;
    if (!file.is_open()) return false;
    while (!file.eof()){
        file >> input;
        //cout << input << endl;
        countArray[input]++;
    }
    file.close();
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
