#include "RobotomyRequestForm.hpp"
#include <string>
RobotomyRequestForm::RobotomyRequestForm()
: AForm("RobotomyRequestForm", 72, 45 ), file("")
{}
RobotomyRequestForm::RobotomyRequestForm(std::string _file)
: AForm("RobotomyRequestForm",  72, 45), file(_file)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
    : AForm(other), file(other.file) {}

RobotomyRequestForm::~RobotomyRequestForm()
{ }

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    if (this != &other) {
        AForm::operator=(other); // Copiar los miembros de AForm
        file = other.file;
    }
    return *this;
}

void    RobotomyRequestForm::executeAction(const Bureaucrat &_bur) const
{
    if (this->getSign() == false)
        throw FormNotSignedException();
    if(getRangeExecute() < _bur.getGrade())
         throw GradeTooLowException();
    std::cout << "Drilling noises..." << std::endl;
    std::cout << _bur.getName() << " execute " << this->getName ()<<std::endl;
    if(std::rand() % 2 == 0)
        std::cout << getName() << " has been robotomized successfully" << std::endl;
    else
        std::cout << "The robotomy failed" << std::endl;
}