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
void printlist(Node* head){
    if(head==NULL) return;
    cout<<head->data<<" ";//for corner case when circular ll has only one element i.e. head in it as now for loop will not be executed as p->next==head
    for(Node* p=head->next;p!=head;p=p->next){//p=p->next as we have to print next element of linked list till it does not reaches head
        cout<<p->data<<" ";
    }
}

void printlist2(Node* head){
    if(head==NULL) return;
    Node* p=head;
    do{
        cout<<p->data<<"->";
        p=p->next;
    }while(p!=head);//inspite of any condition do while loop always executes one time ,it is impt to use here as for one element it will run once and then p==head so don't run again but for other case it will run normally
}
Node* insert_begin1(Node* head,int x){
    //o(n): time
    Node* temp=new Node(x);
    if(head==NULL){
        temp->next=temp;//impt to make that node a circular linked list
        return temp;
    }Node* curr=head;
    while(curr->next!=head) curr=curr->next;
    curr->next=temp;
    temp->next=head;
    return temp;
}
Node* insert_begin2(Node* head,int x){
    //o(1): time
    Node* temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    else{
        // inserting temp node between head and head->next
        temp->next=head->next;
        head->next=temp;

        //swapping data of head and temp node
        int t=head->data;
        head->data=temp->data;
        temp->data=t;

        return head;// this says we had inserted new node in begin
    }
}
Node* insert_end1(Node* head,int x){
    Node* temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }else{
        Node* curr=head;
        while(curr->next!=head) curr=curr->next;
        curr->next=temp;
        temp->next=head;
        return head;
    }
}

Node* insert_end2(Node* head,int x){
    //o(1): time
    Node* temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    else{
        // inserting temp node between head and head->next
        temp->next=head->next;
        head->next=temp;

        //swapping data of head and temp node
        int t=head->data;
        head->data=temp->data;
        temp->data=t;

        return temp;// this says we had inserted new node in end as temp then head is there 
    }
}

Node* delete_head1(Node* head){
    //o(n): time
    if(head==NULL) return NULL;
    if(head->next==head){
        delete head;
        return NULL;
    }
    else{
        Node* curr=head;
        while(curr->next!=head){
            curr=curr->next;
        }
        curr->next=head->next;
        delete head;
        return curr->next;
    } 
}
Node* delete_head2(Node* head){
    if(head==NULL) return NULL;
    if(head->next==head){
        delete head;
        return NULL;
    }
    else{
        Node* temp=head->next->next;
        int t=head->data;
        head->data=head->next->data;
        head->next->data=t;
        delete head->next;
        head->next=temp;
        return head;
    }
}
Node* delete_Knode(Node* head,int k){
    if(head==NULL) return NULL;
    if(k==1) return delete_head1(head);
     else{
        Node*curr=head;
        int count=2;
        while(count<k) {
            curr=curr->next;
            count++;
    }Node* temp=curr->next->next;
    delete curr->next;
    curr->next=temp;
    return head;
}
int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=head;//making it a circular linked list
    printlist2(head);
    return 0;

}