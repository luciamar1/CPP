#include "Zombie.hpp"
#include <iostream>
#include <iomanip>

void randomChump( std::string name )
{
    Zombie zombie(name);

    zombie.announce();
}
