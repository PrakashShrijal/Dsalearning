#include <bits/stdc++.h>
using namespace std;

vector<int> dp; 
// recursive solution
int f(vector<int> arr, int i)
{
    if (i == arr.size() - 1)
        return arr[i]; // single house
    if (i == arr.size() - 2)
        return max(arr[i], arr[i + 1]); // 2 house
    return max(arr[i] + f(arr, i + 2), 0 + f(arr, i + 1));
}

// topdown Dp
int ftd(vector<int> arr, int i)
{
    if (i == arr.size() - 1)
        return arr[i]; // single house
    if (i == arr.size() - 2)
        return max(arr[i], arr[i + 1]); // 2 house
    if(dp[i] != -1) return dp[i];
     return dp[i] = max(arr[i] + f(arr, i + 2), 0 + f(arr, i + 1));
}

// bottomup DP
int fbu(vector<int> &arr){
    int n = arr.size();
    if(n==1) return arr[0];
    dp.clear();
    dp.resize(n);

    dp[n-1] = arr[n-1];
    dp[n-2] = max(arr[n-1], arr[n-2]);

    for(int i = n-3; i >= 0; i--){  // order of the sub solution
        dp[i] = max(arr[i] + dp[i+2], 0 + dp[i+1]);
    }
    return dp[0];
}

int rob(vector<int> &nums)
{
    // dp.clear();
    // dp.resize(105,-1);
    //return ftd(nums,0);
   // return f(nums, 0);
   return fbu(nums);
}

int main()
{
    vector<int> nums;
    nums.push_back(12);
    nums.push_back(14);
    nums.push_back(89);
    nums.push_back(17);
    nums.push_back(45);
    nums.push_back(32);
    nums.push_back(78);

    cout << rob(nums);
    return 0;
}