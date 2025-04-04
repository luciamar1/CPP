#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN& other) {
    _stack = other._stack;
}

RPN& RPN::operator=(const RPN& other) {
    if (this != &other) {
        _stack = other._stack;
    }
    return *this;
}

RPN::~RPN() {}



// Método para evaluar la expresión RPN
void RPN::evaluate(const std::string& expression) {
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token) 
    {
        if (isdigit(token[0]) && token.length() == 1)
        {
            _stack.push(token[0] - '0');  // Convertir char a int
        }
        else if (token == "+" || token == "-" || token == "*" || token == "/") 
        {
            if (_stack.size() < 2) 
            {
                std::cerr << "Error: Not enough operands.\n";
                return ;
            }
            int b = _stack.top(); 
            _stack.pop();
            int a = _stack.top(); 
            _stack.pop();

            if (token == "+")
                 _stack.push(a + b);
            else if (token == "-") 
                _stack.push(a - b);
            else if (token == "*")  
                _stack.push(a * b);
            else if (token == "/") 
            {
                if (b == 0) {
                    std::cerr << "Error: Division by zero.\n";
                    return ;
                }
                _stack.push(a / b);
            }
        } 
        else 
        {
            std::cerr << "Error: Invalid token '" << token << "'.\n";
            return ;
        }
      
    }

    if (_stack.size() != 1) {
        std::cerr << "Error: The expression is incorrect. Check the number of operands and operators.\n";
        return ;
    }

 
    int result = _stack.top();
    std::cout << result << std::endl;
    return ;
}
