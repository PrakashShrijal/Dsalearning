#include<bits/stdc++.h>  //39
using namespace std;
void combination(vector<int> v,int arr[],int n, int target,int idx){
    // n is the size of the arr.
    if(target == 0){
        for (int  i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target < 0) return;
    for (int  i = idx; i < n; i++)
    {
        v.push_back(arr[i]);
        combination(v,arr,n,target-arr[i],i);
        v.pop_back();
    }
    /* output but here we are getting repeated combination... 
    *  combination(v,arr,n,target-arr[i], idx); here we are using idx every time if we pass i then we 
    * are leaving the element before idx this will help in getting desired result.
    2 2 2 2 
    2 3 3 
    3 2 3 
    3 3 2 
    3 5 
    5 3 
    */
}
int main()
{
    int arr[] = {2,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    combination(v,arr,n,8,0);
return 0;
}