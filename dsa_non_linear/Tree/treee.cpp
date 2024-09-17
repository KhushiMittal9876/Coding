#include<iostream>
#include<queue>
#include<algorithm.h>
using namespace std;
struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int k){
        key=k;
        left=right=NULL;
    }
};
int size(Node* root){
    if(root==NULL) return 0;
    return 1+ size(root->left)+size(root->right);
}
void level_traversal(Node* root){
    if(root==NULL) return;
    queue <Node *> q;
    q.push(root);
    
    while(q.empty()==false){
        Node *curr=q.front();
            q.pop();
        cout<<curr->key<<" ";
        
        if(curr->left!=NULL) q.push(curr->left);
        if(curr->right!=NULL) q.push(curr->right);
        }
}

int get_max(Node* root){
    int max=INT_MIN;
    if(root==NULL) return max;
    else return max(max(max,get_max(root-left)),get_max(root->right));
}

int main(){
    Node* root=new Node(10);
    root->left=new Node(20);
    root->left->left=new Node(8);
    root->left->right=new Node(7);
    root->left->right->left=new Node(9);
    root->left->right->right=new Node(15);
    root->right=new Node(30);
    root->right->right=new Node(6);
    level_traversal(root);
    cout<<endl;
    int siz=size(root);
    cout<<"size of tree is "<<siz<<endl;
    return 0;
}
