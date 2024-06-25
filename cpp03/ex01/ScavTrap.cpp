#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    std::cout << "constructor ScavTrap name called" << std::endl;
    setHealth (100);
    setEnergyPoints(50);
    setAttackDamage(20);
}

ScavTrap::~ScavTrap() {
    std::cout << "destructor  ScavTrapdefault called" << std::endl;
}


void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode!" << std::endl;
}

void ScavTrap ::attack(const std::string& target)
{
    if(getenergyPoints() > 0)
    {
        std::cout << " ScavTrap lose 1 point of energy to " << getName() << " attack " << target << ", causing " << getAttackDamage() << " points of damage! " << std::endl;
        setEnergyPoints(getenergyPoints()-1);
    }
    else
        std::cout << " ScavTrap don´t have enought energy to attack" << std::endl;
    
}