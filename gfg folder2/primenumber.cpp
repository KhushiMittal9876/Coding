//if a number is prime or not  
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x,c=0;
    cin>>x;
    for(int i=1;i<sqrt(x);i++){
    if(x%i==0) c++;
    }
    if(c==1) cout<<"prime"<<endl;
    else cout<<"non prime"<<endl;
    return 0;
}
/* another approch for prime number
int main(){
    int x;
    cin>>x;
    if(x==0 or x==1){
        cout<<"Neither prime nor composite"<<endl;
    }
    int i=2;
     while(i<n){
            if(x%i==0){
                cout<<"Not prime"<<endl;
                return 0;//tells termination of the code
            }
            i++;
        }
        cout<<"prime"<<endl;
    return 0;
}