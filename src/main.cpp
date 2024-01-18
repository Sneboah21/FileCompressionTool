#include <iostream>
#include "FileHandler.h"
#include <unordered_map>
#include <string>
#include "HuffmanTree.h"
#include <queue>
#include "compression.h"


int main()
{
    cout << "Enter '0' if you want to compress your file or enter '1' if you want to decompress. " << std::endl;
    // Ask whether the user wants to either compress or decompress
    int choice;
    cin >> choice;
    // According to user's choice, ask for the file path
    std::cout << "Enter the file path: \n";
    std::string filePath;
    std::cin >> filePath;
    std::string file = FileHandler::readFile(filePath);

    // Then according to user's choice, either compress or decompress the file
    if(choice == 0) {
        // Compress the file
        Compression::compressFile(filePath, "");
    } else {
        // Decompress the file
    }

}

