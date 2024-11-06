#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "wronganimal.hpp"
#include "wrongcat.hpp"

int main() {
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout<<std::endl;
    std::cout << "type = " << dog->getType() << " " << std::endl;
    std::cout << "type = " << cat->getType() << " " << std::endl;
    
    std::cout<<std::endl;
    cat->makeSound(); // Debería emitir el sonido de un gato
    dog->makeSound(); // Debería emitir el sonido de un perro
    animal->makeSound(); // Emitirá el sonido genérico de un animal
    
    std::cout<<std::endl;
    delete animal;
    delete dog;
    delete cat;

    std::cout << "\nTesting WrongAnimal and WrongCat:\n" << std::endl;
    
    const WrongAnimal* wronganimal = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout<<std::endl;
    std::cout <<  "type = " << wrongCat->getType() << " " << std::endl;
    wrongCat->makeSound(); // Debería emitir el sonido de WrongAnimal
    wronganimal->makeSound();

    std::cout << "\n" << std::endl;
    delete wronganimal;
    delete wrongCat;

    return 0;
}


// int main()
// {
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); //will output the cat sound!
// j->makeSound();
// meta->makeSound();
// return 0;
// }