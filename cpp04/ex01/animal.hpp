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
    Animal(const Animal& other);
    Animal();
    virtual~Animal();
    Animal& operator=(const Animal& original_Animal);


    std::string getType() const;
    virtual  void makeSound() const;
};


#endif

