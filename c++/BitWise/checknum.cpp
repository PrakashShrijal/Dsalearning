// Q4. Given an array consisting of integers a and b where a is occurring even number of times. Find the value of a
// and b. (Try using bit operations to solve)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3, 3, 3, 3, 3, 5, 3, 5, 5, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int b = 0;
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        b ^= arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(b != arr[i])
        a = arr[i];
    }
    
cout<<"The two number is  A :"<<a<<"     B :"<<b<<endl;
    return 0;
}