#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <sstream>


std::string getCurrentDate() {
    time_t now = time(0);
    struct tm tstruct;
    char buf[11];  // "YYYY-MM-DD" + null terminator
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d", &tstruct);
    return std::string(buf);
}

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(const std::string& date) 
{

    // 1. Verificar longitud correcta (YYYY-MM-DD -> 10 caracteres)
    if (date.length() != 10 || date[4] != '-' || date[7] != '-') {
        return false;
    }

    // 2. Extraer partes de la fecha
    int year, month, day;
    std::istringstream iss(date);
    char dash1, dash2;

    if (!(iss >> year >> dash1 >> month >> dash2 >> day) || dash1 != '-' || dash2 != '-') {
        return false;
    }
    std::string currentDate = getCurrentDate();  // Obtener la fecha actual

    if (date > currentDate) {  // Comparación de strings funciona con formato YYYY-MM-DD
        std::cerr << "Error: date is in the future => " << date << std::endl;
        return false;
    }
    
    // 3. Validar rangos de año, mes y día
    if (year < 2009 || month < 01 || month > 12 || day < 01) {  // Bitcoin empezó en 2009
        return false;
    }

    // 4. Validar días según el mes
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (month == 02 && isLeapYear(year)) {  
        daysInMonth[1] = 29;  // Ajustar para años bisiestos
    }

    if (day > daysInMonth[month - 1]) {
        return false;
    }

    return true;  // La fecha es válida
}

bool isValidValue(const std::string& valueStr) {
    try {
        float value = std::atof(valueStr.c_str());
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
        std::getline(inputFile, line);  
        while (std::getline(inputFile, line)) 
        {
            std::istringstream ss(line);
            std::string date, valueStr;

            if (std::getline(ss, date, '|') && std::getline(ss, valueStr))
            {
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

                float value = std::atof(valueStr.c_str());
                float rate = exchange.getExchangeRate(date);
                std::cout << date << " => " << value << " = " << (value * rate) << std::endl;
            } 
            else
             {
                std::cerr << "Error: bad input => " << line << std::endl;
            }
        }
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}
