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
    Fixed(const int& fPoint);
    Fixed(const float& fixedPoint);
    ~Fixed();
    Fixed& operator=(const Fixed& original_Fixed);
    
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;
    
    Fixed operator+(const Fixed& other);
    Fixed operator-(const Fixed& other);
    Fixed operator*(const Fixed& other);
    Fixed operator/(const Fixed& other);

    Fixed operator++(int);
    Fixed operator--(int);
    Fixed operator++(void);
    Fixed operator--(void);

    static Fixed min(const Fixed& x, const Fixed& y);
    static Fixed max(const Fixed& x, const Fixed& y);

    static Fixed min(Fixed& x, Fixed& y);
    static Fixed max(Fixed& x, Fixed& y);
    //std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
