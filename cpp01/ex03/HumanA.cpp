#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(){}
HumanA::HumanA(const std::string& name, Weapon& WeaponA)
    : name(name), Weapon(WeaponA)
    {}

void HumanA::attack() const
{
    std::cout << name << "attacks with their" << WeaponA;
}