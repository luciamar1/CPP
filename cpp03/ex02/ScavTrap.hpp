#ifndef SCRAVTRAP_HPP
#define SCRAVTRAP_HPP

#include "ClapTrap.hpp"
    class ScavTrap : public ClapTrap
    { 
        public:
            ScavTrap(const std::string name);
            ScavTrap();
            ~ScavTrap();
            void attack(const std::string& target);
            void guardGate();
    };


#endif
