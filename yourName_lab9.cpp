//Your Name
//CS1428 Fall 2019
//Lab 9

#include<iostream>

using namespace std;

float getCaloriesForBreed(char*);
float getCaloriesForBreed(char);
float getCaloriesForBreed(float, char*);

float remainingCalories(float, float);
float remainingCalories(char*, float);
float remainingCalories(char*, float, float);

bool isSafeToEat(char*);
bool isSafeToEat(char);
bool isSafeToEat(char*, char*);


int main(){
    float caloriesPerDay;
    cout << "------------------UI Test 1-------------------" << endl;
    cout << "Enter a breed to calculate calories/day: " << endl;
    caloriesPerDay = getCaloriesForBreed("labrador");
    cout << "Enter a meal: " << endl;
    caloriesPerDay = remainingCalories("dry", caloriesPerDay);
    cout << "Your pupper needs " << caloriesPerDay << " more calories today." << endl << endl;

    cout << "------------------UI Test 2-------------------" << endl;
    cout << "Enter a breed to calculate calories/day: " << endl;
    cout << "A) labrador" << endl;
    cout << "B) terrier" << endl;
    cout << "C) retriever" << endl;
    cout << "D) mastiff" << endl;
    caloriesPerDay = getCaloriesForBreed('b');
    cout << "Enter a meal size: " << endl;
    caloriesPerDay = remainingCalories(200, caloriesPerDay);
    cout << "Your pupper needs " << caloriesPerDay << " more calories today." << endl << endl;

    cout << "------------------UI Test 3-------------------" << endl;
    cout << "Enter a breed to calculate calories/day: " << endl;
    caloriesPerDay = getCaloriesForBreed("corgie");
    cout << endl;

    cout << "------------------UI Test 4-------------------" << endl;
    cout << "Enter a breed to predicted calories/day: " << endl;
    caloriesPerDay = getCaloriesForBreed(500, "terrier");
    cout << "Enter a meal and # of cups: " << endl;
    caloriesPerDay = remainingCalories("wet", 2.0, caloriesPerDay);
    cout << "Your pupper needs " << caloriesPerDay << " more calories today." << endl << endl;

    cout << "------------------UI Test 5-------------------" << endl;
    cout << "Enter a food type: " << endl;
    if(isSafeToEat("cheese")){
        cout << "Cheese is safe for your pupper." << endl;
    }
    else{
        cout << "Cheese is not safe for your pupper." << endl;
    }
    cout << endl;

    cout << "------------------UI Test 6-------------------" << endl;
    cout << "Select a food type: " << endl;
    cout << "A) beef" << endl;
    cout << "B) soy" << endl;
    cout << "C) citrus" << endl;
    cout << "D) pickles" << endl;
    if(isSafeToEat('c')){
        cout << "Citrus is safe for your pupper." << endl;
    }
    else{
        cout << "Citrus is not safe for your pupper." << endl  << endl;
    }
    cout << endl;

    cout << "Thank you for using DogDiet." << endl;
    return 0;
}

/******************************************************************
Get Calories For Breed
These 3 overloaded function return a number of calories based on the users input.
Try to re-use one function to write the other 2

Parameters: the breed of the dog.
Return: an appropriate number of calories based on:
    Labrador: 1875
    Terrier: 400
    Retriever: 1400
    Mastiff: 3000
Side Effects: print an error message for unsupported input
******************************************************************/
float getCaloriesForBreed(char* breed){
    //fill in function body
}
float getCaloriesForBreed(char choice){
    //fill in function body
}
float getCaloriesForBreed(float guess, char* breed){
    //In addition to the normal return report to the user if
    //they are over or underfeeding their animal.
}

/******************************************************************
Remaining Calories
These 3 overloaded function return the reaminging calories in a dog's daily diet
Try to re-use one function to write the other 2

Parameters: a meal fed to the dog
Return: an appropriate number of calories based on:
    Dry: 200
    Wet: 400
    Treat: 500
Side Effects: print an error message for unsupported input
******************************************************************/

float remainingCalories(float caloriesFed, float totalCalories){
    //fill in function body
}
float remainingCalories(char* foodType, float totalCalories){
    //fill in function body
}
float remainingCalories(char* foodType, float numberServings, float totalCalories){
    //fill in function body
}

/******************************************************************
Is Safe To East
These 3 overloaded function return true if a food is safe. False otherwise.
Try to re-use one function to write the other 2

Parameters: a meal fed to the dog
Return: false for:
    "chocolate"
    "avocado"
    "citrus"
    "garlic"
    And true if not of those foods
Side Effects: none
******************************************************************/

bool isSafeToEat(char* food){
    //fill in function body
}
bool isSafeToEat(char userChoice){
    //fill in function bod
}
bool isSafeToEat(char* food, char* breed){
    //Mastiffs do not like spicy food
    //if the breed is "mastiff", the "pepper" should also return false
    //otherwise the return is same as the base function
}
