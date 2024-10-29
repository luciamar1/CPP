#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>
class ClapTrap
{
protected:
    std::string name;
    unsigned int         hitPoints;
    unsigned int         energyPoints;
    unsigned int         attackDamage;
public:
    ClapTrap();
    ClapTrap(const std::string& Name);
    ~ClapTrap();
    ClapTrap& operator=(const ClapTrap& original_ClapTrap);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    const std::string getName();
    int getAttackDamage();
    int gethitPoints();
    int getenergyPoints();
    void setAttackDamage(int value);
    void sethitPoints(int value);
    void setEnergyPoints(int value);


};

#endif

