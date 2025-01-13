#include "iter.hpp"

template <typename T, typename F>
void iter(T* array, size_t length, F func)
{
    size_t aux = 0;
    while (aux < length)
    {
        func(array[aux]);
        aux ++;
    }
    return ;
}
template <typename T>
void printElement(const T& element) 
{
    std::cout << element << " ";
}

template <typename T>
void incrementElement(T& element) 
{
    ++element;
}

int main() {
    // Test 1: Array de enteros
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArraySize = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Array original (intArray): ";
    iter(intArray, intArraySize, printElement<int>);
    std::cout << std::endl;

    // Incrementar cada elemento del array
    iter(intArray, intArraySize, incrementElement<int>);

    std::cout << "Array incrementado (intArray): ";
    iter(intArray, intArraySize, printElement<int>);
    std::cout << std::endl;

    // Test 2: Array de dobles
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4};
    size_t doubleArraySize = sizeof(doubleArray) / sizeof(doubleArray[0]);

    std::cout << "Array original (doubleArray): ";
    iter(doubleArray, doubleArraySize, printElement<double>);
    std::cout << std::endl;

    // Incrementar cada elemento del array
    iter(doubleArray, doubleArraySize, incrementElement<double>);

    std::cout << "Array incrementado (doubleArray): ";
    iter(doubleArray, doubleArraySize, printElement<double>);
    std::cout << std::endl;
    

    return 0;
}


