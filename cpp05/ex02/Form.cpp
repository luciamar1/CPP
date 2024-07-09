#include  "Form.hpp"
#include  "Bureaucrat.hpp"



AForm::AForm(const std::string   _name, int  _rsign, int _rexecute): name(_name),   requiredRangeSign (_rsign),   requiredRangeExecute (_rexecute)
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

AForm::~AForm()
{
}

int AForm::getRangeSign() const
{
    return(requiredRangeSign);
}

int AForm::getRangeExecute() const
{
    return(requiredRangeExecute);
}

 std::string  AForm::getName() const
 {
    return(name);
 }
 
 bool   AForm::getSign() const
 {
    return(sign);
 }


 const char* AForm::GradeTooHighException::what() const throw() 
 {
    return "Grade too high";
}

const char* AForm::GradeTooLowException::what() const throw() 
{
    return "Grade too low";
}



void    AForm::beSigned(Bureaucrat   &_bur)
{
    if (requiredRangeSign < _bur.getGrade())
        throw GradeTooLowException();
    else
    {
        sign = true;
    }
}



std::ostream    &operator<<(std::ostream &out, AForm &_Aform)
{
    // out << "AForm: " << _Aform.getName() << ", Signed: " << (_Aform.getSign() ? "Yes" : "No")
    //     << ", Required Grade to Sign: " << _Aform.getRangeSign()
    //     << ", Required Grade to Execute: " << _Aform.getRangeExecute();
    out << _Aform.getName() << ", required grade to SIGN: " << _Aform.getRangeSign() << ", required grade to EXECUTE: " << _Aform.getRangeExecute() << ",  ¿FIRMED?: "<< _Aform.getSign() << std::endl;
    return(out);
}