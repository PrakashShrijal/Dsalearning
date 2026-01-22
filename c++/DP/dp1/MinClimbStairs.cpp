#include<bits/stdc++.h>
using namespace std;

int helper(vector<int>&cost, int i, vector<int> & dp){// top-down approach
    if(i == 0 || i == 1) return cost[i];
    if(dp[i] != -1) return dp[i];
    return cost[i] + min(helper(cost, i-1, dp), helper(cost, i-2 , dp));

}

int minCostClimblingStairs(vector<int> &cost){
    int n = cost.size();
    vector<int> dp(n,-1);
    return min(helper(cost, n-1, dp), helper(cost, n-2, dp));
}


// Tabulation Method 
int minCostClimblingStairs1(vector<int> &cost){
    int n = cost.size();
    for (int i = 2; i < n; i++)
    {
        cost[i] += min(cost[i-1], cost[i-2]);
    }
    return min(cost[n-1], cost[n-2]);
}


int main()
{

return 0;
}