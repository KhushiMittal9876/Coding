#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int d){
        data=d;
        prev=NULL;
        next=NULL;
    }
};
Node* insert_begin(Node* head,int x){
    Node* temp=new Node(x);
    if(head==NULL) return temp;
    else {
        temp->next=head;
        head->prev=temp;
        return temp;
    }
    
}

Node* insert_end(Node* head,int x){
    Node* temp=new Node(x);
    if(head==NULL) return temp;
    Node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }curr->next=temp;
    temp->prev=curr;
    return head;

}
Node* reverse(Node* head){
    Node* curr=head;
    Node* temp;
    if(curr==NULL) return NULL;
    if(curr->next==NULL) return curr;
    
    while(curr->next!=NULL){
        temp=curr->next;
        curr->next=curr->prev;
        curr->prev=temp; 
        curr=curr->prev;//to change the iteration in while loop  
    }return temp->prev;//as it is rverse 
}
Node* delete_first(Node* head){
    if(head==NULL) return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node* temp=head;
    head=head->next;
    head->prev=NULL;
    delete temp;
    return head;
}

Node* delete_last(Node* head){
    if(head==NULL) return NULL;
    if(head->next==NULL){
        delete head;//impt to deallocate memory in c++  
        return NULL;
    }
    Node* curr=head;
    while(curr->next!=NULL){//* impt point curr->next only
        curr=curr->next;
    }
    curr->prev->next=NULL;//* impt step as we have prev also here, here we actually get hold on last element 
    delete curr;//impt to deallocate memory in c++  
    return head;
}
int main(){
    Node* head=new Node(10);
    Node* temp1=new Node(20);
    Node* temp2=new Node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    

}

