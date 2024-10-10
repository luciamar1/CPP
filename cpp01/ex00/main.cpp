#include "Zombie.hpp"



int main() {
    Zombie *memoria_zombie = newZombie("memoria_zombiee");
    
    if (memoria_zombie) {
        memoria_zombie->announce();
    }

    randomChump("nomem");
    delete memoria_zombie; // Liberar la memoria
    return 0;
}
