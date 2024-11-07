#include "dog.hpp"

Dog::Dog()
{
    brain = new Brain();
    type = "dog";
    std::cout << "default constructor dog called" << std::endl;
}
Dog::Dog(const Dog& other) : Animal(other)
{
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
   

void Dog::setIdea(int index,  std::string& idea) 
{
    if (brain) {
        brain->setIdea(index, idea);
    }
}

std::string Dog::getBrain(int index) const 
{
    if (brain) {
        return brain->getIdea(index);
    }
    return "";
}

