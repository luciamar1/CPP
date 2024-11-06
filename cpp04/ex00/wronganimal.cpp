#include "wronganimal.hpp"

 WrongAnimal::WrongAnimal()
 { 
    type = "Wronganimal";
     std::cout << "default constructor Wronganimal called" << std::endl;
 }

WrongAnimal::~WrongAnimal()
{
    std::cout << "default destructor Wronganimal called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << " constructor Wronganimal called" << std::endl;
    this->type = other.type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Some generic WrongAnimal sound" << std::endl;
}

 std::string WrongAnimal::getType() const
{
    return(type);
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this != &other) {                   
        type = other.type;                  
    }
    return *this;
}     
