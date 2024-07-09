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

void    ShrubberyCreationForm::executeAction(const Bureaucrat &_bur) const
{
     if (this->getSign() == false)
        throw FormNotSignedException();
    if (getRangeExecute() < _bur.getGrade())
        throw GradeTooLowException();
  
    else
    {
        std::string nameFile;
        nameFile = file + "_shrubbery";
        std::cout << _bur.getName() << " execute " << this->getName ()<<std::endl;
        std::ofstream    valueFile( nameFile.c_str());
        
        valueFile << "       ccee88oo" << std::endl;
        valueFile << " C8O8O8Q8PoOb o8oo" << std::endl;
        valueFile << " dOB69QO8PdUOpugoO9bD" << std::endl;
        valueFile << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
        valueFile << "   6OuU  /p u gcoUodpP" << std::endl;
        valueFile << "      \\\\//  /douUP" << std::endl;
        valueFile << "        \\\\////" << std::endl;
        valueFile << "         |||/\\" << std::endl;
        valueFile << "         |||\\/" << std::endl;
        valueFile << "         |||||" << std::endl;
        valueFile << "   .....//||||\\...." << std::endl;
        valueFile.close();

    }
}