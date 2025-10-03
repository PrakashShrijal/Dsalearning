#include <bits/stdc++.h>
using namespace std;

//////////////////////////////////////////////////////
// 1. Top-Down DP with memoization
//////////////////////////////////////////////////////
int LCS_TopDown(string &X, string &Y, int i, int j, vector<vector<int>> &dp) {
    if (i == 0 || j == 0) return 0;

    if (dp[i][j] != -1) return dp[i][j];

    if (X[i-1] == Y[j-1])
        return dp[i][j] = 1 + LCS_TopDown(X, Y, i-1, j-1, dp);
    else
        return dp[i][j] = max(LCS_TopDown(X, Y, i-1, j, dp),
                              LCS_TopDown(X, Y, i, j-1, dp));
}

//////////////////////////////////////////////////////
// 2. Bottom-Up DP
//////////////////////////////////////////////////////
int LCS_BottomUp(string &X, string &Y, vector<vector<int>> &dp) {
    int m = X.size(), n = Y.size();
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (X[i-1] == Y[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[m][n];
}

//////////////////////////////////////////////////////
// 3. Traceback to find ONE LCS
//////////////////////////////////////////////////////
string getOneLCS(string &X, string &Y, vector<vector<int>> &dp) {
    int i = X.size(), j = Y.size();
    string lcs = "";
    while (i > 0 && j > 0) {
        if (X[i-1] == Y[j-1]) {
            lcs.push_back(X[i-1]);
            i--; j--;
        }
        else if (dp[i-1][j] >= dp[i][j-1])
            i--;
        else
            j--;
    }
    reverse(lcs.begin(), lcs.end());
    return lcs;
}

//////////////////////////////////////////////////////
// 4. Traceback to find ALL LCS
//////////////////////////////////////////////////////
set<string> getAllLCS(string &X, string &Y, int i, int j, vector<vector<int>> &dp) {
    set<string> result;

    if (i == 0 || j == 0) {
        result.insert("");
        return result;
    }

    if (X[i-1] == Y[j-1]) {
        set<string> temp = getAllLCS(X, Y, i-1, j-1, dp);
        for (auto &s : temp) result.insert(s + X[i-1]);
    } else {
        if (dp[i-1][j] >= dp[i][j-1]) {
            set<string> temp = getAllLCS(X, Y, i-1, j, dp);
            result.insert(temp.begin(), temp.end());
        }
        if (dp[i][j-1] >= dp[i-1][j]) {
            set<string> temp = getAllLCS(X, Y, i, j-1, dp);
            result.insert(temp.begin(), temp.end());
        }
    }
    return result;
}

//////////////////////////////////////////////////////
// Driver Code
//////////////////////////////////////////////////////
int main() {
    string X;
    string Y;
    cout<<"Enter the both String one by one :";
    cin>>X>>Y;
    int m = X.size(), n = Y.size();

    // Top-down
    vector<vector<int>> memo(m+1, vector<int>(n+1, -1));
    int len1 = LCS_TopDown(X, Y, m, n, memo);
    cout << "Top-Down LCS Length = " << len1 << endl;

    // Bottom-up
    vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
    int len2 = LCS_BottomUp(X, Y, dp);
    cout << "Bottom-Up LCS Length = " << len2 << endl;

    // Get one LCS
    string one = getOneLCS(X, Y, dp);
    cout << "One LCS = " << one << endl;

    // Get all LCS
    set<string> all = getAllLCS(X, Y, m, n, dp);
    cout << "All possible LCS: ";
    for (auto &s : all) cout << s << " ";
    cout << endl;

    return 0;
}
