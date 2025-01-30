#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

bool isValidDate(const std::string& date) {
    // Validate date format (YYYY-MM-DD)...
    return true; // Placeholder
}

bool isValidValue(const std::string& valueStr) {
    try {
        float value = std::stof(valueStr);
        return value >= 0.0f && value <= 1000.0f;
    } catch (...) {
        return false;
    }
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }

    try {
        BitcoinExchange exchange("data.csv"); // Replace with the actual DB filename

        std::ifstream inputFile(argv[1]);
        if (!inputFile.is_open()) {
            std::cerr << "Error: could not open file." << std::endl;
            return 1;
        }

        std::string line;
        while (std::getline(inputFile, line)) {
            std::istringstream ss(line);
            std::string date, valueStr;

            if (std::getline(ss, date, '|') && std::getline(ss, valueStr)) {
                date.erase(date.find_last_not_of(" \n\r\t") + 1); // Trim trailing whitespace
                valueStr.erase(0, valueStr.find_first_not_of(" \n\r\t")); // Trim leading whitespace

                if (!isValidDate(date)) {
                    std::cerr << "Error: bad input => " << date << std::endl;
                    continue;
                }

                if (!isValidValue(valueStr)) {
                    std::cerr << "Error: not a positive number." << std::endl;
                    continue;
                }

                float value = std::stof(valueStr);
                float rate = exchange.getExchangeRate(date);
                std::cout << date << " => " << value << " = " << (value * rate) << std::endl;
            } else {
                std::cerr << "Error: bad input => " << line << std::endl;
            }
        }
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}
