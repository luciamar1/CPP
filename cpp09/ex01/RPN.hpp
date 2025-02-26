#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>

class RPN {
private:
    std::stack<int> _stack;  // Almacena los valores para la evaluación

public:
    RPN();
    RPN(const RPN& other);
    RPN& operator=(const RPN& other);
    ~RPN();
    
    // Método para evaluar una expresión en notación polaca inversa
    int evaluate(const std::string& expression);
};

#endif
