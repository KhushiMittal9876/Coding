#include <bits/stdc++.h>
#include<string>
using namespace std;
bool aayush(string s)
{
    string s1;
   
   for(int i=0;i<s.length();i++)
   {
       s1 =s[i]+s[i+1];
       if(s1=="10" or s1=="11") return true;
       
   }
   return false;
   
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        if (aayush(s)) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}