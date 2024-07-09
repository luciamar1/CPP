#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <string>
#include <fstream>
#include  "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
private:
    std::string file;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string   _file);
    ~RobotomyRequestForm();
    void executeAction(const Bureaucrat &_bur) const;
};

#endif