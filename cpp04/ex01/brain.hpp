#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>
#include "animal.hpp"
class Brain
{
    public:
        std::string brain[100];
        Brain();
        Brain(const Animal& other);
        ~Brain();

        void setBrain(int index,  std::string& idea) ;
        std::string getBrain(int index) const;
};

#endif

