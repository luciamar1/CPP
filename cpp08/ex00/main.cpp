#include <iostream>
#include <vector>
#include "easyfind.hpp"

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main() {
    // Crear un vector de enteros e inicializarlo
    std::vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    try {
        // Intentar encontrar el número 30 en el vector
        std::vector<int>::iterator it = easyfind(numbers, 300);
        if (it != numbers.end()) {  // Asegurarse de que el iterador es válido
            std::cout << "Encontrado: " << *it << " en la posición " << std::distance(numbers.begin(), it) << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        // Intentar encontrar el número 100 en el vector (que no existe)
        std::vector<int>::iterator it = easyfind(numbers, 10);
        if (it != numbers.end()) {  // Asegurarse de que el iterador es válido
            std::cout << "Encontrado: " << *it << " en la posición " << std::distance(numbers.begin(), it) << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
