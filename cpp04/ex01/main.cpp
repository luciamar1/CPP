#include "dog.hpp"
#include "cat.hpp"
#include <iostream>

int main() {
    // std::cout << "=== Creación y destrucción básica de Dog y Cat ===" << std::endl;
    // const Animal* dog = new Dog();
    // const Animal* cat = new Cat();
    // std::cout << "\n" << std::endl;
    // delete dog; // debería liberar correctamente el Brain de Dog
    // delete cat;
    
    std::cout << "\n" << std::endl;

    std::cout << "\n=== Prueba de copia profunda en Dog ===" << std::endl;
    Dog originalDog;
    std::cout << "\n" << std::endl;
    originalDog.getBrain()->setIdea(0, "I want a bone!");
    Dog copiedDog = originalDog;
    std::cout << "\n" << std::endl;
    // Verifica que sea una copia profunda
    std::cout << "Original Dog's idea: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog's idea: " << copiedDog.getBrain()->getIdea(0) << std::endl;

    // Cambia la idea en el perro original y verifica que la copia no se vea afectada
    originalDog.getBrain()->setIdea(0, "I changed my mind, I want a nap!");
    std::cout << "Original Dog's new idea: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog's idea after change in original: " << copiedDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "\n" << std::endl;
    // std::cout << "\n=== Prueba de copia profunda en Cat ===" << std::endl;
    // Cat originalCat;
    // originalCat.getBrain()->setIdea(0, "I want to chase a mouse!");
    // Cat copiedCat = originalCat;

    // // Verifica que sea una copia profunda
    // std::cout << "Original Cat's idea: " << originalCat.getBrain()->getIdea(0) << std::endl;
    // std::cout << "Copied Cat's idea: " << copiedCat.getBrain()->getIdea(0) << std::endl;

    // // Cambia la idea en el gato original y verifica que la copia no se vea afectada
    // originalCat.getBrain()->setIdea(0, "I changed my mind, I want to sleep!");
    // std::cout << "Original Cat's new idea: " << originalCat.getBrain()->getIdea(0) << std::endl;
    // std::cout << "Copied Cat's idea after change in original: " << copiedCat.getBrain()->getIdea(0) << std::endl;

    // std::cout << "\n" << std::endl;
    // std::cout << "\n=== Prueba con arreglo de Animal* ===" << std::endl;
    // const int size = 6;
    // Animal* animals[size];

    // // Llena el arreglo con Dogs y Cats
    // for (int i = 0; i < size / 2; ++i) {
    //     animals[i] = new Dog();
    // }
    // for (int i = size / 2; i < size; ++i) {
    //     animals[i] = new Cat();
    // }

    // // Verifica sonidos de los animales en el arreglo
    // for (int i = 0; i < size; ++i) {
    //     animals[i]->makeSound();
    // }

    // // Libera memoria
    // for (int i = 0; i < size; ++i) {
    //     delete animals[i];
    // }
    // std::cout << "\n" << std::endl;
    // std::cout << "=== Fin del programa ===" << std::endl;
    // return 0;
}
