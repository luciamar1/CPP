#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>
class ClapTrap
{
private:
    std::string name;
    int         health;
    int         energyPoints;
    int         attackDamage;
public:
    ClapTrap();
    ClapTrap(const std::string& Name);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    const std::string getName();
    int getAttackDamage();
    int gethealth();
    int getenergyPoints();
    void setAttackDamage(int value);
    void setHealth(int value);
    void setEnergyPoints(int value);


};


#endif
