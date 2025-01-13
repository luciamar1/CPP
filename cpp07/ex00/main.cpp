//#include <Array.hpp>
#include <iostream>
#include "Whatever.hpp"

int main(void) {
  // Pruebas con tipos básicos: int
    int a = 42, b = 21;
    std::cout << "== Pruebas con int ==" << std::endl;
    std::cout << "Antes de swap: a = " << a << ", b = " << b << std::endl;
    ::swap(a, b);
    std::cout << "Después de swap: a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b): " << ::min(a, b) << std::endl;
    std::cout << "max(a, b): " << ::max(a, b) << std::endl;
    std::cout << std::endl;

    // Pruebas con tipos básicos: double
    double x = 3.14, y = 2.71;
    std::cout << "== Pruebas con double ==" << std::endl;
    std::cout << "Antes de swap: x = " << x << ", y = " << y << std::endl;
    ::swap(x, y);
    std::cout << "Después de swap: x = " << x << ", y = " << y << std::endl;
    std::cout << "min(x, y): " << ::min(x, y) << std::endl;
    std::cout << "max(x, y): " << ::max(x, y) << std::endl;
    std::cout << std::endl;

    // Pruebas con cadenas de texto
    std::string str1 = "hola1", str2 = "hola2";
    std::cout << "== Pruebas con std::string ==" << std::endl;
    std::cout << "Antes de swap: str1 = " << str1 << ", str2 = " << str2 << std::endl;
    ::swap(str1, str2);
    std::cout << "Después de swap: str1 = " << str1 << ", str2 = " << str2 << std::endl;
    std::cout << "min(str1, str2): " << ::min(str1, str2) << std::endl;
    std::cout << "max(str1, str2): " << ::max(str1, str2) << std::endl;
    std::cout << std::endl;

    // Pruebas con caracteres
    char c1 = 'A', c2 = 'Z';
    std::cout << "== Pruebas con char ==" << std::endl;
    std::cout << "Antes de swap: c1 = " << c1 << ", c2 = " << c2 << std::endl;
    ::swap(c1, c2);
    std::cout << "Después de swap: c1 = " << c1 << ", c2 = " << c2 << std::endl;
    std::cout << "min(c1, c2): " << ::min(c1, c2) << std::endl;
    std::cout << "max(c1, c2): " << ::max(c1, c2) << std::endl;
    std::cout << std::endl;

    // Pruebas con booleanos
    bool bool1 = true, bool2 = false;
    std::cout << "== Pruebas con bool ==" << std::endl;
    std::cout << "Antes de swap: bool1 = " << bool1 << ", bool2 = " << bool2 << std::endl;
    ::swap(bool1, bool2);
    std::cout << "Después de swap: bool1 = " << bool1 << ", bool2 = " << bool2 << std::endl;
    std::cout << "min(bool1, bool2): " << ::min(bool1, bool2) << std::endl;
    std::cout << "max(bool1, bool2): " << ::max(bool1, bool2) << std::endl;
    std::cout << std::endl;

    
    return 0;
}


