//Gentry Atkinson
//CS1428 Fall 2018
//Lab 7

#include <iostream>

using namespace std;

int findLargest(int list [], int size);
float findAverage(int list[], int size);
void copyArray(int from[], int to[], int size);

int main() {

    /********Problem 4*************/

    int firstArray[] = {3, 9, 8, 8, 7, 4, 5, 1, 11};
    int secondArray[9];
    int arraySize = 9;

    /********Problem 8*************/

    cout << "Largest value: " << findLargest(firstArray, arraySize) << endl;
    cout << "Average value: " << findAverage(firstArray, arraySize) << endl;

    copyArray(firstArray, secondArray, arraySize);

    for(int i = 0; i < arraySize; i++) cout << secondArray[i] << " ";

    cout << endl;

    /********Problem 9*************/

    cout << "findLargest(firstArray, arraySize - 1) = 9" << endl;

    return 0;
}

/********Problem 5*************/

int findLargest(int list [], int size) {
    //DECLARE AN INTEGER VARIABLE CALLED largest WITH VALUE 0
    int largest = 0;
    //DECLARE AN INTEGER VARIABLE CALLED counter WITH VALUE 0
    int counter = 0;
    //ENTER A LOOP WHICH WILL CONTINUE WHILE counter < size
    while (counter < size) {
    //IF list[counter] > largest THEN largest = list[counter]
        if (list[counter] > largest) largest = list[counter];
        counter++;
    //EXIT LOOP
    }
    //RETURN largest
    return largest;
}

/********Problem 6*************/

float findAverage(int list[], int size) {
    float average = 0;
    for (int i = 0; i < size; i++)
        average += list[i];
    average /= static_cast<float>(size);
    return average;
}

/********Problem 7*************/

void copyArray(int from[], int to[], int size){

    for(int i = 0; i < size; i++) {
        to[i] = from[i];
    }
    return;
}

//Time to complete: 00:15:34
