#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
// #include "cat.hpp"
// #include "dog.hpp"
class Animal
{
protected:
    std::string type;
public:
    Animal(std::string AnimalType);
    Animal();
    virtual~Animal();
    std::string getType() const;
    virtual  void makeSound() const = 0;
};


#endif

