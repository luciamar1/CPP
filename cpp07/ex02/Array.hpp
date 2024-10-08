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
    Array(unsigned int size);
    Array(const Array& other);
    ~Array();

    unsigned int size() const;

    T& operator[](unsigned int index);
    const T& operator[](unsigned int index) const;


};

#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
    elements = NULL;
}

template<typename T>
Array<T>::Array(unsigned int size)
{
    if(n  <= 0)
    {
        elements = NULL;
    }
    else
        elements = new T[n];
    n = size;
}

template<typename T>
Array<T>::Array(const Array& other)
{
    n = other.n;
     if(n  <= 0)
    {
        elements = NULL;
    }
    else
    {
        elements = new T[n];
        for(int i = 0; i < n;  i++)
        {
            elements[i] = other.elements[i];
        }
    }

}

    template<typename T>
    Array<T>::~Array()
    {
        delete[] elements;
    }

template<typename T>
unsigned int Array<T>::size() const
{
    return n;
}

template<typename T>
 T& Array<T>::operator[](unsigned int index)
 {
    if(index >= n)
        throw std::out_of_range("Index out of bounds");
    return
        elements[index];
 }


template<typename T>
const T& Array<T>::operator[](unsigned int index) const
 {
    if(index <= n)
        throw std::out_of_range("Index out of bounds");
    return
        elements[index];
 }



#endif


