#ifndef IGNEOUS_H
#define IGNEOUS_H

#include "Rock.h"
#include <string>

class Igneous : public Rock{

    private:

    std::string roughness = "NULL";

    public:
    
    Igneous(int newDurability, std::string newColor, std::string newType, std::string newName, std::string newRoughness);
    void Inspect() const;
    void Chip() const;
};


#endif