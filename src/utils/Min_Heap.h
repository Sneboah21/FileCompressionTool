#pragma once
#include <vector> 
#include <optional>
#include <unordered_map>

class Node
{
    public:
    char character;
    int freq;
    Node *left, *right;
    Node();
    Node(char ch, int f);


};

class MinHeap
{
    private:
    int size;
    std::vector<Node> heap;
    void heapify(int i);

    public:
    MinHeap(std::unordered_map<char, int> M);
    void insert_minheap(char value, int freq);
    void pop();
    std::optional<Node> top();
    int size();


};