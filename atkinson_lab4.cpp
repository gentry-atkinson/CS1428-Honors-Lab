
//Gentry
//CS1428 Fall 2018
//Lab 4

#include <iostream>

using namespace std;

int main() {
    int grades[3];

    for(int i = 0; i < 3; i++){
        cout << "Enter a grade for student " << i <<  ": ";
        cin >> grades[i];
    }

    for(int i = 0; i < 3; i++){
        cout << "Student " << i << " earned a";
        if (grades[i] >= 90) cout << "n A." << endl;
        else if (grades[i] >= 80) cout << " B." << endl;
        else if (grades[i] >= 75) cout << " C." << endl;
        else if (grades[i] >= 70) cout << " D." << endl;
        else cout << " F." << endl;
    }

    cout << endl;

    char scores[] = {'E', 'P', 'F', 'F', 'E', 'P', 'E', 'F'};
    int excelentScores = 0;

    for (int i = 0; i < 8; i++){
        if (scores[i] == 'E') excelentScores++;
    }
    cout << "The number of excellent properties is: " << excelentScores << endl;

    for (int i = 0; i < 8; i++){
        if (scores[i] == 'F') cout << "Property " << i << " is failing." << endl;
    }

    scores[2] = 'P';
    scores[6] = 'P';

    cout << endl;

    //declare an array of prime numbers
    int primes[] = {2, 3, 5, 7, 11, 13,  17};

    //declare an integer named index
    int index = 0;

    //declare a float named average
    float average = 0;


    //loop while index is less than 7
    while (index < 7){

        //add the value in primes at index to average
        average = average + primes[index];

        //update index
        index++;

    }

    //print range of averages
    cout << "Smallest prime: " << primes[0] << " Biggest prime: " << primes[6] << endl;

    //divide average by the count of values in primes
    average /= 7;

    //print average
    cout << "Average of 7 prime numbers: " << average << endl;


    return 0;
}
