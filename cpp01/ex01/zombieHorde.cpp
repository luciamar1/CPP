#include "Zombie.hpp"
#include <iostream>
#include <iomanip>

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *horde;

    horde = new Zombie[N];

    for(int counter = 0; counter < N; counter ++)
    {
        horde[counter] = Zombie(name);
    }
        return horde;

}
