// find the unique element in the array.
#include<bits/stdc++.h>
using namespace std;
int main()
{  // commutative property of the xor
  int arr[] = {2,4,8,6,2,8,4};
  int n = 7;
  int result = arr[0];
  for (int i = 1; i < n; i++)
  {
    result ^= arr[i];
  }
  cout<<"The  Unique Element in the array is :"<<result;
return 0;
}