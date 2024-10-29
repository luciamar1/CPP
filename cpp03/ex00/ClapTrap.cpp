#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Constructor default called" << std::endl;
    name = "Unnamed";
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap::ClapTrap(const std::string& Name)
{
    name = Name;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
    std::cout << "Constructor " <<name <<" called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor ClapTrap called for " << name << std::endl;

}

ClapTrap& ClapTrap::operator=(const ClapTrap& original_ClapTrap)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &original_ClapTrap)
    {
         name = original_ClapTrap.name;
        hitPoints = original_ClapTrap. hitPoints;
        energyPoints = original_ClapTrap. energyPoints;
        attackDamage = original_ClapTrap.attackDamage;
    }
    return(*this);
}

//ClapTrap <name> attacks <target>, causing <damage> points of damage!
void ClapTrap::attack(const std::string& target)
{
    if(energyPoints > 0)
    {
        std::cout << "ClapTrap  " << name << " loses 1 point of energy to attack " << target << ", causing " << attackDamage << " points of damage! " << std::endl;
        energyPoints -= 1;
    }
    else
        std::cout << "ClapTrap doesn’t have enough energy..." << std::endl;
    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " take " << amount << " points of damage!" << std::endl;
    if (hitPoints <= amount) 
        hitPoints = 0;
   else
        hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoints > 0)
    {
        std::cout << "ClapTrap " << name << " loses 1 point of energy to  earn " << amount << " points of hitPoints!" << std::endl;
        hitPoints += amount;
        energyPoints -= 1;
        std::cout << "ClapTrap " << name << " now has " << hitPoints << " hit points and " << energyPoints << " energy points left." << std::endl;
    }
    else
        std::cout << "ClapTrap doesn´t have enough energy to repair itself" << std::endl;
}

std::string ClapTrap::getName()
{
    return (name);
}

int ClapTrap::getAttackDamage()
{
    return (attackDamage);
}
