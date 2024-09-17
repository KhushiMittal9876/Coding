#include <iostream>
#include <algorithm> //x=3 123448  1 2 
using namespace std;

int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        int sum = 0, c = 0,d=0;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];//x=99   1 2 3 3 4 4 5
        }
        sort(arr, arr + n);
        for(int j=n-1;j>=0;j--){
            if(arr[j]>=x){//ya toh voh number khud ya usse bada number already ho so that number can be stored easily
                cout<<"1"<<endl;
                break;
            }else if(arr[j]<x){//nhi toh usse chota koi number ho
                sum=sum+arr[j];
                c++;//sum of all arr elemnts to give that number
                if(sum>=x) {
                    cout<<c<<endl;
                    d++;//becoz if n=3 and c=3 and voh number sum ho saare element ka toh to differentiate ki voh loop main gya h we use d
                    break;
                }
            }
        }if(c==n and d==0) cout<<"-1"<<endl;//d==0 becoz voh for ke andar sum>=x wali condition main nhi gya abhi tak
    }
    return 0;
}