#include "span.hpp"

Span::Span(unsigned int N)
{
    maxSize = N;
}

Span::~Span()
{}

class   fullException : public std::exception
{
    public :
        const char * what() const  throw()
        {
            return("Full span  ");
        }
};

class   emptyException : public std::exception
{
    public :
        const char * what() const  throw()
        {
            return("No enough numbers in span ");
        }
};

void Span::addNumber(int value)
{
    if (container.size() >= maxSize)
        throw(fullException());
    container.push_back(value);
    return;
}

  

unsigned int Span::longestSpan()
{
    int longest = container[0];
    unsigned int size  = container.size();

    if (!size || size == 1)
        throw(emptyException());

    for(unsigned int counter = 0; counter <=  size; counter ++)
    {
        if (container[counter] >= longest )
            longest = container[counter];
    }
     int shortest = container[0];
    for(unsigned int counter = 0; counter <  size; counter ++)
    {
        if (container[counter] <= shortest )
            shortest = container[counter];
    }
    return(longest  - shortest);
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
    int shortestDif = std::numeric_limits<int>::max();
    int dif;
    for (unsigned int counter = 1; counter < size ; counter ++)
    {
        dif = container[counter] - container[counter - 1];
        if(dif < shortestDif) 
            shortestDif = dif;
    }
    return(shortestDif);
}