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
    std::cout << "Int constructor called" << std::endl;
    fixedPoint =  fPoint << this->fractionalBits;
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
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& original_Fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &original_Fixed)
    {
        this->fixedPoint = original_Fixed.getRawBits();
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

bool Fixed::operator>(const Fixed& other)
{
    
    return(this->fixedPoint > other.fixedPoint);
}

bool Fixed::operator<(const Fixed& other)
{
    
    return(this->fixedPoint < other.fixedPoint);
}

bool Fixed::operator>=(const Fixed& other)
{
    
    return(this->fixedPoint >= other.fixedPoint);
}

bool Fixed::operator<=(const Fixed& other)
{
    
    return(this->fixedPoint <= other.fixedPoint);
}

bool Fixed::operator==(const Fixed& other)
{
    
    return(this->fixedPoint == other.fixedPoint);
}
bool Fixed::operator!=(const Fixed& other)
{
    
    return(this->fixedPoint != other.fixedPoint);
}

Fixed Fixed::operator+(const Fixed& other)
{
    Fixed newFixed;
    newFixed.fixedPoint = this->fixedPoint + other.fixedPoint;
    return(newFixed);
}

Fixed Fixed::operator-(const Fixed& other)
{
    Fixed newFixed;
    newFixed.fixedPoint = this->fixedPoint - other.fixedPoint;
    return(newFixed);
}

Fixed Fixed::operator*(const Fixed& other)
{
    Fixed newFixed;
    newFixed.fixedPoint = this->fixedPoint * other.fixedPoint;
    return(newFixed);
}

Fixed Fixed::operator/(const Fixed& other)
{
    Fixed newFixed;
    newFixed.fixedPoint = this->fixedPoint / other.fixedPoint;
    return(newFixed);
}


Fixed operator++(Fixed& other)
{
    other.setRawBits(other.fixedPoint + std::numeric_limits<double>::epsilon());
    return(other.fixedPoint);

}
