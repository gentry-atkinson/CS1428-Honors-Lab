//Gentry Atkinson
//CS1428 Fall 2019
//Lab 12

#include <iostream>
#include <cmath>

using namespace std;

const int sortedList[] = {1, 3, 6, 8, 9, 11, 15, 17, 20, 23, 27, 29, 31, 35, 36, 38, 41, 50};
const int sortedList_size = 18;
const int unsortedList[] = {22, 3, 18, 35, 4, 44, 1, 21, 9, 17, 16, 2, 50, 6, 14, 8, 20, 47};
const int unsortedList_size = 18;

bool binarySearch(int, int, int, const int[]);
bool sequentialSearch(int, int, int, const int[]);

int main(){
//    Search sortedList for the number 23 and print the return with a cout statement.
    if(binarySearch(23, 0, sortedList_size, sortedList)){
        cout << 23 << " is in sortedList." << endl;
    }
    else{
        cout << 23 << " is not in sortedList." << endl;
    }
//    Search sortedList for the number 32 and print the return with a cout statement.
    if(binarySearch(32, 0, sortedList_size, sortedList)){
        cout << 32 << " is in sortedList." << endl;
    }
    else{
        cout << 32 << " is not in sortedList." << endl;
    }
//    Search unsortedList for the number 21 and print the return with a cout statement.
    if(sequentialSearch(21, 0, unsortedList_size, unsortedList)){
        cout << 21 << " is in unsortedList." << endl;
    }
    else{
        cout << 21 << " is not in unsortedList." << endl;
    }
//    Search unsortedList for the number 12 and print the return with a cout statement.
    if(sequentialSearch(12, 0, unsortedList_size, unsortedList)){
        cout << 12 << " is in unsortedList." << endl;
    }
    else{
        cout << 12 << " is not in unsortedList." << endl;
    }

    cout << endl << "These numbers are in both sortedList and unsortedList: " << endl;
    for(int i = 0; i <= 50; ++i){
        if(binarySearch(i, 0, sortedList_size, sortedList) && sequentialSearch(i, 0, unsortedList_size, unsortedList)){
            cout << i << endl;
        }
    }

    return 0;
}

/******************************************************************************/
//Binary Search
//Inputs: an inclusive int search value, an exclusive int upper bound, an int lower bound, and a sorted array of ints.
//Return: true if the search value is in the array, false otherwise
//Side Effects: none
bool binarySearch(int searchVal, int lowerBound, int upperBound, const int searchArray[]){
    //cout << searchArray[(lowerBound+upperBound)/2] << ": " << lowerBound << " to " << upperBound << endl;
    if (searchArray[(lowerBound+upperBound)/2] == searchVal){
        return true;
    }
    if (upperBound <= lowerBound){
        return false;
    }
    if (searchArray[(lowerBound+upperBound)/2] < searchVal){
        return binarySearch(searchVal, (lowerBound+upperBound)/2 + 1, upperBound, searchArray);
    }
    if (searchArray[(lowerBound+upperBound)/2] > searchVal){
        return binarySearch(searchVal, lowerBound, (lowerBound+upperBound)/2, searchArray);
    }
}

/******************************************************************************/
//Sequential Search
//Inputs: an int search value, an int search index, an int array size, and an array of ints
//Return: true if the search val is in the array, false otherwise
//Side Effects: none
bool sequentialSearch(int searchVal, int searchIndex, int arraySize, const int searchArray[]){
    //Base Case 1: the searchIndex is pointing to a value equal to searchVal
    //Fill in an if statement with a return for this case
    if(searchArray[searchIndex] == searchVal)
        return true;

    //Base Case 2: the searchIndex is equal to the arraySize
    //Fill in an if statement with a return for this case
    if(searchIndex == arraySize)
        return false;

    //Recursive Case
    //Fill in a return and a function call with searchIndex = searchIndex+1
    return sequentialSearch(searchVal, searchIndex+1, arraySize, searchArray);
}

