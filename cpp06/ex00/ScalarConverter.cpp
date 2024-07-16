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


 bool ScalarConverter::isChar(const std::string& literal)
{
    if(literal.length() == 3 && literal[0] == '\'' && literal[2] == '\'')
        return true;
    return false;
}

 bool ScalarConverter::isInt(const std::string& literal)
{
    char *endptr;
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

 bool ScalarConverter::isFloat(const std::string& literal)
{

    char *endptr;
    try
    {
        std::strtof(literal.c_str(), &endptr);
        return true;
    }
    catch(...)
    {
        return(false);
    }
}

 bool ScalarConverter::isDouble(const std::string& literal)
{
     char *endptr;
    try
    {
        std::strtod(literal.c_str(), &endptr);
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
    std::cout << "Float : " << literal << "f" << std::endl;
 }

 void ScalarConverter::printDouble(double literal)
 {
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Double : " << literal << std::endl;
 }

void ScalarConverter::convert(const std::string& literal)
{
    char *ptr;
    if (isChar(literal))
    {
        char lit = literal[1];
        printChar(lit);
    }

     if (isInt(literal))
    {
        int lit = strtol(literal.c_str(), &ptr, 10);
        printInt(lit);
    }

     if (isFloat(literal))
    {
        float lit = strtof(literal.c_str(), &ptr);
        printFloat(lit);
    }

    if (isDouble(literal))
    {
        double lit = strtod(literal.c_str(), &ptr);
        printDouble(lit);
    }
}