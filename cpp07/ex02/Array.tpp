#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
    elements = NULL;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
    if(n  <= 0)
    {
        elements = NULL;
    }
    else
        elements = new T[n]
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
        for(i = 0; i < n;  i++)
        {
            elements[i] = other.elements[i];
        }
    }

    template<typename T>
    Array<T>::~Array()
    {
        delete[] elements;
    }
}


template<typename T>
Array<T>::size()
{
    return n;
}

template<typename T>
 T& Array<T>::operator[](unsigned int index)
 {
    if(index <= n)
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


