#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include  "Form.hpp"


class AForm;

class Bureaucrat
{
private:
    const std::string   name;
    int range;
public:
    Bureaucrat();
    Bureaucrat(const std::string   _name, int _grade);
    ~Bureaucrat();

    int getGrade() const;
    void setGrade(int grade);
    std::string  getName() const;
    
    void    incrementGrade();
    void    decrementGrade();
    
    void signForm(AForm &_form);
    void    executeForm(AForm &_form) const;
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

std::ostream    &operator<<(std::ostream &out, Bureaucrat &_bureaucrat);



#endif
