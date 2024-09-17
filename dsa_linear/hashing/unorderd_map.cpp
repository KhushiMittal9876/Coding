#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int arr[]={10,20,10,30,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int>map;
    for(int x:arr){
        map[x]++;
    }
    for(auto e:map) cout<<e.first<<" "<<e.second<<endl;

    // int a[]={3,2,8,15,-8};
    // int n=5;
    // int sum=17;
    // unordered_map<int,int>wall;
    // for(int i=0;i<n;i++){
    //     if(wall.find(sum-a[i])!=wall.end()){
    //         wall.insert(make_pair(a[i],sum-a[i]));
    //     }else continue;
        
    // }
    // for(auto e:wall) cout<<e.first<<" "<<e.second<<endl;
    return 0;
}