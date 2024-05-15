
#include "app.h"
#include <unistd.h>
///// no habria que poner contacts[lastIndex] = *contact; para no igualarlo a la direccion de memoria?


void removeTabs(std::string& str) {
    for (size_t i = 0; i < str.length(); i++)
        if (str[i] == '\t')
            str[i] = ' ';
}

int main()
{
    phonebook phonebook;
    std::string command_user;
    int    older;

    older = -42;
    std::cout << "Welcome to your crappy awesome phonebook software!" << std::endl;
    
    while(1)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::cin >> command_user;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        //std::cout << std::cin << std::endl;
        //sleep(1);
        if(std::cin.fail()) {
        
            return(1);
        }
        if (command_user == "ADD")
        {
            std::string first_name, last_name, nickname, phone_number, darkest_secret;

            std::cout << "Enter First Name: ";
            std::getline(std::cin, first_name);
            removeTabs(first_name);
            if(std::cin.fail())
                return(1);
            
            std::cout << "Enter Last Name: ";
            std::getline(std::cin, last_name);
            removeTabs(last_name);
            if(std::cin.fail())
                return(1);
            std::cout << "Enter Nickname: ";
            std::getline(std::cin, nickname);
            if(std::cin.fail())
                return(1);
            removeTabs(nickname);
            std::cout << "Enter Phone Number: ";
            std::getline(std::cin, phone_number);
            if(std::cin.fail())
                return(1);
            removeTabs(phone_number);
            std::cout << "Enter Darkest Secret: ";
            std::getline(std::cin, darkest_secret);
            if(std::cin.fail())
                return(1);
            removeTabs(darkest_secret);
           
            contact new_contact(first_name, last_name, nickname, phone_number, darkest_secret);
            if (!utils::str_numeric(phone_number))
                std::cout << "Phone is not numeric. contact not added." << std::endl;
            else if (new_contact.isEmpty())
                std::cout << "All fields are mandatory. contact not added." << std::endl;
            else
            {
                phonebook.add_contact(new_contact, &older);
                std::cout << "contact added successfully." << std::endl;
            }
        }

        else if (command_user == "SEARCH")
        {
            phonebook.search_contact();
            if(std::cin.fail())
                return(1);
        }

        else if (command_user == "EXIT")
        {
            std::cout << "Exiting phonebook software. Goodbye!" << std::endl;
            break;
        }
        else
            std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl;
    }
    return 0;
}   
