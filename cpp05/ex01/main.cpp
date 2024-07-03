#include "Bureaucrat.hpp"
#include "Form.hpp"
int main() {
    try {
        Bureaucrat bureaucrat("John", 5);
        Form form("Tax Form", 90, 20);

        std::cout << form << std::endl;

        bureaucrat.signForm(form);

        std::cout << form << std::endl;
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
