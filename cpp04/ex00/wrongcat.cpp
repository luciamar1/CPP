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

WrongCat& WrongCat::operator=(const WrongCat& other) {
    if (this != &other) {                   // 1. Verificación de autoasignación
        type = other.type;                  // 4. Copiar el atributo `type`
    }
    return *this;
}     
