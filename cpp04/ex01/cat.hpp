#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"
#include "brain.hpp"
class Cat: public Animal
{
    private:
        Brain   *brain;
    public:
        Cat();
        Cat(std::string AnimalType);
        ~Cat();
        Cat& operator=(const Cat& original_Cat);

        void makeSound() const;
};

#endif

