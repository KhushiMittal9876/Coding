#include<iostream>
using namespace std;
int max(int *arr,int n){//*arr same as arr[]
    int maxn=INT_MIN;
    for(int j=0;j<n;j++){
        if(arr[j]>maxn) maxn=arr[j];
    }return maxn;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<max(arr,n)<<endl;
    return 0;
}
