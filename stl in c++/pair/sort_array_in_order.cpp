//code to sort array in order of given integer
//i/p:a[]={4,1,3,2},b[]={'a','x','b','y'}
//o/p:x y b a
#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;
// void sortme(int aarr[],char barr[]){
//      pair<int,char> p[4];//p is array of pairs of size 4//p[4]={p1,p2,p3,p4}
//      for(int i=0;i<4;i++){
//          p[i]={aarr[i],barr[i]};//initialise each element of pair ,i.e. to initialise each element of array
//      }//p1={4,'a'},p2={1,'x'}...and so on
//      sort(p,p+4);//to sort the p array ,which is array of pairs
//      //when we sort array of pairs it sorts the array acc to first element of pair
//      for(int i=0;i<4;i++){
//          cout<<p[i].second<<" ";
//      }cout<<endl;
// }
// int main(){
//     int aarr[4]={4,1,3,2};
//     char barr[4]={'a','x','b','y'};
//     sortme(aarr , barr);
//     return 0;
// }
//

// func a function which returns a pair made of max element of array and max element of array
// pair<int,int> func(int arr[],int n){
//     int max=INT_MIN;
//     int min=INT_MAX;//1000
//     for(int i=0;i<n;i++){//1245
//         if(arr[i]<min) min=arr[i];
//         if(arr[i]>max) max=arr[i];
//     }
//     pair<int,int> p={min,max};
//     return p;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }pair q(func(arr,n));//jo type return karenga function usko ussi datatype mai store karenge
//     cout<<q.first<<" "<<q.second<<endl;
//     return 0;
// }

pair<int, int> num(int arr[], int n)
{
    int max = INT_MIN;
    int temp = INT_MIN;
    int tempx=0;
    pair<int, int> p;
    for (int i = 0; i < n; i++)
    { // 6 8 5 7 3 2 4 9 5
        if (arr[i] > max)
        {
            temp = max;
            tempx=i-1;
            max = arr[i]; // 9
        }
        else if (arr[i] > temp)
        {
            temp = arr[i];
            tempx=i; //6 8
        }
    }
    p = {temp, x};
    return p;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    pair<int, int> q;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    q = num(arr, n);
    cout << q.first << " " << q.second << endl;
    return 0;
}