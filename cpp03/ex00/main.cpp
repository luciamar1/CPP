
#include "ClapTrap.hpp"

int main() {
    // Crear dos instancias de ClapTrap
    ClapTrap A("Monada A");
    ClapTrap B("Monada B");

    // Ejemplo de ataque
    std::cout << "\n=== A ataca a B ===\n";
    A.attack(B.getName());
    B.takeDamage(A.getAttackDamage());

    // Ejemplo de reparación
    std::cout << "\n=== B se repara ===\n";
    B.beRepaired(5);

    // Intento de ataque sin energía
    std::cout << "\n=== Agotamiento de energía en A ===\n";
    for (int i = 0; i < 10; ++i) { // A ataca hasta quedarse sin energía
        A.attack("Objetivo fantasma");
    }
    A.attack("Intento final"); // Ataque sin energía

    // Intento de reparación sin energía
    std::cout << "\n=== Intento de reparación sin energía en B ===\n";
    for (int i = 0; i < 10; ++i) { // B se repara hasta quedarse sin energía
        B.beRepaired(3);
    }
    B.beRepaired(5); // Reparación sin energía

    return 0;
}
