#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"
#include "brain.hpp"

class Dog: public Animal
{
    private:
        Brain   *brain;

    public:
        Dog();
        Dog(const Dog& other);
        ~Dog();
        Dog& operator=(const Dog& original_Dog);

        Brain* getBrain() const;
        void makeSound() const ;
};

#endif

