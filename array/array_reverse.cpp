#include<iostream>
using namespace std;
void reverse(int arr[],int n){
       int temp;
       int L=0;
       int R=n-1;
       
       while(L<R){  
         temp=arr[L];
         arr[L]=arr[R];
         arr[R]=temp; 
         L++;
         R--;
       }
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];// 1 2 3 4 5
    reverse(arr,n);
    for(int k=0;k<n;k++) cout<<arr[k]<<" ";
    return 0;
}