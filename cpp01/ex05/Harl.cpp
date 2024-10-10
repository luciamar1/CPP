#include "Harl.hpp"

Harl::Harl(){}
void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!" << std::endl;
    std::cout << std::endl;
}

void Harl::info() 
{
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    std::cout << std::endl;
}


void Harl::warning() 
{
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
}

void Harl::error() 
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

// int putLevel(std::string level)
// {
//     int levelValue;

//     if (level == "DEBUG") 
//         levelValue = 1;
//     else if (level == "INFO") 
//         levelValue = 2;
//     else if (level == "WARNING") 
//         levelValue = 3;
//     else if (level == "ERROR") 
//         levelValue = 4;
//     else 
//         levelValue = 0;
//     return(levelValue);
// }

void    Harl::complain(std::string level)
{
    void    (Harl:: *complainMethods[4])(void) = {&Harl::debug, &Harl::info , &Harl:: warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int counter = 0; counter < 4; counter ++)
    {
        if(levels[counter] == level)
        {
            (this->*complainMethods[counter])();
            return ;
        }
    }
}
