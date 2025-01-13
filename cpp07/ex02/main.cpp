
#include "Array.hpp"
#include <stdlib.h>
#include <iostream>
#define MAX_VAL 750

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}


// int main() {
//     try {
//         // Prueba: Crear un array de enteros con 5 elementos
//         Array<int> intArray(5);
//         std::cout << "Tamaño del array de enteros: " << intArray.size() << std::endl;

//         // Imprimir valores iniciales
//         for (unsigned int i = 0; i < intArray.size(); i++) {
//             std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
//         }

//         // Modificar los elementos
//         for (unsigned int i = 0; i < intArray.size(); i++) {
//             intArray[i] = i * 10;
//         }

//         // Imprimir valores modificados
//         std::cout << "Valores modificados en intArray:" << std::endl;
//         for (unsigned int i = 0; i < intArray.size(); i++) {
//             std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
//         }

//         // Prueba: Acceder a un índice fuera de los límites
//         std::cout << "Intentando acceder a un índice fuera de los límites:" << std::endl;
//         std::cout << intArray[10] << std::endl;  // Esto lanzará una excepción

//     } catch (const std::exception& e) {
//         std::cerr << "Excepción atrapada: " << e.what() << std::endl;
//     }

//     return 0;
// }