#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 0,1,5,7,8,9,10
     vector<int> nums1={1,5,8,9};
     vector<int> nums2={0,7,10};
     int n1=nums1.size();
     int n2=nums2.size();
     int p1=0,p2=0;
//    for(int i=0;i<m+n;i++){
//             if(nums1[p1]>=nums2[p2]){
//                 nums1.insert(nums1.begin()+i,nums2[p2]);
//                 p2++;
//             }else{
//                 p1++;
//             }
//         }
auto it=nums1.begin();
while(it!=nums1.end() and p2<n2){
     if(nums1[p1]>=nums2[p2]){
        nums1.insert(nums1.begin()+p1,nums2[p2]);
                p2++;
                it++;
    }p1++;
    it++;
}
if(it==nums1.end()){
    while(p2<n2){
        nums1.insert(nums1.begin()+p1,nums2[p2]);
        p2++;
    }
}
       for(auto i: nums1){
            cout<<nums1[i]<<" ";
       }
    return 0;
}