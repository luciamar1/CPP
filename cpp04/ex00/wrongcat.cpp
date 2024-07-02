#include "wrongcat.hpp"

WrongCat::WrongCat()
{
    type = "Wrongcat";
    std::cout << "default constructor Wrongcat called" << std::endl;
}
WrongCat::WrongCat(std::string animalType)
{
    type = animalType;
    std::cout << "constructor type Wrongcat called" << std::endl;
}
WrongCat::~WrongCat()
{
    std::cout << "default destructor Wrongcat called" << std::endl;
}

void WrongCat::makeSound() const 
{
    std::cout << "miau miau i´m a Wrongcat or a Wrongcatito =)" << std::endl;
}

