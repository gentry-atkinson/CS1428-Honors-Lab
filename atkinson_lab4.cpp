//Your Name
//CS1428 Fall 2019
//Lab 4

#include <iostream>

using namespace std;

int main() {

    //Problem 4 and 5
    int grades[3];
    for(int i = 0; i < 3; i++){
        cout << "Enter a grade for student " << i << ": ";
        cin >> grades[i];
    }
    for(int i = 0; i < 3; i++){
        //cout << "Student " << i << " earned a " << grades[i] << endl;
        if (grades[i] >= 90){
            cout << "Student " << i << " earned an A." << endl;
        }
        else if (grades[i] >= 80){
            cout << "Student " << i << " earned a B." << endl;
        }
        else if (grades[i] >= 75){
            cout << "Student " << i << " earned a C." << endl;
        }
        else if (grades[i] >= 70){
            cout << "Student " << i << " earned a D." << endl;
        }
        else{
            cout << "Student " << i << " earned an F." << endl;
        }
    }
    cout << endl;

    //Problem 6
    char property_scores[] = {'E', 'P', 'F', 'F', 'E','P','E', 'F'};
    int excelent_properties = 0;
    const int number_of_properties = 8;

    for (int i = 0; i < number_of_properties; i++){
        if (property_scores[i] == 'E'){
            excelent_properties++;
        }
    }
    cout << excelent_properties << " properties are rated Excelent" <<endl;

    for(int i=0; i< number_of_properties; i++){
        if (property_scores[i] == 'F'){
            cout << "Property number " << i << " has failed." << endl;
        }
    }
    property_scores[2] = 'P';
    property_scores[6] = 'P';
    cout << endl;

    //Problem 7

    //declare an array of prime numbers
    int primes[] = {2, 3, 5, 7, 11, 13, 17};
    //declare an integer named index
    int index = 0;
    //declare a float named average
    float average = 0;
    //loop while index is less than 7
    while (index <= 6){
        //add the value in primes at index to average
        average = average + primes[index];
        //update index
        index++;
    }
    //print range of averages
    cout << "Smallest prime: " << primes[0] << " Biggest prime: " << primes[6] << endl;
    //divide average by the count of values in primes
    average /= 7.0;
    //print the average of the 7 numbers in primes
    cout << "Average of 7 prime numbers: " << average << endl;
    return 0;
}
