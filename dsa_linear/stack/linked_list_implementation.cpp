#include<iostream>
using namespace std;
struct Mystack{
    int data;
    Mystack* next;
    int capacity;
    Mystack(int n){
        capacity=n;
        //data=x;
        next=NULL;
    }

};