#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Bureaucrat alice("Alice", 1);
        Bureaucrat bob("Bob", 150);
        Bureaucrat charlie("Charlie", 50);

        ShrubberyCreationForm shrubbery("home");
        RobotomyRequestForm robotomy("robot");
        PresidentialPardonForm pardon("criminal");

        std::cout << alice << std::endl;
        std::cout << bob << std::endl;
        std::cout << charlie << std::endl;

        // Try to sign and execute ShrubberyCreationForm
        try {
            charlie.signForm(shrubbery);
            charlie.executeForm(shrubbery);
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }

        // Try to sign and execute RobotomyRequestForm
        try {
            charlie.signForm(robotomy);
            charlie.executeForm(robotomy);
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }

        // Try to sign and execute PresidentialPardonForm
        try {
            alice.signForm(pardon);
            alice.executeForm(pardon);
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }

        // Fail to sign PresidentialPardonForm with low grade bureaucrat
        try {
            bob.signForm(pardon);
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }

        // Fail to execute RobotomyRequestForm with low grade bureaucrat
        try {
            bob.executeForm(robotomy);
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }

    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}