#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <list>
#include <algorithm>  // for std::find
#include <exception>  // for std::exception

class   notFound : public std::exception
{
    public :
 
        notFound() {}

        notFound(const notFound& other) 
        {
            (void)other; 
        }

        notFound& operator=(const notFound& other) 
        {
            (void)other;
            return *this;
        }

        ~notFound() throw() {}

        
        const char * what() const  throw()
        {
            return("Element not found!");
        }
};

template<typename T>
typename T::iterator easyFind(T& container, int tofind)
{
    typename T::iterator  it  = std::find(container.begin(), container.end(), tofind);
    if ( it == container.end())
        throw notFound();
   
    return it;
}
#endif