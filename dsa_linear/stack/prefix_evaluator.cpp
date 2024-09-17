#include<bits/stdc++.h>
using namespace std;
int prefix_evaluator(string prefix){
    int result;
    stack<long long int> bag;
    long long int op1,op2,op3;
    for(int i=prefix.size()-1;i>=0;i--){
         // Push operand to Stack
        // To convert exprsn[j] to digit subtract
        // '0' from exprsn[j].
        if (isdigit(prefix[i])) {
           
            // there may be more than
            // one digits in a number
            double num = 0, j = i;
            while (i < prefix.size() && isdigit(prefix[i]))
                i--;
            i++;
 
            // from [i, j] exprsn contains a number
            for (int k = i; k <= j; k++)
                num = num * 10 + double(prefix[k] - '0');
 
            bag.push(num);
        }
        else if(prefix[i]==' ') continue;
        else {
            op1=bag.top();
            bag.pop();
            op2=bag.top();
            bag.pop();
            if(prefix[i] =='+'){
               op3=op2 + op1;
            }else if(prefix[i] =='-'){
                op3=op1 - op2;
            }else if(prefix[i] =='*'){
                op3=op1*op2;
            }else if(prefix[i] =='/'){
                op3=op1/op2;
            }else op3=(long long int)pow(op1,op2);
            
            bag.push(op3);
        }

    }
 return bag.top();   
}
int main(){
    string prefix;
    int ans;
    cout<<"Enter the prefix expression : ";
    getline(cin,prefix);
    ans=prefix_evaluator(prefix);
    cout<<"The evaluation of prefix expression "<<prefix<<" is : "<<ans<<endl;
    return 0;
}