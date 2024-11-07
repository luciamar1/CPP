#include "dog.hpp"

Dog::Dog()
{
    brain = new Brain();
    type = "dog";
    std::cout << "default constructor dog called" << std::endl;
}
Dog::Dog(const Dog& other) : Animal(other)
{
    brain = new Brain();
    std::cout << "constructor type dog called" << std::endl;
}
Dog::~Dog()
{
    delete brain;
    std::cout << "default destructor dog called" << std::endl;
}

void Dog::makeSound() const 
{
    std::cout << "guau guau i´m a dog or a dogito =)" << std::endl;
}                  

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {                
        delete brain;                       
        brain = new Brain(*other.brain);    
        this->type = other.type;                  
    }
    return *this;
}     
   
Brain* Dog::getBrain() const 
{
    
    return brain;
}

