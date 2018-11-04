#include <fstream>
#include <stdlib.h>

using namespace std;

int main () {
    srand(23);
    fstream outFile;
    outFile.open("lab10_data.txt", fstream::out);
    for(int i = 0; i < 100; i++){
        outFile << rand() % 100 << " ";
    }
    return 0;
}
