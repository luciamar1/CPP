#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "wronganimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
    WrongCat( const WrongCat& other);
    WrongCat();
    ~WrongCat();
    WrongCat& operator=(const WrongCat& original_WrongCat);

    void makeSound() const;
};

#endif

