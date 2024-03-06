#ifndef ROCK_H
#define ROCK_H

#include <string>

class Rock{

    protected:
        //The number of hits that it takes to destroy a rock
        int durability = 0;

        //The color of the rock
        std::string color = "NULL";
        //The type/variety of the rock
        std::string type = "NULL";
        //The name of the rock
        std::string name = "NULL";


        //Functions for children to get variables from Rock

        int Rock_GetDurability() const;
        std::string Rock_GetColor() const;
        std::string Rock_GetType() const;
        std::string Rock_GetName() const;

        //Funstions to set variables in Rock



    public:
        //Constructor for rock
        Rock(int newDurability, std::string newColor, std::string newType, std::string newName);
        virtual void Inspect() const;


        void Rock_SetDurability(int newDurability) ;
        void Rock_SetColor(std::string newColor) ;
        void Rock_SetType(std::string newType) ;
        void Rock_SetName(std::string newName) ;


};

#endif // ROCK_H


