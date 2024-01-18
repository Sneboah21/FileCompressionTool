#include <iostream>
#include "compression.h"
#include <fstream>
#include "FileHandler.cpp"
#include "Min_Heap.h"
#include <vector>


void Compression::compressFile(const std::string& inputFile, const std::string& outputFile)
{
    // Read file into string
    std::string file = FileHandler::readFile(inputFile);

    // Create unordered_map of characters and their frequencies
    std::unordered_map<char, int> map;
    for(int i=0; i<file.size(); i++)
    {
        map[file[i]]++;
    }

    // Create MinHeap
    MinHeap* minhp = new MinHeap(map);


    // Perform compression
    
    while(minhp->size() != 1)
    {
        std::optional<Node> min1 = minhp->top();
        minhp->pop();
        std::optional<Node> min2 = minhp->top();
        minhp->pop();
        Node* n = new Node(,(min1.freq+min2.freq));




    }










}

string Compression::encodeHuffman(const string& input)
{
    
}



