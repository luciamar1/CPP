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
    Span();
    Span(const Span& other);
    Span& operator=(const Span& other);
    Span( unsigned int N);
    ~Span ();

    void addNumber(int value);
    template <typename Iterator>
    void    addNumbers(Iterator begin, Iterator end) ;
    
    unsigned int shortestSpan() ;
    unsigned int longestSpan() ;
};

#endif 