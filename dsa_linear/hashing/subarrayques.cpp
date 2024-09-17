#include<iostream>
#include<unordered_set>
#include<unordered_map>
//in case of unordered_map the previous value corresponding to the key is updated by the new value that is only would be there
using namespace std;
bool subarray_sum_0(int arr[],int n){
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            if(sum==0) return true;
        }
    }return false;
}

bool hash_subarray_sum_0(int arr[],int n){
    unordered_set<int>cement;
    int pre_sum=0;
    for(int i=0;i<n;i++){
        pre_sum=pre_sum+arr[i];
        if(cement.find(pre_sum)!=cement.end()) return true;
        if(pre_sum==0) return true;
        cement.insert(pre_sum);
    }return false;

}

bool brute_subarray_sum(int arr[],int n,int sum){
    for(int i=0;i<n;i++){
       int pre_sum=0;
    for(int j=i;j<n;j++){
        pre_sum += arr[i];
        if(pre_sum==sum) return true;
       }
    }return false;
}

bool hash_subarray_sum(int arr[],int n,int sum){
    unordered_set<int>wall;
    int pre_sum=0;
    for(int i=0;i<n;i++){
        pre_sum=pre_sum+arr[i];
        if(pre_sum==0) return true;//corner case when sum is achieved by adding elements from index 0
        if(wall.find(pre_sum-sum)!=wall.end()) return true;//we check for pre-sum in our hash set
        wall.insert(pre_sum);
    }return false;
}

int longest_subarray_sum(int arr[],int n,int sum){
    int k=0;//count of largest subarray with given sum
    for(int i=0;i<n;i++){
        int wall=0;
        int count=0;
        for(int j=i;j<n;j++){
          wall=wall+arr[j];
          count++;
          if(wall==sum){
            if(count>k) k=count;
            break;
        }
    }
}return k;//res=max(res,j-i+1)
}
int hash_largerst_sub_sum(int arr[],int n,int sum){
    unordered_map<int,int>cement;
    // int pre_sum=0;
    // for(int i=0;i<n;i++){
    //     pre_sum=pre_sum+arr[i];
    //     cement.insert({pre_sum,i});
    // }
    cement.insert({7,2});
    cement.insert({7,3});

}
int main(){
    int arr[]={3,1,0,1,8,2,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=5;
    int flag=longest_subarray_sum(arr,n,sum);
    cout<<flag<<endl;
    return 0;
}