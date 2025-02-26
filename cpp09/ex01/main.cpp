#include "RPN.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Error: Invalid number of arguments.\n";
        return 1;
    }

    RPN calculator;
    int result = calculator.evaluate(argv[1]);

    if (result != -1) {
        std::cout << result << std::endl;
    }

    return 0;
}

