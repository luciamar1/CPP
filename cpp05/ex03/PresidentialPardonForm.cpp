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
      if (this->getSign() == false)
        throw FormNotSignedException();
    if(getRangeExecute() < _bur.getGrade())
         throw GradeTooLowException();
    
     std::cout << getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
     std::cout << _bur.getName() << " execute " << this->getName ()<<std::endl;
}