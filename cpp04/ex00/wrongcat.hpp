#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "wronganimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
    WrongCat(std::string AnimalType);
    WrongCat();
    ~WrongCat();
    void makeSound() const;
};

#endif
