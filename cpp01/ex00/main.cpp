#include "Zombie.hpp"

int main()
{
    Zombie *memoria_zombie;

    memoria_zombie = newZombie("memoria_zombiee");
    (*memoria_zombie).announce();
    randomChump("nomem");

    delete memoria_zombie;
    return(0);
}

