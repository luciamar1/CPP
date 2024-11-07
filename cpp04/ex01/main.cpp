#include "dog.hpp"
#include "cat.hpp"
#include <iostream>

int main() {
    // Prueba de creación y destrucción básica
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j; // debería liberar correctamente el Brain de Dog
    delete i;

    // Prueba de copia profunda
    Dog originalDog;
    originalDog.getBrain()->setIdea(0, "I want a bone!");
    Dog copiedDog = originalDog;

    // Verifica que sea una copia profunda
    std::cout << "Original Dog's idea: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog's idea: " << copiedDog.getBrain()->getIdea(0) << std::endl;

    // Cambiamos la idea en el perro original
    originalDog.getBrain()->setIdea(0, "I changed my mind, I want a nap!");
    std::cout << "Original Dog's new idea: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog's idea after change in original: " << copiedDog.getBrain()->getIdea(0) << std::endl;

    // Prueba con arreglo de animales
    const int size = 4;
    Animal* animals[size];
    for (int i = 0; i < size / 2; ++i) {
        animals[i] = new Dog();
    }
    for (int i = size / 2; i < size; ++i) {
        animals[i] = new Cat();
    }

    // Liberar memoria
    for (int i = 0; i < size; ++i) {
        delete animals[i];
    }

    return 0;
}
