#include "FileHandler.h"
#include <fstream>
#include <iostream>
#include <string>
#include <stdexcept>

std::string FileHandler::readFile(const std::string& filePath)
{
    std::ifstream file(filePath);  //reads the file
    std::string content;
    try
    {
        if(file.is_open())
        {
            content.assign((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
        }
        else
        {
            //std::cerr << "Error:Enable to open the file for reading.\n";
            throw std::runtime_error("Error:Enable to open the file for reading.\n");
        }
    }
    catch (const std::exception& ex)
    {
        std::cerr << "Exception caught: " << ex.what() << std::endl;
    }
    catch(...)
    {
        std::cerr << "Unknown exception caught." << std::endl;
    }

    file.close();
    return content;
}

bool FileHandler::writeFile(const std::string& filePath, const std::string& content)
{
    std::ofstream file(filePath);



    //
}