/*
The "Mixtures" problem on Sphere Online Judge (SPOJ) is a classical programming

challenge that involves finding the minimum cost to mix a sequence of colored
 mixtures, where the cost of mixing two mixtures is determined by the product
  of their colors and the sum of their colors.
 The problem is often solved using dynamic programming,
  where the state represents the minimum cost to mix a subsequence of mixtures from index i to j.*/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll dp[105][105];
ll g(vector<int> &colors, int i, int j)
{
    ll result = 0;
    for (int m = i; m <= j; m++)
    {
        result = (result % 100 + colors[m] % 100) % 100;
    }
    return result;
}

ll f(vector<int> &colors, int i, int j)
{
    if (i == j)
        return dp[i][j] = 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    ll result = INT_MAX;
    for (int k = i; k <= j - 1; k++)
    {
        result = min(result, f(colors, i, k) + f(colors, k + 1, j) + g(colors, i, k) * g(colors, k + 1, j));
    }
    return dp[i][j] = result;
}

int fbu(vector<int> &colors)
{
    memset(dp, 0, sizeof dp);
    int n = colors.size();
    for (int len = 2; len <= n; len++)
    {
        for (int i = 0; i <= n - len; i++)
        { // setting the order
            int j = i + len - 1;
            ll result = INT_MAX;
            for (int k = i; k <= j - 1; k++)
            {
                result = min(result, dp[i][k] + dp[k + 1][j] + g(colors, i, k) * g(colors, k + 1, j));
            }
            dp[i][j] = result;
        }
    }
    return dp[0][n - 1];
}

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> colors;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            colors.push_back(x);
        }
        // memset(dp, -1, sizeof dp );
        //  cout<<f(colors, 0, colors.size() - 1)<<"\n";
        cout << fbu(colors) << "\n";

        colors.clear();
    }

    return 0;
}