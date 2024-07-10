#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern : public Bureaucrat
{
public:
    Intern();
    Intern(const Intern &other);
    ~Intern();
   AForm *makeForm(const std::string nameForm, const std::string target) ;
};

#endif 