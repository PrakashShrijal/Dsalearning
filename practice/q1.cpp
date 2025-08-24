#include<bits/stdc++.h>
using namespace std;
void binarySearch(int arr[], int n, int target){
    int lo = 0;
    int hi = n-1;
    int mid = lo + (hi - lo)/2;
    while (lo <= hi)
    {
        int mid = (lo + hi ) /2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            lo = mid+1;

        }else{
            hi = mid+1;
        }
    }
    return -1;
    
    
}
int main()
{
return 0;
}