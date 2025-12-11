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
    int  highestpower = 0;
  
    while (hig2pow > 0)
    {
        hig2pow = hig2pow >> 1;
        highestpower++;
        
    }
    
 
    
    cout<<"The lowest power : "<<low2pow<<endl;
    cout<<"The highest power : "<<highestpower-1<<endl;
    
    
    
return 0;
}