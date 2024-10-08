#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
template <typename T, typename F>
void iter(T* array, size_t length, F func);

template <typename T>
void incrementElement(T& element) ;

template <typename T>
void printElement(const T& element);

#endif