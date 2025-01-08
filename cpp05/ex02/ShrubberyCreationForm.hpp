#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <string>
#include <fstream>
#include  "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
private:
    std::string file;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string   _file);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
    ~ShrubberyCreationForm();
    
    void executeAction(const Bureaucrat &_bur) const;
};

#endif