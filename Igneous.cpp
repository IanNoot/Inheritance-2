#include "Rock.h"
#include "Igneous.h"
#include <iostream>

using namespace std;

//Call the function 'Rock' from the file 'Rock.h'
Igneous::Igneous(int newDurability, string newColor, string newType, string newName, string newRoughness){

    roughness = newRoughness;

    Rock_SetDurability(newDurability);
    Rock_SetColor(newColor);
    Rock_SetType(newType);
    Rock_SetName(newName);

    cout <<"\n\n New Igneous Rock Created \n";
}

void Igneous::Inspect() const{
    cout << "Durability " << Rock_GetDurability << "\n";
    cout << "Color " << Rock_GetColor << "\n";
    cout << "Type " << Rock_GetType << "\n";
    cout << "Name " << Rock_GetName << "\n";
    cout << "Roughness " << roughness << "\n";
}

void Igneous::Chip() const{
    durability -= 1;
    cout << Rock_GetName << " was chipped, its durability is now" << Rock_GetDurability;
}