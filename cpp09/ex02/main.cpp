#include "PmergeMe.hpp"

int main(int argc, char** argv) {
    PmergeMe sorter;
    std::vector<int> numbers;

    if (!sorter.parseInput(argc, argv, numbers)) {
        return 1;
    }

    sorter.sortAndMeasureTime(numbers);
    return 0;
}