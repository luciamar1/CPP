#include "animal.hpp"

 Animal::Animal()
 { 
    type = "animal";
     std::cout << "default constructor animal called" << std::endl;
 }

Animal::~Animal()
{
    std::cout << "default destructor animal called" << std::endl;
}

Animal::Animal(std::string AnimalType)
{
    std::cout << " constructor animal called" << std::endl;
    type = AnimalType;
}

void Animal::makeSound() const
{
    std::cout << "Some generic Animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return(type);
}


Animal& Animal::operator=(const Animal& other) 
{
    if (this != &other) {
        type = other.type;
    }
    std::cout << "Animal assignment operator called" << std::endl;
    return *this;
}

