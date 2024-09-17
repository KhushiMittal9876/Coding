#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
       data=x;
       next=nullptr;
    }
};
void printme(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    Node *head=new Node(10);
    head->next=new Node(100);
    head->next->next=new Node(2);
    printme(head);
    return 0;
}



// #include <iostream>

// using namespace std;

// struct Node {
//     int val;
//     Node* next;
//     Node(int _val) {
//         this->val = _val;
//         this->next = nullptr;
//     }
//     Node() {
//         this->val = -1;
//         this->next = nullptr;
//     }
// };

// void print(Node * head) {
//     while(head) {
//         cout << head->val << ' ';
//         head = head->next;
//     }   cout << '\n';
// }

// Node * createUserList(int size) {
//     if(size < 1) return nullptr;
    
//     Node * head = nullptr;
//     Node * tail = nullptr;

//     for(int i=0; i<size; i++) {
//         Node* cur = new Node();

//         cout << ':';
//         cin >> cur->val;
        
//         if(!tail) {
//             head = tail = cur;
//         } else {
//             tail->next = cur;
//             tail = tail->next;
//         }
//     }

//     return head;
// }


// Node * createList(int arr[], int size) {
//     Node* me=nullptr;
//     Node* khushi=nullptr;
//     for(int i=0;i<size;i++){
//         Node* khushi = new Node(arr[i]);
//         if(i==0) me=khushi;
//         khushi=khushi->next;
//     }
//     return me;
// }

// int main () {
//     int size;
//     cout << "Enter size:"; cin >> size;
//     Node * head = createUserList(size);
//     print(head);
//     return 0;
// }

