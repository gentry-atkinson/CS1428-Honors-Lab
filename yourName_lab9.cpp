//Your Name
//CS1428 Fall 2019
//Lab 9

#include<iostream>
#include<string>

using namespace std;

float getCaloriesForBreed(string);
float getCaloriesForBreed(char);
float getCaloriesForBreed(float, string);

float remainingCalories(float, float);
float remainingCalories(string, float);
float remainingCalories(string, float, float);

bool isSafeToEat(string);
bool isSafeToEat(char);
bool isSafeToEat(string, string);


int main(){
    float caloriesPerDay;
    cout << "------------------Test UI 1-------------------" << endl;
    cout << "Enter a breed to calculate calories/day: " << endl;
    caloriesPerDay = getCaloriesForBreed("labrador");
    cout << "Enter a meal: " << endl;
    caloriesPerDay = remainingCalories("dry", caloriesPerDay) << endl;
    cout << "Your pupper needs " << caloriesPerDay << " more calories today." << endl << endl;

    cout << "------------------Test UI 2-------------------" << endl;
    cout << "Enter a breed to calculate calories/day: " << endl;
    cout << "A) labrador" << endl;
    cout << "B) terrier" << endl;
    cout << "C) retriever" << endl;
    cout << "D) mastiff"
    caloriesPerDay = getCaloriesForBreed('B');
    cout << "Enter a meal size: " << endl;
    caloriesPerDay = remainingCalories(200, caloriesPerDay) << endl;
    cout << "Your pupper needs " << caloriesPerDay << " more calories today." << endl << endl;

    cout << "------------------Test UI 3-------------------" << endl;
    cout << "Enter a breed to calculate calories/day: " << endl;
    caloriesPerDay = getCaloriesForBreed("corgie");

    cout << "------------------Test UI 4-------------------" << endl;
    cout << "Enter a breed to predicted calories/day: " << endl;
    caloriesPerDay = getCaloriesForBreed("terrier");
    cout << "Enter a meal and # of cups: " << endl;
    caloriesPerDay = remainingCalories("wet", 2.0, caloriesPerDay) << endl;
    cout << "Your pupper needs " << caloriesPerDay << " more calories today." << endl << endl;

    cout << "Thank you for using DogDiet." << endl;
    return 0;
}
