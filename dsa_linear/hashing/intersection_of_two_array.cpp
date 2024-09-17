#include<iostream>
#include<unordered_set>
using namespace std;

int brute_intersect(int a[],int b[],int m,int n){
    //time:o(m*(m+n)) aux:o(1)
    int res=0;
    for(int i=0;i<m;i++){
        bool flag=false;
        for(int j=0;j<i;j++)//if i=0,j<i,i.e. j<0 yeh sirf ek condition h and as j=0 and j!<0 so this loop will noy be executed for j=0
        {
            if(a[i]==a[j]) {
                flag=true;
                break;
        }
        }
        if(flag==true) continue;//skipping reapeted element in 'a' array
        for(int j=0;j<n;j++){
            if(a[i]==b[j]) {
                res++;
                break;//skipping repeated element in b array
        }
    }
}return res;
}

int hash_intersect(int a[],int b[],int m,int n){
    //time:o(m+n),aux:o(m)
    int res=0;
    unordered_set<int> wall(a,a+m);//creating an unordered set wall with all elements of 'a' array but no element of 'a' array will be repeated in wall
    //wall: 10,15,80,30,5
    for(int i=0;i<n;i++){
        if(wall.find(b[i])!=wall.end()){//if wall has element of b array
            res++;
            wall.erase(b[i]);//so that agar b main koi element repeat ho toh voh set main match mille hi na and res badhe na   
        }
    }
    return res;
}

int brute_union(int a[],int b[],int m,int n){
    int res=0;
    int arr[m+n];
    for(int i=0;i<m+n;i++){
        arr[i]=a[i];
        if(i>=m){
           arr[i]=b[i-m]; 
        }
    }
    for(int i=0;i<m+n;i++){
        //10,15,80,15,30,30,5,30,15,30,80
        bool flag=false;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }
        }if(flag==false) res++;
        }return res;
    }
    

int hash_union1(int a[],int b[],int m,int n){
    unordered_set<int> brick(a,a+m);
    int res=brick.size();
    for(int i=0;i<n;i++){
        if(brick.find(b[i])!=brick.end()){
            continue;
        }res++;
    }
    return res;

}
int hash_union2(int a[],int b[],int m,int n){
    //time:o(m+n) space:o(m+n)
    unordered_set<int>brick2;
    for(int i=0;i<m;i++) 
      brick2.insert(a[i]);
    for(int j=0;j<n;j++)
      brick2.insert(b[j]);
    int res=brick2.size();
    return res;
}
bool brute_sum_pair(int c[],int o,int x){
    for(int i=0;i<o-1;i++){
        for(int j=i+1;j<o;j++){
            if(c[i]+c[j]==x) {
                cout<<c[i]<<" "<<c[j]<<endl;
                return true;
        }
    }
}return false;
}

bool hash_sum_pair(int c[],int o,int x){
    unordered_set<int> wall;
    for(int i=0;i<o;i++){
        if(wall.find(x-c[i])!=wall.end()){//for i=0 nothing will be present so go to else part and then c[i] will be inserted in wall and then again we check for sum-c[i] if there then it is a pair element otherwise that element is inserted to see if that make a pair with any other element
            return true;
        }else wall.insert(c[i]);//to insert element in wall
    }return false;
}
int main(){
    int a[]={10,15,80,15,30,30,5};
    int b[]={30,15,30,80};
    int c[]={3,2,8,15,-8};
    int o=sizeof(c)/sizeof(c[0]);
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    int x=0;
    int count=hash_union2(a,b,m,n);
    bool res=brute_sum_pair(c,o,x);
    cout<<count<<endl;
    return 0;
}
