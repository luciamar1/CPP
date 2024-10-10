#include "Fixed.hpp"
#include <string>
#include <iostream>
#include <cmath>

int main( void )
{
    Fixed a;
    Fixed s(Fixed(5.05f) * Fixed(2));
    Fixed const b(Fixed(5.05f) * Fixed(2));
    Fixed const  k(Fixed(0) * Fixed(0));
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    std::cout << std::boolalpha; // Para imprimir true/false en lugar de 1/0
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a >= b: " << (a >= b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a == a: " << (a == a) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl << std::endl;

    Fixed sum = a + b;
    Fixed diff = a - b;
    Fixed prod = a * b;
    Fixed div = a/ b;
    //Fixed div0 = s/k;
    std::cout << "a + b = " << sum << std::endl;
    std::cout << "a - b = " << diff << std::endl;
    std::cout << "a * b = " << prod << std::endl;
    std::cout << "a / b = " << div << std::endl << std::endl;
    // std::cout << "b / k = " << div0 << std::endl << std::endl;

    // Pruebas de operadores de incremento y decremento
    std::cout << "a original: " << a << std::endl;
    std::cout << "++a: " << ++a << std::endl; // Pre-incremento
    std::cout << "a++: " << a++ << std::endl; // Post-incremento
    std::cout << "a después de a++: " << a << std::endl << std::endl;

    std::cout << "--a: " << --a << std::endl; // Pre-decremento
    std::cout << "a--: " << a-- << std::endl; // Post-decremento
    std::cout << "a después de a--: " << a << std::endl << std::endl;

    std::cout << "Max of a and b: " << Fixed::max(a, b) << std::endl;
    std::cout << "Min of a and b: " << Fixed::min(a, b) << std::endl;
    
    return 0;
}

