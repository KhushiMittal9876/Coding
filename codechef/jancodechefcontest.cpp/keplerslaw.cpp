#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, t1, t2, r1, r2;
    cin >> t;
    while (t--)
    {
        cin >> t1 >> t2 >> r1 >> r2;
        if ((pow(t1, 2) * pow(r2, 3)) == (pow(t2, 2) * pow(r1, 3)))
            cout << "Yes" << endl;
        else cout << "No" << endl;
    }
            return 0;
            }
// } double x=(double)t1/t2
// double y=x*x;
//  double z=(double)r1/r2
// double k=z*z*z;
// if((x*x)==(z*z*z)) cout<<"Yes"<<endl;
// else cout<<"No"<<endl;
/* 
takeaways: 
1)if condition main aandar main bahut bracket use kar skte h alag alag conditon ek saath check karne keliye.
2)do integer ko divide kare toh result double main 
lena better hota h and uske liye ek int ko numerator wale ko double main typecast karna h.