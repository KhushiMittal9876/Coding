// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
    vector <int> v;
    int c=1;
    sort(a,a+size);
    for(int i=0;i<size;i++){
        if(a[i]==a[i+1]) {
            c++;
        }
        else 
        {
            v.push_back(c);
         c=1;
            }
        // 112556667777789
    }
    int n=size,x=-1,sum=0;
    for(int i=0;i<v.size();i++){
        sum=sum+v[i];
        if(v[i]>(n/2)) {
            x=a[sum-1];
        }
    }return x;
        
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends