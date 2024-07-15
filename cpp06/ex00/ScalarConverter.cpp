#include "ScalarConverter.hpp"
#include <cstdlib>
#include <iostream>

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(ScalarConverter &other)
{
    *this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) 
{
     if(this != &other)
    {
        ;*this = other;
    }
    return(*this);
 }

ScalarConverter::~ScalarConverter() {}


static bool isChar(const std::string& literal)
{
    if(literal.length() == 3 && literal[0] == '\'' && literal[2] == '\'')
        return true;
    return false;
}

static bool isInt(const std::string& literal)
{
    try
    {
        std::strtol(literal.c_str(), &endptr,  10);
        return true;
    }
    catch(...)
    {
        return(false);
    }
}

static bool isFloat(const std::string& literal)
{
    try
    {
        std::stof(literal);
        return true;
    }
    catch(...)
    {
        return(false);
    }
}

static bool isDouble(const std::string& literal)
{
    try
    {
        std::stod(literal);
        return true;
    }
    catch(...)
    {
        return(false);
    }
}

 void ScalarConverter::printChar(char literal) 
{
    if (std::isprint(literal))
        std::cout << "char: '" << literal << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
}

  void ScalarConverter::printInt(int literal)
 {
    std::cout << "Int : " << literal << std::endl;
 }

  void ScalarConverter::printFloat(float literal)
 {
    std::cout << "Float : " << literal << std::endl;
 }

 void ScalarConverter::printDouble(double literal)
 {
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Double : " << literal << std::endl;
 }

void ScalarConverter::convert(const std::string& literal)
{
    if (isChar(literal))
    {
        char lit = literal[1];
        printChar(lit);
    }

     if (isInt(literal))
    {
        int lit = stoi(literal);
        printInt(lit);
    }

     if (isFloat(literal))
    {
        float lit = stof(literal);
        printFloat(lit);
    }

    if (isDouble(literal))
    {
        double lit = stoi(literal);
        printDouble(lit);
    }
}