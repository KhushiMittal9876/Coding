//input a=10;b=15 // 10=1,2,5,10  15=1,3,5,15  output=5(gcd),a=54,b=24(gcd)
#include<iostream>
#include<algorithm>
// a=0,b;a,b=0;a=b;a<b;
using namespace std;
int main(){
     int a,b,i,k=0;
     cin>>a>>b;
     int y=min(a,b);
     for(i=1;i<=a;i++){
          if(a%i==0 and b%i==0) {
               if(i>k){
                    k=i;
               }
               }
               
     }cout<<k<<endl;
   return 0;  
    
}