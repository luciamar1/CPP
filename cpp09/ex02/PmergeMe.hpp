#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <string>

class PmergeMe {
public:
    PmergeMe();
    ~PmergeMe();
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);

    // Función para analizar los argumentos de entrada
    bool parseInput(int argc, char** argv, std::vector<int>& numbers);

    // Función para ordenar con std::vector usando Merge-Insertion Sort
    void mergeInsertionSortVector(std::vector<int>& vec);

    // Función para ordenar con std::deque usando Merge-Insertion Sort
    void mergeInsertionSortDeque(std::deque<int>& deq);

    // Función que ordena y mide tiempos de ejecución
    void sortAndMeasureTime(std::vector<int> numbers);
};

#endif
