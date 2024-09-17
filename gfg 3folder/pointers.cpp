#include<iostream>
using namespace std;
int main(){
    int x=10;//my variable
    int *p=&x;//p is a pointer which is storing address of x
    cout<<"Address of x : "<<p<<endl;
    cout<<"Address of x : "<<&x<<endl;
    cout<<"Value of x :"<<x<<endl;
    cout<<"Value of x :"<<*p<<endl;
    x=x+5;
    cout<<"Value of new x :"<<*p<<endl;//value is changed becoz p pointer jis address ki value bata rha h uski value change hui h
    *p=*p+5;//changing value of x using pointer
    cout<<"Value of new new x :"<<*p<<endl;
    cout<<"Address of p+1: "<<p+1<<endl;//last digit of address of x is increased by 4 becoz we add 1 in address so as pointer is of int type storing value 4 byte is added .
    int **d=&p;// d is a double pointer storing address of pointer p 
    cout<<"address of pointer p/ or value at d: "<<d<<endl;
    cout<<"address of pointer p: "<<&p<<endl;
    cout<<"Value at *d: "<<*d<<endl;//address of x ,becoz d main address of p h and value at d is value at address of p that is address of x 
    cout<<"Value at **d: "<<**d<<endl;//value of x
    //x=20;
    //p= store address of x
    //*p=value at p =value of x
    //d=store address of p
    //*d=value at d =address of x
    //**d=value at *d=value of x
    **d=**d+5;//value of x is changed throu double pointer 
    cout<<"Value of x : "<<x<<endl;  
    

    return 0;
}