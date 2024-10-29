#include "ScavTrap.hpp"

 ScavTrap::ScavTrap(): ClapTrap()
 {
    std::cout << "Constructor defaut ScavTrap name called" << std::endl;
 }

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    std::cout << "Constructor ScavTrap " << name << " called" << std::endl;
    sethitPoints (100);
    setEnergyPoints(50);
    setAttackDamage(20);
}

ScavTrap::~ScavTrap() {
    std::cout << "Destructor  ScavTrap  default called for "  << name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& original_ScavTrap)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &original_ScavTrap)
    {
         name = original_ScavTrap.name;
        hitPoints = original_ScavTrap. hitPoints;
        energyPoints = original_ScavTrap. energyPoints;
        attackDamage = original_ScavTrap.attackDamage;
    }
    return(*this);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode!" << std::endl;
}

void ScavTrap ::attack(const std::string& target)
{
    if(getenergyPoints() > 0)
    {
        std::cout << "ScavTrap  " << getName() << " loses 1 point of energy to attack " << target << ", causing " << getAttackDamage() << " points of damage! " << std::endl;
        setEnergyPoints(getenergyPoints()-1);
    }
    else
        std::cout << "ScavTrap doesn´t have enough energy to attack" << std::endl;
    
}
