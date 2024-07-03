#include  "Bureaucrat.hpp"
Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string   _name, int _grade): name(_name)
{
    if(_grade < 1)
        throw GradeTooHighException();
    if(_grade >150)
        throw GradeTooLowException();
    range  = _grade;
}

Bureaucrat::~Bureaucrat()
{
}

int Bureaucrat::getGrade()
{
    return(range);
}

 void Bureaucrat::setGrade(int grade)
 {
    if(grade > 150 || grade < 1 )
        std::cout << "invalid grade" << std::endl;
    else
        range = grade;
 }

 std::string  Bureaucrat::getName()
 {
    return(name);
 }

 const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too low";
}


// const char *Bureaucrat::GradeTooHighException:
// {
//     return "Grade Too High" ;
// }
// const char *Bureaucrat::GradeTooLowException()
// {
//     return "Grade Too Low" ;
// }
void   Bureaucrat::incrementGrade()
{
    int grade = range - 1;
    if(grade < 1 )
        throw GradeTooHighException();
    else
        range = grade;
}

void   Bureaucrat::decrementGrade()
{
    int grade = range  +1;
    if(grade > 150 )
        throw GradeTooLowException();
    else
        range = grade;
}

std::ostream    &operator<<(std::ostream &out, Bureaucrat &_bureaucrat)
{
    out << _bureaucrat.getName() << ", bureaucrat grade " << _bureaucrat.getGrade() << std::endl;
    return(out);
}