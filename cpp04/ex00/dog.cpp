#include "dog.hpp"

Dog::Dog()
{
    type = "dog";
    std::cout << "default constructor dog called" << std::endl;
}
Dog::Dog(std::string AnimalType)
{
    type = AnimalType;
    std::cout << "constructor type dog called" << std::endl;
}
Dog::~Dog()
{
    std::cout << "default destructor dog called" << std::endl;
}

void Dog::makeSound() const 
{
    std::cout << "guau guau i´m a dog or a dogito =)" << std::endl;
}                  

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {                   // 1. Verificación de autoasignación
        type = other.type;                  // 4. Copiar el atributo `type`
    }
    return *this;
}     
   
