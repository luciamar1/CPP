#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixedPoint = 0;
}

Fixed::Fixed(const Fixed&  originalFixed)
{
        std::cout << "Copy constructor called" << std::endl;
        this->fixedPoint = originalFixed.fixedPoint;
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
        this->fixedPoint = original_Fixed.fixedPoint;
    }
    return(*this);
}

void Fixed::setRawBits( int const raw )
{
    this->fixedPoint = raw;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->fixedPoint);
}

