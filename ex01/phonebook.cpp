#include "app.h"
#include <iostream>
#include <iomanip>
#include <unistd.h>
phonebook::phonebook(){
        last_index = -1;
    }
    
void phonebook::add_contact(const contact& contact)
{
    if (last_index == 7)
        last_index = 0;
    else
        last_index ++;
    list_contacts[last_index] = contact;
}

void phonebook::search_contact()
{
    int index;
    if (last_index == -1) {
        std::cout << "Phonebook is empty." << std::endl;
        return;
    }

    std::cout << std::setw(10) << std::right << "Index" << " | ";
    std::cout << std::setw(10) << std::right << "First Name" << " | ";
    std::cout << std::setw(10) << std::right << "Last_iName" << " | ";
    std::cout << std::setw(10) << std::right << "Nickname" << std::endl;

    for(int counter = 0; counter <= last_index; counter ++)
    {
        std::cout << std::setw(10) << std::right << counter << " | ";
        std::cout << std::setw(10) << std::right << truncate_string(list_contacts[counter].first_name) << " | ";
        std::cout << std::setw(10) << std::right <<  truncate_string(list_contacts[counter].last_name) << " | ";
        std::cout << std::setw(10) << std::right << truncate_string(list_contacts[counter].nickname) << std::endl;
    }
    std::cout << "Enter the index of the contact to display: ";
    std::cin >> index;
    //sleep(1);
    if (std::cin.fail() || index < 0 || index > last_index)
    {
        std::cout << "Invalid index." <<std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    }
    else
    {
        std::cout << std::endl << "contact Information:" << std::endl;
        list_contacts[index].displayInfo();
    }
}

std::string phonebook::truncate_string(const std::string& str)const
{
    const int max_width = 10;
    if (str.length() <= max_width)
        return(str);
    else
    {
            return str.substr(0, max_width - 1) + ".";
    }
}