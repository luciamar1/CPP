#include "cat.hpp"

Cat::Cat()
{
    brain = new Brain();
    type = "cat";
    std::cout << "default constructor cat called" << std::endl;
}
Cat::Cat(const Cat& other) : Animal(other)
{
    brain = new Brain();
    std::cout << "constructor type cat called" << std::endl;
}
Cat::~Cat()
{
    delete brain;
    std::cout << "default destructor cat called" << std::endl;
}

void Cat::makeSound() const 
{
    std::cout << "miau miau i´m a cat or a catito =)" << std::endl;
}                           

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {            
        delete brain;
        brain = new Brain(*other.brain);      
        this->type = other.type;                  
    }
    return *this;
}                             




Brain* Cat::getBrain() const 
{
    return brain;
}


