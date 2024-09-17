#include<bits/stdc++.h>
using namespace std;
void naive_pattern_search1(string text,string pattern,int t,int p){
    //time=O(t-p+1)*p
    for(int i=0;i<=t-p;i++){
        int k=0,count=0;
        for(int j=i;j<p+i;j++){
            if(text[j]!=pattern[k]) {
                break;
            }
            if(text[j]==pattern[k]){
                count++;
                k++;
            }
        }if(count==p) cout<<i<<" ";

}}
void naive_pattern_search2(string text,string pattern,int t,int p){
    
    //better approach 
    for(int i=0;i<=t-p;i++){
        int j;
        for(j=0;j<p;j++){
            if(pattern[j]!=text[i+j]) break;

        }if(j==p) cout<<i<<" ";
    }

}

void naive_improved_pattern_search3(string text,string pattern,int t,int p){
    //when we know the elements in pattern are all distinct
    for(int i=0;i<=t-p;){
        int j;
        for(j=0;j<p;j++)
        {
            if(pattern[j]!=text[i+j]) break;
        }
        if(j==p) cout<<i<<" ";
        if(j==0) i++;
        else i=(i+j);//as the checked element are disctint so they will not be checked again so skipp them simply
    // text=abceabefabcd
    // pat= abcd
    
    }
}

// s=abc def ghi                 rs=ihg fed cba
// rw=cba fed ihg
// r_rw=ghi def abc
// s1=abc                   i=1
// s2=reverse(s1)      
// s2=cba
// rw main add s2 rw=cba
// s1=def                    i=2
// s2=reverse(s1)
// s2=fed
// rw=cba fed 
// s1=ghi                   i=3
// s2=reverse(s1)
// s2=ihg
// rw=cba fed ihg
// r_rw (reverse rw)=ghi def abc
void reverse_word(string s){
    int n=s.length();
    string s1="";
    string rw="";
    int k=n-1;//stores index of space
    for(int i=0;i<n;i++){
        int j;
        for(j=i;j<n;j++){
            if(s[j]==' ') {
                k=j;
                break;
            }
            else{
                s1=s1+s[j];
            }
            
        }reverse(s1.begin(),s1.end());
        rw=rw+s1;
        s1="";
        if(j!=(n)){
            rw=rw+" ";
            i=k;
        }else break;
    
    
}reverse(rw.begin(),rw.end());
cout<<rw<<endl;
}
void reverse(string s,int low,int high){
    while(low<=high){
        swap(s[low],s[high]);
        low++;
        high--;
    }
}
//* nice optimised method
void reverse_word(string s){
    int start=0;
    int n=s.length();
    for(int end=0;end<n;end++){
        if(s[end]==' '){
            reverse(s,start,end-1);
            start=end+1;
        }
    }reverse(s,start,end-1);
    reverse(s,0,n-1);
    return s;
}
int main(){//0+2=2 2=2-0
//               01234567
    // string text="aaaaa";
    // string pattern="aaa";
    // //        012345678910
    
    // int t=text.length();
    // int p=pattern.length();
    // naive_pattern_search1(text,pattern,t,p);
    string s="abc def ghi";
    reverse_word(s);
    return 0;
}