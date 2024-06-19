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

    Fixed sum = a + b;
    Fixed diff = a - b;
    Fixed prod = a * b;
    Fixed div = a / b;
    std::cout << "a + b = " << sum << std::endl;
    std::cout << "a - b = " << diff << std::endl;
    std::cout << "a * b = " << prod << std::endl;
    std::cout << "a / b = " << div << std::endl;
    return 0;
}
