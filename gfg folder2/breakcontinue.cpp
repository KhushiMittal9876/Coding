//code for use of break and continue statement
#include<iostream>
using namespace std;
int main(){
    //code to print number from 1 to n without multiples of x
    int n,x;
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        if(i%x==0)
            continue;
            cout<<i<<" ";
        }
        // if(n%x!=0) cout<<i<<" ";  this can be used at place of if statement to avoid use of continue statement 
    //code to print smallest divisor greater than 1 of n:)
    cout<<"the smallest divisor greater than 1 is: "<<endl;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            cout<<i<<endl;
            break;
        }
    }    
  
    return 0;
}
