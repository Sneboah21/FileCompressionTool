#include <iostream>
#include <vector>
#include "Min_Heap.h"
#include <optional>


Node::Node(): character('\0'), freq(0), left(nullptr), right(nullptr)
{

}

Node::Node(char ch, int f): character(ch), freq(f), left(nullptr), right(nullptr)
{

}

void MinHeap::heapify(int i)
{
    int leftchild = 2*i+1;
    int rightchild = 2*i+2;
    int smallest = i;

    if(leftchild < heap.size() && heap[leftchild].freq < heap[i].freq)
    {
        smallest = leftchild;
    }
    if(rightchild < heap.size() && heap[rightchild].freq < heap[i].freq)
    {
        smallest = rightchild;
    }
    if(smallest != i)
    {
        std::swap(heap[i], heap[smallest]);
        heapify(smallest);
    }

}

MinHeap::MinHeap(std::unordered_map<char, int> M): size(M.size())
{
    for(auto x : M)
    {
        heap.push_back(Node(x.first, x.second));
    }
    
    int n = heap.size()-1;
    for(int j=(n-1)/2; j>=0;j--)
    {
        heapify(j);
    }

}

void MinHeap::insert_minheap(char value, int freq)
{
    Node element(value, freq);
    heap.push_back(element);

    int index = heap.size()-1;

    while(index > 0 && heap[(index-1)/2].freq > heap[index].freq)
    {
        std::swap(heap[index], heap[(index-1)/2]);
        index = (index-1)/2;
    }
}
void MinHeap::pop()
{
    int removeindex = 0;
    Node min;
    if(removeindex < heap.size())
    {
        // heap.erase(heap.begin() + removeindex);
        min = heap[0];
        heap[0] = heap[heap.size()-1];
        heapify(removeindex);
    }
    else
    std::cout << "Invalid index.\n";
}
 
std::optional<Node> MinHeap::top()
{
    if(heap.size() != 0)
    {
        int topindex = 0;

        return heap[topindex];
    }
    else
    return std::nullopt;
}

int MinHeap::size()
{
    int size = heap.size();
    return size;

}





