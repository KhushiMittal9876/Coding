#include<iostream>
using namespace std;
int main(){
    int d,n;
    cin>>d>>n;
    if(d>=n){
       cout<<d-n<<endl; 
    }
    else {
        cout<<d+(7-n)<<endl;
    }
    return 0;
}