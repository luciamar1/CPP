#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>
// #include "cat.hpp"
// #include "dog.hpp"
class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal(const WrongAnimal& other);
    WrongAnimal();
    virtual~WrongAnimal();
    WrongAnimal& operator=(const WrongAnimal& original_WrongAnimal);

    std::string getType() const;
    void makeSound() const;
};


#endif


