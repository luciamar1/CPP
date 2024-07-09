#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern : public Bureaucrat
{
public:
    Intern();
    ~Intern();
   Form *makeForm(std::string nameForm, std::string target) const;
};

#endif 