#include<bits/stdc++.h>
using namespace std;
int max_power_of(int n){
    n = n | (n >> 1);
    n = n | (n >> 2);
    n = n | (n >> 4);
    n = n | (n >> 8);
    n = n | (n >> 16);
    return (n+1)>>1;  // (n+1)/2; 
}
int maxpower(int n){ // using Brian  Kerntglun's algorith.
    int temp;
    while (n!=0)
    {
        temp = n;
        n = n & (n-1);
    }
    return temp;
}
int main()
{
    int x;
    cout<<"Enter the Number :";
    cin>>x;
  cout<<  maxpower(x)<<endl; 
  cout<<max_power_of(x);
return 0;
} 