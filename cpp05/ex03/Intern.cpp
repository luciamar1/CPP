#include "Intern.hpp"
#include "Form.hpp"


Intern::Intern()
: Bureaucrat( )
{}

Intern::Intern(const Intern &other)
{
    (void)other;
}

Intern::~Intern()
{ }
AForm *Intern::makeForm(const std::string nameForm, const std::string target) 
{
     AForm  *format;
    if (nameForm == "ShrubberyCreationForm" )
       format = new ShrubberyCreationForm(target) ;
    else if (nameForm == "RobotomyRequestForm" )
       format = new RobotomyRequestForm(target) ;
    else if (nameForm == "PresidentialPardonForm" )
       format = new PresidentialPardonForm(target) ;
    else
    {
        format = NULL;
        std::cerr << "Error: Form " << nameForm << " does not exist." << std::endl;
    }
    return format;
}