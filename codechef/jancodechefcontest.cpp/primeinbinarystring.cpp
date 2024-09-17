// You are given a binary string S of length N. Your task is to check if there exists a substring of S which is the binary representation of a prime number.
// Formally, check if there exist integers L and R such that 1≤L≤R≤N, and the substring SLSL+1SL+2…SR, when treated as a binary integer, is prime.
// Print "Yes" if such a substring exists, and "No" if it doesn't.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int c=0;
        string s;//1101
        cin>>s;
        for(int i=0;i<s.length()-1;i++){
            if(s.length()>1){// agar length of string 1 h toh 'no' hi h 
              if((s[i]=='1' and s[i+1]=='0') or (s[i]=='1' and s[i+1]=='1')) {//string ke andhar 1 h ya 0 yeh '' main aayega becoz 1 and 0 char h idhar int nhi becoz voh string h 
                c++;
                break;
                }
            } else break;
// logic yeh h 1 and 0 in binary are not prime number,but 11 and 10 in binary is prime  toh becoz hume 
//essa sirf ek  substring hi  kaffi h jo prime ho toh we will check only occurence of 11 and 10 in the entire string,
//becoz 11 and 10 khud ek substring ban jayenge and ek baar bhi milla toh ans is yes issliye break kar diya humne condition ko. 
        }
    if(c!=0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    }
    return 0;
}
