// leetcode 209
#include<bits/stdc++.h>
using namespace std;
int minWindow(int arr[], int n, int target){
    int sum = 0;
    int minLen = INT_MAX;
    int j = 0;
    int  i = 0;
    int len;

    while (j<n)
    {
        sum += arr[j];
        while (sum>= target)
        {
            len = j-i+1;
            minLen = min(len, minLen);
            sum -= arr[i];
            i++;
        }
        j++;
    }
    if(minLen == INT_MAX) return 0; // Edge case
    return minLen;
    
}
int main()
{
    int arr[] ={2,3,1,2,4,3};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int target ;
    cout<<"Enter the target :";
    cin>>target;
    int result = minWindow(arr,n, target);
    if(result == 0) cout<<"Length is not available!";
    else 
    cout<<result;

    /*“The algorithm runs in O(n) time because both
     pointers move forward monotonically and each element is added 
    and removed from the window at most once.
     This is optimal since every element must be examined at least once.”*/
return 0;
}