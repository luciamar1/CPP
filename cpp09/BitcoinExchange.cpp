#include "BitcoinExchange.hpp"

#include <fstream>
#include <sstream>
#include <stdexcept>

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
    *this = other; 
}

BitcoinExchange::BitcoinExchange(const std::string& dbFile) {
    loadDatabase(dbFile);
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
    if (this != &other) {
        this->exchangeRates = other.exchangeRates;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}
// Cargar la base de datos desde un archivo CSV
void BitcoinExchange::loadDatabase(const std::string& dbFile) {
    std::ifstream file(dbFile);
    if (!file.is_open())
        throw std::runtime_error("Error: could not open file.");

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream ss(line);
        std::string date;
        float rate;

        if (std::getline(ss, date, ',') && ss >> rate) {
            exchangeRates[date] = rate;
        }
    }
}

// Obtener la tasa de cambio más cercana a la fecha proporcionada
float BitcoinExchange::getExchangeRate(const std::string& date) const {
    auto it = exchangeRates.lower_bound(date);
    if (it == exchangeRates.end() || it->first > date) {
        if (it == exchangeRates.begin())
            throw std::runtime_error("Error: date not found.");
        --it;
    }
    return it->second;
}