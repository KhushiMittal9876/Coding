 //lcm = lowest(least) common multiple
 #include<iostream>
 #include<algorithm>
 using namespace std;
 int main(){
     int a,b,c,n;
     cin>>a>>b;
     c=max(a,b);
     n=a*b;
    for(int lcm=c;lcm<=n;lcm++){
    if(lcm%a==0 and lcm%b==0){
           cout<<lcm<<endl;
            break;
       }
    }
 return 0;
 }
