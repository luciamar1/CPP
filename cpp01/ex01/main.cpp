#include "Zombie.hpp"

int main()
{
    Zombie  *horde;
    int N;

    N = 65;
    horde = zombieHorde(N, "jeje");

    if (!horde) {
        std::cerr << "Memory allocation failed!" << std::endl;
        return 1; 
    }

    for(int counter = 0; counter < N; counter ++)
    {
        horde[counter].announce();
    }

    delete[]horde;
    return(1);
}
