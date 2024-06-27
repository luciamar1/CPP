#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int main()
{
    int counter = 0;
    Animal *animals[100];
    while(counter <= 50)
    {
        animals[counter++] = new Dog();
    }
    while(counter <= 100)
    {
        animals[counter++] = new  Cat();
    }
    for(int i = 0; i<100; i++)
    {
        animals[i]->makeSound();
    }
    counter = 0;
    while(counter != 100)
    {
        animals[counter++]->~Animal();
    }
    return 0;
}
