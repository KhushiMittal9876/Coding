#include<iostream>
using namespace std;
void printNto1(int n){
    if(n==0) return ;
    else
    cout<<n<<endl; 
    return printNto1(n-1);
    //auxilary space(theta (n)) and time complexity (theta (n))
}

void print1toN(int n){
    if(n==0) return;
    else
    print1toN(n-1);
    cout<<n<<endl;
    //time complexity is (theta (n)) and auxilary space is big o(n)
}

int fact(int n){
    if(n==0 || n==1) return 1;
    return n*fact(n-1);
}

int digit(int n){
    static int c=0;
    if(n<10) return c+1;
    else {
        c++;
        digit(n/10);
    }
}

int sumdigit(int n){
    if(n<10) return n;
    else{
        return (n%10)+sumdigit(n/10);
    }
}
int sum(int n){
    if(n==0 || n==1) return 1;
    else{
        return n+sum(n-1);
    }
}

bool check_palindrome();
int main(){
    cout<<"printing elements from n to 1 :" <<endl;
    printNto1(5);
    cout<<endl;
    cout<<"printing elements from 1 to n :" <<endl;
    print1toN(5);
    int factorial=fact(5);
    cout<<"factorial of a number is:"<<factorial<<endl;
    int number;
    cout<<"enter the number for digit calculation: "<<endl;
    cin>>number;
    cout<<digit(number)<<endl;
    cout<<sumdigit(number)<<endl;
    return 0;
}