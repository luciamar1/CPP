#include <stdlib.h>

#include "phoneboock.hpp"
///// no habria que poner contacts[lastIndex] = *contact; para no igualarlo a la direccion de memoria?

class contact
{
private:
    std::string firstName;       
    std::string lastName;        
    std::string nickname;        
    std::string phoneNumber;     
    std::string darkestSecret; 
public:
    contact(){}
    
    contact(const std::string& firstName, const std::string& lastName, const std::string& nickname,
            const std::string& phoneNumber, const std::string& darkestSecret)
        : firstName(firstName), lastName(lastName), nickname(nickname),
          phoneNumber(phoneNumber), darkestSecret(darkestSecret) {}
    
    
    bool isEmpty() const {
        return firstName.empty() || lastName.empty() || nickname.empty() || phoneNumber.empty() || darkestSecret.empty();
    }

    void displayInfo() const {
        std::cout << "First Name: " << firstName << std::endl;
        std::cout << "Last Name: " << lastName << std::endl;
        std::cout << "Nickname: " << nickname << std::endl;
        std::cout << "Phone Number: " << phoneNumber << std::endl;
        std::cout << "Darkest Secret: " << darkestSecret << std::endl;
    }
};

class phonebook
{
private:
    contact list_contacts[8];
    int     lastindex;

public:
    phonebook(){
        lastIndex = -1;
    }

    void add_contact()
    {
        if (lastindex == 7)
            lastindex = 0;
        else
            lastindex ++;
        list_contacts[lastindex] = contact;
    }

    void search_contact()
    {
        int index;
        if (lastIndex == -1) {
            std::cout << "Phonebook is empty." << std::endl;
            return;
        }

        std::cout << std::setw(10) << std::right << "Index" << " | ";
        std::cout << std::setw(10) << std::right << "First Name" << " | ";
        std::cout << std::setw(10) << std::right << "Last Name" << " | ";
        std::cout << std::setw(10) << std::right << "Nickname" << std::endl;

        for(int counter = 0; conter <= lastindex; counter ++)
        {
            std::cout << std::setw(10) << std::right << counter << " | ";
            std::cout << std::setw(10) << std::right << truncate_string(contacts[i].firstName) << " | ";
            std::cout << std::setw(10) << std::right <<  truncate_string(contacts[i].lastName) << " | ";
            std::cout << std::setw(10) << std::right << truncate_string(contacts[i].nickname) << std::endl;
        }
        std::cout << "Enter the index of the contact to display: ";
        std::cin >> index;

        if (index < 0 || index > lastindex)
            std::cout << "Invalid index." << std::endl;
        else
        {
            std::cout << std::endl << "Contact Information:" << std::endl;
            contacts[index].displayInfo();
        }
    }
    private:
        std::string truncate_string(const std::string& str)const
        {
            if (std::string str.length() <= 10)
                return(str);
            else
            {
                 return str.substr(0, maxWidth - 1) + ".";
            }
        }
};

