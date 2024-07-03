#include "Bureaucrat.hpp"

int main() 
{
    try 
    {
        Bureaucrat b1("Alice", 1);
        Bureaucrat b2("Bob", 150);

        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;

        b1.incrementGrade(); // Should throw an exception
    } 
    catch(const Bureaucrat::GradeTooHighException &e )
    {
        std::cerr << e.what() << '\n';
    }
     catch(const Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what() << '\n';
    }
    catch (std::exception &e) 
    {
        std::cerr << e.what() << std::endl;
    }

    
    

    try 
    {
        Bureaucrat b3("Charlie", 151); // Should throw an exception
         std::cout << b3 << std::endl;
    } 
    catch (std::exception &e) 
    {
        std::cerr << e.what() << std::endl;
    }
    
    
    try 
    {
        Bureaucrat b4("Dave", 0); // Should throw an exception
    } 
    catch (std::exception &e) 
    {
        std::cerr << e.what() << std::endl;
    }
    
    try 
    {
        Bureaucrat b5("Eve", 75);
        std::cout << b5 << std::endl;

        b5.incrementGrade();
        std::cout << b5 << std::endl;

        b5.decrementGrade();
        b5.decrementGrade();
        std::cout << b5 << std::endl;
    } 
    catch (std::exception &e) 
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}

