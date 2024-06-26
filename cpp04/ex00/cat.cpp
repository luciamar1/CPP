#include "cat.hpp"

Cat::Cat()
{
    type = "cat";
    std::cout << "default constructor cat called" << std::endl;
}
Cat::Cat(std::string animalType)
{
    type = animalType;
    std::cout << "constructor type cat called" << std::endl;
}
Cat::~Cat()
{
    std::cout << "default destructor cat called" << std::endl;
}

void Cat::makeSound() const 
{
    std::cout << "miau miau i´m a cat or a catito =)" << std::endl;
}

