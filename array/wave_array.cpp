//Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array and return it
//In other words, arrange the elements into a sequence such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....
#include<iostream>
using namespace std;
// void swaptwonumber(int &a,int &b){
//      int temp=a;
//      a=b;
//      b=temp;
// }
// int main(){
//     int n,m=0;
//     cin>>n;
//     if(n%2==0) m=n;//6
//     else m=n-1;//5
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<m;i += 2){
//         swaptwonumber(arr[i],arr[i+1]);
//         cout<<arr[i]<<" "<<arr[i+1]<<" ";
//     }if(n%2!=0) cout<<arr[n-1];
//     cout<<endl;
//     return 0;
// }//1 2 3 4 5 6 7
// // l r     l r l     
void swapArr(int *L, int *R)
{
    int temp = *L;
    *L = *R;
    *R = temp;
}

void waveArr(int arr[], int n)
{
    int L = 0;
    int R = 1;
    while(L<n-1 )
    {
        swapArr(&arr[L], &arr[R]);
        L+=2;
        R=L+1;
    }
}


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    waveArr(arr, n);
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    return 0;
}