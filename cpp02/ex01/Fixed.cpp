#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixedPoint = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed&  originalFixed)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixedPoint = originalFixed.fixedPoint;
}

Fixed::Fixed(const int&  fPoint)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedPoint =  fPoint << this->fractionalBits;
}

Fixed::Fixed(const float&  fPoint)
{
    std::cout << "Float constructor called" << std::endl;
    float big_value = fPoint * std::pow(2, this->fractionalBits);
    big_value += 0.5f;
    fixedPoint = static_cast<int>(big_value);
}

Fixed::~Fixed() 
{
    std::cout << "Destructor called: " << fixedPoint << std::endl;
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
float Fixed::toFloat( void ) const
{
    float ret = static_cast<float>(fixedPoint);
    ret = ret / std::pow(2, this->fractionalBits);
    return(ret);
}
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
   os << fixed.toFloat();
    return(os);
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


int Fixed::toInt( void ) const
{
    return(fixedPoint >> fractionalBits);
}
