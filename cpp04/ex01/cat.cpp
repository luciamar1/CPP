#include "cat.hpp"

Cat::Cat()
{
    brain = new Brain();
    type = "cat";
    std::cout << "default constructor cat called" << std::endl;
}
Cat::Cat(std::string animalType)
{
    brain = new Brain();
    type = animalType;
    std::cout << "constructor type cat called" << std::endl;
}
Cat::~Cat()
{
    std::cout << "default destructor cat called" << std::endl;
    delete brain;
}

void Cat::makeSound() const 
{
    std::cout << "miau miau i´m a cat or a catito =)" << std::endl;
}                           

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {                  // 1. Verificación de autoasignación
        delete brain;                       // 2. Liberar memoria actual de `brain`
        brain = new Brain(*other.brain);    // 3. Copia profunda de `Brain`
        type = other.type;                  // 4. Copiar el atributo `type`
    }
    return *this;
}                             

