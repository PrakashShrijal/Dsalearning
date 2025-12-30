//longest sub array after deleting 0 from array, k ==1 
#include<bits/stdc++.h>
using namespace std;
int longestOnesSubarray(int arr[], int n, int k){
    int flip =0, i =0, j=0;
    int maxLen = INT_MIN; 
    int len;
    while(j<n)
    {
        if(arr[j] == 1) j++;
        else{
            if(flip < k){
                flip++;
                j++;
            }
            else{
                len= j-i;
                maxLen = max(maxLen,len);
                while (arr[i] == 1) i++;
                i++;
                j++;
            }
        }
    }
    len= j-i;
    maxLen = max(maxLen,len);
    return maxLen;
}
int main()
{
    int arr[] = {1,0,1,1,0,0,1,1,1,1,0};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int k = 1;
    int  result = longestOnesSubarray(arr,n,k);
    cout<<result;

return 0;
}