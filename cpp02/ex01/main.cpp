#include "Fixed.hpp"

int main( void )
{
    std::cout << "A" << std::endl;
    Fixed a;
    std::cout << "B" << std::endl;
    Fixed b( a );
    std::cout << "C" << std::endl;
    Fixed c;

    std::cout << "C = B" << std::endl;
    c = b;
    
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}
