#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>
#include "Weapon.hpp"

int main()
{
    {
        std::cout << "1" <<std::endl;
        Weapon club = Weapon("crude spiked club");
        std::cout << club.getType() <<std::endl;
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();

    }
    {
        std::cout << "2" <<std::endl;
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        std::cout << "guatafac" <<std::endl;
        jim.attack();
        club.setType("some other type of club");
        jim.attack();

    }
    return 0;
}
