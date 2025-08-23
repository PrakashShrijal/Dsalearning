#include<bits/stdc++.h>
using namespace std;
int setCountBit(int x){
  int count = 0;
  while (x> 0)
  {
    count++;
    x = (x&(x-1)); // bit wise remove one set bit in a iteration....
  }
  return count;
  
}
int main()
{
    // Builtin function to calculate the 1's in the decimal number...
    int x;
    cout<<"Enter the Number :";
    cin>>x;
  cout<<  __builtin_popcount(x)<<endl;
  cout<<setCountBit(x);
return 0;
}