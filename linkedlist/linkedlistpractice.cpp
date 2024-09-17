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
int main(){
    int n,b,c;
    cin>>n;//number of input
    cin>>b;
     Node *head=new Node(b);
     cout<<head->data<<endll;
     n=n-1;
        while(n--){
            cin>>c;
            head->next=new Node(c);
            cout<<head->next->data<<endl;
            head=head->next;

        }
    }
    return 0;
}