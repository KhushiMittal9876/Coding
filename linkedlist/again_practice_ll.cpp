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
void printme(Node* head){
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<endl;
        curr=curr->next;
    }

}
void printmeR(Node* head){
    if(head==NULL)
    return;
    else{
        cout<<head->data<<endl;
        printmeR(head->next);
    }

}
Node* insert_begin(Node* head,int x){//time:o(1)
    Node* temp=new Node(x);//we only had intger value , now we make it as a node
    temp->next=head;//making new node as head of linked list
    return temp;
//this function returns new head of linked list only locally i.e this temp must be assigned back to the head variable for main function
}
Node* insert_end(Node* head,int x){
    Node* temp=new Node(x);
    if(head==NULL){
        return temp;
    }
    Node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;

}
Node* delete_firstNode(Node* head){
    if(head==NULL)
    return NULL;
    else {
        Node *temp=head->next;//as head is node type and its next is also a node type that is why we store head-.next as a node and not as a pointer
        delete head;
        return temp;
    }

}
Node* delete_lastNode(Node* head){
    if(head==NULL) 
    return NULL;
    if(head->next==NULL)
    {
        delete head;
    return NULL;
    }
    else {
        Node* curr=head;
        while(curr->next->next!=NULL){
            curr=curr->next;
        }
        delete curr->next;
        curr->next=NULL;
        return head;
    }
}
Node* insert_at_position(Node* head,int pos,int x){
    Node* curr=head;
    int size=0;
    while(curr!=NULL){
        size++;
        curr=curr->next;
    }if(pos>(size+1)) return head;
    else if(pos==1){
            Node* temp=new Node(x);
            temp->next=head;
            return temp;
            
        }
        else if(pos=size+1){
            Node* temp=new Node(x);
            if(head==NULL) return temp;
            Node* curr=head;
            while(curr->next!=NULL){
                curr=curr->next;
            }
            curr->next=temp;
            return head;
        }
        else {
            Node* temp=new Node(x);
            curr=head;
            for(int i=1;i<=pos-2;i++){
                curr=curr->next;
            }Node*temp1=curr->next;
            curr->next=temp;
            temp->next=temp1;
            return head;
        }
    }
int search(Node* head,int x){
    Node* curr=head;
    int size=0;
    while(curr!=NULL){
        size++;
        if((curr->data)==x) {
            return size;
        }curr=curr->next;
    }return -1; 
}
// int search_R(Node* head,int x){
//     if(head==NULL) return -1;
//     else if(head->data==x) return size;
//     else search_R(head->next,x)
// }

int main(){
        Node* head=new Node(10);
        head->next= new Node(20);
        head->next->next=new Node(30);
        printmeR(head);
        return 0;
    }
