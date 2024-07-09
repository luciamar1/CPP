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

void    RobotomyRequestForm::executeAction(Bureaucrat &_bur) const
{
    if(getRangeExecute() < _bur.getGrade())
         throw GradeTooLowException();
    std::cout << "Drilling noises..." << std::endl;
    if(std::rand() % 2 == 0)
        std::cout << getName() << " has been robotomized successfully" << std::endl;
    else
        std::cout << "The robotomy failed" << std::endl;
}