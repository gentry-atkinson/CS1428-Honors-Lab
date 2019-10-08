//Your Name
//CS1428 Fall 2019
//Lab 6

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // This part is correct!

    ifstream dataFile;
    dataFile.open("lab6_data.txt");
    int setSize =  0;
    dataFile >> setSize;

    //After this is broken!

    int data[setSize];
    int counter;
    while (counter < setSize) {
            dataFile >> data[counter];
        counter++;
    }

    dataFile.close();

    //1. DECLARE ANOTHER FILESTREAM TO HANDLE YOUR PROGRAMS OUTPUT
    ofstream outFile;
    //2. OPEN THE FILESTREAM FOR OUTPUT WITH THE FILENAME “lab6_output.txt”
    outFile.open("lab6_output.txt");
    //3. DECLARE TWO VARIABLES CALLED maxViews AND minViews
    int maxViews, minViews;
    //4. DECLARE ANOTHER VARIABLE TO TEMPORARILY HOLD VALUES FROM data
    int temp;
    //5. INITIALIZE minViews WITH A VERY LARGE VALUE. INITIALIZE maxViews
    // WITH A VERY SMALL VALUE
    minViews = 9999999;
    maxViews = 0;
    //6. ENTER A LOOP WHICH WILL COUNT THROUGH THE INDEXES OF data
    for (int i = 0; i < setSize; ++i){
        //7. ASSIGN YOUR TEMP VAR TO EQUAL THE VALUE IN THIS INDEX OF
    //data
        temp = data[i];
        //8. IF THE VALUE IN data AT THIS INDEX IS GREATER THAN maxViews,
    //UPDATE maxViews
        if (temp > maxViews) maxViews = temp;
        //9. IF THE VALUE IN data AT THIS INDEX IS SMALLER THAN minViews,
    //UPDATE minViews
        if (temp < minViews) minViews = temp;
    //10. EXIT LOOP
    }
    //11. WRITE maxViews AND minViews INTO THE OUTPUT FILE WITH AN
    //APPROPRIATE LABEL
    outFile << "The max views in one day: " << maxViews << endl;
    outFile << "The min views in one day: " << minViews << endl;

    float slope = (maxViews - minViews)/157.0;
    float yInt = data[0] - slope;
    float sumOfErrors = 0;
    for(int i = 0; i < setSize; ++i){
        sumOfErrors += (slope*i + yInt) - data[i];
    }
    outFile << "The slope is: " << slope << endl;
    outFile << "The y intercept is: " << yInt << endl;
    outFile << "The sum of errors is: " << sumOfErrors << endl;

    outFile.close();

    return 0;
}

