#ifndef JSARRAY_H
#define JSARRAY_H
#include<iostream>
#include<vector>
using namespace std;


class JSQueue{
private:
    vector<int>arr;
    // LinkedList* head;
    // LinkedList*tail;
    size_t start;
    size_t end;
public:
    size_t length;
    JSQueue();
    JSQueue(int length);
    void push(int value);
    int shift();
    int pop();
    int operator[](size_t idx);
    JSQueue& operator=(vector<int>&arr);
    void fill(int value);
};
#endif