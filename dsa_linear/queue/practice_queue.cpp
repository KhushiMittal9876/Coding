#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverse_queue_iterative(queue<int> &q){
    stack<int> bag;//we store front element of queue in a stack bag then we pop element from stack(so they come in reverse order) and store in queue
    while(q.empty()==false){
        bag.push(q.front());
        q.pop();
    }
    while(bag.empty()==false){
        q.push(bag.top());
        bag.pop();
    }
}

void reverse_queue_recursive(queue<int> &q){
    //we store front of queue and then recursively reverse remaining queue and then in last we add the store element in queue in the rear of queue.
    if(q.empty()) return;
    int x=q.front();
    q.pop();
    reverse_queue_recursive(q);
    q.push(x);
}

void 
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // cout<<"Elements of orignal queue are : ";
    // while(q.empty()==false){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }
    cout<<"Elements of reversed queue are : ";
    reverse_queue_recursive(q);
    while(q.empty()==false){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;

}