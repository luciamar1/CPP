#ifndef contact_HPP
#define contact_HPP

#include <string>

class contact {
//friend class phonebook;
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    contact();
    contact(const std::string& first_name, const std::string& last_name, const std::string& nickname,
            const std::string& phone_number, const std::string& darkest_secret);
    bool isEmpty() const;
    void displayInfo() const;
    std::string displayData(const std::string& data) const ;
};

#endif
