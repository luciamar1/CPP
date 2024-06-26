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
    std::cout << "constructor ClapTrap name called" << std::endl;
    name = Name;
    health = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor ClapTrap default called" << std::endl;
}

//ClapTrap <name> attacks <target>, causing <damage> points of damage!
void ClapTrap::attack(const std::string& target)
{
    if(energyPoints > 0)
    {
        std::cout << "ClapTrap  " << name << "  loses 1 point of energy to attack " << target << ", causing " << attackDamage << " points of damage! " << std::endl;
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
        std::cout << "ClapTrap " << name << " lose 1 point of energy to  earn " << amount << " points of health!" << std::endl;
        health += amount;
        energyPoints -= 1;
    }
    else
        std::cout << "ClapTrap don´t have enought energy to repair itself" << std::endl;
}

const std::string ClapTrap::getName()
{
    return (name);
}

int ClapTrap::getAttackDamage()
{
    return (attackDamage);
}

int ClapTrap::gethealth()
{
    return (health);
}

int ClapTrap::getenergyPoints()
{
    return (energyPoints);
}
void ClapTrap::setAttackDamage(int value)
{
    attackDamage = value;
}

void ClapTrap::setHealth(int value)
{
    health  = value;
}

void ClapTrap::setEnergyPoints(int value)
{
    energyPoints = value;
}
