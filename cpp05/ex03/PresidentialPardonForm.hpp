#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <string>
#include <fstream>
#include  "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
private:
    std::string file;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string   _file);
    ~PresidentialPardonForm();
    void executeAction(const Bureaucrat &_bur) const;
};

#endif