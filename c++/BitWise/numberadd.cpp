//Given an integer n, find the minimum number to be added to change it to a power of two. (Try using bit
//operations to solve)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
     int m = n;
     int i = 1;
    while (i<=16)
    {
        m |= ( m >> i);
        i = i*2;
    }
    int res = m^n;
    if (n > 0 && (n & (n - 1)) == 0)
    cout<<"The number to be added to make it pow2 :"<<0;
    else cout<<"The number to be added to make it pow2 :"<<res+1;
  
return 0;
}