//Check if a number is a power of two or not using bitwise operations.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    if (n > 0 && (n & (n - 1)) == 0)
    cout<<"Number is in power of 2";
    else cout<<"Number is  not in power of 2";
return 0;
}