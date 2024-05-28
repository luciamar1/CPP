#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

//HumanA::HumanA(){}

HumanA::HumanA(const std::string& _name, Weapon& _WeaponA)
    : name(_name), WeaponA(_WeaponA)
    {
    }

void HumanA::attack() const
{
    std::cout << name << " attacks with their " << WeaponA.getType() << std::endl;
}
