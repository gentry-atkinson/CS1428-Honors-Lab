//Gentry Atkinson
//CS1428 Fall 2019
//Lab 13

#include <iostream>
#include "Material.h"

using namespace std;

int main()
{
    Material gentrynium;
    Material turingite;

    gentrynium.addMelting(144.12);
    gentrynium.addMelting(133.12);
    gentrynium.addMelting(152.15);

    gentrynium.addBreaking(58.2);
    gentrynium.addBreaking(44.28);
    gentrynium.addBreaking(47.98);

    turingite.addMelting(305.61);
    turingite.addMelting(308.99);
    turingite.addMelting(301.22);

    turingite.addBreaking(64.08);
    turingite.addBreaking(65.9);
    turingite.addBreaking(61.00);

    turingite.reset();

    cout << "The melting point of gentynium is " << gentrynium.getAvgMelt() << endl;
    cout << "The breaking point of gentrynium is " << gentrynium.getAvgBreak() << endl;
    cout << "The melting point of turingite is " << turingite.getAvgMelt() << endl;
    cout << "The breaking point of turingite is " << turingite.getAvgBreak() << endl;


    return 0;
}
