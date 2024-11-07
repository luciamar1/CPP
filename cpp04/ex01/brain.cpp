#include "brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}



void Brain::setIdea(int index,  std::string& idea) 
{
    if(index <= 100)
        this->brain[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    if (index <= 100)
        return(brain[index]);
}
