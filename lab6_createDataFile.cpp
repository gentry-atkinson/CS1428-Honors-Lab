#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
    fstream file;
    file.open("lab6_data.txt", fstream::out);

    int setSize = 152;
    int yIntercept = 477;
    int slope = 3;

    file << setSize << " ";
    srand(23);

    for (int x = 1; x <= setSize; x++){
        file << x*slope + yIntercept + ((rand() % 21) - 10) << " ";
    }

    return 0;
}
