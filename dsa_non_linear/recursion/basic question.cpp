#include<iostream>
using namespace std;
void printNto1(int N){
        cout<<N<<" ";
        if(N==1) return;
        printNto1(N-1);
};
int main(){
    cout<<"To print number N to 1 : "<<endl;
    cout<<"Enter N: ";
    int N;
    cin>>N;
    printNto1(N);
    return 0;
}