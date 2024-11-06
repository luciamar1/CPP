#include "wrongcat.hpp"

WrongCat::WrongCat()
{
    type = "Wrongcat";
    std::cout << "default constructor Wrongcat called" << std::endl;
}
WrongCat::WrongCat( const WrongCat& other) : WrongAnimal(other)
{
    type = other.type;
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
    if (this != &other) {                   
        this->type = other.type;                  
    }
    return *this;
}     
