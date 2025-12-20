/*
Q4. Given an array of integers, print a sum triangle using recursion from it such that the first level has
all array elements. After that, at each level the number of elements is one less than the previous
level and elements at the level will be the sum of consecutive two elements in the previous level.
So, if sample input is [5, 4, 3, 2, 1], sample output will be:
[5, 4, 3, 2, 1]
[9, 7, 5, 3]
[16, 12, 8]
[28, 20]
[48]
*/
#include<bits/stdc++.h>
using namespace std;


int main()
{  //trying iterative method.
    int n;
    cout<<"Enter the no of elements in the array:";
    cin>> n;
    int arr[n];
    cout<<"Enter the elements in the array:";
  
    // taking input 
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // printing first row 
      for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
       for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            arr[j] += arr[j+1];
            cout<<arr[j]<<" "; 
        }
        cout<<endl;
    }
    /*This modifies arr in-place.

But the problem requires:

Each level to be formed from the previous level

Previous level should remain unchanged while printing
[5, 4, 3, 2, 1]
arr becomes → [9, 7, 5, 3, 1]
move q4A.cpp for better solution.
    */
return 0;
}