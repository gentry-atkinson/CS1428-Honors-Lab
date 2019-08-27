#include <fstream>
#include <string>
#include <iostream>
#include <ctype.h>

using namespace std;

int main () {
    ifstream plainText;
    ofstream cipherText;

    string plainString;
    char plainChar;
    int cipherChar;
    int shift = 5;

    plainText.open("lab8_original_text.txt");
    cipherText.open("lab8_cipherText.txt");

    while(!plainText.eof()){
        plainText >> plainString;
        cout << plainString << endl;
        for (string::size_type i = 0; i < plainString.size(); i++){
            plainChar = plainString[i];
            plainChar = toupper(plainChar);
            cout << plainChar << endl;
            cipherChar = ((int)plainChar + shift - (int)'A') % 26;
            cout << cipherChar << endl;
            cipherText << cipherChar << " ";
        }
    }

    return 0;
}
