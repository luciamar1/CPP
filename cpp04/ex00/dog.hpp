#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"

class Dog: public Animal
{
    public:
    Dog(const Dog& other);
    Dog();
    ~Dog();
    Dog& operator=(const Dog& original_Dog);

    void makeSound() const ;
};

#endif

