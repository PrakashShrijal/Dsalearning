/*
Given a m x n grid filled with non-negative numbers,
 find a path from top left to bottom right,
  which minimizes the sum of all numbers along its path.

Note: You can only move either down or right at any point in time.
*/
#include<bits/stdc++.h>
using namespace std;
class Solution { // recursive solution
    vector<vector<int>> arr;
    int n,m;
    int f(int i,int j){
        if(i == n-1 and j == m-1) return arr[n-1][m-1];
        if(i >= n or j >= m or i < 0 or j < 0) return INT_MAX;
        return arr[i][j] + min(f(i+1, j),f(i, j+1));
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        arr = grid;
        n = arr.size();
        m = arr[0].size();
        return f(0,0);
    }
};
int main()
{
return 0;
}