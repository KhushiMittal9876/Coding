#include<iostream>
using namespace std;
struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int data){
        key=data;
        left=right=NULL;
    }
};
bool children_sum(Node* root){
    if(root==NULL) return true;
    root->key=root->left->key + root->right->key
}
int main(){
    return 0;
}
