#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include  "Bureaucrat.hpp"
#include <iostream>


class Bureaucrat;
class Form
{
private:
    const std::string   name;
    bool    sign;
    const  int requiredRangeSign;
    const int requiredRangeExecute;
public:
    Form();
    Form(const Form& other);
    Form& operator=(const Form& other);
    ~Form();

    Form(const std::string   _name, int  _rgsign, int _rexecute);
    
    int getRangeSign()const;
    int getRangeExecute()const;
    std::string  getName();
    bool  getSign() const;

    void    beSigned(Bureaucrat &_bur);
    class GradeTooHighException: public std::exception
    {
        public:
            const char *what() const throw();
    };
    class GradeTooLowException : public  std::exception
    {
        public:
            const char *what() const throw();
    };
};

std::ostream    &operator<<(std::ostream &out, Form &_Form);



#endif
