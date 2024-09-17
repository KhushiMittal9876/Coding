#include<iostream>
using namespace std;
bool is_sorted(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]) return false;
    }return true;
}

void reverse_array(int arr[],int n){
    int l=0;
    int r=n-1;
    int temp=0;
    while(l<=r){
        temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
    }
}
void swap(int a,int b){
    int temp=0;
    temp=a;
    a=b;
    b=temp;
}
void move0(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0) {
            for(int j=i+1;j<n;j++){
                if(arr[j]!=0)
                swap(arr[i],arr[j]);
            }
        }
    } 
}
void leftrotate(int arr[],int n){
    for(int i=0;i<n-1;i++){
        swap(arr[i],arr[i+1]);
    }
}
int secondlarge(int arr[],int n){
    for(int j=0;j<n;j++){
        int largest=-1,secondlargest=-1;
	    for(int j=0;j<n;j++){
        if(largest<arr[j]){            
            secondlargest=largest;
            largest=arr[j];
        }else if(largest!=arr[j] && secondlargest<arr[j]) secondlargest=arr[j];

    }return secondlargest;
}
int main(){
    int n,largest=0,secondlargest=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leftrotate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//   void swap(int &a,int &b){
//      int temp=0;
//      temp=a;
//      a=b;
//      b=temp;
     
// }
// void leftrotate(int arr[],int n){
//      for(int i=0;i<n-1;i++){
//           swap(arr[i],arr[i+1]);
//           cout<<arr[i]<<" ";
          
//      }cout<<arr[n-1];
// }

// int main()
// {
//     int n=5;
//     int arr[]={1,2,3,4,5};
//     leftrotate(arr,5);
//     cout<<"roted array : ";
    
// binary search
int binary_search(int arr[],int n){
    int low=arr[0];
    int high=arr[n-1];
    int mid=(low+high)/2;
    while(low<=high){
        if(arr[mid]==x) return mid;//yeh return h yeh poore function se nikal dega hume sirf while loop se nhi
        else if(arr[mid]>x) high=mid-1;
        else if(arr[mid]<x) low=mid+1;
    }return -1;//this means yeh poore function se nikal dega -1 return karke agar usse element nhi milla toh;
    
}
int count1(int arr[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==0) low=mid+1;//either the element at mid position is 0
        else {//else the element at mid position is 1
            if(mid==0 || arr[mid-1]==0) return (n-mid);//i.e. it is the first occurance of 1
            else high=mid-1;//making our scope small to find the first occurance of 1
            
        } }
        return 0;//when array has no one in it
    }

}
bool sum(int arr[],int n,int x){//through two pointer approach 
    int first=0;
    int last=n-1;
    while(first<last){
        if(arr[first]+arr[last]==x) return true;
        else if(arr[first]+arr[last]>x) last--;
        else first++;

    }return false;
}
