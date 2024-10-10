#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *horde;

    horde = new Zombie[N];

    for(int counter = 0; counter < N; counter ++)
    {
        new (&horde[counter]) Zombie(name);
    }
        return horde;

}
