#include "Fixed.hpp"
#include <string>
#include <iostream>
#include <cmath>

int main( void )
{
    Fixed a(10.0f);
    Fixed b(2.0f);

    std::cout << std::boolalpha; // Para imprimir true/false en lugar de 1/0
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a >= b: " << (a >= b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;
    return 0;
}
