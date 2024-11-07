#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"
#include "brain.hpp"
class Cat: public Animal
{
    private:
    Brain   *brain;
    public:
    Cat(const Cat& other);
    Cat();
    ~Cat();
    Cat& operator=(const Cat& original_Cat);

      Brain* getBrain() const;
    void makeSound() const;
};

#endif
