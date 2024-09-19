#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
template<typename T>
class Array
{
private:
    T *  elements;
    unsigned int n;
public:
    Array();
    Array(unsigned int n);
    Array(const Array& other);
    ~Array();
};
#endif