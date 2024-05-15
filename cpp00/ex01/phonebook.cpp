#include "app.h"
#include <iostream>
#include <iomanip>
phonebook::phonebook(){
        last_index = -1;
    }
    
void phonebook::add_contact(const contact& contact, int *older)
{

    if ((last_index == 7 && *older == -42) || (last_index == 7 && *older == 7 ))
    {
        *older = 0;
        list_contacts[*older] = contact;

    }
    else if(last_index == 7)
    {
        (*older) ++;
        list_contacts[*older] = contact;
    }
    else
    {
        last_index ++;
        list_contacts[last_index] = contact;
    }

}

void phonebook::search_contact()
{
    char index;
    if (last_index == -1) {
        std::cout << "Phonebook is empty." << std::endl;
        return;
    }

    std::cout << std::setw(10) << std::right << "Index" << " | ";
    std::cout << std::setw(10) << std::right << "First Name" << " | ";
    std::cout << std::setw(10) << std::right << "Last_Name" << " | ";
    std::cout << std::setw(10) << std::right << "Nickname" << std::endl;

    for(int counter = 0; counter <= last_index; counter ++)
    {
        std::cout << std::setw(10) << std::right << counter << " | ";
        std::cout << std::setw(10) << std::right << truncate_string(list_contacts[counter].displayData("first name")) << " | ";
        std::cout << std::setw(10) << std::right <<  truncate_string(list_contacts[counter].displayData("last name")) << " | ";
        std::cout << std::setw(10) << std::right << truncate_string(list_contacts[counter].displayData("nickname")) << std::endl;
    }
    std::cout << "Enter the index of the contact to display: ";
    std::cin >> index;

    if (std::cin.fail())
        return;
    char last_index_char = last_index + 48;
    if (std::cin.fail() || index < '0' || index > last_index_char)
    {
        std::cout << "Invalid index." <<std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        phonebook::search_contact();
    
    }
    else
    {
        int iter = index - 48;
        std::cout << std::endl << "contact Information:" << std::endl;
        list_contacts[iter].displayInfo();
    }
}

std::string phonebook::truncate_string(const std::string& str)const
{
    const int max_width = 10;
    // std::string aux;
    if (str.length() <= max_width)
        return(str);
    else
    {
            // aux = str.substr(0, max_width - 1) + ".";
            // std::cout << aux << std::endl;
            return str.substr(0, max_width - 1) + ".";
    }
}
