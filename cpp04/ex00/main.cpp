#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "wrongcat.hpp"
#include "wronganimal.hpp"

int main()
{
    const Animal* animalito = new Animal();
    const Animal* perrito = new Dog();
    const WrongAnimal* gatito = new WrongCat();
    std::cout << perrito->getType() << " " << std::endl;
    std::cout << gatito->getType() << " " << std::endl;
    gatito->makeSound(); //will output the Wrongcat sound!
    perrito->makeSound();
    animalito->makeSound();
    delete animalito;
    delete perrito;
    delete gatito;
    return 0;
}

