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
    if(  literal.length() == 1 && !isdigit(literal[0]))
    {
        std::cout << "true char " <<  literal << std::endl;
        return true;
    }
    std::cout << "false char " << literal << std::endl;
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
    std::cout << static convert <int>
    
    printFloat(literal);
    printDouble(literal);
}

  void ScalarConverter::printInt(int literal)
 {
    printChar(literal);
    std::cout << "Int : " << literal << std::endl;
    printFloat(literal);
    printDouble(literal);
 }

  void ScalarConverter::printFloat(float literal)
 {
    printChar(literal);
    std::cout << static convert <int>
    
    std::cout << "Float : " << literal << "f" << std::endl;
    printDouble(literal);
 }

 void ScalarConverter::printDouble(double literal)
 {
    printChar(literal);
    std::cout << static convert <int>
    
    printFloat(literal);
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Double : " << literal << std::endl;
 }

void ScalarConverter::convert(const std::string& literal)
{
    char *ptr;
    ptr =  NULL;
    if (isChar(literal))
    {
        printChar(literal[0]);
        std::cout <<"GUATAFAAAC" << std::endl;
        return ;
    }

     else if (isInt(literal))
    {
        int lit = atoi(literal.c_str());
        std::cout << lit << literal.c_str() <<  std::endl;
        printInt(lit);
    }

     else if (isFloat(literal))
    {
        float lit = strtof(literal.c_str(), &ptr);
        printFloat(lit);
    }

    else if (isDouble(literal))
    {
        double lit = strtod(literal.c_str(), &ptr);
        printDouble(lit);
    }
    return ;
}