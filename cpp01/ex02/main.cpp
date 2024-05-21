#include <string>
#include <iostream>

int main()
{
    std::string str;
    std::string* str_pointer;
    std::string& str_ref = str;
    

    str = "HI THIS IS BRAIN";
    str_pointer = &str;
    std::cout << str<< std::endl;
    std::cout << str_pointer << std::endl;
    std::cout << str_ref << std::endl;
    *str_pointer = "paco";
    std::cout << str<< std::endl;
    return(1);
}
