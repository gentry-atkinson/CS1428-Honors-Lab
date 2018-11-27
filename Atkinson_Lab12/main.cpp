#include <iostream>
#include "Material.h"

using namespace std;

int main()
{
    Material gentrynium;
    Material wonderfonium;
    Material turingite;

    gentrynium.addMelting(144.12);
    gentrynium.addMelting(133.12);
    gentrynium.addMelting(152.15);
    gentrynium.addBreaking(58.2);
    gentrynium.addBreaking(44.28);
    gentrynium.addBreaking(47.98);

    wonderfonium.addMelting(159.85);
    wonderfonium.addMelting(143.37);
    wonderfonium.addMelting(120.99);
    wonderfonium.addBreaking(67.24);
    wonderfonium.addBreaking(52.19);
    wonderfonium.addBreaking(42.88);

    turingite.addMelting(305.61);
    turingite.addMelting(308.99);
    turingite.addMelting(301.22);
    turingite.addBreaking(64.08);
    turingite.addBreaking(65.9);
    turingite.addBreaking(61.00);

    turingite.reset();

    cout << "The average melting point of Gentrynium is " << gentrynium.getAvgMelt() << endl;
    cout << "The average breaking point of Gentrynium is " << gentrynium.getAvgBreak() << endl;
    cout << "Gentrynium will ";
    if (!gentrynium.willBreak(43)) cout << "not ";
    cout << "break under a load of 43kN." << endl;
    cout << "The average melting point of Wonderfonium is " << wonderfonium.getAvgMelt() << endl;
    cout << "The average breaking point of Wonderfonium is " << wonderfonium.getAvgBreak() << endl;
    cout << "Wonderfonium will ";
    if (!wonderfonium.willBreak(43)) cout << "not ";
    cout << "break under a load of 43kN."<< endl;
    cout << "The average melting point of Turingite is " << turingite.getAvgMelt() << endl;
    cout << "The average breaking point of Turingite is " << turingite.getAvgBreak() << endl;
    cout << "Turingite will ";
    if (!turingite.willBreak(43)) cout << "not ";
    cout << "break under a load of 43kN."<< endl;

    return 0;
}
