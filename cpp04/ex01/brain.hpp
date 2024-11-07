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
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        ~Brain();

        void setIdea(int index,  const  std::string& idea) ;
        std::string getIdea(int index) const;
};

#endif

