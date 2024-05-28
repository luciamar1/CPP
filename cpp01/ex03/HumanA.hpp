#ifndef HumanA_HPP
#define HumanA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
    private:
        std::string name;
        Weapon& WeaponA;


    public:
        HumanA();
        HumanA(const std::string& name, Weapon& WeaponA);
        void attack() const;
};

#endif
