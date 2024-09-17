#include<iostream>
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

void inorder(Node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->key<<" ";
    inorder(root->right);
}
bool search(Node* root, int number){
    if(root==NULL) return false;
    else if(root->key==number) return true;
    else if((root->key)>number) return search(root->left,number);
    else return search(root->right,number);
}
Node* insert(Node* root,int x){
    if(root==NULL) return new Node(x);
    else if((root->key)<x){
        root->right=insert(root->right,x);
    }else if((root->key)>x){
        root->left=insert(root->left,x);
    }return root;
} 
Node* getsuccessor(Node* curr){
    curr=curr->right;
    while(curr!=NULL && curr->left!=NULL){
        curr=curr->left;
    }return curr;
}
Node* delete_node(Node* root,int x){
    if(root==NULL) return root;
    if((root->key)>x) {
        cout<<root->key<<" ";
        root->left=delete_node(root->left,x);}
    else if((root->key)<x) {
        cout<<root->key<<" ";
        root->right=delete_node(root->right,x);}
    else if(root->left==NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }else if(root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
    else {
        Node* succ=getsuccessor(root);
        root->key=succ->key;
        root->right=delete_node(root->right,succ->key);
    }
    return root;

}

int main(){
    Node* root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    printf("Original BST: ");
    inorder(root);
   
    // printf("\n\nDelete a Leaf Node: 20\n");
    // root = delete_node(root, 20);
    // printf("Modified BST tree after deleting Leaf Node:\n");
    // inorder(root);
 
    // printf("\n\nDelete Node with single child: 70\n");
    // root = delete_node(root, 70);
    // printf("Modified BST tree after deleting single child Node:\n");
    // inorder(root);
 
    printf("\n\nDelete Node with both child: 50\n");
    root = delete_node(root, 50);
    printf("Modified BST tree after deleting both child Node:\n");
    inorder(root);
 
    return 0;
}