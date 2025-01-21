#include "span.hpp"

Span::Span()
{
    maxSize = 0;
}
Span::Span(const Span& other) 
{
    maxSize = other.maxSize;
    container = other.container;
}

Span& Span::operator=(const Span& other) 
{
    if (this != &other) 
    {
        this->maxSize = other.maxSize;
        container = other.container;
    }
    return *this;
}


Span::Span(unsigned int N)
{
    maxSize = N;
}

Span::~Span()
{}


void Span::addNumber(int value)
{
    if (container.size() >= maxSize)
        throw(fullException());
    container.push_back(value);
    return;
}


  

unsigned int Span::longestSpan()
{
   if (!container.size() || container.size() <= 1)
        throw emptyException();
   std::vector<int>::iterator minIt = std::min_element(container.begin(), container.end());

    std::vector<int>::iterator maxIt = std::max_element(container.begin(), container.end());

    return static_cast<unsigned int>(*maxIt - *minIt);
}

int restOrder(int verif, int other)
{
    if((verif - other) >= 0)
        return verif - other;
    else
        return other - verif;
}

unsigned int Span::shortestSpan()
{
    unsigned int size  = container.size();

    if (!size || size == 1)
        throw(emptyException());

    std::sort(container.begin(), container.end());
    unsigned int shortestDif = std::numeric_limits<unsigned int>::max();
    unsigned int dif;
    for (unsigned int counter = 1; counter < size ; counter ++)
    {
        dif = container[counter] - container[counter - 1];
        if(dif < shortestDif) 
            shortestDif = dif;
    }
    return(shortestDif);
}

const std::vector<int>& Span::getContainer() const 
{
    return container;
}