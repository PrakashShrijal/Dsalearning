// first occurance search using binary search.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;                      // check code....................................

int firstOccurance(vector<int> &v, int target){
    int lo = 0;
    int hi = v.size() -1;
    int mid = lo + (hi - lo)/2;
    int ans = -1;
    while (lo<= hi)
    {
        if (v[mid] == target)
        {
            ans  = mid;
        }else if (v[mid] > target)
        {
            hi = mid-1;
        }else{
            lo = mid+1;
        }
        
        
    }
    return ans;
}

int main()
{
    vector<int> v;
    int n;
    cout<<"Enter the number of element to be putted in array :";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    int target;
    cout<<"Enter the target element :";
    cin>>target;
   
    cout<<firstOccurance(v,target);
    

return 0;
}