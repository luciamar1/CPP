#include "FragTrap.hpp"

FragTrap::FragTrap() :ClapTrap()
{
    std::cout << "Constructor defaut FragTrap  called" << std::endl;
    sethitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
}

FragTrap::FragTrap(const std::string name) :ClapTrap(name)
{
    std::cout << "Constructor  FragTrap" << name << "called" << std::endl;
    sethitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
}
FragTrap:: ~FragTrap()
{
    std::cout << "Destructor defaut FragTrap name called" << std::endl;
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
        std::cout << "FragTrap doesn´t have enough energy to attack" << std::endl;
    
}
