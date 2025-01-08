#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include  "Form.hpp"


class Form;
class Bureaucrat
{
private:
    const std::string   name;
    int range;
public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    ~Bureaucrat();

    Bureaucrat(const std::string   _name, int _grade);

    int getGrade();
    void setGrade(int grade);
    std::string  getName();
    
    void    incrementGrade();
    void    decrementGrade();
    
    void signForm(Form &_form);
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
