#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[3][3];
	    for (int i=0; i<3;i++) {
	        for(int j=0;j<3;j++){
	            cin>>a[i][j];
	        }
	    }
	    cout<<max(a[1][0]+a[2][0]+a[2][1],a[0][1]+a[0][2]+a[1][2])<<endl;//diagonal elements ko leave karke remaining elemnts ko swap kiya h
	}//there are two diagonal elements
	return 0;
}