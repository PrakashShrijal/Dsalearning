#include<bits/stdc++.h>
using namespace std;
int main()
{
     int x;
    cout<<"Enter the Number 1 :";
    cin>>x;
     int y;
    cout<<"Enter the Number 2 :";
    cin>>y;
    cout<<"Number of bits flipped :"<<__builtin_popcount(x^y);
return 0;
}