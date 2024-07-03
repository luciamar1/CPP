#include  "Form.hpp"
#include  "Bureaucrat.hpp"



Form::Form(const std::string   _name, int  _rsign, int _rexecute): name(_name),   requiredRangeSign (_rsign),   requiredRangeExecute (_rexecute)
{
    sign = false;
    if(_rsign < 1)
        throw GradeTooHighException();
    if(_rsign >150)
        throw GradeTooLowException();
  

    if(_rexecute < 1)
        throw GradeTooHighException();
    if(_rexecute >150)
        throw GradeTooLowException();
  
}

Form::~Form()
{
}

int Form::getRangeSign()
{
    return(requiredRangeSign);
}

int Form::getRangeExecute()
{
    return(requiredRangeExecute);
}

 std::string  Form::getName()
 {
    return(name);
 }
 
 bool   Form::getSign()
 {
    return(sign);
 }


 const char* Form::GradeTooHighException::what() const throw() 
 {
    return "Grade too high";
}

const char* Form::GradeTooLowException::what() const throw() 
{
    return "Grade too low";
}



void    Form::beSigned(Bureaucrat   &_bur)
{
    if (requiredRangeSign < _bur.getGrade())
        throw GradeTooLowException();
    else
    {
        sign = true;
    }
}

std::ostream    &operator<<(std::ostream &out, Form &_form)
{
    out << _form.getName() << ", form grade SIGN " << _form.getRangeSign() << ", form grade EXECUTE " << _form.getRangeExecute() << " ¿FIRMED?: "<< _form.getSign() << std::endl;
    return(out);
}