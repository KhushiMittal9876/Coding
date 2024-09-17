#include<iostream>
using namespace std;
//array implementation efficient way
struct queue{
    int *arr;
    int cap;
    int front;
    int size;
    queue(int c){
        cap=c;
        arr=new int[cap];
        front=0;
        size=0;
    }
    bool isFull(){
        return(cap==size);
    }
    bool isEmpty(){
       return(size==0); 
    }
    int getRear(){
        if(isEmpty) return -1;
        return (front+size-1)%cap;
    }
    int getfront(){
        if(isEmpty) return -1;
        return (front)%cap;
    }
    void enqueue(int x){
        if(isFull()) return;
        int rear=getRear();
        rear=(rear+1)%cap;
        arr[rear]=x;
        size++;

    }
    void dequeue(){
        if(isEmpty())return;
        front=(front+1)%cap;
        size++;
    }   
    int size(){
        return (size);
    }
    
};

//linked list 
struct Node{
        int data;
        Node* next;
        Node(int x){
            data=x;
            next=NULL;
        }
};
struct Myqueue{
    int cap;
    Node* head;
    Myqueue(){
        head=NULL;
        cap=0;
    }
    void enque(int x){
        Node* temp=new Node(x);
        temp->next=head;
        temp=head

    }
    
}
int main(){

}