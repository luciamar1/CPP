#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <cctype>
#include <iomanip>

class ScalarConverter
{
private:
    ScalarConverter();
    ScalarConverter(ScalarConverter &other);
    ~ScalarConverter();
    ScalarConverter& operator=(const ScalarConverter&); 
    static bool isChar(const std::string& literal);
    static bool isInt(const std::string& literal);
    static bool isFloat(const std::string& literal);
    static bool isDouble(const std::string& literal);

  static void printChar(char literal);
  static void printInt(int literal);
  static void printFloat(float literal);
  static void printDouble(double literal);
public:
    static void convert(const std::string& literal);


};

#endif