#include<iostream>
using namespace std;
int main(){
    int t,n,m,j;
    cin>>t;
    while(t--){
        int c=0;
        cin>>n>>m;
        if(n>m) j=n;
        else if(m>n) j=m;
        else j=n;
        for(int i=2;i<=j;i++){
            if((n%i==0 and i%m==0)or(m%i==0 and i%n==0)) c++;
        }
if (c==0) cout<<"No"<<endl;
else cout<<"Yes"<<endl;
    }
    return 0;
}