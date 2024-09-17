#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }

};
int c=0;//global value of c
/*
1 print elements
2 search any key
3 insert element at begin
4 insert element at end
5 delete first element
6 delete last element
7 insert such that result linked list is sorted
8 count number of nodes
9 to get middle element 
10 nth node from end
11 reverse alinked list through recursion

*/
void print(Node*head){
    if(head==NULL)
    return;
    cout<<head->data<<endl;
    print(head->next);
}
int count(Node*head){
    if(head==NULL)
    return 0;
    else{
        return 1+count(head->next);
    }
}
int count2(Node* head){
    static int c=0;//so that c remains 0 and it only increase or decrease but it can not be reinitialise.i.e initiallisation can be done only one time
    if(head==NULL)
    return 0;
    else{
        c++;
        count2(head->next);
        return c;

    }
}

int count3(Node* head){
    if(head==NULL)
    return 0;
    else{
        c++;//function ek global variable ko call kar rha jo pehle 0 diya h abb voh change hota rahega
        count3(head->next);
        return c;

    }
}


int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next= new Node(30);
    head->next->next->next=new Node(40);
    print(head);
    int c=0;
    int numberofnode=count3(head);
    cout<<"numberofnode"<<numberofnode<<"\n";



}