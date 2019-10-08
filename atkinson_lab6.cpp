//Your Name
//CS1428 Fall 2019
//Lab 6

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // This part is correct!

    fstream dataFile;
    dataFile.open("lab6_data.txt", fstream::in);
    int setSize =  0;
    dataFile >> setSize;

    //After this is broken!

    int[setSize] data;
        int counter;
        while (conter <= setSize) {
                dataFile << data[counter];
            counter+;
    }

    return 0;
}

