
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main() {
    ClapTrap clap("clap monada A");
    ScavTrap scav("scav monada B");
    FragTrap frag("frag monada C");

    clap.attack("target");
    clap.takeDamage(5);
    clap.beRepaired(3);

    scav.attack("target");
    scav.guardGate();
    scav.takeDamage(30);
    scav.beRepaired(15);

    frag.attack("target");
    frag.highFivesGuys();
    frag.takeDamage(40);
    frag.beRepaired(20);

    return 0;
}
