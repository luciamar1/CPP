#include "ShrubberyCreationForm.hpp"
#include <string>
ShrubberyCreationForm::ShrubberyCreationForm()
: AForm("ShrubberyCreationForm", 145, 137 )
{}
ShrubberyCreationForm::ShrubberyCreationForm(std::string _file)
: AForm("ShrubberyCreationForm", 145, 137 ), file(_file)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{ }

void    ShrubberyCreationForm::executeAction(Bureaucrat &_bur) const
{
    if (getRangeExecute() < _bur.getGrade())
        throw GradeTooLowException();
  
    else
    {
        std::ofstream file(file + "_shrubbery");
        file << "       ccee88oo" << std::endl;
        file << " C8O8O8Q8PoOb o8oo" << std::endl;
        file << " dOB69QO8PdUOpugoO9bD" << std::endl;
        file << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
        file << "   6OuU  /p u gcoUodpP" << std::endl;
        file << "      \\\\//  /douUP" << std::endl;
        file << "        \\\\////" << std::endl;
        file << "         |||/\\" << std::endl;
        file << "         |||\\/" << std::endl;
        file << "         |||||" << std::endl;
        file << "   .....//||||\\...." << std::endl;
        file.close();

    }
}