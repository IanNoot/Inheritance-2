#include "Rock.h"
#include <iostream>

using namespace std;

//Call the function 'Rock' from the file 'Rock.h'
Rock::Rock(int newDurability, string newColor, string newType, string newName) : durability(newDurability), color(newColor), type(newType), name(newName){
    cout <<"\n\n New Rock Created \n";
}

void Rock::Inspect() const{
    cout << "Durability " << durability << "\n";
    cout << "Color " << color << "\n";
    cout << "Type " << type << "\n";
}

    //Functions for children to get variables from Rock

    int Rock::Rock_GetDurability() const {return durability;}
    std::string Rock::Rock_GetColor() const {return color;}
    std::string Rock::Rock_GetType() const {return type;}
    std::string Rock::Rock_GetName() const {return name;}

    //Functions to set variables in Rock

    void Rock::Rock_SetDurability(int newDurability) {durability = newDurability;}
    void Rock::Rock_SetColor(string newColor) {color = newColor;}
    void Rock::Rock_SetType(string newType) {type = newType;}
    void Rock::Rock_SetName(string newName) {name = newName;}