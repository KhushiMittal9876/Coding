//sum of n natural number through recursion
#include<iostream>
using namespace std;
int sum(int x){
    if(x==0){
        return x;
    }else {
        return x+sum(x-1);
    }
}
int main(){
    int a;
    cin>>a;
    cout<<sum(a)<<endl;
    return 0;
}