#include"JSArray.h"
JSQueue::JSQueue() : start(0), end(0), length(0){
    // Initialize start to 0 and arr_size to 0 head to nullptr tail to pullptr
    
}
JSQueue::JSQueue(int length) : start(0), end(length), length(length){
    arr.resize(length, 0);
}
void JSQueue::push(int value){
    
    this->arr.push_back(value);
    
    this->end+=1;
    this->length+=1;
}

int JSQueue::operator[](size_t idx){
    if(idx>=this->length){
        throw("Index out of range");
    }
    return arr[idx+start];
}
JSQueue& JSQueue::operator=(vector<int>&arr){
    this->arr=arr;
    this->length=arr.size();
    this->end=arr.size();
    this->start=0;
    return *this;
}
int JSQueue::shift(){
    if(this->start==this->end){
        throw std::runtime_error("No values in the queue");
    }
    int old_val=arr[this->start];
    
    
    this->start+=1;
    if(start>20000&&start>end/2){
        arr.erase(arr.begin(), arr.begin()+start);
        end-=start;
        start=0;
        
    }
    
    this->length-=1;
    
    return old_val;
}
int JSQueue::pop(){
    if(this->start==this->end){
        throw std::runtime_error("No values in the queue");
    }
    int old_val=arr[this->end];
    arr.pop_back();
    this->length-=1;
    this->end-=1;
    return old_val;
}

void JSQueue::fill(int value){
    std::fill(arr.begin(), arr.end(), value);
}