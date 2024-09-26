#include <iostream>
#include "span.hpp"
#include <vector>

int main() {
    // Prueba básica
    Span sp(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    try {
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl; // Debería imprimir 2
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;   // Debería imprimir 14
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    // Probar añadir un rango de números
    const unsigned int size = 10000; // Número de elementos a añadir
    Span sp2(size);
    std::vector<int> numbersToAdd(size);
    
    // Llenamos el vector con números del 0 al 9999 sin usar std::iota
    for (unsigned int i = 0; i < size; ++i) {
        numbersToAdd[i] = i; // Asignar manualmente los valores del 0 al 9999
    }

    try {
        // Añadir múltiples números a la instancia sp2
        sp2.addNumbers(numbersToAdd.begin(), numbersToAdd.end());

        std::cout << "Shortest Span in sp2: " << sp2.shortestSpan() << std::endl; // Debería imprimir 1
        std::cout << "Longest Span in sp2: " << sp2.longestSpan() << std::endl;   // Debería imprimir 9999
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    // Probar la excepción al añadir más números de lo permitido
    try {
        sp2.addNumber(10000); // Esto debería lanzar una excepción
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl; // Captura y muestra la excepción
    }

    return 0;
}
