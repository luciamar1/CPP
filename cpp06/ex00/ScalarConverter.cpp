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
        return true;
    }
    return false;
}

 bool ScalarConverter::isInt(const std::string& literal)
{
    char *endptr;
    int     number;

    number = std::strtol(literal.c_str(), &endptr,  10);
    if(!endptr && literal.length()<= 11 && number >= MIN_INT && number<= MAX_INT)
    {
        return true;
    }
    else 
        return(false);
}

 bool ScalarConverter::isFloat(const std::string& literal)
{
    if(literal.find('f'))
    {
        return(true);
    }
    else
        return(false);
}

 bool ScalarConverter::isDouble(const std::string& literal)
{
      if(literal.find('.'))
    {
        return(true);
    }
    else
        return(false);
}

 void ScalarConverter::printChar(char literal) 
{
    if (std::isprint(literal))
        std::cout << "Char: " << literal << "" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
        
    std::cout << "Int: " << static_cast <int>(literal) << std::endl;
    std::cout << "Float: "<< static_cast <float>(literal) << ".0f" <<  std::endl;
    std::cout << "Double : " << static_cast <double>  (literal) << ".0" << std::endl;
}

  void ScalarConverter::printInt(int literal)
 {
     std::cout << "INT"  << std::endl;
    if (std::isprint(static_cast<char>(literal)))
        std::cout << "Char: " << static_cast<char>(literal) << "" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "Int : " << literal << std::endl;
    std::cout << "Float: "<< static_cast <float>(literal) << ".0f" <<  std::endl;
    std::cout << "Double : " << static_cast <double>  (literal) << ".0" << std::endl;
 }

  void ScalarConverter::printFloat(float literal)
 {
     std::cout << "FLOAT"  << std::endl;
    if (std::isprint(static_cast<char>(literal)))
        std::cout << "Char: " << static_cast<char>(literal) << "" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    
    if((static_cast<int> (literal)) >= MIN_INT && (static_cast<int> (literal))<= MAX_INT)
        std::cout << "Int: " << static_cast <int>(literal) << std::endl;
    else
        std::cout << "impossible" << std::endl;
    std::cout << "Float : " << literal << "f" << std::endl;
    std::cout << "Double : " << static_cast <double>  (literal) << ".0" << std::endl;
 }

 void ScalarConverter::printDouble(double literal)
 {
    std::cout << "DOUBLE"  << std::endl;
    if (std::isprint(static_cast<char>(literal)))
        std::cout << "Char: " << static_cast<char>(literal) << "" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    
    if((static_cast<int> (literal)) >= MIN_INT && (static_cast<int> (literal))<= MAX_INT)
        std::cout << "Int: " << static_cast <int>(literal) << std::endl;
    else
        std::cout << "impossible" << std::endl;
    std::cout << "Float: "<< static_cast <float>(literal) << ".0f" <<  std::endl;
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
        return ;
    }

     else if (isInt(literal))
    {
        int lit = atoi(literal.c_str());
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
