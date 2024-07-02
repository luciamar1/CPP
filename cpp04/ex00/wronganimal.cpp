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

WrongAnimal::WrongAnimal(std::string WrongAnimalType)
{
    std::cout << " constructor Wronganimal called" << std::endl;
    type = WrongAnimalType;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Some generic WrongAnimal sound" << std::endl;
}

 std::string WrongAnimal::getType() const
{
    return(type);
}
