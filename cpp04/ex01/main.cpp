
#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int main() {
    std::cout << "Creating individual animals..." << std::endl;

    Dog basicDog;
    Cat basicCat;

    std::cout << "\nTesting copy construction and assignment with Dog..." << std::endl;

    Dog dogCopy = basicDog;  // Prueba el constructor de copia
    Dog assignedDog;
    assignedDog = basicDog;   // Prueba el operador de asignación

    std::cout << "\nTesting copy construction and assignment with Cat..." << std::endl;

    Cat catCopy = basicCat;   // Prueba el constructor de copia
    Cat assignedCat;
    assignedCat = basicCat;   // Prueba el operador de asignación

    std::cout << "\nCreating an array of Animal pointers with Dogs and Cats..." << std::endl;

    const int numAnimals = 10;
    Animal* animals[numAnimals];

    for (int i = 0; i < numAnimals; ++i) {
        if (i < numAnimals / 2) {
            animals[i] = new Dog();
        } else {
            animals[i] = new Cat();
        }
    }

    std::cout << "\nCalling makeSound() on all animals in the array..." << std::endl;
    for (int i = 0; i < numAnimals; ++i) {
        animals[i]->makeSound();
    }

    std::cout << "\nCleaning up: deleting all animals in the array..." << std::endl;
    for (int i = 0; i < numAnimals; ++i) {
        delete animals[i];
    }

    std::cout << "\nTesting scope-based destruction and deep copy verification..." << std::endl;
    {
        Dog tmpDog = basicDog;
        Cat tmpCat = basicCat;

        std::cout << "Exiting scope..." << std::endl;
    }

    std::cout << "\nTest completed successfully." << std::endl;
    return 0;
}
