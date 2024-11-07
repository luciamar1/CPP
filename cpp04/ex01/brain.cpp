#include "brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}
Brain::Brain(const Brain& other)
{
    std::cout << "Brain copy constructor called." << std::endl;
    for (int i = 0; i < 100; ++i) {
        brain[i] = other.brain[i];
    }
}
Brain& Brain::operator=(const Brain& other) {
    std::cout << "Brain copy assignment operator called." << std::endl;
    if (this != &other) {
        for (int i = 0; i < 100; ++i) {
            brain[i] = other.brain[i];
        }
    }
    return *this;
}

void Brain::setIdea(int index, const std::string& idea) 
{
    if(index>= 0 && index < 100)
        this->brain[index] = idea;
}

std::string Brain::getIdea( int index) const
{
    if (index >= 0 &&index < 100)
        return(brain[index]);
    return "";
}

