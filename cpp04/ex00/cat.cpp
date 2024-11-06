#include "cat.hpp"

Cat::Cat()
{
    type = "cat";
    std::cout << "default constructor cat called" << std::endl;
}
Cat::Cat(const Cat& other) : Animal(other)
{
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

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {                  
        this->type = other.type;                  
    }
    return *this;
}                             

