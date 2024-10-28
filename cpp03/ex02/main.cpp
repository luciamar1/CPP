#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    std::cout << "=== Creación de Objetos ===" << std::endl;
    ClapTrap clap("ClapTrap A");
    ScavTrap scav("ScavTrap B");
    FragTrap frag("FragTrap C");

    std::cout << "\n=== Estado Inicial ===" << std::endl;
    std::cout << clap.getName() << " - Hit Points: " << clap.gethitPoints() << ", Energy Points: " << clap.getenergyPoints() << std::endl;
    std::cout << scav.getName() << " - Hit Points: " << scav.gethitPoints() << ", Energy Points: " << scav.getenergyPoints() << std::endl;
    std::cout << frag.getName() << " - Hit Points: " << frag.gethitPoints() << ", Energy Points: " << frag.getenergyPoints() << std::endl;

    std::cout << "\n=== Prueba de Ataques y Habilidades Especiales ===" << std::endl;

      std::cout << "\n            === Claptrap ===" << std::endl;
    clap.attack("Target 1");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\n         === Scavtrap ===" << std::endl;
    scav.attack("Target 2");
    scav.guardGate();
    scav.takeDamage(20);
    scav.beRepaired(10);

    std::cout << "\n         === Fragtrap ===" << std::endl;
    frag.attack("Target 3");
    frag.highFivesGuys();
    frag.takeDamage(30);
    frag.beRepaired(15);

    std::cout << "\n === Prueba de Energía Insuficiente ===" << std::endl;
    for (int i = 0; i < 100; ++i) {
        frag.attack("Ghost Target");
    }

    std::cout << "\n         === Estado Final ===" << std::endl;
    std::cout << clap.getName() << " - Hit Points: " << clap.gethitPoints() << ", Energy Points: " << clap.getenergyPoints() << std::endl;
    std::cout << scav.getName() << " - Hit Points: " << scav.gethitPoints() << ", Energy Points: " << scav.getenergyPoints() << std::endl;
    std::cout << frag.getName() << " - Hit Points: " << frag.gethitPoints() << ", Energy Points: " << frag.getenergyPoints() << std::endl;

    std::cout << "\n=== Destrucción de Objetos ===" << std::endl;
    return 0;
}
