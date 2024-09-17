#include <iostream>
#include<cmath>
using namespace std;

bool isprime(int j){
     for(int i=2;i<=sqrt(j);i++){
          if(j%i==0) return false;
     }
     return true;
}

int main() {
	int t,size,limit;
	cin>>t;
	while(t--){
	     cin>>size>>limit;
	     int a,c=1;
	     for(int i=0;i<limit;i++){
	          cin>>a;
	     }
	     for(int j=3;j<=limit;j++){
	          for(int k=2;k<j;k++){
	               if(j%k==0 and isprime(j)){
	                 c++;
	                 cout<<j<<" "<<endl;
	               } 
	          }
	       
	     }
	     
	}
	return 0;
}
