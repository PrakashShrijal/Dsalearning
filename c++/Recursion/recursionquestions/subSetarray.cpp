#include<bits/stdc++.h>
using namespace std;
void  printSubSet(int arr[],int n,int idx,vector<int> ans){
    if(idx == n){
    //    for (int i = 0; i < ans.size(); i++)
    //    {
    //     cout<<ans[i]<<" ";
    //    }
       for(int ele : ans){
        cout<<ele<<" ";
       }
        cout<<endl;
        return;
    }
     printSubSet(arr,n,idx+1,ans);
     ans.push_back(arr[idx]);
      printSubSet(arr,n,idx+1,ans);
}
int main()
{
    int arr[] ={1,2,3};
    vector<int> v;
    int n = sizeof(arr)/sizeof(arr[0]);
    printSubSet(arr,n,0,v);
return 0;
}