#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include  "Bureaucrat.hpp"
#include <iostream>
#include <cstdlib> 


class Bureaucrat;

class AForm
{
private:
    const std::string   name;
    bool    sign;
    const  int requiredRangeSign;
    const int requiredRangeExecute;
public:
    AForm();
    AForm(const AForm& other);
    AForm(const std::string   _name, int  _rgsign, int _rexecute);
    AForm& operator=(const AForm& other);
    virtual ~AForm();

    int getRangeSign() const;
    int getRangeExecute() const;
    std::string  getName() const;
    bool  getSign() const;

    void    beSigned(Bureaucrat &_bur);

    class FormWasSignedException:public std::exception
    {
         public:
            const char *what() const throw();
    };

    class FormNotSignedException:public std::exception
    {
         public:
            const char *what() const throw();
    };

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
    virtual void    executeAction(const Bureaucrat &_bur) const = 0;
};

std::ostream    &operator<<(std::ostream &out, AForm &_AForm);



#endif
