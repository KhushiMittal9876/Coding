#include<iostream>
#include<string>
using namespace std;

void flipMyWord(string &s)
{
    char a ;
    int r = s.length()-1;
    int l = 0;
    while(l<r)
    {
        a = s[l];
        s[l]=s[r];
        s[r]=a;
        l++;
        r--;
    }
}

int main()
{
    string s;
    cin >> s;
    flipMyWord(s);
    cout << s;
    return 0;
}