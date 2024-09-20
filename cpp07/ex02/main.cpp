
#include "Array.hpp"
#include <iostream>

int main() {
    try {
        // Prueba: Crear un array de enteros con 5 elementos
        Array<int> intArray(5);
        std::cout << "Tamaño del array de enteros: " << intArray.size() << std::endl;

        // Imprimir valores iniciales
        for (unsigned int i = 0; i < intArray.size(); i++) {
            std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
        }

        // Modificar los elementos
        for (unsigned int i = 0; i < intArray.size(); i++) {
            intArray[i] = i * 10;
        }

        // Imprimir valores modificados
        std::cout << "Valores modificados en intArray:" << std::endl;
        for (unsigned int i = 0; i < intArray.size(); i++) {
            std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
        }

        // Prueba: Acceder a un índice fuera de los límites
        std::cout << "Intentando acceder a un índice fuera de los límites:" << std::endl;
        std::cout << intArray[10] << std::endl;  // Esto lanzará una excepción

    } catch (const std::exception& e) {
        std::cerr << "Excepción atrapada: " << e.what() << std::endl;
    }

    return 0;
}