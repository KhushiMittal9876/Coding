#include<iostream>
#include<cmath>//input 20 output 2,2,5
using namespace std;
int main(){
    int x,c;
    cin>>x;
    for(int i=2;i<x;i++){
        if(x%i==0) {
            c++;
            x=x/i;
        }
    } if(c!=1)cout<<i<<endl;
    else cout<<x<<endl;
   return 0; 
}
