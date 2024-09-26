#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iterator>
#include <iostream>
#include <limits>
class Span
{
private:
    unsigned int    maxSize;
    std::vector <int> container;
public:
    Span( unsigned int N);
    ~Span ();
    void addNumber(int value);
    template <typename Iterator>
    void    addNumbers(Iterator begin, Iterator end) 
    {
        // Calcular cuántos elementos se agregarían
      size_t distance = std::distance(begin, end);
        if (container.size() + distance > maxSize) {
            throw std::overflow_error("Maximum size reached after adding range");
        }
        container.insert(container.end(), begin, end);
    }
    unsigned int shortestSpan() ;
    unsigned int longestSpan() ;
};

#endif 