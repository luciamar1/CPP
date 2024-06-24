#include "ClapTrap.hpp"

int main()
{
    ClapTrap A("monada A");
    ClapTrap B("monada B");
    A.attack(B.getName());
    B.takeDamage(B.getAttackDamage());
    B.beRepaired(5);
    return (0);
}
