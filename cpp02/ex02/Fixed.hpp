#ifndef FIXED_HPP
#define FIXED_HPP
#include <string>
#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Fixed
{
private:
    int                 fixedPoint;
    static const int    fractionalBits = 8;
public:
    Fixed();
    Fixed(const Fixed&  originalFixed);
    Fixed(const int& fixedPoint);
    Fixed(const float& fixedPoint);
    ~Fixed();
    Fixed& operator=(const Fixed& original_Fixed);
    
    bool operator>(const Fixed& other);
    bool operator<(const Fixed& other);
    bool operator>=(const Fixed& other);
    bool operator<=(const Fixed& other);
    bool operator==(const Fixed& other);
    bool operator!=(const Fixed& other);
    
    Fixed operator+(const Fixed& other);
    Fixed operator-(const Fixed& other);
    Fixed operator*(const Fixed& other);
    Fixed operator/(const Fixed& other);

    Fixed operator++(const Fixed& other);
    Fixed operator--(const Fixed& other);
    Fixed operator++(void);
    Fixed operator--(void);
    //std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
