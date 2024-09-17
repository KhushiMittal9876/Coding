// #include<iostream>
// using namespace std;
// struct Node{
//     int value;
//     Node* next;
//     Node(int c){
//         value=c;
//         next=NULL;

//     }
// };
// void cycletest(Node* head){
//     Node* slow=head;
//     Node*fast=head;
//     while( fast!=NULL && fast->next!=NULL && fast!=slow){
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//     if(slow==fast) cout<<"cycle detected"<<endl;
//     else if(fast==NULL) cout<<"no cycle"<<endl;

// }


// int main(){
//     int number1=4567,number2=987;
//     int c1=1,c2=1;
//     while(number1>10){
//         number1=number1/10;
//         c1++;
//     }
//     while(number2>10){
//         number2=number2/10;
//         c2++;
//     }
//     Node* head1=new Node()
//     return 0;
    
    



// }

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    int data = x;
	    next = NULL;
	}
};

void deleteAlt(struct Node *head);

/* Given a reference (pointer to pointer) to the head
   of a list and an int, appends a new node at the end  */
void append(struct Node** head_ref, int new_data)
{
    /* 1. allocate node */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
 
    struct Node *last = *head_ref;  /* used in step 5*/
  
    /* 2. put in the data  */
    new_node->data  = new_data;
 
    /* 3. This new node is going to be the last node, so make next 
          of it as NULL*/
    new_node->next = NULL;
 
    /* 4. If the Linked List is empty, then make the new node as head */
    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }  
      
    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;
  
    /* 6. Change the next of last node */
    last->next = new_node;
    return;    
}

void printList(struct Node *node)
{
	while (node != NULL)
	{
		cout<<node->data<<' ';
		node = node->next;
	}
	cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, tmp;
        struct Node* head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            append(&head, tmp);
        }
        deleteAlt(head);
        printList(head);
    }
	return 0;
}
// } Driver Code Ends


/*
Structure of the node of the binary tree
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    int data = x;
	    next = NULL;
	}
};
*/
// Complete this function
void deleteAlt(struct Node *head){
    Node* curr=head;
    Node* temp=head;
    while(curr->next!=NULL && temp!=NULL){
        temp=curr->next->next;
        delete curr->next;
        curr->next=temp;
       curr=curr->next;
    }
}
