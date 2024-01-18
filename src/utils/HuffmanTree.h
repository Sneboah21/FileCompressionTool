#include <iostream>
#include "Min_Heap.h"
#include <memory>
#include <unordered_map>


class HuffmanTree
{
public: 
    MinHeap* minhp;  //we store the pointer of a MinHeap object
    HuffmanTree(std::unordered_map<char, int> m)
    {
        minhp = new MinHeap(m);
    }
};
