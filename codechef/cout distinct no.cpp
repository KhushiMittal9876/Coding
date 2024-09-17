#include <iostream>
using namespace std;

int main() {
	int t,n,k;
	cin>>t;
	while(t--){
	     cin>>n>>k;
	     int arr[n];
         int check;//567445333
	     for(int i=0;i<n;i++) cin>>arr[i];
	     
	     for(int j=0;j<n-k+1;j++)
	     {
	          check=1;
	          for(int l=j+1;l<j+k;l++){
                  if(arr[j]!=arr[l]) check++;
              }
                
	     }cout<<check<<" ";
	}cout<<endl;
	     
	}
	return 0;
}