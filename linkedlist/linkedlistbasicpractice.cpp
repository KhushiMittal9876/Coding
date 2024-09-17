#include<iostream>
using namespace std;
struct Node{
    int value;
    Node* next;
    Node(int x){
        value=x;
        next = NULL;
    }
};
//to print each element of linked list
void printlinkedlist(Node* head){
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->value<<endl;
        curr=curr->next;
    }
}

//to search any key in linked list
int searchkey(Node* head,int key){
    int c=1;
    while(head!=NULL){
        if(head->value == key){
            return c;
        }else {
            head=head->next;
            c=c+1;
        }
    }
    return -1;
}

//to insert any element in begin of linked list
Node* insertatbegin(Node* head,int y){
    Node* temp = new Node(y);
    temp->next=head;
    return temp;
}

//to insert any element at end of linked list
Node* insertatend(Node* head,int z)
{
    Node* temp=new Node(z);
  if(head==NULL){
      return temp;
  }
  Node* curr=head;
  while(curr->next!= NULL) curr = curr->next;
  curr->next = temp;
  return head;
}

//to delete first element of linked list
 Node* delete_first_node(Node* head){
     if(head==NULL)
     return NULL;
     else{
        Node* temp=head->next;//first pointing the head next value in temp node type pointer
        delete head;//dealocating the memory and value of head
        return temp;
     }
     
 }

//to delete last element of linked list
 Node* delete_last_node(Node*head){
     if(head==NULL) return NULL;
     else if(head->next==NULL) {
         delete head;
         return NULL;
        }
     else{
         Node* curr=head;
         while(curr->next->next!=NULL){
             curr=curr->next;
         }
        delete (curr->next);
        curr->next=NULL;
        return head; 

     }
 }

//to insert element in linked list such that each element is sorted
 Node* sort_insert(Node* head,int data){
    Node* temp=new Node(data);
    if(head==NULL) return temp;//when ll was empty
    Node* curr=head;
    if((curr->value)>=data){//corner case when data is smallest among all elements of ll ,so it become the inserting a number on head case
        temp->next=head;
        return temp;
    }
    while(curr->next!=NULL && (curr->next->value)<=data ){//while main pehela sentence curr-.next!=NULL ka hoga becoz agar yeh galat toh aage wala check hi nhi hoga and when curr->next=NULLso how can curr->next->value exist
        curr=curr->next;
    }//after this loop curr points to element in linked list whose value is just greater than data 
    // if(curr->next==NULL){
    //     curr->next=temp;
    //     return head;
    // }
    temp->next=curr->next;// also takes the case when curr next=null, so no need of upper if condition
    curr->next=temp;
    return head;

}

//to count number of nodes of linked list
int countNode(Node* head){
    Node* curr=head;
    int count=0;
    while(curr!=NULL){
        curr=curr->next;
        count++;
    }
    return count;
}

//to get middle element of linked list (method1)
int middle1list(Node*head){
    int count=countNode(head);
    Node* curr=head;
    for(int i=1;i<=count/2;i++) curr=curr->next;
    //if count of node is even or odd this works fine
    return curr->value;
}

//to get middle element of linked list through floyd cycle algorithm (method2)
int middle2list(Node* head){
    if(head==NULL) return 0;
    Node *slow=head,*fast=head;
    while(fast!=NULL && fast->next!=NULL){
//for even number of nodes fast==NULL when slow is at midlle element and for odd number of nodes fast->next==NULL and middle element is at slow.
// to combine the case of even and odd element we write first fast!=NULL and then fast->next!=NULL becoz if fast=NULL there is no point of fast->next = NULL 
        slow=slow->next;
        fast=fast->next->next;//fast runs at double speed of slow
    }
    return slow->value;

}

//nth node from end of linked list
int nthnode1(Node* head,int n){ 
    int numberofnode=countNode(head);
    if(numberofnode<n) return 0;
    Node*current=head;
    for(int i=1;i<=(numberofnode-n);i++){
        current=current->next;
    }return current->value;
//in linked list nth node from end is (numberofnode-n+1) from the beginning
// to get there we are first at head(i=1) then we move total(numberofnode-n+1)iteration(i<=nuberofnode-n+1) to reach at nth node of end ,from the beginning
}

//nth node from end using two pointer approach
int nthnode2(Node* head,int n){
    if(head==NULL) return 0;//when linked list is empty
    Node* second=head;
    Node* first=head;//for starting reference we assign first and second pointer to head
    for(int i=1;i<=n;i++){
        if(first==NULL) return 0;//when at any point first becomes NULL that tells the n is larger than linked list length so we return 0 
        first=first->next;//at starting only we are assigning first to n positon after head
    }//but second remains at head
    while(first!=NULL){//when first becomes NULL then only second points to nth node from end
        first=first->next;//we now run both pointer first and second at same speed
        second=second->next;
    }
    return second->value;//value of second pointer is the nth node from end   
}
    int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next= new Node(30);
    head->next->next->next=new Node(40);
    // cout<<head<<endl;
    // cout<<"old heads value:"<<head->value<<endl;
    // printlinkedlist(head);
    // int d=searchkey(head,10);
    // cout<<d<<endl;
    // head = insertatbegin(head,5);
    // cout<<"new head after inserting 5 at begining: "<<head<<endl;
    // cout<<"New heads value after inserting 5 at begining:"<<head->value<<endl;
    // head = insertatend(head,50);
    // cout<<"new head after inserting 50 at end: "<<head<<endl;
    // cout<<"New heads value after inserting 50 at end:"<<head->value<<endl;
    // head= delete_first_node(head);
    // head= delete_last_node(head);
    // head = sort_insert(head,6);
    // printlinkedlist(head);
    // int middle_element =middle1list(head);//can use middle2list function also ans is same
    // cout<<"Middle Element of linked list is: "<<middle_element<<endl;
    int r=nthnode1(head,2);
    cout<<"Nth node from end is: "<<r<<endl;
    return 0;
}

