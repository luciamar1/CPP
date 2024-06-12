#include "Fixed.hpp"

Fixed::Fixed():fixedPoint(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed&  originalFixed)
    :fixedPoint(originalFixed.fixedPoint)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = originalFixed;
}

Fixed::Fixed(const int&  fPoint)
{
    fixedPoint =  fPoint << this->fractionalBits;
}

Fixed::Fixed(const float&  fPoint)
{
    float big_value = fPoint * std::pow(2, this->fractionalBits);
    big_value += 0.5f;
    fixedPoint = static_cast<int>(big_value);
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

// std::ostream& Fixed::operator<<(std::ostream& os, const Fixed& fixed)
// {
//     os << fixed.toFloat();
//     return os;
// }

void Fixed::setRawBits( int const raw )
{
    fixedPoint = raw;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(fixedPoint);
}

float Fixed::toFloat( void ) const
{
    float ret = static_cast<float>(fixedPoint);
    ret = ret / std::pow(2, this->fractionalBits);
    return(ret);
}

int Fixed::toInt( void ) const
{
    return(fixedPoint >> fractionalBits);
}
