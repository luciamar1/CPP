#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(){}
HumanB::HumanB(const std::string& name)
    : name(name)
    {  
        WeaponB = NULL; 
    }

void HumanB::attack() const
{
    if (HumanB::WeaponB)
        std::cout << name << " attacks with their " << WeaponB->getType() << std::endl;
    else
        std::cout << name << " attacks with nothing " << std::endl;
}

void HumanB::setWeapon(Weapon& newWeapon)
{
    WeaponB = &newWeapon;
}
