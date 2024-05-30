#include "Harl.hpp"

int main()
{
    Harl  harl1;

    //harl1 = Harl();
    std::cout << "comensamos con harl =) " << std::endl;
    harl1.complain("DEBUG");
    harl1.complain("INFO");
    harl1.complain("WARNING");
    harl1.complain("ERROR");
    return(0);
}
