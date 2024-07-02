#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int main()
{
   int counter = 0;
    Animal* animals[100];
    while (counter < 50) {
        animals[counter++] = new Dog();
    }
    std::cout << "\n" << std::endl;
    while (counter < 100) {
        animals[counter++] = new Cat();
    }
    std::cout << "\n" << std::endl;
    for (int i = 0; i < 100; ++i) {
        animals[i]->makeSound();
    }
    std::cout << "\n" << std::endl;
    for (int i = 0; i < 100; ++i) {
        delete animals[i];  // Esto llama al destructor y libera la memoria
    }
    std::cout << "\n" << std::endl;
    return 0;
}
