#include <iostream>
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
    while(curr->next!=NULL){
        cout<<curr->data<<"->";
        curr=curr->next;
    }cout<<curr->data;
}
Node* insert_sorted(Node* head,int x){
    Node* temp=new Node(x);
    if(head==NULL) {
        return temp;
    }
    if((temp->data)<=(head->data)) {
            temp->next=head;
            return temp;
     }
    Node* curr=head;
    Node* store=head;
    while(curr->next!=NULL){
        if((temp->data)<(curr->next->data)){
            store=curr->next;
            curr->next=temp;
            temp->next=store;
            return head;
        }
        else curr=curr->next;
    }curr->next=temp;
    return head;
}
int middle_of_linkedlist1(Node* head){
    if(head==NULL) return 0;
    if(head->next==NULL) return head->data;
    else{
        int count=0;
        // Node* curr=head;
        // while(curr!=NULL){
        //     count++;
        //     curr=curr->next;   
        // }
        //how to use a for loop instead of while loop to count elements
        Node* curr;
        for(curr=head;curr!=NULL;curr=curr->next) count++;
        curr=head;
        int middle=(count/2)+1;
        for(int i=1;i<middle;i++){
            curr=curr->next;
        }return curr->data;
    }

}
int middle_of_linkedlist2(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL and fast->next!=NULL){//fast!=null is first in condition as to avoid segmentation fault as no meaning of fast->next!=NULL when fast is already null
        slow=slow->next;
        fast=fast->next->next;
    }return slow->data;
}
int Nnode_from_end(Node* head,int x){
    Node* curr=head;
    int n=0;
    while(curr!=NULL){
        n++;
        curr=curr->next;
    }
    if((n-x)<0) return NULL;
        curr=head;
        for(int i=0;i<(n-x);i++){
           curr=curr->next;
        }return curr->data;
}
Node* reverselinkedlist(Node* head){
    //time:o(n) space:o(1)
    if(head==NULL or head->next==NULL) return head;
    Node* before=NULL;
    Node* after=NULL;
    Node* curr=head;
    while(curr!=NULL){
        after=curr->next;
        curr->next=before;
        before=curr;
        curr=after;
    }
    return before;//before is new head
}
Node* remove_duplicates(Node* head){
    Node* curr=head;
    Node* temp=head;
//  10 20 20 30 30 30
if(head==NULL or head->next == NULL) return head;
    while(curr->next!=NULL){
        if(curr->data==curr->next->data){
            temp=curr->next->next;
            delete curr->next;
            curr->next=temp;
        }else{
            curr=curr->next;
        }
    }return head;
}

Node* segregate_evenodd(Node* head){
    Node* even_start=NULL, *odd_start=NULL, *even_end=NULL, *odd_end=NULL;
    Node* curr=head;
    while(curr!=NULL){
        if((curr->data)%2==0){
            if(even_start==NULL){
                even_start=curr;
                even_end=even_start;
            }else{
                even_end->next=curr;
                even_end=even_end->next;
            }
            
        }else{
            if(odd_start==NULL){//first element is odd start and odd end
                odd_start=curr;
                odd_end=odd_start;
            }else{
                odd_end->next=curr;
                odd_end=odd_end->next;
            }
        }
        curr=curr->next;

    }
    if(odd_start==NULL or even_start==NULL) return head;
    even_end->next=odd_start;
    odd_end->next=NULL;
    return even_start;//new head
}

// int intersection(Node* head1,Node* head2){

// }

Node* pairwise_swap(Node* head){
    if(head==NULL or head->next==NULL) return head;
    Node* curr=head;
    int temp;
    while(curr!=NULL and curr->next!=NULL){//when curr==NULL then and stops here and dont check for curr->next which is a invalid case but or will check 
        temp=curr->data;
        curr->data=curr->next->data;
        curr->next->data=temp;
        curr=curr->next->next;
    }return head;
}

Node* merge_sorted_linked_list(Node* head1,Node* head2){
    for(Node* curr=head;curr!=NULL;curr=cur->next){

    }
}
int main(){
    Node* head=new Node(10);
    head->next=new Node(10);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    // cout<<"The orignal Linked List is : ";
    // printme(head); cout<<endl;
    // cout<<"Insert element to be inserted in sorted order : "<<endl;
    // int y;
    // cin>>y;
    // head=insert_sorted(head,y);
    // cout<<"After inserting element in linked list, new Linked List : ";
    // printme(head); 
    // int z=middle_of_linkedlist2(head);
    // cout<<endl;
    // cout<<"Middle element of linked list is: "<<z<<endl;
    // int n,l;
    // cout<<"insert n:";
    // cin>>n;
    // cout<<"Nth Node from end is :";
    // l=Nnode_from_end(head,n);
    // cout<<l<<endl;
    // head=remove_duplicates(head);
    // cout<<"Linked after duplicate removal is : ";
    // printme(head);
    cout<<"Reversed Linked list is : ";
    head=reverselinkedlist(head);
    printme(head);
    return 0;
}