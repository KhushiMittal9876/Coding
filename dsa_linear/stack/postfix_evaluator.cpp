#include<iostream>
#include<stack>
# include<cmath>
using namespace std;
int postfix_evaluator(string postfix){
    int result;
    stack<long long int> bag;
    long long int op1,op2,op3;
    int i;
    for(i=0;i<postfix.length();i++){
        if(isdigit(postfix[i])) {
           long long int num=0;
           while(isdigit(postfix[i])){
            num=num*10 + (long long int)(postfix[i] -'0');
            i++;
           }i--;
          bag.push(num);
        }
        else if(postfix[i] == ' ') continue;
        else {
            op1=bag.top();
            bag.pop();
            op2=bag.top();
            bag.pop();
            if(postfix[i] =='+'){
               op3=op2 + op1;
            }else if(postfix[i] =='-'){
                op3=op2 - op1;
            }else if(postfix[i] =='*'){
                op3=op2*op1;
            }else if(postfix[i] =='/'){
                op3=op2/op1;
            }else op3=(long long int)pow(op2,op1);
            
            bag.push(op3);
        }
    }
return bag.top();

}
int main(){
    string postfix;
    cout<<"Enter the postfix expression: ";
    getline(cin,postfix);
    long long int ans=postfix_evaluator(postfix);
    cout<<"Evaluation of postfix expression "<<postfix<<" is : "<<ans<<endl;
    return 0;
}