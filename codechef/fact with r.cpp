//factorial of a number through recursion
#include<iostream>
using namespace std;
int fact(int x){
    if(x==1 or x==2){
        return x;
    }else {
            return x*fact(x-1);
    }
}
int main(){
    int a;
    cin>>a;
    cout<<fact(a)<<endl;
    return 0;
}