#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"
#include "brain.hpp"

class Dog: public Animal
{
     private:
        Brain   *brain;
    public:
        Dog(std::string AnimalType);
        Dog();
        ~Dog();
        void makeSound() const ;
};

#endif
