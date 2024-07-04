#include "RobotomyRequestForm.hpp"
#include <string>
RobotomyRequestForm::RobotomyRequestForm()
: AForm("RobotomyRequestForm", 145, 137 )
{}
RobotomyRequestForm::RobotomyRequestForm(std::string _file)
: AForm("RobotomyRequestForm", 72, 45 ), file(_file)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{ }

void    RobotomyRequestForm::executeAction() const
{
    std::cout << "Drilling noises..." << std::endl;
    
    
    
}