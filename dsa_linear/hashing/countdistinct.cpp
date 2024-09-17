#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int arr[]={10,20,10,40,30,20};
    int n=6;
    sort(arr,arr+n);
    //10,10,20,20,30,40
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]) count++;
    }cout<<count<<endl;



    return 0;
}