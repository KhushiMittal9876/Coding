#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool match(char a, char b){
    return ((a=='[' and b==']') or (a=='(' and b==')') or (a=='{' and b=='}'));
}

int main(){
    stack<char> bag;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' or s[i]=='{' or s[i]=='['){
            bag.push(s[i]);
        }
        else {
            if(bag.empty()==true) {
                cout<<"No"<<endl;
                return 0;
                }
            else if(match(bag.top(),s[i])==true){
                bag.pop();
            }else {
                cout<<"No"<<endl;
                return 0;
            }
        }
    }if(bag.empty()==true){
        cout<<"Yes"<<endl;
    }else cout<<"No"<<endl;
return 0;
}