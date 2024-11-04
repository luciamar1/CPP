#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "wronganimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
    WrongCat(std::string AnimalType);
    WrongCat();
    ~WrongCat();
    WrongCat& operator=(const WrongCat& original_WrongCat);

    void makeSound() const;
};

#endif

