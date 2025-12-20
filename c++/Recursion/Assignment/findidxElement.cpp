//Print index of a given element in an array. If not present, print -1.

#include<bits/stdc++.h>
using namespace std;
int findidx(int arr[], int n, int lo, int hi, int target){ // when elemets are in ascending order, binary search
    int mid = lo + (hi- lo)/2;
    while (lo<= hi)
    {
        if(arr[mid] == target)
        return mid;

        if(arr[mid] > target)
        return findidx(arr,n,lo,mid-1,target);
        else
        return findidx(arr, n, mid+1, hi, target);
    }

    return -1;
}


int findidx2(int arr[], int n, int target, int idx){// basically linear serch in array
    if(idx >=  n)
    return -1;
    if(arr[idx] == target) return idx;
    return findidx2(arr,n,target, idx +1);
}
int main()
{
    int n;
    cout<<"Enter the no of elements in the array:";
    cin>> n;
    int arr[n];
    cout<<"Enter the elements in the array:";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target elemnet:";
    cin>>target;
    //int result = findidx(arr, n, 0, n-1, target);
    int result = findidx2(arr,n, target,0);
    if (result == -1 )
    {
        cout<<"Element is not found!";
    }
    else cout<<"Element is idx "<<result;
    
    
return 0;
}