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
    std::cout << "default destructor dog called" << std::endl;
    delete brain;
}

void Dog::makeSound() const 
{
    std::cout << "guau guau i´m a dog or a dogito =)" << std::endl;
}                  

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {                   
        delete brain;                       
        brain = new Brain(*other.brain);    
        type = other.type;                  
    }
    return *this;
}                                    

