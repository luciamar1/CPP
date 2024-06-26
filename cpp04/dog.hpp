#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"

class Dog: public Animal
{
    public:
    Dog(std::string AnimalType);
    Dog();
    ~Dog();
    void makeSound() const ;
};

#endif
