#include "dog.hpp"

Dog::Dog()
{
    brain = new Brain();
    type = "dog";
    std::cout << "default constructor dog called" << std::endl;
}
Dog::Dog(std::string AnimalType)
{
    brain = new Brain();
    type = AnimalType;
    std::cout << "constructor type dog called" << std::endl;
}
Dog::~Dog()
{
    brain->~Brain();
    std::cout << "default destructor dog called" << std::endl;
}

void Dog::makeSound() const 
{
    std::cout << "guau guau i´m a dog or a dogito =)" << std::endl;
}

