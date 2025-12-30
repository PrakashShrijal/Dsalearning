
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> dp((1 << 16), INT_MAX);
vector<ll> sums((1 << 16), 0);

ll calc(vector<vector<ll>> &compat, int mask)
{
    ll ans = 0;
    for (int i = 0; i < 16; i++)
    {
        for (int j = i + 1; j < 16; j++)
        {
            if (((mask & (1 << i)) != 0) && ((mask & (1 << j)) != 0))
            {
                ans += compat[i][j];
            }
        }
    }
    return ans;
}

void precompute(vector<vector<ll>> &compat, int n)
{
    for (int mask = 1; mask <= ((1 << n) - 1); mask++)
    {
        sums[mask] = calc(compat, mask);
    }
}
ll f(vector<vector<ll>> &compat, int mask)
{
    if (mask == 0)
        return 0;
    if (dp[mask] != INT_MAX)
        return dp[mask];
    ll ans = 0;
    for (int g = mask; g != 0; g = ((g - 1) & mask))  // important
    {
        ans = max(ans, sums[g] + f(compat, (mask^g)));
    }
    return dp[mask] = ans;
}
int main()
{
    int n;
    cin >> n;
    vector<vector < ll> > compat(n, vector<ll>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> compat[i][j];
        }
    }

    precompute(compat, n);
    cout << f(compat, ((1 << n) - 1));

    return 0;
/*
4
0 1000000000 1000000000 1000000000
1000000000 0 1000000000 1000000000
1000000000 1000000000 0 -1
1000000000 1000000000 -1 0
4999999999
PS C:\Users\Prakash Shrijal\OneDrive\Desktop\code\c++\Bit-Manupulation> cd "c:\Users\Prakash Shrijal\OneDrive\Desktop\code\c++\Bit-Manupulation\" ; if ($?) { g++ u-grouping.cpp -o u-grouping } ; if ($?) { .\u-grouping }
16
0 5 -4 -5 -8 -4 7 2 -4 0 7 0 2 -3 7 7
5 0 8 -9 3 5 2 -7 2 -7 0 -1 -4 1 -1 9
-4 8 0 -9 8 9 3 1 4 9 6 6 -6 1 8 9
-5 -9 -9 0 -7 6 4 -1 9 -3 -5 0 1 2 -4 1
-8 3 8 -7 0 -5 -9 9 1 -9 -6 -3 -8 3 4 3
-4 5 9 6 -5 0 -6 1 -2 2 0 -5 -2 3 1 2
7 2 3 4 -9 -6 0 -2 -2 -9 -3 9 -2 9 2 -5
2 -7 1 -1 9 1 -2 0 -6 0 -6 6 4 -1 -7 8
-4 2 4 9 1 -2 -2 -6 0 8 -6 -2 -4 8 7 7
0 -7 9 -3 -9 2 -9 0 8 0 0 1 -3 3 -6 -6
7 0 6 -5 -6 0 -3 -6 -6 0 0 5 7 -1 -5 3
0 -1 6 0 -3 -5 9 6 -2 1 5 0 -2 7 -8 0
2 -4 -6 1 -8 -2 -2 4 -4 -3 7 -2 0 -9 7 1
-3 1 1 2 3 3 9 -1 8 3 -1 7 -9 0 -6 -8
7 -1 8 -4 4 1 2 -7 7 -6 -5 -8 7 -6 0 -9
7 9 9 1 3 2 -5 8 7 -6 3 0 1 -8 -9 0
132
*/



}