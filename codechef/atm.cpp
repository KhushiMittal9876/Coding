#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    double amount,z;
    cin>>x>>amount;
    double y=(double)x+0.50;
    z=amount-y;
    if(x%5!=0) cout<<setprecision(2)<<amount<<endl;
    else
    {
    if(y>amount) cout<<setprecision(2)<<amount<<endl;
    else if(y==amount) cout<<"0.00"<<endl;
    else cout<<setprecision(2)<<z<<endl;    
    }
    
    return 0;
}