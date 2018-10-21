#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream input;
    input.open("lab8_cipherText.txt");

    int charCount[26] = {0};
    int inInt;

    while (!input.eof()){
        input >> inInt;
        charCount[inInt]++;
    }

    for(int i = 0; i < 26; i++)
        cout << (char)(i + (int)'A') << ": " << charCount[i] << endl;

    return 0;
}
