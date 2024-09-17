//prgram to check whether the given string is palindrome or not.
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;//s1,s2 s = applerelppa
//     cin>>s;
//     int n=s.length();
//     string s1="";
//     for(int i=(n/2)-1;i>=0;i--){
//         s1=s1+s[i];
//     }
//     string s2="";
//     if(n%2==0){//when n is even
//       for(int i=n/2;i<n;i++){
//           s2=s2+s2[i];
//       }
//     }else {
//         for(int i=(n/2)+1;i<n;i++){
//             s2=s2+s[i];
//         }
//     }
//     if(s1==s2) cout<<"Yeah it is a palindrome"<<endl;
//     else cout<<"no"<<endl;
    
//     return 0;
// } 

//new approach
#include<bits/stdc++.h>
using namespace std;//      a b y d e d c b a //length=9
int main(){
    int t;
    cin>>t;//               0 1 2 3 4 5 6 7 8 
    string s;//             s s s s   e e e e     
    cin>>s;
    
while(t--){
int start=0;
    int end=s.length()-1;
    int counter=0;
    while(start<end){
       if(s[start]!=s[end]) {
           cout<<"NO"<<endl;
           return 0;//hum yaha break karke and doosri if condition main counter++ issliye nhi kar rhe becoz while loop ke bahar agar hum counter ko length/2 se equal karenge to odd even length ke case main alag counter aayega sothis method is better
           }
       else if(s[start]==s[end]){
           start++;
           end--;
       }
    }
    cout<<"Yes"<<endl;
}

    
    return 0;
}