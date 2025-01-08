#include "PresidentialPardonForm.hpp"
#include <string>
PresidentialPardonForm::PresidentialPardonForm()
: AForm("PresidentialPardonForm", 25, 5 ), file("") 
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string& _file)
    : AForm("PresidentialPardonForm", 25, 5), file(_file) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
    : AForm(other), file(other.file) {}

PresidentialPardonForm::~PresidentialPardonForm()
{ }

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    if (this != &other) {
        AForm::operator=(other); // Copiar los miembros de AForm
        file = other.file;
    }
    return *this;
}

void    PresidentialPardonForm::executeAction(const Bureaucrat &_bur) const
{
      if (this->getSign() == false)
        throw FormNotSignedException();
    if(getRangeExecute() < _bur.getGrade())
         throw GradeTooLowException();
    
    std::cout << "Drilling noises..." << std::endl;
     std::cout << getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
     std::cout << _bur.getName() << " execute " << this->getName ()<<std::endl;
}