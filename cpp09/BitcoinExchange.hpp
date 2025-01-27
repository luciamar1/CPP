#ifndef BITCOINEXCHANCE_HPP
#define BITCOINEXCHANCE_HPP

#include <iostream>
#include <list>
#include <map>
#include <string>
#include <algorithm>  // for std::find
#include <exception>  // for std::exception


class BitcoinExchange {
public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange& other);
    BitcoinExchange(const std::string& dbFile);
    ~BitcoinExchange();
    BitcoinExchange& operator=(const BitcoinExchange& other);

    // Método para obtener la tasa de cambio
    float getExchangeRate(const std::string& date) const;

private:
    std::map<std::string, float> exchangeRates; // Almacena las tasas de cambio por fecha

    // Método auxiliar para cargar la base de datos
    void loadDatabase(const std::string& dbFile);
};

#endif

