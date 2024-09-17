#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;//5   7 6 5 4 8 
    vector<int> rev(n);//declaring size of vector
    for(int i=0;i<n;i++){
        cin>>rev[i];
    }     
    for(auto it=rev.rbegin();it!=rev.rend();it++){//rbegin() points the address of last element of vector and rend()points towards the address of element before first element of vector  and it++ is okay as we move in reverse direction to traverse the vectori.e. from rbegin() to rend()
        cout<<(*it)<<" ";//dereferncing the iterator(it)
    }
    return 0;
}