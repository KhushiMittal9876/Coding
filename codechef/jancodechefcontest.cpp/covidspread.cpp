#include<bits/stdc++.h>
 using namespace std;
 int main(){
     int t,n,d;
     cin>>t;
     while(t--){
         cin>>n>>d;
         unsigned long long int x=1,y;//bahut baar multiply hota h toh x and y long long int main store hota h
         if(d<=10){
             for(int i=1;i<=d;i++){
                 x=x*2;
             }
             if(n>=x) cout<<x<<endl;
             else cout<<n<<endl;
        } else if(d>=11){
                y=1024*x;// 1024 ko loop main multiply nhi karenge kyunki voh baar baar multiply hoga 
                        //aur mwe need to multiply it only once and get 3 multiply many times
             for(int i=1;i<=d-10;i++){
                 y=y*3;
                 if(n<y) break;
             }
             
             if(n>=y) cout<<y<<endl;
             else cout<<n<<endl;
         }
    }
     return 0;
 }
 // power function double main input leta h aur double hi return karta h
 