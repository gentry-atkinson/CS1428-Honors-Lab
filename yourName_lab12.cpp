//Your Name
//CS1428 Fall 2019
//Lab 12

#include <iostream>

using namespace std;

const int sortedList[] = {1, 3, 6, 8, 9, 11, 15, 17, 20, 23, 27, 29, 31, 35, 36, 38, 41, 50};
const int sortedList_size = 18;
const int unsortedList[] = {22, 3, 18, 35, 4, 44, 1, 21, 9, 17, 16, 2, 50, 6, 14, 8, 20, 47};
const int unsortedList_size = 18;

bool binarySearch(int, int, int, const int[]);
bool sequentialSearch(int, int, int, const int[]);

int main(){

    return 0;
}

/******************************************************************************/
//Binary Search
//Inputs: an inclusive int search value, an exclusive int upper bound, an int lower bound, and a sorted array of ints.
//Return: true if the search value is in the array, false otherwise
//Side Effects: none
bool binarySearch(int searchVal, int lowerBound, int upperBound, const int searchArray[]){
    if (searchArray[(lowerBound+upperBound)/2] == searchVal){
        return /*fill in an appropriate return*/;
    }
    if (upperBound == lowerBound){
        return /*fill in an appropriate return*/;
    }
    if (searchArray[(lowerBound+upperBound)/2] /*fill in a comparison*/ searchVal){
        return binarySearch(searchVal, (lowerBound+upperBound)/2 + 1, upperBound, searchArray);
    }
    if (searchArray[(lowerBound+upperBound)/2] /*fill in a comparison*/ searchVal){
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

    //Base Case 2: the searchIndex is equal to the arraySize
    //Fill in an if statement with a return for this case

    //Recursive Case
    //Fill in a return and a function call with searchIndex = searchIndex+1
}

