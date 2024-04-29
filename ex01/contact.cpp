#include "app.h"
#include <iostream>
#include <iomanip>

contact::contact(){}


contact::contact(const std::string& first_name, const std::string& last_name, const std::string& nickname,
            const std::string& phone_number, const std::string& darkest_secret)
        : first_name(first_name), last_name(last_name), nickname(nickname),
          phone_number(phone_number), darkest_secret(darkest_secret) 
        {}
    
bool contact::isEmpty() const {
        return first_name.empty() || last_name.empty() || nickname.empty() || phone_number.empty() || darkest_secret.empty();
    }

void contact::displayInfo() const {
        std::cout << "First Name: " << first_name << std::endl;
        std::cout << "Last Name: " << last_name << std::endl;
        std::cout << "Nickname: " << nickname << std::endl;
        std::cout << "Phone Number: " << phone_number << std::endl;
        std::cout << "Darkest Secret: " << darkest_secret << std::endl;
    }

std::string contact::displayData(const std::string& data) const {
  if(data ==  "first name")
    return(first_name);
  if(data ==  "last name")
    return(last_name);
  if(data ==  "nickname")
    return(nickname);
  if(data ==  "phone number")
    return(phone_number);
  if(data ==  "darkest secret")
    return(darkest_secret);
  return("");
}

