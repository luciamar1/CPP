#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include  "Bureaucrat.hpp"
#include <iostream>
class Form
{
private:
    const std::string   name;
    bool    sign;
    const  int requiredRangeSign;
    const int requiredRangeExecute;
public:
    Form();
    Form(const std::string   _name, int  _rgsign, int _rexecute);
    ~Form();
    int getRangeSign();
    int getRangeExecute();
    std::string  getName();
    bool  getSign();

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
