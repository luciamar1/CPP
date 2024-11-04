#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"

class Cat: public Animal
{
    public:
    Cat(std::string AnimalType);
    Cat();
    ~Cat();
    Cat& operator=(const Cat& original_Cat);

    void makeSound() const;
};

#endif
