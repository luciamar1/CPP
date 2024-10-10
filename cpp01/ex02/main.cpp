
#include <string>
#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";  
    std::string* str_pointer = &str;       
    std::string& str_ref = str;           

    std::cout << "Memory address of str: " << &str << std::endl;
    std::cout << "Memory address held by str_pointer: " << str_pointer << std::endl;
    std::cout << "Memory address held by str_ref: " << &str_ref << std::endl;

    std::cout << "Value of str: " << str << std::endl;
    std::cout << "Value pointed to by str_pointer: " << *str_pointer << std::endl;
    std::cout << "Value pointed to by str_ref: " << str_ref << std::endl;

    return 0;
}
