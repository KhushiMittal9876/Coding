#include<iostream>
using namespace std;
int fact(int x){
   int c=1;
    while(x>0){
        c=c*x;//c=c*5 
        x=x-1; 
    }
    return c;
}
int main(){
    int a;
    cin>>a;
    int p;
    p=fact(a);
    cout<<p<<endl;
    return 0;
}