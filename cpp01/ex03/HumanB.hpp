#ifndef HumanB_HPP
#define HumanB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
    private:
        std::string name;
        Weapon* WeaponB;

    public:
        HumanB();
        HumanB(const std::string& name );
        void setWeapon(Weapon& newWeapon);
        void attack() const;
};

#endif
