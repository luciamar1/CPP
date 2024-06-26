#include "FragTrap.hpp"

FragTrap::FragTrap() :ClapTrap()
{
        std::cout << "constructor defaut FragTrap  called" << std::endl;
}

FragTrap::FragTrap(const std::string name) :ClapTrap(name)
{
    std::cout << "constructor  FragTrap name called" << std::endl;
    setHealth(100);
    setEnergyPoints(100);
    setAttackDamage(30);
}
FragTrap:: ~FragTrap()
{
    std::cout << "destructor defaut FragTrap name called" << std::endl;
}
void FragTrap::highFivesGuys()
{
    std::cout << "HIGH FIVES !!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if(getenergyPoints() > 0)
    {
        std::cout << "FragTrap " << getName() << " loses 1 point of energy to attack " << target << ", causing " << getAttackDamage() << " points of damage! " << std::endl;
        setEnergyPoints(getenergyPoints()-1);
    }
    else
        std::cout << "FragTrap don´t have enought energy to attack" << std::endl;
    
}
