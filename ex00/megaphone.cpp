#include <iostream>

static void print_upper(const char *str)
{
    std::string aux(str);
    
    for(std::string::iterator counter = aux.begin();counter != aux.end(); counter++)
    {
        std::cout << (char)std::toupper(*counter);
    }
}

int main(int argc, char **argv)
{
    if (argc <= 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (int counter = 1; argv[counter]; counter++)
        {
            print_upper(argv[counter]);
            if (argv[counter + 1])
              std::cout << ' ';
        }
    }
    std::cout << std::endl;
    return(0);
}