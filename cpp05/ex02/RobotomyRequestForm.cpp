#include "RobotomyRequestForm.hpp"
#include <string>
RobotomyRequestForm::RobotomyRequestForm()
: AForm("RobotomyRequestForm", 72, 45 )
{}
RobotomyRequestForm::RobotomyRequestForm(std::string _file)
: AForm("RobotomyRequestForm",  72, 45), file(_file)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{ }

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