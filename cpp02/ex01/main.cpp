#include "Fixed.hpp"
#include <string>
#include <iostream>
#include <cmath>

int main( void )
{
   Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);
    a = Fixed(1234.4321f);

    std::cout << "a is " << a.fixedPoint << std::endl;
    std::cout << "b is " << b.fixedPoint << std::endl;
    std::cout << "c is " << c.fixedPoint << std::endl;
    std::cout << "d is " << d.fixedPoint << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    return 0;
}
