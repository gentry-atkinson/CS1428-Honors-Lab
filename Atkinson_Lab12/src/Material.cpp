#include "Material.h"

Material::Material()
{
    //This is the constructor
    //Give every variable a default value here
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
}
void Material::addBreaking(float input){
    //Add input to the array breaking
    //Then increment the breakPointer value
    //Should not do anything if array is full
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
}
float Material::getAvgBreak(){
    //Same as melting but for breaking
}
void Material::reset(){
    //Reset both arrays
}
