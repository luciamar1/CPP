#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    public:
        std::string *brain[100];
        Brain();
        Brain(std::string AnimalType);
        ~Brain();
};

#endif

