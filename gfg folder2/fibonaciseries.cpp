#include<iostream>//1,1,2,3,5,8...............
using namespace std;
int fib(int){
    int a,b;
    int c=a+b;
    a=b;
    b=c;
    return c;

}
int main(){
    cout<<fib()<<endl;
}