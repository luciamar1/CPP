#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"
#include "brain.hpp"

class Dog: public Animal
{
    private:
    Brain   *brain;
    public:
    Dog(const Dog& other);
    Dog();
    ~Dog();
    Dog& operator=(const Dog& original_Dog);

    std::string getIdea(int index) const;
    void setIdea(int index,  std::string& idea) ;
    void makeSound() const ;
};

#endif

