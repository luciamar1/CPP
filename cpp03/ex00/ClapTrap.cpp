#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "constructor default called" << std::endl;
    health = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap::ClapTrap(const std::string& Name)
{
    std::cout << "constructor name called" << std::endl;
    name = Name;
    health = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor default called" << std::endl;
}

//ClapTrap <name> attacks <target>, causing <damage> points of damage!
void ClapTrap::attack(const std::string& target)
{
    if(energyPoints > 0)
    {
        std::cout << "ClapTrap lose 1 point of energy to " << name << " attack " << target << ", causing " << attackDamage << " points of damage! " << std::endl;
        energyPoints -= 1;
    }
    else
        std::cout << "ClapTrap don´t have enought energy to attack" << std::endl;
    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " take " << amount << " points of damage!" << std::endl;
    health -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoints > 0)
    {
        std::cout << "ClapTrap lose 1 point of energy to " << name << " earn " << amount << " points of damage!" << std::endl;
        health += amount;
        energyPoints -= 1;
    }
    else
        std::cout << "ClapTrap don´t have enought energy to repair itself" << std::endl;
}

std::string ClapTrap::getName()
{
    return (name);
}

int ClapTrap::getAttackDamage()
{
    return (attackDamage);
}
