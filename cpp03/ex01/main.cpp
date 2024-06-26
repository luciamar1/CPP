
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap clap("monada A");
    ScavTrap scav("monada B");

    clap.attack("target");
    clap.takeDamage(5);
    clap.beRepaired(3);

    scav.attack("target");
    scav.guardGate();
    scav.takeDamage(30);
    scav.beRepaired(15);

    return 0;
}
