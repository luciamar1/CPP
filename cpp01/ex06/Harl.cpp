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
/*
void    Harl::complain(std::string level)
{
    void (Harl::*harlFunctions[4])() = { &Harl::debug, &Harl::info, &Harl::warning,  &Harl::error };
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR" };
    for(int counter = 0; counter < 4; counter++)
    {
        if(level == levels[counter])
        {
            while(counter < 4)
            {
                std::cout << "[ " << levels[counter] << " ]" << std::endl;
                (this->*harlFunctions[counter])();
                counter ++;
            }

        }
    }    
}*/
int putLevel(std::string level)
{
    int levelValue;

    if (level == "DEBUG") 
        levelValue = 1;
    else if (level == "INFO") 
        levelValue = 2;
    else if (level == "WARNING") 
        levelValue = 3;
    else if (level == "ERROR") 
        levelValue = 4;
    else 
        levelValue = 0;
    return(levelValue);
}

void Harl::complain(std::string level) {
    int levelValue;

    levelValue = putLevel(level);
    switch (levelValue) {
        case 1:
            std::cout << "[ DEBUG ]" << std::endl;
            debug();
        case 2:
            std::cout << "[ INFO ]" << std::endl;
            info();
        case 3:
            std::cout << "[ WARNING ]" << std::endl;
            warning();
        case 4:
            std::cout << "[ ERROR ]" << std::endl;
            error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}
