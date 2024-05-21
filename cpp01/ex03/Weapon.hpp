#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class weapon
{
    private:
        std::string type;


    public:
        weapon();
        weapon(std::string& type);
        std::string getType();
        std::string setType(std::string new_type);
};

#endif