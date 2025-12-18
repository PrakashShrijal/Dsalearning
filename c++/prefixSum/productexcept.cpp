// given in  array find the product of index except it's self
#include<bits/stdc++.h>
using namespace std;

vector<int> productArray(vector<int> arr){
    int n = arr.size();
    vector<int> pre(n);
    pre[0] = 1;
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i-1] * arr[i-1];
    }
       int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        pre[i] = pre[i] * suffix;
        suffix *= arr[i];
    }
    return pre;
    
}
int main()
{
    int n;
    cout<<"Enetr the nuber in the array :";
    cin>>n;
     vector<int> arr(n);
     for (int  i = 0; i < n; i++)
     {
        cin>>arr[i];
     }
     vector<int> result(n);
 
        result  = productArray(arr);
     for(int x : result){
        cout<<x<<" ";
     }
return 0;
}