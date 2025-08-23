#include<iostream>
#include<string>
using namespace std;
int main()
{
    string p = "SuperMan";
    cout<<p<<endl;
    p[0] = 'c';  // we can update char in string in string array in C++, cannot happen  java.
    cout<<p;
return 0;
}