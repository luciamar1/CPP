#include <iostream>
#include <vector>
#include "easyfind.hpp"


int main() {
    // Prueba con std::vector
    std::cout << "Prueba con std::vector:" << std::endl;
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    
    try {
        std::vector<int>::iterator it = easyFind(vec, 30);
        std::cout << "Encontrado: " << *it << " en la posición " << std::distance(vec.begin(), it) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    
    try {
        easyFind(vec, 100);
    } catch (const std::exception& e) {
        std::cerr << "Excepción capturada: " << e.what() << std::endl;
    }

    // Prueba con std::list
    std::cout << "\nPrueba con std::list:" << std::endl;
    std::list<int> lst; // Lista para prueba
    lst.push_back(5);
    lst.push_back(15);
    lst.push_back(25);
    lst.push_back(35);
    lst.push_back(45);
    
    try {
        std::list<int>::iterator it = easyFind(lst, 25);
        std::cout << "Encontrado: " << *it << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    
    try {
        easyFind(lst, 50);
    } catch (const std::exception& e) {
        std::cerr << "Excepción capturada: " << e.what() << std::endl;
    }

    // Prueba con un contenedor vacío
    std::cout << "\nPrueba con un contenedor vacío:" << std::endl;
    std::vector<int> emptyVec;
    
    try {
        easyFind(emptyVec, 10);
    } catch (const std::exception& e) {
        std::cerr << "Excepción capturada: " << e.what() << std::endl;
    }

    return 0;
}
