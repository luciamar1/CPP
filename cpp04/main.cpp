#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int main()
{
    const Animal* animalito = new Animal();
    const Animal* perrito = new Dog();
    const Animal* gatito = new Cat();
    std::cout << perrito->getType() << " " << std::endl;
    std::cout << gatito->getType() << " " << std::endl;
    gatito->makeSound(); //will output the cat sound!
    perrito->makeSound();
    animalito->makeSound();
    delete animalito;
    delete perrito;
    delete gatito;
    return 0;
}
