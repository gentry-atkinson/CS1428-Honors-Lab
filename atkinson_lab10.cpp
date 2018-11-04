//Gentry Atkinson
//CS1428 Fall 2018
//Lab 10

#include <iostream>
#include <time.h>
#include <fstream>


using namespace std;

void swap (int indexA, int  indexB, int inputArray[]);
void bubbleSort(int toSort[], int arraySize);
void mySort(int toSort[], int arraySize);


int main() {
    int unsortedOne[50];
    int unsortedTwo[50];

    fstream inFile;
    inFile.open("lab10_data.txt", fstream::in);

    for (int i = 0; i < 50; i++)
        inFile >> unsortedOne[i];

    for (int i = 0; i < 50; i++)
        inFile >> unsortedTwo[i];

    clock_t bubble;
    clock_t mine;

    bubble = clock();
    bubbleSort(unsortedOne, 50);
    bubble = clock() - bubble;

    mine = clock();
    mySort(unsortedTwo, 50);
    mine = clock() - mine;

    cout << "Bubble sort: ";
    for(int i = 0; i < 50; i++)
        cout << unsortedOne[i] << " ";

    cout << endl << endl << "My Sort: ";
    for (int i = 0; i<50; i++)
        cout<< unsortedTwo[i] << " ";

    cout << endl << endl << "Bubble sorted in " << bubble << " cycles." << endl;
    cout << "Mine sorted in " << mine << " cycles" << endl;


    return 0;
}

//Swaps the values at indexA and indexB in inputArray
void swap (int indexA, int  indexB, int inputArray[]){
	int temp = inputArray[indexA];
	inputArray[indexA] = inputArray[indexB];
	inputArray[indexB] = temp;
	return;
}

void bubbleSort(int toSort[], int arraySize){
    //SET endingIndex to arraySize-1
    int endingIndex = arraySize - 1;
    //LOOP THROUGH ALL INDEXES FROM 0 TO endingIndex
    while(endingIndex > 0){
        for (int i = 1; i <= endingIndex; i++){
    //COMPARE EVERY TWO CONSECUTIVE VALUES (I.E. 0 AND 1, 1 AND 2, 2 AND 3,…)
    //IF THE VALUE AT THE LARGER INDEX IS SMALLER (I.E toSort[3] > toSort[2]) call  swap(smallerIndex, largerIndex, inputArray) TO SWAP THE VALUES
            if (toSort[i-1] > toSort[i]) swap(i-1, i, toSort);
        }
    //DECREMENT endingIndex
        endingIndex -= 1;
    //EXIT THE LOOP WHEN endingIndex EQUALS 0
    }
    //RETURN
    return;

}

void mySort(int toSort[], int arraySize){
    int biggest;
    int temp;
    int index = arraySize - 1;
    while (index > 0){
        biggest = 0;
        for (int i = 0; i < index; i++)
            if (toSort[i] > toSort[biggest]) biggest = i;
        if (biggest != index){
            temp = toSort[index];
            toSort[index] = toSort[biggest];
            toSort[biggest] = temp;
        }
        index -= 1;
    }
    return;
}


