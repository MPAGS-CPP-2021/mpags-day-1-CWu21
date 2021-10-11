#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
    const std::vector<std::string> cmdLineArgs { argv, argv+argc };

    for (size_t i{1}; i<cmdLineArgs.size() ;i++)
    {
        if ((cmdLineArgs[i] == "-h")||(cmdLineArgs[i] == "--help"))
        {
            std::cout << "help requested" << std::endl;
        }
        else if(cmdLineArgs[i] == "-i"||cmdLineArgs[i] == "-o")
        {
            i++;
            std::string filename;
            filename = cmdLineArgs[i];
            std::cout << filename << std::endl;
        }
        else if (cmdLineArgs[i] == "--version")
        {
           std::cout << __cplusplus << std::endl;
        }
        else 
        {
            std::cout << cmdLineArgs[i] << std::endl;
        }
        
    }

}
