#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    // Creación de instancias de ClapTrap y ScavTrap
    ClapTrap clap("Monada A");
    ScavTrap scav("Monada B");

    // Mostrar estados iniciales
    std::cout << "Estado inicial:" << std::endl;
    std::cout << clap.getName() << " - Hit Points: " << clap.gethitPoints() << ", Energy Points: " << clap.getenergyPoints() << std::endl;
    std::cout << scav.getName() << " - Hit Points: " << scav.gethitPoints() << ", Energy Points: " << scav.getenergyPoints() << std::endl;

    // Monada A ataca a un objetivo
    std::cout << "\n=== Monada A ataca ===" << std::endl;
    clap.attack("Target 1");
    clap.takeDamage(5);
    clap.beRepaired(3);

    // Monada B ataca a un objetivo
    std::cout << "\n=== Monada B ataca ===" << std::endl;
    scav.attack("Target 2");
    scav.guardGate();
    scav.takeDamage(30);
    scav.beRepaired(15);


    // Verificación del estado de ambos
    std::cout << "\n=== Estado  ===" << std::endl;
    std::cout << clap.getName() << " Hit Points: " << clap.gethitPoints() << ", Energy Points: " << clap.getenergyPoints() << std::endl;
    std::cout << scav.getName() << " - Hit Points: " << scav.gethitPoints() << ", Energy Points: " << scav.getenergyPoints() << std::endl;

    // Intento de ataque sin energía en Monada A
    std::cout << "\n=== Intento de ataque sin energía en Monada A ===" << std::endl;
    for (int i = 0; i < 11; ++i) { // Sumar intentos de ataque para agotar la energía
        clap.attack("Ghost Target");
    }

    // Intento de reparación sin energía en Monada B
    std::cout << "\n=== Intento de reparación sin energía en Monada B ===" << std::endl;
    for (int i = 0; i < 50; ++i) { // Reparar hasta que se agote la energía
        scav.beRepaired(3);
    }

    // Verificación final del estado de ambos
    std::cout << "\n=== Estado final ===" << std::endl;
    std::cout << clap.getName() << " - Hit Points: " << clap.gethitPoints() << ", Energy Points: " << clap.getenergyPoints() << std::endl;
    std::cout << scav.getName() << " - Hit Points: " << scav.gethitPoints() << ", Energy Points: " << scav.getenergyPoints() << std::endl;

    return 0;
}
