//Given sorted array of non-negative distinct ineteger, find smallest missing non-negative element in it.
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int arr[9] = {0,1,2,4,5,9,15,18,21};
     int n = 9;
     for (int i = 0; i < n; i++)
     {
        if (arr[i] != i)
        {
    cout<<i<<"   T.C> is O(n)";
    break;
            
        }
        
     }
     // T.C = O(n), linear search 
    // now reduce it to O(logn) binary search.
     int lo = 0;
     int hi = n-1;
     int ans;
     while (lo <= hi)
     {
        int mid = lo + (hi - lo) / 2;
        if(arr[mid] == mid) lo = mid + 1;
        else{
            ans = mid;
            hi = mid - 1;
        }

     }
     cout<<"\n"<<ans<< "   T.C. is O(logn)"<<endl;



return 0;
}