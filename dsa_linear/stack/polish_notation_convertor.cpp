#include<iostream>
#include<string>
#include<stack>
using namespace std;
int prec(char c){//give precedence of operator in terms of integers i.e. high number for operator of high precedence
    if(c =='^') return 3;
    else if(c=='*' or c=='/') return 2;
    else if(c=='+' or c=='-') return 1;
    else return -1;
}
string infixtopostfix(string infix){
     string postfix;
     stack<char>bag;
     bool flag=false;
     char c;
     for(int i=0;i<infix.length();i++){
        c=infix[i];
        if((c>='a' && c<='z') or (c>='A' && c<='Z') or (c>='0' && c<='9')){
            //when operand is scanned
            postfix += c;
        } else if(c=='('){// when left parenthesis is scanned
            bag.push(c);
        }
        else if(c==')'){//when right parenthesis is scanned
            while(bag.top()!='('){
                postfix += bag.top(); 
                bag.pop();
            } bag.pop();
        }
        else // if operator is scanned
         {
        
        while(!bag.empty()){
 //‘^’ operator is right associative and other operators like ‘+’,’-‘,’*’ and ‘/’ are left-associative. Check especially for a condition when both,  operator at the top of the stack and the scanned operator are ‘^’. In this condition, the precedence of the scanned operator is higher due to its right associativity. So it will be pushed into the operator stack. In all the other cases when the top of the operator stack is the same as the scanned operator, then pop the operator from the stack because of left associativity due to which the scanned operator has less precedence. 
                if(infix[i]=='^' and bag.top()=='^') {
                     bag.push(c);
                }
               
        }
            while(!bag.empty() and prec(infix[i])<=prec(bag.top())){
                postfix += bag.top();
                bag.pop();
            }bag.push(c);
        }
     } while(!bag.empty()){
                postfix += bag.top();
                bag.pop();
            }
            return postfix;
}
int main(){
    string infix;
    cout<<"Enter the infix expression: ";
    cin>>infix;
    string converted=infixtopostfix(infix);
    cout<<"Postfix expression of "<<infix<<" is : "<<converted<<endl;
    return 0;
}