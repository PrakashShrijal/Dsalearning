#include<iostream>
#include<vector>
using namespace std;
int lowerBound(vector<int> &arr,int target){ // first index greater than equal to target.
    /*
    * time : O(logn)
    *space : O(1)
    */ 
   int lo = 0;
   int hi = arr.size()-1;
   int ans = -1;
   while (lo <= hi)
   {
    int mid = lo + (hi - lo)/ 2;
    if(arr[mid] >=target){
        ans = mid;
        hi = mid -1;
    }else{
        lo = mid + 1;
    }
    
   }
   return ans;

}

int upperBound(vector<int> &arr,int target){ // first index greater than target.
   int lo = 0;
   int hi = arr.size()-1;
   int ans = -1;
   while (lo <= hi)
   {
    int mid = lo + (hi - lo)/ 2;
    if(arr[mid] >target){
        ans = mid;
        hi = mid -1;// discard right
    }else{
        lo = mid + 1;
    }
    
   }
   return ans;

}

int main()
{
   vector<int>arr;
    int n;
    cout<<"enter the no of elements :";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    
    int target;
    cout<<"enter the target :";
    cin>>target;
    int  lb = lowerBound(arr,target);
    vector<int> result;
    if (arr[lb] != target)
    {
        result.push_back(-1);
        result.push_back(-1);
    }else{
        int up = upperBound(arr,target);
        result.push_back(lb);
        result.push_back(up - 1);
        
    }
    cout<<result[0]<<"    "<<result[1]<<endl;
    


return 0;
}