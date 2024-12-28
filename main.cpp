#include"JSArray.h"
#include<iostream>
#include<vector>
using namespace std;
int main(){
    JSQueue q;
    q.push(3);
    q.push(5);
    q.push(8);
    q.push(13);
    q.push(18);
    q.push(21);
    q.push(9);
    q.push(11);
    cout<<"Second Element: "<<q[1]<<endl;
    cout<<"head value is"<<q.shift()<<endl;
    cout<<"Second Element: "<<q[1]<<endl;
    q.shift();
    q.shift();
    q.shift();
    q.shift();
    q.shift();
    cout<<"Head Element of queue is: "<<q[0]<<endl;
    cout<<"Last Element of queue is: "<<q[q.length-1]<<endl;
    cout<<"Element being pop out is: "<<q.pop()<<endl;
    cout<<"Last Element of queue is: "<<q[q.length-1]<<endl;
    JSQueue q2;
    vector<int>arr={1, 3, 5, 7, 9};
    q2=arr;
    cout<<"q2 size is"<<q2.length<<endl;
    JSQueue arr3(10);
    arr3.fill(-1);
    cout<<"Printing arr3 values"<<endl;
    for(size_t i=0; i<arr3.length; i++){
        cout<<arr3[i]<<"\t";
    }
    cout<<endl;
    return 0;
}