// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends      
class Solution{          
    public:          
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
       int temp;//1 2 3 4 5 == 2 1 3 4 5 == 2 1 5 4 3 == 3 4 5 1 2
       int L=0;// 0 1 2 3 4 (index)
       int R=d-1;
       
       while(L<R){  
         temp=arr[L];
         arr[L]=arr[R];
         arr[R]=temp; 
         L++;
         R--;
       }
	   int temp2;
	   int L1=d;
	   int R1=n-1;
	   while(L1<R1){
		   temp2=arr[L1];
		   arr[L1]=arr[R1];
		   arr[R1]=temp2;
		   L1++;
		   R1--;
	   }
	   int temp3;
	   int L2=0;
	   int R2=n-1;
	   while(L2<R2){
		   temp3=arr[L2];
		   arr[L2]=arr[R2];
		   arr[R2]=temp3;
		   L2++;
		   R2--;
	   }
	   
	}
};

// { Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}  // } Driver Code Ends

