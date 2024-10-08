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
            result.append(str2);
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
    {
        std::cerr << "Error: missing params "  << std::endl;
        return(0);
    }

    std::ifstream file_0(argv[1]);
    if (!file_0.is_open())
    {
        std::cerr << "Error:  Unable to open file "  <<  argv[1] << std::endl;
        return(1);
    }

    std::string str_file = FileIntoStr(file_0);
    file_0.close();
    
    str_file = replaceFile(str_file, argv[2], argv[3]);
    

    std::string output_filename = std::string(argv[1]) +".replace";
    std::ofstream return_file(output_filename.c_str());
    if (!return_file.is_open())
    {
        std::cerr << "Error: file could not be created " << "return_file" << std::endl;
        return (1);
    }
    return_file << str_file;
    return_file.close();
    std::cout << "Successfully created " << output_filename << std::endl; 
    return(0);
}
