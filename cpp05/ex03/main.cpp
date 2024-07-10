#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main() {
    try {
        Bureaucrat alice("Alice", 1);
        Bureaucrat bob("Bob", 150);
        Bureaucrat charlie("Charlie", 50);

        Intern someRandomIntern;
        AForm *scf = someRandomIntern.makeForm("ShrubberyCreationForm", "home");
        AForm *rrf = someRandomIntern.makeForm("RobotomyRequestForm", "robot");
        AForm *ppf = someRandomIntern.makeForm("PresidentialPardonForm", "criminal");

        std::cout << alice << std::endl;
        std::cout << bob << std::endl;
        std::cout << charlie << std::endl;

        // Try to sign and execute ShrubberyCreationForm
        try {
            charlie.signForm(*scf);
            charlie.executeForm(*scf);
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
        std::cout << "\n" << std::endl;

        // Try to sign and execute RobotomyRequestForm
        try {
            charlie.signForm(*rrf);
            charlie.executeForm(*rrf);
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
        std::cout << "\n" << std::endl;
        // Try to sign and execute PresidentialPardonForm
        try {
            alice.signForm(*ppf);
            alice.executeForm(*ppf);
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
        std::cout << "\n" << std::endl;
        // Fail to sign PresidentialPardonForm with low grade bureaucrat
        try {
            bob.signForm(*ppf);
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
        std::cout << "\n" << std::endl;

        // Fail to execute RobotomyRequestForm with low grade bureaucrat
        try {
            bob.executeForm(*rrf);
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
        std::cout << "\n" << std::endl;
        delete scf;
        delete rrf;
        delete ppf;

    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}