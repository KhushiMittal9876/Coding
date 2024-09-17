#include<iostream>//101=1*2^2+0*2^1+1*2^0=4+1=5
#include<cmath>
using namespace std;
int main(){
    int bin,ans=0,i=0;
    cin>>bin;
     while(bin>0){
         int newbin=bin%10;
         bin=bin/10;
         ans = ans+newbin*pow(2,i);
         i++;
     }cout<<ans<<endl;
     return 0;
}