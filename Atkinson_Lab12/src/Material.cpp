#include "Material.h"

Material::Material()
{
    //This is the constructor
    //Give every variable a default value here

    for (int i = 0; i < 5; i++){
        melting[i] = 0;
        breaking[i] = 0;
    }

    meltPointer = 0;
    breakPointer = 0;
}

Material::~Material()
{
    //This is the destructor
    //It is not necesary for this object
}

void Material::addMelting(float input){
    //Add input to the array melting
    //Then increment the meltPointer value
    //Should not do anything if array is full
    if (meltPointer == 3) return;
    melting[meltPointer] = input;
    meltPointer++;
    return;
}
void Material::addBreaking(float input){
    //Add input to the array breaking
    //Then increment the breakPointer value
    //Should not do anything if array is full
    if (breakPointer == 3) return;
    breaking[breakPointer] = input;
    breakPointer++;
    return;
}

float Material::getAvgMelt(){
    /*****************************
    Return the mean of all the value in
    the melting array. The last guy wrote this.
    Can you fix it?

    int sum;
    for (i = 0; i < index; i++){
        sum += melting[i];
        return (sum/index);
    }
    ********************************/
    if (meltPointer == 0) return 0;
    float sum;
    for (int i = 0; i < meltPointer; i++)
        sum += melting[i];
    return(sum/meltPointer);
}
float Material::getAvgBreak(){
    //Same as melting but for breaking
    if (breakPointer == 0) return 0;
    float sum;
    for (int i = 0; i < breakPointer; i++)
        sum += breaking[i];
    return(sum/breakPointer);
}
void Material::reset(){
    //Reset both arrays
    meltPointer = 0;
    breakPointer = 0;
    return;
}
