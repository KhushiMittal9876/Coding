#include<bits/stdc++.h>
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

void level_traversal(Node* root){
    if(root==NULL) return;
    queue<Node*> line;//as we have to maintain fifo order for each node at one level
    line.push(root);
    while(line.empty()==false){
        int count=line.size();
        for(int i=0;i<count;i++){
            Node* curr=line.front();
            cout<<curr->key<<" ";
            line.pop();
            if(curr->left!=NULL) line.push(curr->left);
        if(curr->right!=NULL) line.push(curr->right);
            
        }cout<<endl;
        
        

    }

}
int main(){
    Node* root=new Node(10);
    root->left=new Node(20);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    root->right=new Node(30);
    level_traversal(root);
    return 0;

}