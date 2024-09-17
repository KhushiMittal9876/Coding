#include<bits/stdc++.h>
using namespace std;
void freq(string str,int n){
    int arr[26]={0};
    for(int i=0;i<n;i++){
        arr[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if((arr[i])>0){
            cout<<char(i+'a')<<" "<<arr[i]<<endl;
        }   
    }
}
void reverse_string1(string& str, int n){
//throu for loop and swapping
    for(int i=0;i<n/2;i++){
        swap(str[i],str[n-1-i]);
    }
}
void reverse_string2(string& str,int n){
// thro while loop and two pointer approach and swapping
    int start=0;
    int end=n-1;
    while(start<=(n/2)){
        swap(str[start],str[end]);
        start++;
        end--;
    }
}
void reverse_string3(string str,int n){
//simple for loop and usinf last to first approach
    for(int i=n-1;i>=0;i--){
        cout<<str[i]<<" ";
    }
} 
void reverse_string4(string& str,int n){
//throu inbuilt reverse function
    reverse(str.begin(),str.end());
}
bool is_palindrome1(string str,int n){
    string rev=str;
    reverse(rev.begin(),rev.end());
    return (rev==str);
}
bool is_palindrome2(string str,int n){
    int start=0;
    int end=n-1;
    while(start<end){
        if(str[start]!=str[end]) return false;
        else {
            start++;
            end--;
        }

    }return true;
}
bool subsequence(string s1,string s2,int n1,int n2){
    int start1=0;
    int start2=0;
    if(n1<n2)return false;
    while(start1<n1){
        if(s1[start1]==s2[start2]){
            start1++;
            start2++;
        }else start1++;
        if(start2==n2) return true;
        
    }return false;
}
bool anagram1(string s1,string s2,int n1,int n2){
    //time: n(logn)
    if(n1!=n2) return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return (s1==s2);
}
const int chAr=256;//to include all element whether small alphabet or capital letter alphabet
bool anagram2(string s1,string s2,int n1,int n2){
    int count[chAr]={0};//creates a integer array of 26 size with each of its element as zero
    if(n1!=n2) return false;
    for(int i=0;i<n1;i++){
        count[s1[i]]++;//increase freq of each element of s1 in count array,we check directly by ascii code of s1[i]
        count[s2[i]]--;//decrease freq of each element of s2 in count array,we check directly by ascii code of s2[i]
    }//so actual count all element must be 0 for an anagram
    for(int i=0;i<chAr;i++){
        if(count[i]!=0) return false;
    }return true;
}
int naive_left_repeat_element(string str,int n){
    int count=-1;
    for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
           if(str[i]==str[j]){
               count=i;
               return count;
           }

       } 
    }return count;
} 
int left_repeat_element2(string str,int n){
    //time: o(n) with two traversal
    int lift[chAr]={0};
    for(int i=0;i<n;i++){
        lift[str[i]]++;//increasing frequency of occuring elements
    }
    for(int i=0;i<n;i++){
        if(lift[str[i]]>1) return i;//retruning i as it i goes from 0 to n-1 so first i which would be returned will be leftmost one and repeating too
    }return -1;//when we don't get any
}
int left_repeat_element3(string str,int n){

} 
int left_nonrepeat_element(string str,int n){
    int arr[chAr]={0};
    for(int i=0;i<n;i++){
        arr[str[i]]++;
    }
    for(int i=0;i<n;i++){
        if(arr[str[i]]==1) return i;
    }return -1; 
}
int left_nonrepeat_element2(string str,int n){
    for(int i=0;i<n-1;i++){
        bool flag=false;
        for(int j=i+1;j<n;j++){
            if(str[i]==str[j]) {
                flag=true;
                break;
        }
    }if(flag==false) return i;
}return -1;
} 
int left_nonrepeat_element3(string str,int n){
    int arr[chAr]=
}
int main(){
    string str="khushi";
    string s1="silent";
    string s2="listek";
    int n1=s1.length();
    int n2=s2.length();
    int n=str.length();
    // freq(str,n);
    // bool flag=anagram2(s1,s2,n1,n2);
    // cout<<flag;
    cout<<s1.compare(s2);
   return 0;
    // int a_int=100;
    // char wall='a';
    // a_int=wall;
    // // or line 56,57,58 says => int a_int='a';
    //   cout<<char(a_int)<<endl;//prints char whose ascii value is 100
    //   cout<<int(wall);//prints ascii value of a
     
}