#include<iostream>
using namespace std;
void nouse(int arr[],int n){
    int n=5;
    int arr[n];
    std::fill_n(arr,n,-1);
}


int fib(int n){
  if(arr[n]==-1){
    if(n==0 || n==1) arr[n]=n;
    else arr[n]=fib(n-1)+fib(n-2);
  }
return arr[n];
}
int main(){

return 0;


}

int n,count=0;
cin>>n;
for(int i=n-1;i>=1;i++){
  if(n%i==0){
    n=n/i;
    count++;
  }

}
if(n!=1){
  return n+count;
}else return count;