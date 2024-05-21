#include <fstream>
#include <string>
#include <iostream>

std::string FileIntoStr(std::ifstream& file_0)
{
    std::string str_file;
    std::string return_file;
    while(std::getline(file_0, str_file))
    {
        return_file.append(str_file);
        return_file.append("\n");
    }
    std::cout << return_file << std::endl;
    return (return_file);
}


std::string replaceFile(std::string& str_file, const std::string str1, const std::string str2)
{
    std::string result;
    std::string::size_type pos;
    int counter = 0;
    if(str1.empty() || str2.empty())
        return(str_file);
    while(str_file[counter])
    {
        pos = str_file.find(str1, counter);
        if (pos  != std::string::npos)
        {

            result.append(str_file, counter, pos-counter);
            std::cout << "1       " << result << std::endl;
            result.append(str2);
            std::cout << "2        " << result << std::endl;
            counter = pos + str1.length();
        }
        else 
            break;
    }
    result.append(str_file, counter, std::string::npos);
    return(result);
}
int main(int argc, char **argv)
{
    if(argc != 4 )
        return(0);
    else
    {
        std::ifstream file_0(argv[1]);
        if (!file_0.is_open())
            return(1);
        std::string str_file = FileIntoStr(file_0);
        str_file = replaceFile(str_file, argv[2], argv[3]);
        
        std::ofstream return_file("return_file");
        if (!return_file.is_open())
        {
            std::cerr << "Error: no se pudo crear el archivo " << "return_file" << std::endl;
            return (1);
        }
        return_file << str_file;
        return_file.close();
    }
    return(0);
}