#include <iostream>
#include <string>


static void print_upper(const char *str)
{
    std::string aux(str);
    for(unsigned long counter = 0; str[counter]; counter++)
        std::cout << (char)std::toupper(aux[counter]);
}

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
        for (int counter = 1; counter < argc; counter ++)
            print_upper(argv[counter]);
    std::cout << std::endl;
    return(0);
}
