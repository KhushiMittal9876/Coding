//program to find a pattern in a given string 
#include<iostream>
using namespace std;
int main(){
    string s;//   geeksforgeeks
    cin>>s;
    int m=s.length()-1;
    string s1;//  geeks
    cin>>s1;
    
    int n=s1.length();
    for(int i=0;i<m;i++){
    int x=-1;
     x=s.find(s1,i);
     if(x!=(-1)) {
         i=x+(n-1);
        cout<<x<<endl;
     }
    }
    return 0;
}