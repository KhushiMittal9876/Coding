#include<iostream>
#include<queue>
#include<utility>
using namespace std;
void makedigit(pair<string,string>jodi,int n){
    queue<string> q;
    q.push(jodi.first);
    q.push(jodi.second);
    for(int i=0;i<n;i++){
        string s=q.front();
        cout<<s<<" ";
        q.pop();
        q.push(s+jodi.first);
        q.push(s+jodi.second);
    }
}
int main(){
    pair<string,string> jodi;
    int n;
    cout<<"Enter elements of jodi: "<<endl;
    cout<<"Enter pehla insan :"<<endl;
    cin>>jodi.first;
    cout<<"Enter second insan: "<<endl;
    cin>>jodi.second;
    cout<<"Enter the n till where you want to genrate the digit : "<<endl;
    cin>>n;
    cout<<"the actual string is: ";
    makedigit(jodi,n);

    return 0;
}