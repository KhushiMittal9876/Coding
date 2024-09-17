//program to return a number by a function who return a address of variable whiach copies the value of the number:)
// #include<iostream>
// using namespace std;
// int* address(int* p){// p=&a this function is of pointer type i.e it returns address of a variable
//      int me=*p;// me=5
//      int *you=&me; //you pointer store address of me
//     return you;//we return a pointer i.e. address of me ,,, to return address of variable we have to make a function as a pointer type
// }
// int main(){
//     int a=5;
//     address(&a);
//     cout<<*address(&a)<<endl;//printing value at you pointer i.e 
//     return 0;
    
// }


//program to swap two number by using void function (reference) and then to reverse again using void function (pointers)
#include<iostream>
using namespace std;
void swap(int &p,int &q){//using refernce we make p=a and q=b
    int temp=p;//temp=p=a
    p=q;//p=q=b
    q=temp;//q=temp=a
}//so p=b,q=a   so a=b,b=a so we had swapped successfully becoz p and q are copy of a and b any change in p and q will change a and b also 

void swapswap(int* x,int* y){//x=&a,y=&b  x is a pointer of int type stores address of a i.e x is address of a 
    int me=*x;//me a integer stores value at x i.e value at address of x i.e value of a i.e me=a
    *x=*y;//value at x is made equal to value at y  i.e a=b
    *y=me;//value of y is made equal to value at me i.e. b=a
}//swap successfull
int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);//use to swap a,b
    cout<<a<<" "<<b<<endl;
    cout<<"Now lets get the number back :) "<<endl;
    swapswap(&a,&b);//use to again swap a,b
    cout<<a<<" "<<b<<endl;
    return 0;
}


