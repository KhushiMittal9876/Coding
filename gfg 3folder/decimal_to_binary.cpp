//converting decimal number to binary number using strings.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    s="";
    while(n>0){
        int x=n%2;
        n=n/2;
        if(x==0) s=s+'0';
        else s=s+'1';
    }
    for(int i=s.length()-1;i>=0;i--){
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}