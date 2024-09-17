#include <bits/stdc++.h>
using namespace std;
struct Node{//tree node 
    int key;
    Node* left;
    Node* right;
    Node(int k){
        key=k;
        left=right=NULL;
    }
};

void inorder_traversal(Node* root){// left->root->right
    if(root!=NULL){
        inorder_traversal(root->left);
        cout<<(root->key)<<"->";
        inorder_traversal(root->right);
    }
}

void preorder_traversal(Node* root){//root->left->right
    if(root!=NULL){
        cout<<(root->key)<<"->";
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }
}

void postorder_traversal(Node* root){//left->right->root
    if(root!=NULL){
        postorder_traversal(root->left);
        postorder_traversal(root->right);
        cout<<(root->key)<<"->";
    }
}

int height(Node* root){
    if(root==NULL) return 0;
    else return max(height(root->left),height(root->right))+1;
}

int max_width(Node* root){
    if(root==NULL) return 0;
    queue<Node*> line;
    line.push(root);
    int ans=0;
    while(line.empty()==false){
        int count=line.size();
        ans=max(ans,count);//gives max of number of element present in queue
        for(int i=0;i<count;i++){
            Node*curr=line.front();
            line.pop();
            if(curr->left!=NULL) line.push(curr->left);
            if(curr->right!=NULL) line.push(curr->right);
            
        }


    }return ans;

}

void binarytree_to_doublyll(Node* root){
    Node* curr=root;
    if(curr==NULL) return;
    Node*prev=NULL;
    Node*next=NULL;

    curr->prev=root->left;
    cout<<root->key;
    next=root->right;
}


int  height(Node* root){
    if(root->left==NULL and root->right==NULL) return 0;
    return 1+max(height(root->left),height(root->right));
}
    
















int main(){
    int h=0;
    Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    root->left->right=new Node(60);
    cout<<"Inorder traversal of tree is: "<<endl;
    inorder_traversal(root);
    cout<<endl;
    cout<<"Preorder traversal of tree is: "<<endl;
    preorder_traversal(root);
    cout<<endl;
    cout<<"Postorder traversal of tree is: "<<endl;
    postorder_traversal(root);
    cout<<endl;
    cout<<"Height of tree is: "<<endl;
    h=height(root);
    cout<<h<<endl;
    return 0;

}
