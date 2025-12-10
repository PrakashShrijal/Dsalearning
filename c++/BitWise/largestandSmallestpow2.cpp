//Q1. Given an integer n, find the largest and smallest power of two that is set in that integer.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter the Number :";
    cin>>n;
    int temp = n;
    int low2pow = 0;
    while (true)
    {
        if((temp & 1) == 1) break;
        temp = temp>>1;
        low2pow++;
    }
    int q = n;
    int i = 1;
    while (i <= 16)
    {
        q = q | q>> i;
        i = 2 *i;

    }
    int hig2pow = ((q+1)>>1);
    int hi2 = 1;
    int p = n;
    while (p>0)
    {
         hi2++;
        p = p&(p-1);
       

    }
    
    cout<<"The lowest power : "<<low2pow<<endl;
    cout<<"The highest power : "<<hig2pow<<endl;
    cout<<"The highest power : "<<hi2<<endl;

    
return 0;
}