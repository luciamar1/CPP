#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <algorithm>
#include <iterator>
#include <climits>  
#include <cstdlib>  
#include <iomanip>  


PmergeMe::PmergeMe() {}
PmergeMe::~PmergeMe() {}

bool is_all_digits(const std::string& str) {
    for (size_t i = 0; i < str.size(); i++) {
        if (!isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

bool PmergeMe::parseInput(int argc, char** argv, std::vector<int>& numbers) {
    if (argc < 2) {
        std::cerr << "Error: No input provided" << std::endl;
        return false;
    }
    for (int i = 1; i < argc; i++) {
        std::string arg(argv[i]);
        if (!is_all_digits(arg)) {
            std::cerr << "Error: Invalid input '" << arg << "'" << std::endl;
            return false;
        }
        int num = std::atoi(arg.c_str());  // Usamos atoi en lugar de std::stol
        if (num <= 0 || num > INT_MAX) {  // Verificamos el rango de valores
            std::cerr << "Error: Invalid number range '" << arg << "'" << std::endl;
            return false;
        }
        numbers.push_back(num);
    }
    return true;
}

void PmergeMe::mergeInsertionSortVector(std::vector<int>& vec) {
    if (vec.size() <= 1) return;

    std::vector<int> menores, mayores;
    for (size_t i = 0; i + 1 < vec.size(); i += 2) {
        if (vec[i] < vec[i + 1]) {
            menores.push_back(vec[i]);
            mayores.push_back(vec[i + 1]);
        } else {
            menores.push_back(vec[i + 1]);
            mayores.push_back(vec[i]);
        }
    }

    if (vec.size() % 2 != 0) {
        menores.push_back(vec.back());
    }

    mergeInsertionSortVector(mayores);

    std::vector<int> resultado = mayores;
    for (size_t i = 0; i < menores.size(); i++) {
        // Aquí cambiamos "auto" por el tipo explícito (std::vector<int>::iterator)
        std::vector<int>::iterator pos = std::lower_bound(resultado.begin(), resultado.end(), menores[i]);
        resultado.insert(pos, menores[i]);
    }
    vec = resultado;
}

void PmergeMe::mergeInsertionSortDeque(std::deque<int>& deq) {
    if (deq.size() <= 1) return;

    std::deque<int> menores, mayores;
    for (size_t i = 0; i + 1 < deq.size(); i += 2) {
        if (deq[i] < deq[i + 1]) {
            menores.push_back(deq[i]);
            mayores.push_back(deq[i + 1]);
        } else {
            menores.push_back(deq[i + 1]);
            mayores.push_back(deq[i]);
        }
    }

    if (deq.size() % 2 != 0) {
        menores.push_back(deq.back());
    }

    mergeInsertionSortDeque(mayores);

    std::deque<int> resultado = mayores;
    for (size_t i = 0; i < menores.size(); i++) {
        // Aquí cambiamos "auto" por el tipo explícito (std::deque<int>::iterator)
        std::deque<int>::iterator pos = std::lower_bound(resultado.begin(), resultado.end(), menores[i]);
        resultado.insert(pos, menores[i]);
    }
    deq = resultado;
}

void PmergeMe::sortAndMeasureTime(std::vector<int> numbers) {
    std::deque<int> dequeNumbers(numbers.begin(), numbers.end());

    std::cout << "Before: ";
    for (size_t i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    clock_t start = clock();
    mergeInsertionSortVector(numbers);
    clock_t end = clock();
    double timeVector = double(end - start) / CLOCKS_PER_SEC * 1000000;

    std::cout << "After: ";
    for (size_t i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    start = clock();
    mergeInsertionSortDeque(dequeNumbers);
    end = clock();
    double timeDeque = double(end - start) / CLOCKS_PER_SEC * 1000000;


    std::cout << "Time to process a range of " << numbers.size() 
          << " elements with std::vector : " 
          << std::fixed << std::setprecision(5) << timeVector << " us" << std::endl;

    std::cout << "Time to process a range of " << dequeNumbers.size() 
            << " elements with std::deque : " 
            << std::fixed << std::setprecision(5) << timeDeque << " us" << std::endl;

}


