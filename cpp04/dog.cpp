#include "dog.hpp"

Dog::Dog()
{
    type = "dog";
    std::cout << "default constructor dog called" << std::endl;
}
Dog::Dog(std::string AnimalType)
{
    type = AnimalType;
    std::cout << "constructor type dog called" << std::endl;
}
Dog::~Dog()
{
    std::cout << "default destructor dog called" << std::endl;
}

void Dog::makeSound() const 
{
    std::cout << "guau guau i´m a dog or a dogito =)" << std::endl;
}

