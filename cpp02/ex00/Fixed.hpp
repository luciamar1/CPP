#ifndef FIXED_HPP
#define FIXED_HPP
#include <string>
#include <iostream>

class Fixed
{
private:
    int                 fixedPoint;
    static const int    fractionalBits = 0;
public:
    Fixed();
    Fixed(const Fixed&  originalFixed);
    ~Fixed();
    Fixed& operator=(const Fixed& original_Fixed);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif
