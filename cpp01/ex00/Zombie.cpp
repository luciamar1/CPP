#include "Zombie.hpp"
#include <iostream>
#include <iomanip>

Zombie::Zombie(){}

Zombie::Zombie(const std::string& name)
        : name(name){}

Zombie::~Zombie() {}

void Zombie::announce()
{
        std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
    


