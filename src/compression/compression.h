#pragma once
#include <string>
#include <unordered_map>

using namespace std;

class Compression
{
    public:
    static void compressFile(const string& inputFile, const string& outputFile);


    private:
    static string encodeHuffman(const string& input);
};