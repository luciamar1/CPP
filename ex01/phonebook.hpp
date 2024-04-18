#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"


class phonebook
{
private:
    contact list_contacts[8];
    int     last_index;

public:
    phonebook();

    void add_contact(const contact& contact);

    void search_contact();
    
private:
    std::string truncate_string(const std::string& str)const;
};


#endif