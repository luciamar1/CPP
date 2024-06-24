#include "Fixed.hpp"

Fixed::Fixed():fixedPoint(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed&  originalFixed)
    :fixedPoint(originalFixed.fixedPoint){
        std::cout << "Copy constructor called" << std::endl;
        *this = originalFixed;
    }

Fixed::~Fixed() 
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& original_Fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &original_Fixed)
    {
        this->fixedPoint = getRawBits();
    }
    return(*this);
}

void Fixed::setRawBits( int const raw )
{
    fixedPoint = raw;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(fixedPoint);
}

