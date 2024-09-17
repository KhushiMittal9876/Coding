#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a=98765,n=0,c=0;
    // while(a>0){
    //     n=a%10;
    //     a=a/10;
    //     c++;

    // }
    // cout<<c<<endl;

    // recursive solution
    // void count(int n){
    //     if(n==0) return 0;
    //     return 1+count(n/10);
    // }

    // if a number is palindrone or not
    int n=5670765,c=0;
    while(n>0){
        n=n/10;
        c++;
    }
    while(c--){
        int a=pow(10,c);
        if(n/a)
    }

    
    return 0;
}