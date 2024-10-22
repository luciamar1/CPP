#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>
class ClapTrap
{
private:
    std::string name;
    int         hitPoints;
    int         energyPoints;
    int         attackDamage;
public:
    ClapTrap();
    ClapTrap(const std::string& Name);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName();
    int getAttackDamage();
};


#endif
