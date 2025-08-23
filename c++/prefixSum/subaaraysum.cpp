#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr [] = {1,2,3,4,5,5,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 1; i < n; i++)
    {
        arr[i] += arr[i-1];
    }

    //finding sum of sub array to particular idx.
    int k,l;
    cout<<"Enter the index of subarray :";
    cin>>k>>l;
    cout<<"Sum of Subarray of array with given indices :"<<arr[l] - arr[k-1];
    
return 0;
}