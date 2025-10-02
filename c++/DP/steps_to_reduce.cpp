#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX

int f(int n){  // recursive solution
    if(n == 1) return 0;
    if(n == 2 or n == 3) return 1;
    return 1 + min({f(n-1), (n%2 == 0)? f(n/2) : inf,(n%3 == 0) ? f(n/3) : inf});
    // TC -> O(3^n)every call is making 3 call
    //  SC -> O(n)  in depth can go
}
// top down approach 
vector<int> dp;  // TC -> O(n)  SC -> O(n)
int ftd(int n){
    if(n==1) return 0;
    if(n==2 or n==3) return 1;
    if(dp[n] != -1) return dp[n];
   return dp[n] = 1 + min({ftd(n-1), (n%2 == 0)? ftd(n/2) : inf,(n%3 == 0) ? ftd(n/3) : inf});

} 

//bottom-up iterative DP
int fbp(int n ){
    //Time: O(n), Space : O(n) 
    dp.clear();
    dp.resize(n+1, -1);
    dp[1] = 0;
    dp[2] = dp[3] = 1;
    for (int i = 4; i <= n; i++)
    {
        dp[i] = 1 + min({dp[i-1], (i%2 == 0) ? dp[i/2] : inf, (i%3 == 0 ? dp[i/3] : inf)});
    }
    return dp[n];
    

}
int minSteps(int n) {
    const int INF = 1e9;
    vector<int> dp(n+1, INF);

    dp[1] = 0;
    if(n >= 2) dp[2] = 1;
    if(n >= 3) dp[3] = 1;

     for (int i = 4; i <= n; i++) {
        dp[i] = 1 + dp[i-1];  // always possible
        if (i % 2 == 0) dp[i] = min(dp[i], 1 + dp[i/2]);
        if (i % 3 == 0) dp[i] = min(dp[i], 1 + dp[i/3]);
    }

    return dp[n];
}

int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    dp.clear();
    dp.resize(1005,-1);
    cout<<f(n)<<" "<<ftd(n)<<" "<<fbp(n);

return 0;
}