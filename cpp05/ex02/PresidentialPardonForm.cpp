#include "PresidentialPardonForm.hpp"
#include <string>
PresidentialPardonForm::PresidentialPardonForm()
: AForm("PresidentialPardonForm", 25, 5 )
{}
PresidentialPardonForm::PresidentialPardonForm(std::string _file)
: AForm("PresidentialPardonForm",  25, 5), file(_file)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{ }

void    PresidentialPardonForm::executeAction(const Bureaucrat &_bur) const
{
    if(getRangeExecute() < _bur.getGrade())
         throw GradeTooLowException();
    std::cout << "Drilling noises..." << std::endl;
     std::cout << getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}