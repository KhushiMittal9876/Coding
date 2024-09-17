//func1 odd number or not,func2 multiple of 5 if both satisfies then print that number 
#include<iostream>
using namespace std;
bool multipleof5(int n){
    return (n%5==0);
}
bool isodd(int n){
    return(n%2!=0);
}
int main(){
    int t,n;
    cin>>t;
    while(t--){ 
        cout<<"Input a number : "<<endl;
        cin>>n;
        if(multipleof5(n) and isodd(n)) cout<<n<<endl;
        else cout<<"Get lost"<<endl;
    }
    return 0;
}
// to tell whether a number is odd prime or not

// #include <iostream>
// using namespace std;

// bool isPrime(int aa)
// {
//     int count = 0;
//     for (int i = 1; i <= aa; ++i)
//     {
//         if (aa % i == 0)
//             ++count;
//     }
//     return (count == 2);
// }

// bool isOddPrime(int a)
// {
//     return ( a%2 == 1 and isPrime(a) );
// }

// int main()
// {
//     if(isOddPrime(79))
//         cout << "Yes";
//     else
//         cout << "No";
//     return 0;
// }