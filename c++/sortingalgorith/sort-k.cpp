/**
 *Given an array,arr[] containig 'n' integer the task is find an integer (say k)
 *such that after replacing each and every index of the array by |ai-k| integer exists that satisfy the above 
 * condition then return -1;
 * find the range  of the k.
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {19,12,23,8,16};
    int n = 5;
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int kmin = INT_MIN;
    int kmax = INT_MAX;
    for (int i = 0; i < n-1; i++) 
    {   int mid =  (arr[i] + arr[i+1])/2;
        if((arr[i+1] - arr[i])>0) kmin = max(kmin,mid);
            else kmax = min(kmax,mid);
    }

      if (kmin <= kmax) {
        cout << "Valid range of k: [" << kmin << ", " << kmax << "]" << endl;
    } else {
        cout << -1 << endl;
    }
 
     
return 0;
}

